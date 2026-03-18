/*
 * XREFs of ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0
 * Callers:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003D250 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     HmgAlloc @ 0x1C003DD30 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0045760 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0046E44 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0046F30 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgModifyHandleType @ 0x1C0060BA0 (HmgModifyHandleType.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0236010 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetEtwGdiHandleType(unsigned __int8 a1)
{
  __int64 result; // rax

  result = a1;
  switch ( a1 )
  {
    case 5u:
      return 5LL;
    case 4u:
      return 4LL;
    case 1u:
      return 1LL;
  }
  if ( a1 != 8 )
  {
    switch ( a1 )
    {
      case 0u:
        result = 0LL;
        break;
      case 2u:
        result = 2LL;
        break;
      case 3u:
        result = 3LL;
        break;
      case 6u:
        result = 6LL;
        break;
      case 7u:
        result = 7LL;
        break;
      case 9u:
        result = 9LL;
        break;
      case 0xAu:
        result = 10LL;
        break;
      case 0xBu:
        result = 11LL;
        break;
      case 0xCu:
        result = 12LL;
        break;
      case 0xDu:
        result = 13LL;
        break;
      case 0xEu:
        result = 14LL;
        break;
      case 0xFu:
        result = 15LL;
        break;
      case 0x10u:
        result = 16LL;
        break;
      case 0x11u:
        result = 17LL;
        break;
      case 0x12u:
        result = 18LL;
        break;
      case 0x13u:
        result = 19LL;
        break;
      case 0x14u:
        result = 20LL;
        break;
      case 0x15u:
        result = 21LL;
        break;
      case 0x16u:
        result = 22LL;
        break;
      case 0x17u:
        result = 23LL;
        break;
      case 0x18u:
        result = 24LL;
        break;
      case 0x19u:
        result = 25LL;
        break;
      case 0x1Au:
        result = 26LL;
        break;
      case 0x1Bu:
        result = 27LL;
        break;
      case 0x1Cu:
        result = 28LL;
        break;
      case 0x1Du:
        result = 29LL;
        break;
      case 0x1Eu:
        result = 30LL;
        break;
      default:
        result = 0xFFFFFFFFLL;
        break;
    }
  }
  return result;
}
