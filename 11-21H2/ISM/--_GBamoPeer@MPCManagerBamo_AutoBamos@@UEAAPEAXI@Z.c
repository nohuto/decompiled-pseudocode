/*
 * XREFs of ??_GBamoPeer@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z @ 0x180097FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180097CF0 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

MPCManagerBamo_AutoBamos::BamoPeer *__fastcall MPCManagerBamo_AutoBamos::BamoPeer::`scalar deleting destructor'(
        MPCManagerBamo_AutoBamos::BamoPeer *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // bl

  v5 = a2;
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(
    (MPCManagerBamo_AutoBamos::BamoPeer *)((char *)this + 8),
    a2,
    a3,
    a4);
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
