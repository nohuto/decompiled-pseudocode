/*
 * XREFs of ?FindCriticalAPO@EffectPack@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x18014BEFC
 * Callers:
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18014CFC8 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::FindCriticalAPO(EffectPack *this, struct IAudioSystemEffects2 *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ebx
  __int64 v4; // rax
  EffectPack *v6; // [rsp+40h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF

  v6 = this;
  pv = 0LL;
  if ( ((int (__fastcall *)(struct IAudioSystemEffects2 *, LPVOID *, EffectPack **, _QWORD))a2->lpVtbl->GetEffectsList)(
         a2,
         &pv,
         &v6,
         0LL) >= 0
    && (v2 = 0, (_DWORD)v6) )
  {
    v3 = 1;
    while ( 1 )
    {
      v4 = *((_QWORD *)pv + 2 * v2) - *(_QWORD *)&GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa.Data1;
      if ( !v4 )
        v4 = *((_QWORD *)pv + 2 * v2 + 1) - *(_QWORD *)GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa.Data4;
      if ( !v4 )
        break;
      if ( ++v2 >= (unsigned int)v6 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v3 = 0;
  }
  CoTaskMemFree(pv);
  return v3;
}
