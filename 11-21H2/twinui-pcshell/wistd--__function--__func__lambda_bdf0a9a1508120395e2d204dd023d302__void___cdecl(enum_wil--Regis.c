/*
 * XREFs of wistd::__function::__func__lambda_bdf0a9a1508120395e2d204dd023d302__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1800440B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_97bd317dfbb19e24b4bfc3738a3f0e1d___ @ 0x18003DC84 (Windows--Internal--ComTaskPool--QueueTask__lambda_97bd317dfbb19e24b4bfc3738a3f0e1d___.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_bdf0a9a1508120395e2d204dd023d302__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  return Windows::Internal::ComTaskPool::QueueTask__lambda_97bd317dfbb19e24b4bfc3738a3f0e1d___(
           a1,
           a2,
           *(_DWORD *)(v3 + 1340),
           &v3);
}
