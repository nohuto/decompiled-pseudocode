/*
 * XREFs of ?GetSessionInfo@AppList@GamingAudio@@AEAAXV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18040D500
 * Callers:
 *     ?GetEndpointSessions@AppList@GamingAudio@@AEAAXV?$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z @ 0x18040CDE8 (-GetEndpointSessions@AppList@GamingAudio@@AEAAXV-$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1803F96F4 (--1-$unique_storage@U-$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1-SessionI.c)
 *     ??0SessionInfoItem@GamingAudio@@QEAA@XZ @ 0x18040C540 (--0SessionInfoItem@GamingAudio@@QEAA@XZ.c)
 *     ?AddItemToTempSessionMap@AppList@GamingAudio@@AEAAJK$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18040C8DC (-AddItemToTempSessionMap@AppList@GamingAudio@@AEAAJK$$QEAV-$unique_any_t@V-$unique_storage@U-$re.c)
 *     ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18040D900 (-Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV-$ComPtr@UIAudioSessionControl2@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GamingAudio::AppList::GetSessionInfo(__int64 a1, __int64 *a2)
{
  GamingAudio::SessionInfoItem *v4; // rax
  int *v5; // rbx
  int v6; // eax
  struct GamingAudio::SessionInfoItem *v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  GamingAudio *v12; // [rsp+50h] [rbp+18h] BYREF
  int *v13; // [rsp+58h] [rbp+20h]

  v4 = (GamingAudio::SessionInfoItem *)operator new(0x308uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = (int *)GamingAudio::SessionInfoItem::SessionInfoItem(v4);
  else
    v5 = 0LL;
  v12 = (GamingAudio *)v5;
  v13 = v5;
  if ( v5 )
  {
    v6 = GamingAudio::SessionInfoItem::Init(v5, a1, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D4,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v6);
    v13 = 0LL;
    v12 = (GamingAudio *)v5;
    if ( v5[20] )
    {
      v9 = GamingAudio::AppList::AddItemToTempSessionMap(a1, v5[12], &v12, v8);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2DD,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
          (const char *)(unsigned int)v9);
    }
    wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>(
      &v12,
      v7);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D0,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
      (const char *)0x80004003LL);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
}
