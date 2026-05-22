/*
 * XREFs of ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x1800F9BC8
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800F9668 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003B378 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PointerTypeToInputType@@YA?AW4InputType@@K_N@Z @ 0x1801406C8 (-PointerTypeToInputType@@YA-AW4InputType@@K_N@Z.c)
 *     ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x1801B2EF0 (-GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InitializeInputInfoWithPointerInfo(
        const struct tagPOINTER_INFO_UNION *a1,
        __int64 a2,
        struct PointerInputInfo *a3)
{
  int v4; // eax
  _DWORD *v5; // r8
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  KeyboardModifierState *v9; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)a3 + 1) = *((_DWORD *)a1 + 4);
  *((_DWORD *)a3 + 2) = *((_DWORD *)a1 + 16);
  *((_QWORD *)a3 + 2) = *((_QWORD *)a1 + 10);
  v4 = PointerTypeToInputType(*(unsigned int *)a1, a2);
  *v5 = v4;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v9);
  v6 = KeyboardModifierState::Create(&v9);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7EA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v6,
      v7);
  KeyboardModifierState::GetCurrentKeyboardModifierState(v9, (unsigned int *)a3 + 58);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v9);
}
