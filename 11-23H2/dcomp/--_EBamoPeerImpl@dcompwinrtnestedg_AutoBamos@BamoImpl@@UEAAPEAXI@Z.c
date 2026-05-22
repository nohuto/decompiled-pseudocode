/*
 * XREFs of ??_EBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x18016AF50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18016AB54 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl *__fastcall BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl::`vector deleting destructor'(
        BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
