/*
 * XREFs of sub_1405898DC @ 0x1405898DC
 * Callers:
 *     sub_1405B1D98 @ 0x1405B1D98 (sub_1405B1D98.c)
 * Callees:
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405898DC(ULONG_PTR a1, char a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rbp
  bool v9; // zf
  PMDL v10; // rcx
  unsigned __int64 v11; // rdx
  PVOID MappedSystemVa; // r8
  __int16 v13; // dx
  PMDL v14; // rcx
  unsigned __int64 v15; // rsi
  PVOID v16; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  unsigned __int64 v21; // r8
  struct _KPRCB *v22; // r9
  __int64 v23; // rdx
  signed __int32 v24; // eax

  v3 = 48 * a1;
  v5 = 1LL;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = (unsigned __int8)sub_1402F2700(v6);
  v8 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  sub_140277C50(v6);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  v9 = *(_WORD *)(v6 + 32) == 2;
  *(_WORD *)(v6 + 32) -= 2;
  if ( v9 )
  {
    if ( sub_140277C50(v6) )
    {
LABEL_12:
      v5 = 0LL;
    }
    else
    {
      v10 = MemoryDescriptorList;
      if ( MemoryDescriptorList && ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 1 )
      {
        v11 = 0xAAAAAAAAAAAAAAABuLL * (v3 >> 4);
        while ( v10 )
        {
          MappedSystemVa = v10->MappedSystemVa;
          if ( v11 >= (unsigned __int64)MappedSystemVa )
          {
            if ( (PVOID)(v11 - (unsigned __int64)MappedSystemVa) < v10->StartVa )
              goto LABEL_12;
            v10 = *(PMDL *)&v10->Size;
          }
          else
          {
            v10 = v10->Next;
          }
        }
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v13 = 1;
      *(_BYTE *)(v6 + 34) &= ~0x10u;
    }
    else
    {
      v14 = MemoryDescriptorList;
      if ( MemoryDescriptorList && ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 1 )
      {
        v15 = 0xAAAAAAAAAAAAAAABuLL * (v3 >> 4);
        while ( v14 )
        {
          v16 = v14->MappedSystemVa;
          if ( v15 >= (unsigned __int64)v16 )
          {
            if ( (PVOID)(v15 - (unsigned __int64)v16) < v14->StartVa )
            {
              v13 = 256;
              goto LABEL_26;
            }
            v14 = *(PMDL *)&v14->Size;
          }
          else
          {
            v14 = v14->Next;
          }
        }
      }
      v13 = 2;
    }
LABEL_26:
    sub_1402C6EB0(a1, v13);
  }
  else
  {
    *(_BYTE *)(v6 + 34) |= 7u;
    *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
    v5 = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v9 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  if ( v5 )
  {
    sub_14028CE10(v8, v5);
    v21 = v5;
    if ( (ULONG_PTR *)v8 != &StartContext )
      goto LABEL_46;
    v22 = KeGetCurrentPrcb();
    v23 = *((int *)v22 + 8615);
    if ( (_DWORD)v23 == -1 )
      goto LABEL_46;
    do
    {
      if ( (unsigned __int64)(v5 + v23) > 0x100 )
        break;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)v22 + 8615, v23 + v5, v23);
      v9 = (_DWORD)v23 == v24;
      v23 = v24;
      if ( v9 )
        return v5;
    }
    while ( v24 != -1 );
    if ( (int)v23 > 192 && (_DWORD)v23 == _InterlockedCompareExchange((volatile signed __int32 *)v22 + 8615, 192, v23) )
      v21 = v5 + (int)v23 - 192;
    if ( v21 )
LABEL_46:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16960), v21);
  }
  return v5;
}
