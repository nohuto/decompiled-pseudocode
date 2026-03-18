/*
 * XREFs of ?SetBrush@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCBrush@@@Z @ 0x1801A238C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateBrush@CParticleEmitterVisual@@QEBAJPEAVCBrush@@@Z @ 0x1801A6000 (-ValidateBrush@CParticleEmitterVisual@@QEBAJPEAVCBrush@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetBrush(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  struct CResource *v9; // rax

  v2 = 0;
  if ( a2 != this[104] )
  {
    v5 = CParticleEmitterVisual::ValidateBrush((CParticleEmitterVisual *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x1C31u);
    }
    else
    {
      v7 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x1C32u);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[104]);
        v9 = *this;
        this[104] = a2;
        *((_BYTE *)this + 6470) = 0;
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v9 + 9))(this, 0LL, 0LL);
      }
    }
  }
  return v2;
}
