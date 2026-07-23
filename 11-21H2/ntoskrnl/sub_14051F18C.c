/*
 * XREFs of sub_14051F18C @ 0x14051F18C
 * Callers:
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14051F18C(char a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( qword_140C4ABB8 )
    return sub_14042A5E0(3LL, &v2);
  else
    return 3221225659LL;
}
