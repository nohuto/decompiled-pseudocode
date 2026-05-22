/*
 * XREFs of ?DisposeOnDelayedDestruction@CSharedAllocationBase@DirectComposition@@MEAAXXZ @ 0x18007E0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CSharedAllocationBase::DisposeOnDelayedDestruction(
        DirectComposition::CSharedAllocationBase *this)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 16LL))((char *)this + 16);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x200) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &SHAREALLOCATIONBASE_DISPOSEONDELAYEDDESTRUCTION, this);
}
