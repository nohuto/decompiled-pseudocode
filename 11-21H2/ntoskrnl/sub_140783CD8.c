/*
 * XREFs of sub_140783CD8 @ 0x140783CD8
 * Callers:
 *     sub_14075D814 @ 0x14075D814 (sub_14075D814.c)
 *     sub_14075DA88 @ 0x14075DA88 (sub_14075DA88.c)
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 *     sub_14075DEAC @ 0x14075DEAC (sub_14075DEAC.c)
 *     sub_14075EF9C @ 0x14075EF9C (sub_14075EF9C.c)
 *     sub_140783428 @ 0x140783428 (sub_140783428.c)
 *     sub_14080EEFC @ 0x14080EEFC (sub_14080EEFC.c)
 *     sub_1409DD3C4 @ 0x1409DD3C4 (sub_1409DD3C4.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 */

_QWORD *__fastcall sub_140783CD8(_QWORD *a1, char a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)qword_140C16560; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)qword_140C16560 )
    {
      KeReleaseMutex(&Object, 0);
      return 0LL;
    }
    v5 = *a1 - i[9];
    if ( *a1 == i[9] )
      v5 = a1[1] - i[10];
    if ( !v5 )
      break;
  }
  sub_140784160((ULONG_PTR)i);
  if ( a2 )
  {
    v7 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i
      || (v8 = (_QWORD *)i[1], (_QWORD *)*v8 != i)
      || (*v8 = v7,
          v7[1] = v8,
          v9 = (_QWORD *)qword_140C16560,
          v10 = *(_QWORD *)qword_140C16560,
          *(_QWORD *)(*(_QWORD *)qword_140C16560 + 8LL) != qword_140C16560) )
    {
      __fastfail(3u);
    }
    *i = v10;
    i[1] = v9;
    *(_QWORD *)(v10 + 8) = i;
    *v9 = i;
  }
  KeReleaseMutex(&Object, 0);
  return i;
}
