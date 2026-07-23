/*
 * XREFs of sub_14093BBD8 @ 0x14093BBD8
 * Callers:
 *     sub_14093B1CC @ 0x14093B1CC (sub_14093B1CC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A8B4 @ 0x14055A8B4 (sub_14055A8B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall sub_14093BBD8(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  int v3; // eax
  PVOID v4; // r15
  unsigned int v7; // esi
  __int64 PartitionNodePagesForMdl; // r14
  bool v9; // al
  bool v11; // [rsp+40h] [rbp-49h] BYREF
  int v12[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v13; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v15; // [rsp+80h] [rbp-9h]
  int v16; // [rsp+88h] [rbp-1h]
  int v17; // [rsp+8Ch] [rbp+3h]
  bool *v18; // [rsp+90h] [rbp+7h]
  int v19; // [rsp+98h] [rbp+Fh]
  int v20; // [rsp+9Ch] [rbp+13h]
  int *v21; // [rsp+A0h] [rbp+17h]
  int v22; // [rsp+A8h] [rbp+1Fh]
  int v23; // [rsp+ACh] [rbp+23h]

  v3 = *(_DWORD *)(a1 + 80);
  v4 = 0LL;
  *(_QWORD *)v12 = a2;
  if ( (v3 & 0xC) != 0 )
    return 0LL;
  v7 = dword_140C0CBE8;
  PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                               0,
                               -1,
                               (unsigned int)dword_140C0CBE8,
                               a2,
                               1,
                               0,
                               101,
                               *(ULONG_PTR ***)(a1 + 1096));
  if ( !PartitionNodePagesForMdl )
  {
    PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                                 0,
                                 -1,
                                 v7,
                                 *(unsigned __int64 *)v12,
                                 1,
                                 0,
                                 37,
                                 *(ULONG_PTR ***)(a1 + 1096));
    if ( !PartitionNodePagesForMdl )
    {
      *(_DWORD *)(a1 + 80) |= 8u;
      sub_14055A8B4();
      if ( (unsigned int)dword_140C064E0 > 5 )
      {
        if ( sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL) )
        {
          v17 = 0;
          v20 = 0;
          v23 = 0;
          v15 = &v13;
          v9 = (*(_DWORD *)(a1 + 80) & 8) != 0;
          v13 = 0x1000000LL;
          v11 = v9;
          v18 = &v11;
          v21 = v12;
          v16 = 8;
          v19 = 1;
          v12[0] = -1073741801;
          v22 = 4;
          sub_14020A9C4(
            (__int64)&dword_140C064E0,
            (unsigned __int8 *)byte_14002AE55,
            (const GUID *)(a1 + 960),
            (const GUID *)(a1 + 944),
            5u,
            &v14);
        }
      }
      return v4;
    }
  }
  if ( (*(_BYTE *)(PartitionNodePagesForMdl + 10) & 5) != 0 )
    v4 = *(PVOID *)(PartitionNodePagesForMdl + 24);
  else
    v4 = MmMapLockedPagesSpecifyCache((PMDL)PartitionNodePagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v4 )
  {
    MmFreePagesFromMdl((PMDL)PartitionNodePagesForMdl);
    ExFreePoolWithTag((PVOID)PartitionNodePagesForMdl, 0);
    return 0LL;
  }
  *a3 = PartitionNodePagesForMdl;
  return v4;
}
