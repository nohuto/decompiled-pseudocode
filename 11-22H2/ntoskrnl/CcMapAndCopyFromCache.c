/*
 * XREFs of CcMapAndCopyFromCache @ 0x1406F5CC0
 * Callers:
 *     CcCopyReadEx @ 0x140261C40 (CcCopyReadEx.c)
 *     CcCompleteAsyncRead @ 0x1402C1400 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14030E840 (CcPerformReadAhead.c)
 * Callees:
 *     CcCopyBytesToUserBuffer @ 0x140262090 (CcCopyBytesToUserBuffer.c)
 *     CcFetchDataForRead @ 0x1402621A0 (CcFetchDataForRead.c)
 *     CcFreeVirtualAddress @ 0x140262360 (CcFreeVirtualAddress.c)
 *     CcGetVirtualAddress @ 0x140264CD0 (CcGetVirtualAddress.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14034BD34 (CcUpdateSharedCacheMapFlag.c)
 */

char __fastcall CcMapAndCopyFromCache(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        LARGE_INTEGER *a9)
{
  int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rbx
  NTSTATUS v12; // ebp
  __int64 v13; // r13
  char *v14; // r14
  int v15; // r15d
  void *VirtualAddress; // rdx
  unsigned int v17; // esi
  __int64 v18; // rcx
  size_t Size; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp-60h] BYREF
  void *Src; // [rsp+60h] [rbp-58h]
  int v23; // [rsp+C0h] [rbp+8h]
  __int64 v24; // [rsp+C8h] [rbp+10h] BYREF
  int v25; // [rsp+D0h] [rbp+18h] BYREF
  char v26; // [rsp+D8h] [rbp+20h]

  v26 = a4;
  v24 = a2;
  v23 = a1;
  v9 = a1;
  v10 = a3;
  v11 = a2;
  v21 = 0LL;
  v12 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !a3 )
    goto LABEL_17;
  v14 = a5;
  while ( 1 )
  {
    LODWORD(Size) = 0;
    v15 = 0;
    v25 = 0;
    VirtualAddress = (void *)CcGetVirtualAddress(v13, v11, (__int64 *)&v21, &Size, 0, v14 == 0LL);
    Src = VirtualAddress;
    if ( (*(_DWORD *)(v13 + 152) & 8) != 0 )
      break;
    if ( !CcFetchDataForRead(v9, &v24, v10, v26, &v25, v21, a7, a8, a9) )
      goto LABEL_20;
    v15 = v25;
    VirtualAddress = Src;
    *a6 |= v25;
LABEL_6:
    v17 = Size;
    v11 += (unsigned int)Size;
    v18 = (unsigned int)Size;
    if ( v14 )
    {
      *(_QWORD *)(*(_QWORD *)(v13 + 512) + 336LL) += (unsigned int)Size;
      if ( v15 )
        *(_QWORD *)(*(_QWORD *)(v13 + 512) + 344LL) += v18;
    }
    else if ( v15 )
    {
      *(_QWORD *)(*(_QWORD *)(v13 + 512) + 352LL) += (unsigned int)Size;
    }
    if ( v17 > v10 )
      v17 = v10;
    if ( v14 )
    {
      v12 = CcCopyBytesToUserBuffer(v14, (char *)VirtualAddress, v17, (*(_DWORD *)(v13 + 152) & 0x1000) != 0);
      if ( v12 < 0 )
        goto LABEL_21;
      v14 += v17;
    }
    CcFreeVirtualAddress((__int64)v21);
    v24 = v11;
    v21 = 0LL;
    v10 -= v17;
    if ( !v10 )
      goto LABEL_15;
    v9 = v23;
  }
  if ( v26 )
    goto LABEL_6;
LABEL_20:
  v12 = -1073741608;
LABEL_21:
  if ( v21 )
    CcFreeVirtualAddress((__int64)v21);
LABEL_15:
  if ( v12 == -1073741608 )
    return 0;
  if ( v12 < 0 )
  {
    CcUpdateSharedCacheMapFlag(v13, 8, 1);
    RtlRaiseStatus(v12);
  }
LABEL_17:
  if ( (*(_DWORD *)(v13 + 152) & 8) != 0 )
    CcUpdateSharedCacheMapFlag(v13, 8, 0);
  return 1;
}
