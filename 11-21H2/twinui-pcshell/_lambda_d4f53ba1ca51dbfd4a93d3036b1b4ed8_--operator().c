/*
 * XREFs of _lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator() @ 0x1800F2F98
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::Run @ 0x1800F2F10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___--Run.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F3074 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator()(unsigned int *a1)
{
  __int64 v1; // rbx
  bool v3; // zf
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  const char *v8; // r9
  int v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *((_QWORD *)a1 + 2);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v1 + 120) + 112LL))(*(_QWORD *)(v1 + 120), *a1, a1[1]);
  v3 = (a1[1] & 0x20) == 0;
  v4 = _mm_cvtsi128_si32((__m128i)0LL);
  v12 = 0LL;
  LOBYTE(v5) = 1;
  if ( !v3 )
    v4 = 5;
  LODWORD(v12) = v4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
    v5);
  if ( (a1[1] & 0x100) != 0 )
    DWORD1(v12) |= 0x1E0u;
  v9 = 19;
  v10 = &v12;
  v11 = 16;
  if ( !(unsigned int)SetWindowCompositionAttribute(*(_QWORD *)(v1 + 128), &v9, v6, v7) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x542,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      v8);
  if ( *((_BYTE *)a1 + 8) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(v1 + 128),
      0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}
