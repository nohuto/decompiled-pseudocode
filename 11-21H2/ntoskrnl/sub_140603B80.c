/*
 * XREFs of sub_140603B80 @ 0x140603B80
 * Callers:
 *     CarQueryReportActionForTriage @ 0x140603BD0 (CarQueryReportActionForTriage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140603B80(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *a2 != 5 )
    *a1 = *a2;
  result = (unsigned int)a2[1];
  if ( (_DWORD)result != 3 )
    a1[1] = result;
  return result;
}
