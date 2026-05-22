/*
 * XREFs of ?CreatePenEventsClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoPenEventsClientProxy@@@Z @ 0x18004F9F0
 * Callers:
 *     ?Materialize_BamoPenEventsClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18004F920 (-Materialize_BamoPenEventsClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreatePenEventsClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoPenEventsClientProxy **a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 result; // rax
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-30h] BYREF

  v3 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*(_DWORD *)(v3 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x200LL) == *(_QWORD *)(v3 + 24) )
  {
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1802285FF, 0LL, 0LL, 2u, &v6);
  }
  v4 = operator new(0x40uLL);
  memset_0(v4, 0, 0x40uLL);
  *((_DWORD *)v4 + 6) = 0;
  v4[4] = 0LL;
  v4[2] = &BamoImpl::BamoPenEventsClientProxyImpl::`vftable';
  v4[5] = 0LL;
  *((_DWORD *)v4 + 12) = 0;
  *((_WORD *)v4 + 26) = 0;
  *((_BYTE *)v4 + 54) = 0;
  *v4 = &PenEventsClientCustomProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v4[1] = &PenEventsClientCustomProxy::`vftable'{for `IPenEventsClientProxy'};
  result = 0LL;
  *a2 = (struct BamoPenEventsClientProxy *)v4;
  return result;
}
