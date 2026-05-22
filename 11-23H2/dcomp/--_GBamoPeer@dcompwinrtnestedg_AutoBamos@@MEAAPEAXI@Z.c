/*
 * XREFs of ??_GBamoPeer@dcompwinrtnestedg_AutoBamos@@MEAAPEAXI@Z @ 0x18016AF00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18016AB54 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

dcompwinrtnestedg_AutoBamos::BamoPeer *__fastcall dcompwinrtnestedg_AutoBamos::BamoPeer::`scalar deleting destructor'(
        dcompwinrtnestedg_AutoBamos::BamoPeer *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl((dcompwinrtnestedg_AutoBamos::BamoPeer *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
