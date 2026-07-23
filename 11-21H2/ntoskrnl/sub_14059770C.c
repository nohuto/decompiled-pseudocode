/*
 * XREFs of sub_14059770C @ 0x14059770C
 * Callers:
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     sub_1403867F4 @ 0x1403867F4 (sub_1403867F4.c)
 */

void sub_14059770C()
{
  __int64 *i; // rcx
  __int64 *v1; // rax
  __int64 *v2; // rbx

  if ( byte_140C53444 )
  {
    for ( i = 0LL; ; i = v2 )
    {
      v1 = (__int64 *)sub_140236710(i);
      v2 = v1;
      if ( !v1 )
        break;
      sub_1403867F4(*v1, 128);
    }
  }
}
