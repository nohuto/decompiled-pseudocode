/*
 * XREFs of ?SetBitmap@CBitmapSourceProxy@@QEAAJPEAUIWICBitmap@@@Z @ 0x1800A8214
 * Callers:
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18001A93C (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapSourceProxy::SetBitmap(CBitmapSourceProxy *this, struct IWICBitmap *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IWICBitmap *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 280LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
