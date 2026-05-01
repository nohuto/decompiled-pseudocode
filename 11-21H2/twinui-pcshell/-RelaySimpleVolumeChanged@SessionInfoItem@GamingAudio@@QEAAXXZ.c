/*
 * XREFs of ?RelaySimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x180340610
 * Callers:
 *     ?HandleSimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXMHPEBU_GUID@@@Z @ 0x18033FC10 (-HandleSimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXMHPEBU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleSessionItemSimpleVolumeChanged@AppList@GamingAudio@@QEAAXH@Z @ 0x18033FB70 (-HandleSessionItemSimpleVolumeChanged@AppList@GamingAudio@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingAudio::SessionInfoItem::RelaySimpleVolumeChanged(GamingAudio::SessionInfoItem *this)
{
  int v2; // eax
  GamingAudio::AppList *v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((GamingAudio::SessionInfoItem *)((char *)this + 760), (__int64)&v5);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
      (const char *)(unsigned int)v2);
  if ( v5 )
  {
    v3 = (GamingAudio::AppList *)*((_QWORD *)this + 96);
    if ( v3 )
      GamingAudio::AppList::HandleSessionItemSimpleVolumeChanged(v3, *((_DWORD *)this + 12));
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
}
