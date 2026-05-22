/*
 * XREFs of ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180027BDC
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18002792C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18007FF60 (--0DeviceInputHost@@AEAA@XZ.c)
 * Callees:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180027C9C (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18003AA20 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::Create(
        struct ISystemInputRouter *a1,
        struct IRawInputClient **a2,
        __int64 a3,
        const char *a4)
{
  InputStateManager *v6; // rax
  InputStateManager *v7; // rbx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    if ( a1 && a2 )
      goto LABEL_5;
    v11 = 216LL;
LABEL_14:
    v12 = -2147024809;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)v12,
      v13);
    return v12;
  }
  if ( *(_DWORD *)ISMScenarios::s_instance == 1 && !a2 )
  {
    v11 = 220LL;
    goto LABEL_14;
  }
LABEL_5:
  v6 = (InputStateManager *)malloc(0xC8uLL);
  v7 = v6;
  if ( v6 )
    memset_0(v6, 0, 0xC8uLL);
  if ( v7 )
    v7 = InputStateManager::InputStateManager(v7, a1);
  if ( !v7 )
  {
    v12 = -2147024882;
    v11 = 227LL;
    goto LABEL_16;
  }
  v8 = InputStateManager::Initialize(v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v8,
      v13);
    return v9;
  }
  else
  {
    *a2 = v7;
    return 0LL;
  }
}
