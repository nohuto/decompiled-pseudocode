/*
 * XREFs of ??_GCPBMStreamClassVolumeGainStage@@UEAAPEAXI@Z @ 0x180020FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1CPBMStreamClassVolumeGainStage@@UEAA@XZ @ 0x1800203D8 (--1CPBMStreamClassVolumeGainStage@@UEAA@XZ.c)
 */

CPBMStreamClassVolumeGainStage *__fastcall CPBMStreamClassVolumeGainStage::`scalar deleting destructor'(
        CPBMStreamClassVolumeGainStage *this,
        char a2)
{
  CPBMStreamClassVolumeGainStage::~CPBMStreamClassVolumeGainStage(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
