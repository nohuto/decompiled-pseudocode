/*
 * XREFs of ??0BCastDVRNotifyGameModeChangeThreadParams@GamingOverlayExperienceManager@@QEAA@AEBU01@@Z @ 0x18032B898
 * Callers:
 *     ?StaticNotifyBcastDvrOfGameModeChange@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x18033A220 (-StaticNotifyBcastDvrOfGameModeChange@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

GamingOverlayExperienceManager::BCastDVRNotifyGameModeChangeThreadParams *__fastcall GamingOverlayExperienceManager::BCastDVRNotifyGameModeChangeThreadParams::BCastDVRNotifyGameModeChangeThreadParams(
        GamingOverlayExperienceManager::BCastDVRNotifyGameModeChangeThreadParams *this,
        const struct GamingOverlayExperienceManager::BCastDVRNotifyGameModeChangeThreadParams *a2)
{
  __int64 v2; // r8
  const struct GamingOverlayExperienceManager::BCastDVRNotifyGameModeChangeThreadParams *v3; // r10
  GamingOverlayExperienceManager::BCastDVRNotifyGameModeChangeThreadParams *v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  v2 = *(_QWORD *)a2;
  v3 = a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  v4 = this;
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 200);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v5 + 1, v5);
        if ( v6 != v5 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v5 + 16), (volatile int *)a2);
  }
LABEL_8:
  *((_QWORD *)v4 + 1) = *((_QWORD *)v3 + 1);
  *((_BYTE *)v4 + 16) = *((_BYTE *)v3 + 16);
  return v4;
}
