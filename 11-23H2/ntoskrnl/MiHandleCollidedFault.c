/*
 * XREFs of MiHandleCollidedFault @ 0x1402EF020
 * Callers:
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIssueFlowThroughFault @ 0x1402EF180 (MiIssueFlowThroughFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402EF5A8 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402EF5F8 (MiAddLockedPageCharge.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiHandleCollidedFault(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  int v8; // ebp
  __int64 v9; // rax
  _DWORD *v10; // rbx
  __int64 result; // rax
  int v12; // r9d
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  unsigned __int64 v18; // rax
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    v14 = -1073741663;
LABEL_22:
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    *a6 = 0;
    return v14;
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 1) != 0 )
  {
    v18 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v18 == 5 && (*(_DWORD *)(v18 + 56) & 4) != 0 )
    {
      v14 = -1073741801;
      goto LABEL_22;
    }
  }
  if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
  {
    v14 = -1073740748;
    goto LABEL_22;
  }
  v10 = a6;
  result = MiIssueFlowThroughFault(a1, a2, a3, (unsigned int)*(_QWORD *)a4 - 32, a4, a5, (__int64)a6);
  if ( *v10 == 1 )
    return result;
  if ( *(__int64 *)(a4 + 40) < 0 )
    MiObtainProtoReference(a3, 1LL);
  v19 = 0;
  LOBYTE(v12) = 2;
  v14 = MiWaitForCollidedFaultComplete(v8, a4, a3, v12, (__int64)&v19);
  if ( !v19 )
  {
    if ( a3 )
    {
      MiLockNestedPageAtDpcInline(a3, v13, v15, v16);
      MiRemoveLockedPageChargeAndDecRef(a3);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v14 )
    {
      MiAddLockedPageCharge(a4, 3LL);
      v17 = *(_BYTE *)(a4 + 34);
      *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_BYTE *)(a4 + 34) = v17 & 0xF8 | 6;
      MiRemoveLockedPageChargeAndDecRef(a4);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
  }
  return v14;
}
