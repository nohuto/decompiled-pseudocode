/*
 * XREFs of ??_GBamoPeer@MPCManagerBamo_AutoBamos@@MEAAPEAXI@Z @ 0x180059410
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18001AC14 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

MPCManagerBamo_AutoBamos::BamoPeer *__fastcall MPCManagerBamo_AutoBamos::BamoPeer::`scalar deleting destructor'(
        MPCManagerBamo_AutoBamos::BamoPeer *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl((MPCManagerBamo_AutoBamos::BamoPeer *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
