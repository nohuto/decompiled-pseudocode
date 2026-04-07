/*
 * XREFs of ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18004471C
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18004418C (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x1800448B8 (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180044930 (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180044A80 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x1800459CC (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::StartAnimations(CAnimationEngine *this)
{
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rsi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int i; // ebx

  v2 = 0;
  v3 = 0LL;
  if ( !*((_DWORD *)this + 16) )
    return v2;
  do
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3);
    v5 = (volatile signed __int32 *)(v4 + 8);
    if ( v4 )
      _InterlockedAdd(v5, 1u);
    if ( *(_BYTE *)(v4 + 48) || *(_BYTE *)(v4 + 49) )
      goto LABEL_5;
    v7 = CAnimationEngine::SetupStoryboard(this, (struct CAnimationEngine::CTransitionVisualSet *)v4);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xD7u, 0LL);
LABEL_23:
      if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
      goto LABEL_25;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 32) + 96LL))(
           *(_QWORD *)(v4 + 32),
           v8,
           0LL);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xDAu, 0LL);
      goto LABEL_23;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
            *((_QWORD *)this + 1),
            v10,
            0LL);
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xDDu, 0LL);
      goto LABEL_23;
    }
    if ( !*(_BYTE *)(v4 + 48) || *(_BYTE *)(v4 + 49) )
      goto LABEL_5;
    v12 = CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
    v2 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xE3u, 0LL);
      goto LABEL_23;
    }
    v13 = CAnimationEngine::CTransitionVisualSet::BindAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xE4u, 0LL);
      goto LABEL_23;
    }
LABEL_5:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < *((_DWORD *)this + 16) );
  if ( (v2 & 0x80000000) == 0 )
    return v2;
LABEL_25:
  for ( i = *((_DWORD *)this + 16); --i >= (int)v3; CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, i) )
    ;
  return v2;
}
