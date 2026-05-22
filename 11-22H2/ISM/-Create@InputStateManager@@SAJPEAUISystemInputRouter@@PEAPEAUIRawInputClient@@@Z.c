/*
 * XREFs of ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180036E2C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004E45C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x1800A9554 (--0DeviceInputHost@@AEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180042A14 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x18004FE08 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( *(_DWORD *)ISMScenarios::s_instance )
  {
    if ( *(_DWORD *)ISMScenarios::s_instance != 1 || a2 )
      goto LABEL_5;
    v11 = 220LL;
LABEL_13:
    v12 = -2147024809;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)v12);
    return v12;
  }
  if ( !a1 || !a2 )
  {
    v11 = 216LL;
    goto LABEL_13;
  }
LABEL_5:
  v6 = (InputStateManager *)RefCountedObject::operator new(0xD0uLL);
  if ( v6 )
    v7 = InputStateManager::InputStateManager(v6, a1);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v12 = -2147024882;
    v11 = 227LL;
    goto LABEL_15;
  }
  v8 = InputStateManager::Initialize(v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    *a2 = v7;
    return 0LL;
  }
}
