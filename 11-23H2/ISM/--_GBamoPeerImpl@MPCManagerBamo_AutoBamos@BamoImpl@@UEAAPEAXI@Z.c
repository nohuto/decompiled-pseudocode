/*
 * XREFs of ??_GBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1800AE8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18001AC14 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *__fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::`scalar deleting destructor'(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
