/*
 * XREFs of ??1ServiceModuleBase@Internal@Windows@@QEAA@XZ @ 0x1800EF0B8
 * Callers:
 *     ??_EServiceModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800EF4A4 (--_EServiceModule@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800EF4EC (--_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Internal::ServiceModuleBase::~ServiceModuleBase(Windows::Internal::ServiceModuleBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &Windows::Internal::ServiceModuleBase::`vftable';
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((__int64 *)this + 3);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    CoDecrementMTAUsage(v2);
}
