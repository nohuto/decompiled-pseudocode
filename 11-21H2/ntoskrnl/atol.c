/*
 * XREFs of atol @ 0x1403E0CE0
 * Callers:
 *     sub_1403DF0F4 @ 0x1403DF0F4 (sub_1403DF0F4.c)
 *     atoi @ 0x1403E0CC0 (atoi.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     sub_1403E0898 @ 0x1403E0898 (sub_1403E0898.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return sub_1403E0898((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
