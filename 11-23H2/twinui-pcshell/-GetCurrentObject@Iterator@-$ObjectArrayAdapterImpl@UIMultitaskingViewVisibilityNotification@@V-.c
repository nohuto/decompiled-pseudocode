/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V?$ComPtr@UIMultitaskingViewVisibilityNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180050A10
 * Callers:
 *     _lambda_5dc897b16d2ec62a0cb4f80858627a7d_::operator() @ 0x1800508A0 (_lambda_5dc897b16d2ec62a0cb4f80858627a7d_--operator().c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V?$ComPtr@UIMultitaskingViewVisibilityNotification@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1800509E0 (--0Iterator@-$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V-$ComPtr@UIMulti.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IMultitaskingViewVisibilityNotification,Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityNotification>>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  __int64 *v1; // rbp
  unsigned int *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a1 + 1);
  v3 = (unsigned int *)*((_QWORD *)a1 + 2);
  result = v3[2];
  if ( *a1 < (unsigned int)result )
  {
    do
    {
      v5 = *(_QWORD *)v3;
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v3 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v1);
      result = v6(v5, *a1, &GUID_c59a7a3c_0676_4526_8192_5d0bf9b89b95, v1);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (unsigned int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result,
        v7);
      ++*a1;
      v3 = (unsigned int *)*((_QWORD *)a1 + 2);
      result = *a1;
    }
    while ( (unsigned int)result < v3[2] );
  }
  return result;
}
