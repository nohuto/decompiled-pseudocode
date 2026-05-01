/*
 * XREFs of ImageList_Add @ 0x180390DFC
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x18063B250 (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180391084 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_Add(HIMAGELIST himl, HBITMAP hbmImage, HBITMAP hbmMask)
{
  __int64 (__fastcall *v3)(HIMAGELIST, HBITMAP, _QWORD); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, HBITMAP, _QWORD))qword_18098C450;
  if ( qword_18098C450 == -1 )
  {
    GetProcFromComCtl32(&qword_18098C450, "ImageList_Add");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, HBITMAP, _QWORD))qword_18098C450;
  }
  if ( v3 )
    return v3(himl, hbmImage, 0LL);
  else
    return -1;
}
