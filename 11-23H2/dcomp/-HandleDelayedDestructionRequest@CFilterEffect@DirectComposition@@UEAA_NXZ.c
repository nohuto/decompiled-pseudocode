/*
 * XREFs of ?HandleDelayedDestructionRequest@CFilterEffect@DirectComposition@@UEAA_NXZ @ 0x1800F1F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CFilterEffect::HandleDelayedDestructionRequest(
        DirectComposition::CFilterEffect *this)
{
  char *v1; // rcx

  if ( (*((_BYTE *)this + 48) & 1) == 0 )
    return 0;
  v1 = (char *)this - 32;
  if ( v1 )
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 16LL))(v1, 1LL);
  return 1;
}
