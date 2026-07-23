/*
 * XREFs of InbvDisplayString @ 0x1403BF7D0
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall InbvDisplayString(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140C54D0C )
    return 0;
  if ( qword_140C54D18 )
  {
    sub_14042A5E0(&v3, a2);
    a1 = v3;
  }
  if ( qword_140C54D10 && *(_QWORD *)(qword_140C54D10 + 40) )
    return sub_14042A5E0(a1, a2);
  else
    return 0;
}
