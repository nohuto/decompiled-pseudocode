/*
 * XREFs of ?AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ @ 0x18008D0B4
 * Callers:
 *     ?GetVisualReferenceId@CompositionIsland@Composition@UI@Windows@@UEAAJPEA_K@Z @ 0x18008D060 (-GetVisualReferenceId@CompositionIsland@Composition@UI@Windows@@UEAAJPEA_K@Z.c)
 *     ?get_Id@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEA_K@Z @ 0x180113900 (-get_Id@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     Windows::UI::Composition::UseCompositorToAllocateVisualId @ 0x18008D128 (Windows--UI--Composition--UseCompositorToAllocateVisualId.c)
 *     ?OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAPEAX@Z @ 0x1800942D4 (-OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E76D8 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?AllocateLuidForHandle@Compositor@Composition@UI@Windows@@QEAAJPEAXPEA_K@Z @ 0x18010E6D4 (-AllocateLuidForHandle@Compositor@Composition@UI@Windows@@QEAAJPEAXPEA_K@Z.c)
 *     ?CreateSharedVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z @ 0x18012702C (-CreateSharedVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::AllocateVisualId(
        Windows::UI::Composition::CompositionIsland *this)
{
  unsigned __int64 *v1; // rsi
  const char *v3; // r9
  Windows::UI::Composition::CompositorCommon *v5; // rbx
  struct Windows::UI::Composition::Visual *v6; // rax
  int SharedVisualReferenceController; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  Windows::UI::Composition::CompositorCommon *v10; // rbx
  char *v11; // rbx
  int LuidForHandle; // eax
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _LUID Luid; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned __int64 *)((char *)this + 168);
  if ( *((_QWORD *)this + 21) )
    return 0LL;
  if ( (unsigned int)Windows::UI::Composition::UseCompositorToAllocateVisualId() )
  {
    Luid = 0LL;
    v5 = (Windows::UI::Composition::CompositorCommon *)*((_QWORD *)this + 3);
    v6 = (struct Windows::UI::Composition::Visual *)(*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionIsland *))(*(_QWORD *)this + 296LL))(this);
    SharedVisualReferenceController = Windows::UI::Composition::CompositorCommon::CreateSharedVisualReferenceController(
                                        v5,
                                        v6,
                                        (struct Windows::UI::Composition::Private::VisualReferenceController **)this
                                      + 47);
    v8 = SharedVisualReferenceController;
    if ( SharedVisualReferenceController >= 0 )
    {
      v10 = (Windows::UI::Composition::CompositorCommon *)*((_QWORD *)this + 3);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)&Luid,
        0LL);
      SharedVisualReferenceController = Windows::UI::Composition::CompositorCommon::OpenSharedResourceHandle(
                                          v10,
                                          *((struct Windows::UI::Composition::ProxyObject **)this + 47),
                                          (void **)&Luid);
      v8 = SharedVisualReferenceController;
      if ( SharedVisualReferenceController >= 0 )
      {
        v11 = (char *)Luid;
        LuidForHandle = Windows::UI::Composition::Compositor::AllocateLuidForHandle(
                          *((Windows::UI::Composition::Compositor **)this + 3),
                          *(void **)&Luid,
                          v1);
        v13 = LuidForHandle;
        if ( LuidForHandle >= 0 )
        {
          if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v11);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17D,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
          (const char *)(unsigned int)LuidForHandle);
        if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v11);
        return v13;
      }
      v9 = 377LL;
    }
    else
    {
      v9 = 373LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)SharedVisualReferenceController);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&Luid);
    return v8;
  }
  if ( AllocateLocallyUniqueId(&Luid) )
  {
    *v1 = (unsigned __int64)Luid;
    return 0LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x182,
           (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
           v3);
}
