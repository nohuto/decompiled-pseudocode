/*
 * XREFs of ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800428A8
 * Callers:
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18002B9C4 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800423D0 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180042548 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180042758 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800C7C00 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800DDEC4 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800E1470 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800E94F0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1801182AC (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180118EB0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180119508 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801FB5C0 (-MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x1801FB9B0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 * Callees:
 *     ??0MPC3DStateHelper@@AEAA@XZ @ 0x18001ACDC (--0MPC3DStateHelper@@AEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18001ADB0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct MPC3DStateHelper *MPC3DStateHelper::GetInstance(void)
{
  const char *v0; // r9
  struct MPC3DStateHelper *result; // rax
  void *v2; // rdx
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  MPC3DStateHelper *v7; // [rsp+48h] [rbp+10h]

  if ( !__std_init_once_begin_initialize(&MPC3DStateHelper::s_singletonCreated, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v3 = &MPC3DStateHelper::s_singletonCreated;
    v7 = (MPC3DStateHelper *)operator new(0x58uLL);
    MPC3DStateHelper::s_instance = MPC3DStateHelper::MPC3DStateHelper(v7);
    wil::details::SetEvent((wil::details *)MPC3DStateHelper::s_isInstanceCreatedEvent, v2);
    v4 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v3);
  }
  result = MPC3DStateHelper::s_instance;
  if ( !MPC3DStateHelper::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v0);
  return result;
}
