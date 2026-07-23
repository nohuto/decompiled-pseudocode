/*
 * XREFs of MmAllocateSecurePoolMemory @ 0x140641E3C
 * Callers:
 *     PspIumAllocateSecurePool @ 0x1405A6194 (PspIumAllocateSecurePool.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiCommitPoolMemory @ 0x1402860C0 (MiCommitPoolMemory.c)
 *     MiInitializePoolCommitPacket @ 0x140286B90 (MiInitializePoolCommitPacket.c)
 *     MiReservePoolMemory @ 0x14035AF30 (MiReservePoolMemory.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiIsSystemVaAllocated @ 0x14063744C (MiIsSystemVaAllocated.c)
 *     MmFreeSecurePoolMemory @ 0x140641FA8 (MmFreeSecurePoolMemory.c)
 */

__int64 __fastcall MmAllocateSecurePoolMemory(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        __int64 a4)
{
  ULONG_PTR v8; // rsi
  int v9; // ebx
  int SystemRegionType; // eax
  _QWORD v12[10]; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR v13; // [rsp+B0h] [rbp+8h] BYREF
  ULONG_PTR v14; // [rsp+B8h] [rbp+10h] BYREF

  v14 = BugCheckParameter3;
  v13 = BugCheckParameter2;
  memset(v12, 0, sizeof(v12));
  v8 = 0LL;
  if ( (a3 & 0x2000) == 0 || (v8 = MiReservePoolMemory(BugCheckParameter2, 15LL, BugCheckParameter3, 0)) != 0 )
  {
    if ( (a3 & 0x1000) == 0 )
      return 0;
    SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
    if ( SystemRegionType != 15 )
      KeBugCheckEx(0x1Au, 0x5400uLL, BugCheckParameter2, BugCheckParameter3, SystemRegionType);
    if ( !(unsigned int)MiIsSystemVaAllocated() )
      KeBugCheckEx(0x1Au, 0x5401uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    MiInitializePoolCommitPacket((__int64 *)&v13, (__int64)&v14, a3, 2u, 0, 0, a4, (__int64)v12);
    v9 = MiCommitPoolMemory(v12);
    if ( v9 < 0 )
    {
      if ( v8 )
        MmFreeSecurePoolMemory(v8, BugCheckParameter3);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
