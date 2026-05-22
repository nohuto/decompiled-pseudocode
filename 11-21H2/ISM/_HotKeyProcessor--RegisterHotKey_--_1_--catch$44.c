/*
 * XREFs of _HotKeyProcessor::RegisterHotKey_::_1_::catch$44 @ 0x1801D454F
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801975C4 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall HotKeyProcessor::RegisterHotKey_::_1_::catch_44(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 100) = -2147024882;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(a1, a2, "HotKeyProcessor::RegisterHotKey", 300LL, 14);
  return 0LL;
}
