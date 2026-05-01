/*
 * XREFs of PremultiplyAlphaChannel @ 0x18022A250
 * Callers:
 *     ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x180498830 (-ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802DB000 (_GetProcFromComCtl32.c)
 */

__int64 (__fastcall *__fastcall PremultiplyAlphaChannel(__int64 a1))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, _QWORD))qword_1807B2800;
  if ( qword_1807B2800 == -1 )
  {
    GetProcFromComCtl32(&qword_1807B2800, 392LL);
    result = (__int64 (__fastcall *)(__int64, _QWORD))qword_1807B2800;
  }
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, 0LL);
  return result;
}
