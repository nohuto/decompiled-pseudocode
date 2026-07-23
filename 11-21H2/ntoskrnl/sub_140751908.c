/*
 * XREFs of sub_140751908 @ 0x140751908
 * Callers:
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_140751880 @ 0x140751880 (sub_140751880.c)
 * Callees:
 *     sub_14075197C @ 0x14075197C (sub_14075197C.c)
 */

PVOID *__fastcall sub_140751908(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned int v4; // ecx
  char *i; // r8
  __int64 v6; // rdx

  v2 = 0LL;
  if ( !(unsigned __int8)sub_14075197C(a1) )
    return &qword_140C22420;
  v4 = 0;
  for ( i = (char *)&off_140008168; ; i += 8 )
  {
    v6 = **(_QWORD **)i - *a1;
    if ( !v6 )
      v6 = *(_QWORD *)(*(_QWORD *)i + 8LL) - a1[1];
    if ( !v6 )
      break;
    if ( ++v4 >= 2 )
      return (PVOID *)v2;
  }
  return (PVOID *)((char *)&unk_140C223E0 + 16 * v4);
}
