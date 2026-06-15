/*
 * XREFs of ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180044C10
 * Callers:
 *     ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x180044548 (--1CSecurityDesc@ATL@@UEAA@XZ.c)
 *     ??_GCSecurityDesc@ATL@@UEAAPEAXI@Z @ 0x180044730 (--_GCSecurityDesc@ATL@@UEAAPEAXI@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180045290 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x180015FD0 (-GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z.c)
 */

void __fastcall ATL::CSecurityDesc::Clear(PSECURITY_DESCRIPTOR *this)
{
  PSID pGroup; // [rsp+20h] [rbp-28h] BYREF
  PACL pDacl; // [rsp+28h] [rbp-20h] BYREF
  PACL pSacl; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v5; // [rsp+60h] [rbp+18h] BYREF
  WINBOOL bOwnerDefaulted; // [rsp+68h] [rbp+20h] BYREF
  WINBOOL bDaclPresent; // [rsp+70h] [rbp+28h] BYREF
  PSID pOwner; // [rsp+78h] [rbp+30h] BYREF

  if ( this[1] )
  {
    if ( ATL::CSecurityDesc::GetControl((ATL::CSecurityDesc *)this, &v5) && (v5 & 0x8000u) == 0 )
    {
      GetSecurityDescriptorOwner(this[1], &pOwner, &bOwnerDefaulted);
      free(pOwner);
      GetSecurityDescriptorGroup(this[1], &pGroup, &bOwnerDefaulted);
      free(pGroup);
      GetSecurityDescriptorDacl(this[1], &bDaclPresent, &pDacl, &bOwnerDefaulted);
      if ( bDaclPresent )
        free(pDacl);
      GetSecurityDescriptorSacl(this[1], &bDaclPresent, &pSacl, &bOwnerDefaulted);
      if ( bDaclPresent )
        free(pSacl);
    }
    free(this[1]);
    this[1] = 0LL;
  }
}
