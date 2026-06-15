/*
 * XREFs of ?AcquirePhoneCallResource@@YAJPEA_K@Z @ 0x180065C28
 * Callers:
 *     ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180160220 (-CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyContr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcquirePhoneCallResource(unsigned __int64 *a1)
{
  return (*(__int64 (__fastcall **)(struct IAudioResourceManager *, unsigned __int64 *))(*(_QWORD *)g_AudioResourceManager
                                                                                       + 72LL))(
           g_AudioResourceManager,
           a1);
}
