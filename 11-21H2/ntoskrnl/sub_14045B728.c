/*
 * XREFs of sub_14045B728 @ 0x14045B728
 * Callers:
 *     sub_14056F330 @ 0x14056F330 (sub_14056F330.c)
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

_QWORD *__fastcall sub_14045B728(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  struct _KEVENT *v4; // rcx

  while ( 1 )
  {
    result = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)result[1] != a1 || (v3 = *result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = *(struct _KEVENT **)result[17];
    if ( v4 )
      KeSetEvent(v4, 0, 0);
  }
  return result;
}
