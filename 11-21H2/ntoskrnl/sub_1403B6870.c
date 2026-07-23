/*
 * XREFs of sub_1403B6870 @ 0x1403B6870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403B6870(int *a1)
{
  int v1; // r8d
  unsigned __int16 v2; // dx
  unsigned __int16 v3; // cx
  unsigned __int8 v4; // al

  v1 = *a1;
  v2 = 32;
  if ( *a1 != 45056 )
    v2 = 160;
  __outbyte(v2, 0x11u);
  v3 = 33;
  if ( v1 != 45056 )
    v3 = 161;
  __outbyte(v3, 0xD8u);
  v4 = 4;
  if ( v1 != 45056 )
    v4 = 2;
  __outbyte(v3, v4);
  __outbyte(v3, 1u);
  __outbyte(v3, 0xFFu);
  return 0LL;
}
