/*
 * XREFs of ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x180413180
 * Callers:
 *     ??$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV?$optional@_N@std@@@Z @ 0x180230730 (--$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV-$optional@_N@std@@@Z.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x18023125C (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opt.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<bool>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 1) )
    std::_Throw_bad_optional_access();
  return a1;
}
