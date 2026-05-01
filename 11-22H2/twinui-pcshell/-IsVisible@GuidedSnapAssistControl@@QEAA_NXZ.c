/*
 * XREFs of ?IsVisible@GuidedSnapAssistControl@@QEAA_NXZ @ 0x18068822C
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18066A3A0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ @ 0x18066B218 (-IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall GuidedSnapAssistControl::IsVisible(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // eax
  bool v4; // bl
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+38h] [rbp+10h]

  v2 = this + 5;
  AcquireSRWLockShared(this + 5);
  v9 = v2;
  v3 = (*(__int64 (__fastcall **)(PVOID, __int64, char *))(*(_QWORD *)this[3].Ptr + 24LL))(this[3].Ptr, 4LL, &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      (const char *)(unsigned int)v3,
      v6);
  v4 = (v8 & 4) != 0 && !LOBYTE(this[6].Ptr);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v4;
}
