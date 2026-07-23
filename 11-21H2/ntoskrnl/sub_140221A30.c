/*
 * XREFs of sub_140221A30 @ 0x140221A30
 * Callers:
 *     MmFreePagesFromMdlEx @ 0x1402219E0 (MmFreePagesFromMdlEx.c)
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     sub_14024E01C @ 0x14024E01C (sub_14024E01C.c)
 *     sub_140261A20 @ 0x140261A20 (sub_140261A20.c)
 *     sub_14039050C @ 0x14039050C (sub_14039050C.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140511760 @ 0x140511760 (sub_140511760.c)
 *     sub_140511BD0 @ 0x140511BD0 (sub_140511BD0.c)
 *     sub_140513870 @ 0x140513870 (sub_140513870.c)
 *     sub_140514920 @ 0x140514920 (sub_140514920.c)
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 *     sub_140515B80 @ 0x140515B80 (sub_140515B80.c)
 *     sub_140516290 @ 0x140516290 (sub_140516290.c)
 *     sub_1405164D0 @ 0x1405164D0 (sub_1405164D0.c)
 *     sub_140589FC0 @ 0x140589FC0 (sub_140589FC0.c)
 *     sub_1405AA6C4 @ 0x1405AA6C4 (sub_1405AA6C4.c)
 *     sub_1405F9824 @ 0x1405F9824 (sub_1405F9824.c)
 *     sub_140616FD0 @ 0x140616FD0 (sub_140616FD0.c)
 *     sub_1406333A8 @ 0x1406333A8 (sub_1406333A8.c)
 *     sub_140633468 @ 0x140633468 (sub_140633468.c)
 *     sub_14069A6F4 @ 0x14069A6F4 (sub_14069A6F4.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 *     sub_140B31500 @ 0x140B31500 (sub_140B31500.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402C3410 @ 0x1402C3410 (sub_1402C3410.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     sub_140584530 @ 0x140584530 (sub_140584530.c)
 *     sub_140589DDC @ 0x140589DDC (sub_140589DDC.c)
 */

__int64 __fastcall sub_140221A30(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int16 v2; // ax
  __int16 v4; // ax
  ULONG_PTR *v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // r13d
  int v10; // r8d
  ULONG_PTR *v11; // r9
  __int64 v12; // r14
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  ULONG_PTR *v15; // r15
  int v16; // r12d
  PMDL v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 result; // rax
  ULONG_PTR v21; // rcx
  __int64 v22; // r10
  PMDL v23; // rcx
  PVOID v24; // rax
  _QWORD *v25; // rsi
  unsigned __int64 i; // rdi
  __int64 v27; // rbx
  unsigned __int64 v28; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v31; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int64 v34; // r14
  PVOID MappedSystemVa; // rdx
  unsigned __int64 v36; // r14
  PVOID v37; // rdx
  int v38; // [rsp+30h] [rbp-68h]
  __int64 v39; // [rsp+38h] [rbp-60h]
  ULONG_PTR *v40; // [rsp+40h] [rbp-58h]
  unsigned int v42; // [rsp+A8h] [rbp+10h]
  unsigned __int8 v43; // [rsp+B0h] [rbp+18h] BYREF
  int v44; // [rsp+B8h] [rbp+20h]

  v42 = a2;
  v2 = *(_WORD *)(BugCheckParameter2 + 10);
  v43 = 0;
  v40 = 0LL;
  v38 = 1;
  if ( (v2 & 0x200) != 0 )
  {
    v42 = a2 & 0xFFFFFFFE;
    sub_140584530();
  }
  else if ( (a2 & 1) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      sub_140424F50(*(_QWORD *)(BugCheckParameter2 + 24), *(unsigned int *)(BugCheckParameter2 + 40));
    }
    else
    {
      v24 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter2, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( v24 )
      {
        sub_140424F50(v24, *(unsigned int *)(BugCheckParameter2 + 40));
      }
      else
      {
        v25 = (_QWORD *)(BugCheckParameter2 + 48);
        for ( i = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
                 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
                 + 4095) >> 12; i; --i )
        {
          v27 = sub_1402CC7C0(*v25, &v43, 0x80000000LL);
          sub_140424F50(v27, 4096LL);
          sub_1402BEDD0(v27, v43, 0x80000000LL);
          ++v25;
        }
      }
    }
  }
  v4 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v4 & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
    v4 = *(_WORD *)(BugCheckParameter2 + 10);
  }
  if ( (v4 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v4, 0LL);
  v5 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v6 = 0LL;
  v7 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
      + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
      + 4095) >> 12;
  v39 = 0LL;
  if ( (BYTE4(xmmword_140D06900) & 1) != 0 )
    sub_140589DDC(BugCheckParameter2 + 48, 633LL, v7);
  v8 = 0LL;
  v44 = 0;
  v9 = 1;
  if ( !v7 )
  {
LABEL_22:
    v11 = &v5[-v8];
    goto LABEL_23;
  }
  v10 = 1;
  do
  {
    v11 = v5;
    v12 = 48 * *v5;
    v13 = v12 - 0x220000000000LL;
    v14 = *(_QWORD *)(v12 - 0x220000000000LL + 40);
    if ( (v14 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v5, *v5);
    v15 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((v14 >> 43) & 0x3FF));
    if ( ((v14 >> 60) & 7) == 3 )
    {
      v28 = (unsigned __int8)sub_1402F2700(v12 - 0x220000000000LL);
      sub_14033C300(v12 - 0x220000000000LL, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v28 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v31 = *((_QWORD *)CurrentPrcb + 4375);
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
            v33 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
            *(_DWORD *)(v31 + 20) &= v32;
            if ( v33 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v28);
      _InterlockedDecrement64(&qword_140C50848);
      v11 = v5;
      v10 = v38;
    }
    if ( !v8 )
    {
      v8 = 1LL;
      v23 = MemoryDescriptorList;
      v10 = *(unsigned __int8 *)(v13 + 34) >> 6;
      v40 = v15;
      v38 = v10;
      if ( !MemoryDescriptorList )
        goto LABEL_34;
      if ( ((*(_QWORD *)(v13 + 40) >> 60) & 7) != 1 )
      {
        v44 = 0;
        goto LABEL_20;
      }
      v34 = 0xAAAAAAAAAAAAAAABuLL * (v12 >> 4);
      if ( !MemoryDescriptorList )
      {
LABEL_34:
        v44 = 0;
        goto LABEL_20;
      }
      while ( 1 )
      {
        MappedSystemVa = v23->MappedSystemVa;
        if ( v34 >= (unsigned __int64)MappedSystemVa )
        {
          if ( (PVOID)(v34 - (unsigned __int64)MappedSystemVa) < v23->StartVa )
          {
            v44 = 1;
            goto LABEL_20;
          }
          v23 = *(PMDL *)&v23->Size;
        }
        else
        {
          v23 = v23->Next;
        }
        if ( !v23 )
          goto LABEL_34;
      }
    }
    v16 = 0;
    if ( v40 == v15 )
    {
      v17 = MemoryDescriptorList;
      if ( MemoryDescriptorList )
      {
        if ( ((*(_QWORD *)(v13 + 40) >> 60) & 7) == 1 )
        {
          v36 = 0xAAAAAAAAAAAAAAABuLL * (v12 >> 4);
          if ( MemoryDescriptorList )
          {
            do
            {
              v37 = v17->MappedSystemVa;
              if ( v36 >= (unsigned __int64)v37 )
              {
                if ( (PVOID)(v36 - (unsigned __int64)v37) < v17->StartVa )
                  goto LABEL_29;
                v17 = *(PMDL *)&v17->Size;
              }
              else
              {
                v17 = v17->Next;
              }
            }
            while ( v17 );
          }
        }
      }
      if ( *(unsigned __int8 *)(v13 + 34) >> 6 == v10 )
      {
        v18 = *(v5 - 1);
        if ( *v5 == v18 + 1 )
        {
          if ( v8 == 1 || v9 )
          {
            v9 = 1;
            ++v8;
            goto LABEL_20;
          }
LABEL_75:
          v21 = *(v5 - 1);
          goto LABEL_31;
        }
        if ( *v5 == v18 - 1 )
        {
          if ( v8 == 1 || !v9 )
          {
            v9 = 0;
            ++v8;
            goto LABEL_20;
          }
          goto LABEL_30;
        }
      }
    }
    else
    {
      v16 = 1;
    }
LABEL_29:
    if ( !v9 )
      goto LABEL_75;
LABEL_30:
    v21 = v5[-v8];
LABEL_31:
    v22 = sub_1402C3410(v21, v8, v42, v11) + v39;
    v39 = v22;
    if ( v16 )
    {
      if ( v22 )
      {
        if ( v40 == &StartContext && !v44 )
          _InterlockedExchangeAdd64(&qword_140C53530, -v22);
        v39 = 0LL;
      }
      v40 = v15;
    }
    v8 = 1LL;
    v10 = *(unsigned __int8 *)(v13 + 34) >> 6;
    v11 = v5;
    v38 = v10;
LABEL_20:
    ++v5;
    --v7;
  }
  while ( v7 );
  v6 = v39;
  if ( v9 )
    goto LABEL_22;
LABEL_23:
  v19 = sub_1402C3410(*v11, v8, v42, v11) + v6;
  if ( v19 && v40 == &StartContext && !v44 )
    _InterlockedExchangeAdd64(&qword_140C53530, -v19);
  result = BugCheckParameter2;
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}
