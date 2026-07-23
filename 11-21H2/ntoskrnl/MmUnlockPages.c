/*
 * XREFs of MmUnlockPages @ 0x1402B8AD0
 * Callers:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     sub_1402581E0 @ 0x1402581E0 (sub_1402581E0.c)
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_14031A4F0 @ 0x14031A4F0 (sub_14031A4F0.c)
 *     sub_14032A7D0 @ 0x14032A7D0 (sub_14032A7D0.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     sub_14053A460 @ 0x14053A460 (sub_14053A460.c)
 *     CcMdlWriteAbort @ 0x14053BB80 (CcMdlWriteAbort.c)
 *     sub_140550260 @ 0x140550260 (sub_140550260.c)
 *     sub_140550900 @ 0x140550900 (sub_140550900.c)
 *     sub_1405570D0 @ 0x1405570D0 (sub_1405570D0.c)
 *     sub_14057B748 @ 0x14057B748 (sub_14057B748.c)
 *     sub_1405A605C @ 0x1405A605C (sub_1405A605C.c)
 *     sub_1405E2170 @ 0x1405E2170 (sub_1405E2170.c)
 *     sub_1405E2740 @ 0x1405E2740 (sub_1405E2740.c)
 *     sub_1405FD594 @ 0x1405FD594 (sub_1405FD594.c)
 *     sub_140628F90 @ 0x140628F90 (sub_140628F90.c)
 *     sub_140629030 @ 0x140629030 (sub_140629030.c)
 *     sub_1406384AC @ 0x1406384AC (sub_1406384AC.c)
 *     sub_1406C14E4 @ 0x1406C14E4 (sub_1406C14E4.c)
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     sub_1406E0358 @ 0x1406E0358 (sub_1406E0358.c)
 *     sub_1406E9DE4 @ 0x1406E9DE4 (sub_1406E9DE4.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     sub_1407F5914 @ 0x1407F5914 (sub_1407F5914.c)
 *     sub_1407F7C68 @ 0x1407F7C68 (sub_1407F7C68.c)
 *     sub_14088151A @ 0x14088151A (sub_14088151A.c)
 *     sub_1409152A4 @ 0x1409152A4 (sub_1409152A4.c)
 *     sub_140915784 @ 0x140915784 (sub_140915784.c)
 *     sub_14092EF10 @ 0x14092EF10 (sub_14092EF10.c)
 *     sub_1409303C0 @ 0x1409303C0 (sub_1409303C0.c)
 *     sub_140930460 @ 0x140930460 (sub_140930460.c)
 *     sub_1409328A8 @ 0x1409328A8 (sub_1409328A8.c)
 *     sub_140933FE8 @ 0x140933FE8 (sub_140933FE8.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_1409778EC @ 0x1409778EC (sub_1409778EC.c)
 *     sub_140978430 @ 0x140978430 (sub_140978430.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_14097A358 @ 0x14097A358 (sub_14097A358.c)
 *     sub_14098F634 @ 0x14098F634 (sub_14098F634.c)
 *     sub_1409AF550 @ 0x1409AF550 (sub_1409AF550.c)
 *     sub_1409D43FC @ 0x1409D43FC (sub_1409D43FC.c)
 *     sub_140A06830 @ 0x140A06830 (sub_140A06830.c)
 *     sub_140A06B80 @ 0x140A06B80 (sub_140A06B80.c)
 *     sub_140A06DF0 @ 0x140A06DF0 (sub_140A06DF0.c)
 *     sub_140A07780 @ 0x140A07780 (sub_140A07780.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 * Callees:
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402B7320 @ 0x1402B7320 (sub_1402B7320.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140584374 @ 0x140584374 (sub_140584374.c)
 *     sub_140584530 @ 0x140584530 (sub_140584530.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // si
  unsigned __int64 *v2; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 *v5; // r13
  int v6; // r15d
  __int64 v7; // r14
  unsigned __int8 CurrentIrql; // r12
  char v9; // bp
  unsigned __int64 v10; // rdx
  ULONG_PTR v11; // r12
  PMDL v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // r12d
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  struct _KPRCB *v24; // r8
  __int64 v25; // rdx
  bool v26; // zf
  signed __int32 v27; // eax
  __int64 v28; // r8
  unsigned __int8 v29; // cl
  __int64 v30; // r9
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // r9
  unsigned __int64 *v33; // rcx
  unsigned __int64 v34; // r8
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v36; // r9
  int v37; // edx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  __int64 v40; // r8
  int v41; // eax
  unsigned __int8 v42; // [rsp+30h] [rbp-68h]
  __int64 v43; // [rsp+38h] [rbp-60h] BYREF
  struct _EPROCESS *Process; // [rsp+40h] [rbp-58h]
  PMDL v45; // [rsp+A0h] [rbp+8h] BYREF
  int v46; // [rsp+A8h] [rbp+10h] BYREF
  int v47; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v48; // [rsp+B8h] [rbp+20h]

  v45 = MemoryDescriptorList;
  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = (unsigned __int64 *)&MemoryDescriptorList[1];
  Process = MemoryDescriptorList->Process;
  if ( (MdlFlags & 0x200) != 0 )
    sub_140584530(MemoryDescriptorList);
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v48 = v4;
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (dword_140D06994 & 1) != 0 )
    sub_140584374((ULONG_PTR)MemoryDescriptorList);
  v5 = &v2[v4];
  v6 = 1;
  v7 = 0LL;
  v46 = 1;
  v43 = 0x3FFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v28 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v9 = CurrentIrql + 1;
  v47 = CurrentIrql + 1;
  do
  {
    v10 = *v2;
    if ( *v2 == -1LL )
      break;
    v11 = 1LL;
    if ( v10 <= qword_140C50840 && (*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      sub_1402B7320(48 * v10 - 0x220000000000LL, MdlFlags, &v43, &v46);
    }
    else
    {
      v31 = *v2;
      v32 = 512 - (*v2 & 0x1FF);
      if ( v32 > 1 )
      {
        v33 = v2 + 1;
        do
        {
          if ( v33 == v5 )
            break;
          v34 = *v33;
          if ( *v33 == -1LL )
            break;
          if ( v34 != v31 + 1 )
            break;
          ++v11;
          ++v33;
          v31 = v34;
        }
        while ( v11 < v32 );
      }
      sub_140215AA8(0, v10, v11);
    }
    ++v7;
    v2 += v11;
    if ( (v7 & 0x3F) == 0 && v42 < 2u )
    {
      if ( v2 >= v5 )
        break;
      if ( KeShouldYieldProcessor() )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v36 = *((_QWORD *)CurrentPrcb + 4375);
            v37 = ~(unsigned __int16)(-1LL << v9);
            v26 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
            *(_DWORD *)(v36 + 20) &= v37;
            if ( v26 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        __writecr8(v42);
        v29 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v29 <= 0xFu )
        {
          v30 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v30 + 20) |= (-1 << (v29 + 1)) & 4;
        }
      }
    }
  }
  while ( v2 < v5 );
  v12 = v45;
  v13 = v48;
  if ( v43 != 0x3FFFFFFFFFLL )
  {
    v14 = 48 * v43 - 0x220000000000LL;
    v15 = 0LL;
    if ( v46 == 2 )
    {
      if ( (*(_BYTE *)(v14 + 34) & 7) != 6
        || (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
        || (v16 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL, v16 < 0xFFFFF68000000000uLL)
        || v16 > 0xFFFFF6FFFFFFFFFFuLL
        || (v17 = (__int64)(v16 << 25) >> 16, v17 < 0xFFFFF68000000000uLL)
        || v17 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v6 = 0;
      }
      v18 = 3;
      if ( !v6 )
        goto LABEL_71;
    }
    else
    {
      v18 = 1;
      if ( !v46 )
        v18 = 4;
    }
    if ( (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
    {
      v19 = 0LL;
      v20 = 0LL;
      while ( 1 )
      {
        v21 = *(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFLL;
        LODWORD(v45) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v45);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        v22 = *(_QWORD *)(v14 + 24) ^ ((*(_QWORD *)(v14 + 24) - 0x10000LL) ^ *(_QWORD *)(v14 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v14 + 24) = v22;
        v23 = v22 & 0x3FFFFFFFFFFFFFFFLL;
        if ( v23 >= 0x10000 )
          break;
        if ( !v15 )
          v15 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
        ++v19;
        if ( !v23 && (unsigned int)sub_1402BF640(v14) != 3 )
          ++v20;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !--v18 )
          goto LABEL_34;
        v14 = 48 * v21 - 0x220000000000LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_34:
      if ( v19 )
      {
        if ( (ULONG_PTR *)v15 != &StartContext )
          goto LABEL_65;
        v24 = KeGetCurrentPrcb();
        v25 = *((int *)v24 + 8615);
        if ( (_DWORD)v25 == -1 )
          goto LABEL_65;
        if ( v19 + v25 <= 0x100 )
        {
          do
          {
            if ( v19 >= 0x80000 )
              break;
            v27 = _InterlockedCompareExchange((volatile signed __int32 *)v24 + 8615, v19 + v25, v25);
            v26 = (_DWORD)v25 == v27;
            LODWORD(v25) = v27;
            if ( v26 )
              goto LABEL_40;
          }
          while ( v27 != -1 && v19 + v27 <= 0x100 );
        }
        if ( (int)v25 > 192
          && (_DWORD)v25 == _InterlockedCompareExchange((volatile signed __int32 *)v24 + 8615, 192, v25) )
        {
          v19 += (int)v25 - 192;
        }
        if ( v19 )
LABEL_65:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 16960), v19);
      }
LABEL_40:
      if ( v20 )
        sub_14028CE10(v15, v20);
      goto LABEL_42;
    }
LABEL_71:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      48 * v43 - 0x220000000000LL,
      *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  }
LABEL_42:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && v42 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = *((_QWORD *)v39 + 4375);
        v41 = ~(unsigned __int16)(-1LL << v47);
        v26 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
        *(_DWORD *)(v40 + 20) &= v41;
        if ( v26 )
          sub_140418E4C(v39);
      }
    }
  }
  __writecr8(v42);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)Process + 160, -(__int64)v13);
  v12->MdlFlags &= 0xF6FDu;
}
