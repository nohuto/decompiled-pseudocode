/*
 * XREFs of ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18001AC14
 * Callers:
 *     ??_GBamoPeer@MPCManagerBamo_AutoBamos@@MEAAPEAXI@Z @ 0x180059410 (--_GBamoPeer@MPCManagerBamo_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_GBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1800AE8B0 (--_GBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  void *v2; // rcx
  Microsoft::BamoImpl::BamoImplObject *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 11) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v3 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 3);
  if ( v3 )
    Microsoft::BamoImpl::BamoImplObject::Release(v3);
}
