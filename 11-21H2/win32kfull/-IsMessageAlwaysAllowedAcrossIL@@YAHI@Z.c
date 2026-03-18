/*
 * XREFs of ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     NtUserPostMessage @ 0x1C0054740 (NtUserPostMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00673C0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00A70D8 (_ChangeWindowMessageFilterEx.c)
 *     _PostTransformableMessageIL @ 0x1C00A735C (_PostTransformableMessageIL.c)
 *     NtUserPostThreadMessage @ 0x1C00AAB70 (NtUserPostThreadMessage.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0119178 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01DD244 (_PostMessageCheckIL.c)
 * Callees:
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C0219760 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall IsMessageAlwaysAllowedAcrossIL(unsigned int a1)
{
  unsigned int v1; // r10d

  v1 = 0;
  if ( a1 <= 0x308 )
  {
    if ( a1 != 776 && a1 && a1 != 3 && a1 != 5 && (a1 <= 0xC || a1 > 0xE && a1 != 127 && a1 != 51 && a1 != 773) )
      return v1;
    return 1;
  }
  if ( a1 <= 0x30C )
    goto LABEL_21;
  if ( a1 == 781 )
    return 1;
  if ( a1 == 782 )
  {
LABEL_21:
    LOBYTE(v1) = (unsigned int)IsFmtBlocked(0x80u) == 0;
    return v1;
  }
  if ( a1 == 787 || a1 > 0x319 && (a1 == 799 || a1 <= 0x31B) )
    return 1;
  return v1;
}
