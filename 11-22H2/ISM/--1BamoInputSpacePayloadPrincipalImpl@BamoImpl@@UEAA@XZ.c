/*
 * XREFs of ??1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18015A4B8
 * Callers:
 *     ??_GBamoInputSpacePayloadPrincipal@@MEAAPEAXI@Z @ 0x18015A5E0 (--_GBamoInputSpacePayloadPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18015A630 (--_GBamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800558A8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::~BamoInputSpacePayloadPrincipalImpl(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v5; // rcx
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v5 = (wil::details *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v5 )
    wil::details::FreeProcessHeap(v5, a2);
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 2);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, (__int64)a2, a3, a4);
}
