/*
 * XREFs of ??_GMPCVoiceProcessor@@UEAAPEAXI@Z @ 0x180194950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800AD094 (--1MPCInputProviderBase@@UEAA@XZ.c)
 */

MPCVoiceProcessor *__fastcall MPCVoiceProcessor::`scalar deleting destructor'(MPCVoiceProcessor *this, char a2)
{
  *((_DWORD *)this + 915) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
