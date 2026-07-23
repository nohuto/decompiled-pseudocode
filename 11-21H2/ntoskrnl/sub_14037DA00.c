/*
 * XREFs of sub_14037DA00 @ 0x14037DA00
 * Callers:
 *     sub_140237720 @ 0x140237720 (sub_140237720.c)
 *     sub_14037D1B0 @ 0x14037D1B0 (sub_14037D1B0.c)
 *     sub_14037D8B8 @ 0x14037D8B8 (sub_14037D8B8.c)
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 *     sub_140393778 @ 0x140393778 (sub_140393778.c)
 *     sub_1405F72A8 @ 0x1405F72A8 (sub_1405F72A8.c)
 * Callees:
 *     sub_140262ED4 @ 0x140262ED4 (sub_140262ED4.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14037DCC8 @ 0x14037DCC8 (sub_14037DCC8.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     sub_1405FC690 @ 0x1405FC690 (sub_1405FC690.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14037DA00(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3, __int64 a4, int a5)
{
  PVOID PoolWithTag; // rax
  PVOID v9; // rbx
  void *v11; // rax
  ULONG Tag; // [rsp+58h] [rbp+10h]

  if ( a2 >= 5 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
    {
      v9 = *(PVOID *)(a4 + 24);
LABEL_7:
      if ( v9 )
        return (__int64)v9;
      goto LABEL_16;
    }
    PoolWithTag = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000010u);
LABEL_6:
    v9 = PoolWithTag;
    goto LABEL_7;
  }
  switch ( a2 )
  {
    case 2:
      PoolWithTag = (PVOID)sub_14037DCC8((unsigned __int64)*((unsigned __int16 *)SpinLock + 46) << 12);
      goto LABEL_6;
    case 3:
      if ( (unsigned int)sub_140262ED4((unsigned __int64)*((unsigned __int16 *)SpinLock + 47) << 12, 1, 0) )
        return -8LL;
      break;
    case 4:
      break;
    default:
      Tag = 810708339;
      HIBYTE(Tag) = a2 + 48;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)SpinLock + a2 + 44), Tag);
      goto LABEL_6;
  }
  v9 = 0LL;
LABEL_16:
  if ( a5 )
  {
    v11 = (void *)sub_1405FC690(SpinLock);
    v9 = v11;
    if ( a2 >= 5 )
      MmMapLockedPagesWithReservedMapping(v11, 0x6D526D73u, (PMDL)a4, MmCached);
  }
  return (__int64)v9;
}
