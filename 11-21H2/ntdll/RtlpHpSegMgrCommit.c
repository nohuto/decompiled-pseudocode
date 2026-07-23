/*
 * XREFs of RtlpHpSegMgrCommit @ 0x180023B70
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x180023E30 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrAllocate @ 0x1800566B4 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegMgrRelease @ 0x180058608 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18002283C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x180022888 (RtlpHpAllocVA.c)
 *     RtlpHpQueryVA @ 0x180058CE8 (RtlpHpQueryVA.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpHpSegMgrCommitComplete @ 0x180120410 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1801204B0 (RtlpHpSegMgrCommitInitiate.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(int *a1, unsigned __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi
  unsigned __int64 v9; // r15
  unsigned int v10; // edi
  unsigned __int64 v11; // r12
  unsigned int v12; // ebx
  int v14; // r14d
  _WORD *v15; // r13
  size_t v16; // rdi
  void *v17; // rax
  int v18; // r12d
  _DWORD *v19; // rcx
  bool v20; // cf
  ULONG v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // edi
  int v26; // eax
  unsigned __int64 v27; // rcx
  __int16 v28; // [rsp+28h] [rbp-58h]
  PVOID BaseAddress; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-48h] BYREF
  void *v31; // [rsp+40h] [rbp-40h]
  _RTL_SRWLOCK SRWLock; // [rsp+48h] [rbp-38h] BYREF
  size_t Size; // [rsp+50h] [rbp-30h]
  __int64 v34; // [rsp+58h] [rbp-28h] BYREF
  __int16 v35[8]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v36; // [rsp+70h] [rbp-10h] BYREF
  __int64 v37; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v38; // [rsp+C8h] [rbp+48h]
  int v39; // [rsp+D8h] [rbp+58h]

  v39 = a4;
  v38 = a2;
  v8 = *a1;
  SRWLock.0 = 0LL;
  v9 = a5;
  v10 = -v8;
  v11 = a3;
  v12 = a6 & 0xBFFFFFFF;
  LOBYTE(v37) = 0;
  a6 &= 0x40000000u;
  if ( a5 > 0
    && !(unsigned int)RtlpHpHeapCheckCommitLimit(
                        a5 << 12,
                        (*(_QWORD *)(*((_QWORD *)a1 + 7) + 96LL) + *(_QWORD *)(*((_QWORD *)a1 + 7) + 136LL)) << 12,
                        *((_QWORD *)a1 + 7),
                        (__int64 *)(*((_QWORD *)a1 + 7) + 32LL)) )
  {
    return (unsigned int)-1073741523;
  }
  if ( (*((_BYTE *)a1 + 13) & 7) != 0 )
  {
    BaseAddress = (PVOID)(a2 & 0xFFFFFFFFFFE00000uLL);
    RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v34, 0LL);
    if ( (int)v9 <= 0 || (_DWORD)v11 || v10 >= 0x200000 || a2 <= (unsigned __int64)BaseAddress )
    {
      v14 = a7;
    }
    else
    {
      v14 = a7;
      if ( (a7 & 2) == 0 )
        v14 = a7 | 1;
    }
    v15 = (_WORD *)(v34 + 2 * (v11 >> 9));
  }
  else
  {
    v14 = a7;
    v15 = 0LL;
  }
  v16 = (unsigned int)(v39 << 12);
  v17 = (void *)(v38 + (unsigned int)((_DWORD)v11 << 12));
  v18 = a6;
  v31 = v17;
  Size = v16;
  while ( 1 )
  {
    BaseAddress = v17;
    RegionSize = v16;
    if ( !v15 )
    {
LABEL_7:
      if ( (int)v9 <= 0 )
        goto LABEL_12;
      goto LABEL_8;
    }
    v26 = RtlpHpSegMgrCommitInitiate((int)a1, (int)v15, v9, v14, &SRWLock, (__int64)&v37);
    if ( v26 == -1073741568 )
      break;
    if ( v26 != -1073741566 )
      goto LABEL_7;
    BaseAddress = (PVOID)((unsigned __int64)BaseAddress & 0xFFFFFFFFFFE00000uLL);
    RegionSize = 0x200000LL;
    if ( (int)v9 <= 0 )
    {
LABEL_12:
      v36 = *(_OWORD *)(a1 + 10);
      v24 = RtlpHpFreeVA(&BaseAddress, &RegionSize, v12, &v36);
      goto LABEL_10;
    }
    if ( BYTE1(*((_QWORD *)a1 + 5)) == 2 )
      v12 |= 0x20400000u;
    else
      v12 |= 0x20000000u;
LABEL_8:
    if ( v18 && (v12 & 0x20000000) == 0 )
      v12 |= 0x40000000u;
    v19 = (_DWORD *)*((_QWORD *)a1 + 7);
    v20 = (v19[5] & 0x40000000) != 0;
    *(_OWORD *)v35 = *(_OWORD *)(a1 + 10);
    v21 = RtlpHpHeapValidateProtection(v19, v20 ? 64 : 4);
    v22 = RtlpHpAllocVA(&BaseAddress, &RegionSize, 0LL, v12, v21, (__int128 *)v35);
    v24 = v22;
    if ( v18 && v22 >= 0 && (v12 & 0x40000000) == 0 )
      memset(v31, 0, Size);
LABEL_10:
    if ( !v15 )
      return (unsigned int)v24;
    if ( (*v15 & 0x4000) != 0 && v24 >= 0 )
    {
      v27 = 1LL;
      if ( (int)v9 <= 0 )
        v27 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10) + 8), v27);
      v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10)), v9);
    }
    RtlpHpSegMgrCommitComplete(v23, (int)v15, v9, v24 >= 0, &SRWLock, v28);
    if ( (v12 & 0x20000000) == 0 || v24 >= 0 || (v14 & 2) != 0 )
      return (unsigned int)v24;
    v16 = Size;
    v14 |= 1u;
    v17 = v31;
    v12 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10)), v9);
  if ( v18 )
    memset(v31, 0, v16);
  return 0;
}
