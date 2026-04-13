/*
 * XREFs of ??1TriggerTypeTriggerSetupMapping@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x1800A4670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Services::TargetedContent::Internal::TriggerTypeTriggerSetupMapping::~TriggerTypeTriggerSetupMapping(
        Windows::Services::TargetedContent::Internal::TriggerTypeTriggerSetupMapping *this,
        __int64 a2)
{
  char *v3; // rdi
  char *v4; // rcx
  char *v5; // rbx
  char *v6; // rcx

  v3 = (char *)this + 40;
  v4 = (char *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *((_QWORD *)v3 + 3) = 0LL;
  }
  v5 = (char *)this + 8;
  v6 = (char *)*((_QWORD *)v5 + 3);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v5;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 32LL))(v6, a2);
    *((_QWORD *)v5 + 3) = 0LL;
  }
}
