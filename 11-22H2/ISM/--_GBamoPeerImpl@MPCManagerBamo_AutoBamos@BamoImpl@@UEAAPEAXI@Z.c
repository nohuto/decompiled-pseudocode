/*
 * XREFs of ??_GBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1800C0C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18001B544 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *__fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::`scalar deleting destructor'(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
