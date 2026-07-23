/*
 * XREFs of sub_140285868 @ 0x140285868
 * Callers:
 *     sub_1402857B4 @ 0x1402857B4 (sub_1402857B4.c)
 *     sub_14053B160 @ 0x14053B160 (sub_14053B160.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_DWORD *__fastcall sub_140285868(unsigned int a1)
{
  _DWORD *v1; // r8
  _DWORD *v2; // r9

  v1 = 0LL;
  v2 = *(_DWORD **)(qword_140C49AC0 + 8LL * a1);
  if ( v2 )
  {
    ++v2[1];
    v1 = v2;
    if ( *v2 != a1 )
      KeBugCheckEx(0x34u, 0x13FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v1;
}
