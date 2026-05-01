/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_7406a721fa5d252aee7de31cc0a40e84___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x18040B400
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f169cd34eaeb977956750f8529fc5721___ @ 0x180408CD8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f169cd34eaeb977956750f8529fc5721.c)
 *     wil::details::ScopeExitFn__lambda_f1189d7105ff6ff46378f002a687ebe3___::_ScopeExitFn__lambda_f1189d7105ff6ff46378f002a687ebe3___ @ 0x1804092AC (wil--details--ScopeExitFn__lambda_f1189d7105ff6ff46378f002a687ebe3___--_ScopeExitFn__lambda_f118.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_7406a721fa5d252aee7de31cc0a40e84___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v8 = &v12;
  v9 = v2;
  *((_QWORD *)&v8 + 1) = a1 + 32;
  v12 = a2;
  v10 = 1;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f169cd34eaeb977956750f8529fc5721___(
         v4,
         CurrentThreadId,
         &v8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_BYTE *)(v2 + 573) = 0;
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5);
    wil::details::ScopeExitFn__lambda_f1189d7105ff6ff46378f002a687ebe3___::_ScopeExitFn__lambda_f1189d7105ff6ff46378f002a687ebe3___(&v9);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v6);
  }
  return v6;
}
