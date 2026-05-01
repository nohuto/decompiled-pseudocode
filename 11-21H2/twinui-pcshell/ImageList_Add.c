/*
 * XREFs of ImageList_Add @ 0x1802DAD84
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x18057B584 (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x1802DB000 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_Add(HIMAGELIST himl, HBITMAP hbmImage, HBITMAP hbmMask)
{
  __int64 (__fastcall *v3)(HIMAGELIST, HBITMAP, _QWORD); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, HBITMAP, _QWORD))qword_1807B2838;
  if ( qword_1807B2838 == -1 )
  {
    GetProcFromComCtl32(&qword_1807B2838, "ImageList_Add");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, HBITMAP, _QWORD))qword_1807B2838;
  }
  if ( v3 )
    return v3(himl, hbmImage, 0LL);
  else
    return -1;
}
