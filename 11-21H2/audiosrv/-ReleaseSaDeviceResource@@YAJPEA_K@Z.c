/*
 * XREFs of ?ReleaseSaDeviceResource@@YAJPEA_K@Z @ 0x180065CB4
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18003CDF0 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180160220 (-CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyContr.c)
 *     ??1TelephonyControllerCallInstance@@MEAA@XZ @ 0x180162068 (--1TelephonyControllerCallInstance@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseSaDeviceResource(unsigned __int64 *a1)
{
  return (*(__int64 (__fastcall **)(struct IAudioResourceManager *, unsigned __int64 *))(*(_QWORD *)g_AudioResourceManager
                                                                                       + 40LL))(
           g_AudioResourceManager,
           a1);
}
