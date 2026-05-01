/*
 * XREFs of ?OnStateChanged@SessionInfoItem@GamingAudio@@UEAAJW4_AudioSessionState@@@Z @ 0x180340520
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RebuildList@AppList@GamingAudio@@QEAAX_N@Z @ 0x1803405AC (-RebuildList@AppList@GamingAudio@@QEAAX_N@Z.c)
 */

__int64 __fastcall GamingAudio::SessionInfoItem::OnStateChanged(
        GamingAudio::SessionInfoItem *this,
        enum _AudioSessionState a2)
{
  int v3; // eax
  GamingAudio::AppList *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == AudioSessionStateExpired )
  {
    *((_DWORD *)this + 20) = 0;
    v7 = 0LL;
    v3 = Microsoft::WRL::WeakRef::As<IInspectable>((GamingAudio::SessionInfoItem *)((char *)this + 760), (__int64)&v7);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v3);
    if ( v7 )
    {
      v4 = (GamingAudio::AppList *)*((_QWORD *)this + 96);
      if ( v4 )
        GamingAudio::AppList::RebuildList(v4, 1);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  }
  return 0LL;
}
