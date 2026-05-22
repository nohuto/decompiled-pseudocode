/*
 * XREFs of ?OnStubDisconnected@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800B1E70
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

__int64 __fastcall InputProcess::OnStubDisconnected(
        InputProcess *this,
        struct BamoInputProcessPrincipal *a2,
        struct BamoInputProcessStub *a3)
{
  __int64 v6; // rcx
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-48h] BYREF

  v6 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v6 > 4u
    && (*(_DWORD *)(v6 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v6 + 24) & 0x200LL) == *(_QWORD *)(v6 + 24) )
  {
    tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1802015CD, 0LL, 0LL, 2u, &v8);
  }
  (*(void (__fastcall **)(InputProcess *, struct BamoInputProcessPrincipal *, struct BamoInputProcessStub *))(*(_QWORD *)this + 40LL))(
    this,
    a2,
    a3);
  return 0LL;
}
