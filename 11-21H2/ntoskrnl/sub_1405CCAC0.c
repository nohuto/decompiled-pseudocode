/*
 * XREFs of sub_1405CCAC0 @ 0x1405CCAC0
 * Callers:
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x1405CA760 (PoFxIssueComponentPerfStateChangeMultiple.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_1403B1998 @ 0x1403B1998 (sub_1403B1998.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CBC30 @ 0x1405CBC30 (sub_1405CBC30.c)
 *     sub_1405CEE50 @ 0x1405CEE50 (sub_1405CEE50.c)
 *     sub_1405D29FC @ 0x1405D29FC (sub_1405D29FC.c)
 *     sub_1405D2C00 @ 0x1405D2C00 (sub_1405D2C00.c)
 */

void __fastcall sub_1405CCAC0(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        unsigned int a4,
        void *Src,
        __int64 a6)
{
  __int64 v10; // rbx
  int v11; // r14d
  void *v12; // r15
  char v13; // r13
  int v14; // edx
  char v15; // cl
  __int64 v16; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-68h] BYREF
  int v18; // [rsp+30h] [rbp-38h]
  char v19; // [rsp+78h] [rbp+10h] BYREF

  KeGetCurrentIrql();
  v10 = *(_QWORD *)(a2 + 424);
  if ( !v10 )
    sub_1405CAE6C(0x61BuLL, *(_QWORD *)(BugCheckParameter2 + 64), BugCheckParameter2, *(unsigned int *)(a2 + 16));
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 16LL);
  if ( a4 > *(_DWORD *)(v10 + 144) )
    sub_1405CAE6C(0x61CuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), 0LL);
  if ( (_InterlockedExchange((volatile __int32 *)(v10 + 40), 0) & 7) != 0 )
    sub_1405CAE6C(0x61DuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), *(_QWORD *)(v10 + 80));
  v12 = Src;
  if ( *(_BYTE *)(v10 + 74) )
  {
    memmove(*(void **)(v10 + 48), Src, 16LL * a4);
    *(_DWORD *)(v10 + 56) = a4;
    *(_BYTE *)(v10 + 72) = 0;
    *(_QWORD *)(v10 + 64) = MEMORY[0xFFFFF78000000008];
  }
  *(_QWORD *)(v10 + 80) = a6;
  KeResetEvent((PRKEVENT)(v10 + 8));
  sub_1405D29FC(v10, a4, v12);
  v13 = 1;
  v18 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x88000000);
  }
  else if ( (a3 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x10000000u);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 4u);
  _InterlockedOr(v17, 0);
  if ( *(_BYTE *)(v10 + 73) )
  {
    v14 = *(_DWORD *)(a2 + 16);
    v19 = 0;
    v13 = sub_1405CEE50(BugCheckParameter2, v14, a4, (_DWORD)v12, (__int64)&v19);
    if ( !v13 )
      goto LABEL_18;
    v15 = v19;
  }
  else
  {
    v15 = 1;
    v19 = 1;
  }
  _InterlockedOr((volatile signed __int32 *)(v10 + 40), v15 != 0 ? 1610612736 : 0x20000000);
  _InterlockedDecrement((volatile signed __int32 *)(v10 + 40));
LABEL_18:
  sub_1405D2C00(
    v10,
    ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 0xFFFFFFFF) - 1) & 7);
  if ( v13 )
  {
    if ( (a3 & 2) != 0 )
    {
      sub_140355058(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
      sub_1403B1998(v16, v10 + 88, BugCheckParameter2);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x80000000);
      sub_1405CBC30(BugCheckParameter2, *(_DWORD *)(a2 + 16), v10, v19);
    }
  }
  else if ( v18 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 8), Executive, 0, 0, 0LL);
  }
  else
  {
    sub_140355058(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
    sub_140355058(*(_QWORD *)(BugCheckParameter2 + 48), v11, 20, 0LL);
  }
}
