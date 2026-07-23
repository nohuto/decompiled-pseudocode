/*
 * XREFs of sub_14038A10C @ 0x14038A10C
 * Callers:
 *     sub_140376F58 @ 0x140376F58 (sub_140376F58.c)
 *     sub_140389F90 @ 0x140389F90 (sub_140389F90.c)
 *     sub_14050BA34 @ 0x14050BA34 (sub_14050BA34.c)
 *     sub_140520330 @ 0x140520330 (sub_140520330.c)
 *     sub_14052B860 @ 0x14052B860 (sub_14052B860.c)
 *     sub_14052C880 @ 0x14052C880 (sub_14052C880.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14038A10C(int a1, __int64 a2, _QWORD *a3)
{
  __int64 *i; // rax

  for ( i = (__int64 *)qword_140C4D0C0; i != &qword_140C4D0C0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) == a1 )
    {
      *a3 = i - 1;
      return 0LL;
    }
  }
  return 3221225659LL;
}
