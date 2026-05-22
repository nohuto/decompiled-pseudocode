/*
 * XREFs of ?OnMarshalerRelease@CSharedAllocationBase@DirectComposition@@UEAAXXZ @ 0x18008CC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CSharedAllocationBase::OnMarshalerRelease(
        DirectComposition::CSharedAllocationBase *this)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(DirectComposition::CSharedAllocationBase *))(*(_QWORD *)this + 8LL))(this);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x200) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &SHAREALLOCATIONBASE_ONMARSHALERRELEASE, this);
}
