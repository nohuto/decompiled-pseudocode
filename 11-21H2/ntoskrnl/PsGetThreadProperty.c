/*
 * XREFs of PsGetThreadProperty @ 0x140223C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_140223E40 @ 0x140223E40 (sub_140223E40.c)
 *     PsGetJobProperty @ 0x140223EC0 (PsGetJobProperty.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  void *v3; // rbp
  char v4; // r14
  __int64 v6; // rcx
  ULONG_PTR v7; // r9
  _QWORD *v8; // rsi
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // r15
  struct _KPRCB *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  __int64 v26; // r8
  int v27; // eax
  bool v28; // zf
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  v4 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 || (int)sub_140223E40(Thread, Key, Flags, Key) < 0 )
    return 0LL;
  v8 = (_QWORD *)(v6 + 1560);
  v9 = (volatile signed __int32 *)(v6 + 1576);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v19 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    v7 = Key;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A310(v9);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v12 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v20 = *(_DWORD *)(v12 + 24);
        *(_DWORD *)(v12 + 24) = v20 + 1;
        if ( v20 == -1 )
        {
          sub_140418E4C(CurrentPrcb);
          v7 = Key;
        }
      }
    }
    if ( !_interlockedbittestandset64(v9, 0LL) )
      goto LABEL_7;
    v21 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v21 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v22 = *(_DWORD *)(v21 + 24) - 1;
        *(_DWORD *)(v21 + 24) = v22;
        if ( !v22 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    sub_140211E70(v9);
  }
  v7 = Key;
LABEL_7:
  v13 = (_QWORD *)*v8;
  v14 = 0LL;
  if ( (_QWORD *)*v8 != v8 )
  {
    while ( v13[2] != v7 )
    {
      v13 = (_QWORD *)*v13;
      if ( v13 == v8 )
        goto LABEL_8;
    }
    v14 = v13;
    if ( v13 )
    {
      ObfReferenceObjectWithTag((PVOID)v13[3], 0x72507350u);
      v7 = Key;
    }
  }
LABEL_8:
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E8CC(v9, retaddr);
    v7 = Key;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  }
  v15 = KeGetCurrentPrcb();
  v16 = *((_QWORD *)v15 + 4375);
  if ( v16 )
  {
    if ( *((_BYTE *)v15 + 32) <= 1u )
    {
      v23 = *(_DWORD *)(v16 + 24) - 1;
      *(_DWORD *)(v16 + 24) = v23;
      if ( !v23 )
      {
        sub_140418E4C(v15);
        v7 = Key;
      }
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = *((_QWORD *)v25 + 4375);
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
        *(_DWORD *)(v26 + 20) &= v27;
        if ( v28 )
          sub_140418E4C(v25);
        v7 = Key;
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v14 )
    return (PVOID)v14[3];
  if ( (v4 & 1) != 0 )
    return v3;
  v17 = *((_QWORD *)Thread + 203);
  if ( v17 == -3 )
    v17 = *(_QWORD *)(*((_QWORD *)Thread + 68) + 1296LL);
  if ( !v17 )
    return v3;
  return (PVOID)PsGetJobProperty(v17, v7);
}
