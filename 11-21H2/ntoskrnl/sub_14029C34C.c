/*
 * XREFs of sub_14029C34C @ 0x14029C34C
 * Callers:
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 * Callees:
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 */

char __fastcall sub_14029C34C(int a1, __int64 *a2, unsigned int a3, unsigned __int8 a4)
{
  int v4; // r14d
  unsigned int v7; // edi
  char v8; // bl
  unsigned int v10; // [rsp+54h] [rbp-54h]
  unsigned int v11; // [rsp+58h] [rbp-50h]
  struct _MDL *MemoryDescriptorList; // [rsp+60h] [rbp-48h]
  PVOID BcbVoid; // [rsp+68h] [rbp-40h] BYREF
  __int64 v14; // [rsp+70h] [rbp-38h] BYREF
  __int64 v15; // [rsp+78h] [rbp-30h] BYREF
  PVOID VirtualAddress[2]; // [rsp+80h] [rbp-28h] BYREF
  char v17; // [rsp+B8h] [rbp+10h]

  v4 = a4;
  v7 = 0;
  v14 = 0LL;
  v15 = *a2;
  BcbVoid = 0LL;
  VirtualAddress[0] = 0LL;
  v17 = 1;
  while ( (unsigned __int8)sub_14032AD00(
                             a1,
                             (unsigned int)&v15,
                             a3 - v7,
                             0,
                             1,
                             v4,
                             (__int64)&BcbVoid,
                             (__int64)VirtualAddress,
                             (__int64)&v14) )
  {
    v10 = v14 - v15;
    v11 = v14 - v15 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress[0], (int)v14 - (int)v15, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v8 = *((_BYTE *)KeGetCurrentThread() + 1389);
    *((_BYTE *)KeGetCurrentThread() + 1389) = 1;
    sub_14029C5B0(MemoryDescriptorList, 0LL, 0LL);
    *((_BYTE *)KeGetCurrentThread() + 1389) = v8;
    v15 = v14;
    sub_14033D860(VirtualAddress[0], v10);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    sub_14028A370((char *)BcbVoid, 0, 0);
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    v7 = v11;
    if ( a3 <= v11 )
      goto LABEL_8;
  }
  v17 = 0;
LABEL_8:
  if ( BcbVoid )
    sub_14028A370((char *)BcbVoid, 0, 0);
  return v17;
}
