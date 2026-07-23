/*
 * XREFs of sub_140B56120 @ 0x140B56120
 * Callers:
 *     sub_140AAE560 @ 0x140AAE560 (sub_140AAE560.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall sub_140B56120(int a1, const wchar_t **a2)
{
  const wchar_t *result; // rax

  switch ( a1 )
  {
    case 2:
      result = L"Meiryo Console";
      break;
    case 1:
      result = L"Malgun Gothic Console";
      break;
    case 3:
      result = L"Microsoft YaHei Console";
      break;
    default:
      result = L"Microsoft JhengHei Console";
      if ( a1 != 4 )
        result = L"Segoe Mono Boot";
      break;
  }
  *a2 = result;
  return result;
}
