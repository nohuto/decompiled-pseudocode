/*
 * XREFs of sub_1402334A0 @ 0x1402334A0
 * Callers:
 *     sub_140233430 @ 0x140233430 (sub_140233430.c)
 *     sub_1402597A8 @ 0x1402597A8 (sub_1402597A8.c)
 *     sub_140927128 @ 0x140927128 (sub_140927128.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402334A0(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8

  result = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD **)(result + 8);
    if ( *v3 != result )
      __fastfail(3u);
    *a2 = result;
    a2[1] = v3;
    *v3 = a2;
    *(_QWORD *)(result + 8) = a2;
  }
  else
  {
    a2[1] = a2;
    *a2 = a2;
  }
  *a1 = (__int64)a2;
  return result;
}
