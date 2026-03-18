/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x140875FD8
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x140875EB0 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x140876020 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140A6BD30 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140A6D080 (DrvDbSetDriverInfFileMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140876BB8 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
