/*
 * XREFs of __lambda_9193c85b91a90ecd300d0af0c9084680_::operator()_::_1_::catch$16 @ 0x180078560
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801C2D98 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall _lambda_9193c85b91a90ecd300d0af0c9084680_::operator()_::_1_::catch_16(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx

  v2 = *(_DWORD **)(*(_QWORD *)(a2 + 80) + 48LL);
  *v2 = -2147024882;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(
      (_DWORD)v2,
      a2,
      (unsigned int)"HotKeyProcessor::RegisterHotKey::<lambda_9193c85b91a90ecd300d0af0c9084680>::operator ()",
      268,
      14);
  return 0LL;
}
