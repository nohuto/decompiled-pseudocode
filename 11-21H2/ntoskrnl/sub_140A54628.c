/*
 * XREFs of sub_140A54628 @ 0x140A54628
 * Callers:
 *     sub_140865520 @ 0x140865520 (sub_140865520.c)
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 * Callees:
 *     sub_140A635B8 @ 0x140A635B8 (sub_140A635B8.c)
 *     sub_140A63600 @ 0x140A63600 (sub_140A63600.c)
 */

void sub_140A54628()
{
  __int64 v0; // rcx
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( qword_140C54C38 )
  {
    if ( !(unsigned int)sub_140A635B8(&v1) )
    {
      LOBYTE(v0) = v1 & 0xF9;
      sub_140A63600(v0);
    }
  }
}
