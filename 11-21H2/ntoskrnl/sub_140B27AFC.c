/*
 * XREFs of sub_140B27AFC @ 0x140B27AFC
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 *     sub_140B27E30 @ 0x140B27E30 (sub_140B27E30.c)
 */

__int64 sub_140B27AFC()
{
  if ( !(_DWORD)dword_140C4E560 )
    return sub_140B27B30();
  if ( (_DWORD)dword_140C4E560 != 1 )
    KeBugCheckEx(0x33u, 4uLL, (unsigned int)dword_140C4E560, 0LL, 0LL);
  return sub_140B27E30();
}
