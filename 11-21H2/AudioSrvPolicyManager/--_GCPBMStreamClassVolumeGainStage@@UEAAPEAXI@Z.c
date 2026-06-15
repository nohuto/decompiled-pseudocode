/*
 * XREFs of ??_GCPBMStreamClassVolumeGainStage@@UEAAPEAXI@Z @ 0x1800101A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 */

CPBMStreamClassVolumeGainStage *__fastcall CPBMStreamClassVolumeGainStage::`scalar deleting destructor'(
        CPBMStreamClassVolumeGainStage *this,
        char a2)
{
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)this + 56);
  *((_DWORD *)this + 13) = -1073741823;
  *(_QWORD *)this = &CGainStage::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
