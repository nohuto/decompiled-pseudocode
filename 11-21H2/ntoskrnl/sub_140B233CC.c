/*
 * XREFs of sub_140B233CC @ 0x140B233CC
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140B23400 @ 0x140B23400 (sub_140B23400.c)
 *     sub_140B23548 @ 0x140B23548 (sub_140B23548.c)
 */

__int64 sub_140B233CC()
{
  if ( !(_DWORD)dword_140C4E560 )
    return sub_140B23400();
  if ( (_DWORD)dword_140C4E560 != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)dword_140C4E560, 0LL, 0LL);
  return sub_140B23548();
}
