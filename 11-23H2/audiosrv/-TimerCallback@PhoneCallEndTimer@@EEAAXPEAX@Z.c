/*
 * XREFs of ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x18013DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18013CD38 (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 */

void __fastcall PhoneCallEndTimer::TimerCallback(PhoneCallEndTimer *this, PhoneCallAudio *a2)
{
  if ( a2 )
    PhoneCallAudio::OnPhoneCallEndTimeout(a2);
}
