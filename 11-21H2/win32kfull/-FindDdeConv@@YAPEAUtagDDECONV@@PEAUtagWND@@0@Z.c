/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0214F2C
 * Callers:
 *     ValidateDDEConvPair @ 0x1C0217870 (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C02179A0 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C0217AA8 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C0217FF8 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C0218378 (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *result; // rax

  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1u);
        result && *((struct tagWND **)result + 6) != a2;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
