/*
 * XREFs of sub_18008ED60 @ 0x18008ED60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

__int64 __fastcall sub_18008ED60(_QWORD *a1)
{
  __int128 v3; // [rsp+20h] [rbp-10h] BYREF

  v3 = 0LL;
  sub_180011020(a1 + 225, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010530(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011020(a1 + 227, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010530(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011020(a1 + 229, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010530(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011020(a1 + 235, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010530(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011020(a1 + 237, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010530(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011020(a1 + 239, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010530(*((__int64 *)&v3 + 1));
  return sub_18005D610((__int64)a1);
}
