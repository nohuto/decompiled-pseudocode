/*
 * XREFs of sub_14036FD8C @ 0x14036FD8C
 * Callers:
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     sub_14036FF40 @ 0x14036FF40 (sub_14036FF40.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_14036FD8C(
        PVOID BaseAddress,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r13
  int v15; // edi
  int v16; // eax
  int v17; // r9d
  _QWORD v19[2]; // [rsp+38h] [rbp-81h] BYREF
  __int128 v20; // [rsp+48h] [rbp-71h] BYREF
  __int128 v21; // [rsp+58h] [rbp-61h]
  __int128 v22; // [rsp+68h] [rbp-51h]
  _QWORD v23[5]; // [rsp+78h] [rbp-41h] BYREF
  __int128 MemoryInformation; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-9h]
  __int128 v26; // [rsp+C0h] [rbp+7h]
  PVOID BaseAddressa; // [rsp+110h] [rbp+57h] BYREF
  int v28; // [rsp+118h] [rbp+5Fh] BYREF

  BaseAddressa = BaseAddress;
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v10 = (unsigned __int64)BaseAddress;
  MemoryInformation = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    if ( !a4 || !a3 || a4 > a3 )
      return v6;
  }
  else
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryRegionInformation,
           &MemoryInformation,
           0x30uLL,
           0LL) < 0 )
      return v6;
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddressa, MemoryBasicInformation, &v20, 0x30uLL, 0LL) < 0 )
      return v6;
    v10 = (unsigned __int64)BaseAddressa;
    if ( (PVOID)v20 != BaseAddressa || (_DWORD)v22 == 0x10000 )
      return v6;
    v8 = v25;
    if ( (_DWORD)v22 == 4096 )
      v7 = *((_QWORD *)&v21 + 1);
  }
  v11 = (unsigned __int64)&sub_1405F3190;
  if ( a2 )
    v11 = a2;
  v12 = v8 >> 12;
  v13 = ((v12 >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v14 = v13 + 4351;
  if ( v7 < ((v13 + 4351) & 0xFFFFFFFFFFFFF000uLL) )
  {
    if ( (int)sub_14042A5E0(v10, &BaseAddressa) < 0 )
      return v6;
    v10 = (unsigned __int64)BaseAddressa;
  }
  memset((void *)v10, 0, v13 + 256);
  if ( v11 )
    *(_QWORD *)(v10 + 8) = qword_140C5A5C0 ^ v11;
  *(_DWORD *)(v10 + 32) = *a6 & 1;
  *(_QWORD *)(v10 + 24) = 0LL;
  v15 = a5;
  v16 = a5 & 0x13000003;
  *(_DWORD *)(v10 + 16) = -857879331;
  *(_DWORD *)(v10 + 20) = v16;
  *(_QWORD *)v10 = v12;
  v19[0] = v12;
  v19[1] = v10 + 256;
  RtlSetBitsEx((__int64)v19, 0LL, v14 >> 12);
  *(_QWORD *)(v10 + 48) = v12;
  *(_QWORD *)(v10 + 56) = v10 ^ (v10 + 256);
  v17 = *(_DWORD *)(v10 + 32);
  v23[0] = sub_14020DB50;
  v23[4] = 0LL;
  v23[1] = sub_14025BC50;
  v23[2] = sub_1402590A0;
  v23[3] = _misaligned_access;
  v28 = 0;
  sub_14036FF40(v10 + 64, v10, (unsigned int)v23, v17, v15 & 0x8000000, (__int64)&v28);
  return v10;
}
