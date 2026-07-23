/*
 * XREFs of sub_14025D280 @ 0x14025D280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025D280(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 256 )
    {
      *a2 = 393223;
      result = 0LL;
      *a3 = 0;
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    *a2 = 61223;
    result = 0LL;
    *a3 = 0;
  }
  return result;
}
