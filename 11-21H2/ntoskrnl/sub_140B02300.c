/*
 * XREFs of sub_140B02300 @ 0x140B02300
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 *     sub_140B24C44 @ 0x140B24C44 (sub_140B24C44.c)
 *     sub_140B313B8 @ 0x140B313B8 (sub_140B313B8.c)
 */

char __fastcall sub_140B02300(int a1, void *a2)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return sub_140AFD7A4(a2);
  v2 = a1 - 1;
  if ( !v2 )
    return sub_140B1E0A8();
  v3 = v2 - 1;
  if ( !v3 )
    return sub_140B24C44();
  if ( v3 != 1 )
    KeBugCheckEx(0x33u, 1uLL, (unsigned int)dword_140C4E560, 0LL, 0LL);
  return sub_140B313B8();
}
