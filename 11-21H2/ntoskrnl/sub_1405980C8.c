/*
 * XREFs of sub_1405980C8 @ 0x1405980C8
 * Callers:
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 * Callees:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140597ED0 @ 0x140597ED0 (sub_140597ED0.c)
 */

unsigned __int64 __fastcall sub_1405980C8(
        struct _FILE_OBJECT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        LARGE_INTEGER a5,
        char a6,
        int a7,
        __int64 a8)
{
  struct _MDL *v10; // r15
  unsigned __int64 v11; // rbx
  NTSTATUS v12; // r12d
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf
  int v20; // r14d
  unsigned __int8 v21; // si
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  __int64 v24; // r9
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  __int64 v28; // r8
  int v29; // eax

  *(_BYTE *)(a2 + 50) = 6;
  *(_WORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 64) = a2 + 56;
  *(_QWORD *)(a2 + 56) = a2 + 56;
  *(_DWORD *)(a2 + 52) = 0;
  v10 = *(struct _MDL **)(a2 + 72);
  v11 = a2;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = (char *)v10 + 8 * ((unsigned __int64)v10->ByteCount >> 12) + 48;
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)(a4 + 16), 1u);
  v12 = sub_14020C810(
          a1,
          v10,
          &a5,
          (LARGE_INTEGER)sub_140597ED0,
          (void *)a2,
          a7,
          0,
          a6,
          a8,
          (struct _IO_STATUS_BLOCK *)a2,
          (IRP **)(a2 + 24));
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)v11 = v12;
    *(_QWORD *)(v11 + 8) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    sub_140597ED0(v11, v11);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( a4 )
      *(_DWORD *)(a4 + 20) = v12;
    v10->ByteCount = 0;
  }
  else
  {
    v20 = 0;
    v21 = KeGetCurrentIrql();
    __writecr8(1uLL);
    do
    {
LABEL_16:
      v11 += 264LL;
      if ( v11 >= a3 + 2112 )
        v11 = a3;
      if ( !*(_QWORD *)(v11 + 16) || *(_DWORD *)(v11 + 52) )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v26 = KeGetCurrentIrql();
            if ( v26 <= 0xFu && v21 <= 0xFu && v26 >= 2u )
            {
              v27 = KeGetCurrentPrcb();
              v28 = *((_QWORD *)v27 + 4375);
              v29 = ~(unsigned __int16)(-1LL << (v21 + 1));
              v18 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
              *(_DWORD *)(v28 + 20) &= v29;
              if ( v18 )
                sub_140418E4C((__int64)v27);
            }
          }
        }
        __writecr8(v21);
        return v11;
      }
      ++v20;
    }
    while ( v20 != 8 );
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && v21 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = *((_QWORD *)v23 + 4375);
          v25 = ~(unsigned __int16)(-1LL << (v21 + 1));
          v18 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v18 )
            sub_140418E4C((__int64)v23);
        }
      }
    }
    __writecr8(v21);
    KeWaitForMultipleObjects(8u, (PVOID *)(a3 + 2112), WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(a3 + 2176));
    v11 = a3;
    while ( *(int *)v11 >= 0 )
    {
      v11 += 264LL;
      if ( !--v20 )
      {
        v21 = KeGetCurrentIrql();
        __writecr8(1uLL);
        goto LABEL_16;
      }
    }
    *(_DWORD *)(*(_QWORD *)(v11 + 72) + 40LL) = 0;
  }
  return 0LL;
}
