/*
 * XREFs of ?SupportsTouch@MPCHeadProcessor@@UEAA_NXZ @ 0x1801CAD90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

char __fastcall MPCHeadProcessor::SupportsTouch(MPCHeadProcessor *this)
{
  char v1; // bl
  struct MPCHolographicInputManager *Instance; // rax

  v1 = 0;
  if ( !MPCInputProviderBase::IsPrimary((unsigned __int64)this) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)Instance + 450) + 352LL))(**((_QWORD **)Instance
                                                                                                  + 450)) != 0;
  }
  return v1;
}
