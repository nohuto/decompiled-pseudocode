/*
 * XREFs of ??1BroadcastDVRActiveAppInfo@@QEAA@XZ @ 0x180192B90
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UBroadcastDVRActiveAppInfo@@@std@@EEAAXXZ @ 0x180192B80 (-_Destroy@-$_Ref_count_obj2@UBroadcastDVRActiveAppInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall BroadcastDVRActiveAppInfo::~BroadcastDVRActiveAppInfo(BroadcastDVRActiveAppInfo *this)
{
  HSTRING v2; // rcx

  std::wstring::_Tidy_deallocate((__int64)this + 72);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 8);
  v2 = (HSTRING)*((_QWORD *)this + 6);
  if ( v2 )
    WindowsDeleteString(v2);
}
