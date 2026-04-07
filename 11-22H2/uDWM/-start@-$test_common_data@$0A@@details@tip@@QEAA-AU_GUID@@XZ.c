/*
 * XREFs of ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800F3B04
 * Callers:
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5B60 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180016D0C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800583DC (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2BC4 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     TestClose @ 0x1800F45D4 (TestClose.c)
 */

_OWORD *__fastcall tip::details::test_common_data<0>::start(__int64 a1, _OWORD *a2)
{
  char v4; // bp
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int *v8; // rax
  unsigned int v9; // esi
  char v10; // r15
  unsigned int v11; // r13d
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  __int64 v14; // r15
  __int64 v15; // rsi
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-68h] BYREF
  void *v19; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-48h]

  v4 = 0;
  LODWORD(lpCriticalSection) = 0;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 16));
  if ( (*(_DWORD *)(a1 + 56) & 0x800) != 0 )
  {
    v6 = (_QWORD *)tip::details::test_common_data<0>::data((__int64 **)a1, (__int64)&v19, 1u);
    v7 = v6;
    if ( v6[3] >= 0x10uLL )
      v7 = (_QWORD *)*v6;
    v4 = 1;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *(int **)(a1 + 8);
  v9 = v8[1];
  v10 = *((_BYTE *)v8 + 16);
  v11 = *v8;
  ProcAddress = (FARPROC)`TestCreate'::`2'::s_pfnTestCreate;
  if ( `TestCreate'::`2'::s_pfnTestCreate
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestCreate"),
        (`TestCreate'::`2'::s_pfnTestCreate = (__int64)ProcAddress) != 0) )
  {
    LOBYTE(v5) = v10;
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, _QWORD *, __int64))ProcAddress)(
            v11,
            0LL,
            v5,
            v9,
            v7,
            a1 + 112);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = *(_QWORD *)(a1 + 152);
  if ( v15 )
  {
    LastError = GetLastError();
    TestClose(v15);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 152) = v14;
  if ( (v4 & 1) != 0 && v20 >= 0x10 )
    std::_Deallocate<16,0>(v19, v20 + 1);
  *(_DWORD *)(a1 + 160) = 1;
  *a2 = *(_OWORD *)(a1 + 112);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return a2;
}
