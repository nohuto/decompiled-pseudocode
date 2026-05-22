/*
 * XREFs of ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x180036CD4
 * Callers:
 *     CreateSystemInputHost @ 0x1800559F0 (CreateSystemInputHost.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180035E1C (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004E45C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?Create@ISMTestMode@@SAX_N@Z @ 0x18005490C (-Create@ISMTestMode@@SAX_N@Z.c)
 *     ?Create@ISMScenarios@@SAXW4ISMScenario@@@Z @ 0x180054950 (-Create@ISMScenarios@@SAXW4ISMScenario@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::Create(void *a1, struct ISystemInputHost **a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, struct ISystemInputHost **); // rcx
  OneCoreUAPInputHost *v5; // rax
  OneCoreUAPInputHost *v6; // rcx
  int v7; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v7 = -2147024809;
    v9 = 162LL;
    goto LABEL_11;
  }
  v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ISystemInputHost **))&OneCoreUAPInputHost::s_pInputHost;
  if ( !*(_QWORD *)&OneCoreUAPInputHost::s_pInputHost )
  {
    ISMTestMode::Create(0);
    ISMScenarios::Create(0LL);
    v5 = (OneCoreUAPInputHost *)RefCountedObject::operator new(0x78uLL);
    if ( v5 )
    {
      v5 = OneCoreUAPInputHost::OneCoreUAPInputHost(v5);
      *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost = v5;
      if ( v5 )
      {
        v7 = OneCoreUAPInputHost::Initialize(v6, a1);
        if ( v7 >= 0 )
        {
          v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ISystemInputHost **))&OneCoreUAPInputHost::s_pInputHost;
          goto LABEL_7;
        }
        v5 = *(OneCoreUAPInputHost **)&OneCoreUAPInputHost::s_pInputHost;
LABEL_15:
        if ( v5 )
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v5 + 3) + 24LL))((__int64)v5 + 24, 1LL);
        v9 = 185LL;
        goto LABEL_11;
      }
    }
    else
    {
      *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost = 0LL;
    }
    v7 = -2147024882;
    goto LABEL_15;
  }
LABEL_7:
  v7 = (**v4)(v4, &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953, a2);
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&OneCoreUAPInputHost::s_pInputHost + 16LL))(*(_QWORD *)&OneCoreUAPInputHost::s_pInputHost);
    return 0LL;
  }
  v9 = 190LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
