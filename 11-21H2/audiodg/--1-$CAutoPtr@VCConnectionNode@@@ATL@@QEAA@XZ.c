/*
 * XREFs of ??1?$CAutoPtr@VCConnectionNode@@@ATL@@QEAA@XZ @ 0x1400688B4
 * Callers:
 *     _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$1 @ 0x140036ED6 (_CAudioProcessor--AttachEndpointToConnection_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CConnectionNode>::~CAutoPtr<CConnectionNode>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
