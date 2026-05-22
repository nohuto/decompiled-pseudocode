/*
 * XREFs of ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x180027838
 * Callers:
 *     CreateSystemInputHost @ 0x1800276E0 (CreateSystemInputHost.c)
 * Callees:
 *     ?Create@ISMTestMode@@SAX_N@Z @ 0x1800276F8 (-Create@ISMTestMode@@SAX_N@Z.c)
 *     ?Create@ISMScenarios@@SAXW4ISMScenario@@@Z @ 0x18002773C (-Create@ISMScenarios@@SAXW4ISMScenario@@@Z.c)
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180027784 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18002792C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::Create(void *a1, struct ISystemInputHost **a2, __int64 a3, const char *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, struct ISystemInputHost **); // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  OneCoreUAPInputHost *v10; // rax
  OneCoreUAPInputHost *v11; // rbx
  OneCoreUAPInputHost *v12; // rcx
  int v13; // ebx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v13 = -2147024809;
    v15 = 154LL;
    goto LABEL_11;
  }
  v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ISystemInputHost **))&OneCoreUAPInputHost::s_pInputHost;
  if ( !*(_QWORD *)&OneCoreUAPInputHost::s_pInputHost )
  {
    ISMTestMode::Create(0LL, (__int64)a2, a3, a4);
    ISMScenarios::Create(0, v7, v8, v9);
    v10 = (OneCoreUAPInputHost *)malloc(0x68uLL);
    v11 = v10;
    if ( v10 )
    {
      memset_0(v10, 0, 0x68uLL);
      v10 = OneCoreUAPInputHost::OneCoreUAPInputHost(v11);
      *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost = v10;
      if ( v10 )
      {
        v13 = OneCoreUAPInputHost::Initialize(v12, a1);
        if ( v13 >= 0 )
        {
          v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ISystemInputHost **))&OneCoreUAPInputHost::s_pInputHost;
          goto LABEL_7;
        }
        v10 = *(OneCoreUAPInputHost **)&OneCoreUAPInputHost::s_pInputHost;
LABEL_15:
        if ( v10 )
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 2) + 24LL))((__int64)v10 + 16, 1LL);
        v15 = 177LL;
        goto LABEL_11;
      }
    }
    else
    {
      *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost = 0LL;
    }
    v13 = -2147024882;
    goto LABEL_15;
  }
LABEL_7:
  v13 = (**v6)(v6, &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953, a2);
  if ( v13 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&OneCoreUAPInputHost::s_pInputHost + 16LL))(*(_QWORD *)&OneCoreUAPInputHost::s_pInputHost);
    return 0LL;
  }
  v15 = 182LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
    (const char *)(unsigned int)v13,
    v16);
  return (unsigned int)v13;
}
