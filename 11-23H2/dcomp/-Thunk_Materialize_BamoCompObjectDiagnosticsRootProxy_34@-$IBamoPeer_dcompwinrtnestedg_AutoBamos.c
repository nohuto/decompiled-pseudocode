/*
 * XREFs of ?Thunk_Materialize_BamoCompObjectDiagnosticsRootProxy_34@?$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016EAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18016A2F4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 */

void __fastcall __noreturn IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive<BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoCompObjectDiagnosticsRootProxy_34(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v4,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
    a3,
    a4);
  Microsoft::WRL2::FailFast::Unexpected(0LL);
}
