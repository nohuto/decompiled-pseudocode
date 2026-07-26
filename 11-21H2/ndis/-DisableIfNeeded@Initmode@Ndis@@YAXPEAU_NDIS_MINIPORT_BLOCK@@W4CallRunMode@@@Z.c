/*
 * XREFs of ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0112D0C
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0112B04 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     _lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_::_lambda_invoker_cdecl_ @ 0x1C0112CD0 (_lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_--_lambda_invoker_cdecl_.c)
 *     _lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_ @ 0x1C012E5D0 (_lambda_b246ce06b62e0fe260ebdade75b833fa_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C010BAD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0112DA0 (-CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall Ndis::Initmode::DisableIfNeeded(
        struct _NDIS_MINIPORT_BLOCK *this,
        enum CallRunMode a2,
        enum CallRunMode a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  bool v6; // bl

  if ( this->InitMode )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&this->BindEngine.m_lock, 0LL);
    v6 = Ndis::Initmode::CheckAllDriversRunning((Ndis::Initmode *)this, v5);
    KeLeaveCriticalRegion();
    ExReleasePushLockEx(&this->BindEngine.m_lock, 0LL);
    if ( v6 )
      ndisMExitInitMode(this, a2);
  }
}
