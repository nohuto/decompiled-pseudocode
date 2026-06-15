/*
 * XREFs of ??_GPhoneCallAudio@@MEAAPEAXI@Z @ 0x18012E9EC
 * Callers:
 *     ??_EPhoneCallAudio@@OBI@EAAPEAXI@Z @ 0x18006BD20 (--_EPhoneCallAudio@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x18012E8B0 (--1PhoneCallAudio@@MEAA@XZ.c)
 */

PhoneCallAudio *__fastcall PhoneCallAudio::`scalar deleting destructor'(PhoneCallAudio *this, char a2)
{
  PhoneCallAudio::~PhoneCallAudio(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
