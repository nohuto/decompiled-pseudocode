/*
 * XREFs of sub_1405518C0 @ 0x1405518C0
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 *     sub_1405517A0 @ 0x1405517A0 (sub_1405517A0.c)
 *     sub_140551AA0 @ 0x140551AA0 (sub_140551AA0.c)
 */

char __fastcall sub_1405518C0(__int64 a1)
{
  __int64 v2; // r8

  if ( dword_140C54D50 )
    return 0;
  sub_1405517A0();
  if ( byte_140C54D4A )
    VidDisplayString(a1);
  v2 = -1LL;
  do
    ++v2;
  while ( *(_BYTE *)(a1 + v2) );
  HeadlessDispatch(3LL, a1, v2 + 1, 0LL, 0LL);
  sub_140551AA0();
  return 1;
}
