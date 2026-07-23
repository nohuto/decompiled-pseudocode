/*
 * XREFs of sub_140B1E13C @ 0x140B1E13C
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 *     sub_140B1E170 @ 0x140B1E170 (sub_140B1E170.c)
 */

char sub_140B1E13C()
{
  if ( !(_DWORD)dword_140C4E560 )
    return sub_140B1E170();
  if ( (_DWORD)dword_140C4E560 != 1 )
    KeBugCheckEx(0x33u, 0LL, (unsigned int)dword_140C4E560, 0LL, 0LL);
  return sub_140847FF0();
}
