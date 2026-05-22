/*
 * XREFs of __lambda_2e17bef57c72db371333aa9a3de53833_::operator()_::_1_::catch$16 @ 0x1801D2488
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801975C4 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall _lambda_2e17bef57c72db371333aa9a3de53833_::operator()_::_1_::catch_16(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx

  v2 = *(_DWORD **)(*(_QWORD *)(a2 + 64) + 48LL);
  *v2 = -2147024882;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(
      (__int64)v2,
      a2,
      "HotKeyProcessor::RegisterHotKey::<lambda_2e17bef57c72db371333aa9a3de53833>::operator ()",
      268LL,
      14);
  return 0LL;
}
