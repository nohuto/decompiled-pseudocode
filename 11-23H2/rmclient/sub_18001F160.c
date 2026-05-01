/*
 * XREFs of sub_18001F160 @ 0x18001F160
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_180013640 @ 0x180013640 (sub_180013640.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001F160(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *result; // rax

  v1 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = (_QWORD *)a1[1], (_QWORD *)*result != a1) )
    __fastfail(3u);
  *result = v1;
  *(_QWORD *)(v1 + 8) = result;
  *(_OWORD *)a1 = 0LL;
  return result;
}
