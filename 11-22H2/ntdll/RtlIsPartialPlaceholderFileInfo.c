/*
 * XREFs of RtlIsPartialPlaceholderFileInfo @ 0x18010C070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIsPartialPlaceholderFileInfo(_DWORD *a1, int a2, bool *a3)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 2:
    case 3:
      goto LABEL_13;
    case 35:
LABEL_14:
      *a3 = (*a1 & 0x440000) != 0;
      return 0LL;
    case 37:
    case 38:
    case 60:
    case 63:
    case 68:
    case 70:
LABEL_13:
      a1 += 14;
      goto LABEL_14;
  }
  result = 3221225659LL;
  if ( a2 >= 77 )
    return 3221225475LL;
  return result;
}
