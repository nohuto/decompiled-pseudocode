/*
 * XREFs of ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800157B8
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180015174 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180014740 (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x1800147CC (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180014844 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180015B1C (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::StartAnimations(CAnimationEngine *this)
{
  int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int i; // ebx

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 16) )
  {
    do
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3);
      if ( v4 )
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( !*(_BYTE *)(v4 + 48) && !*(_BYTE *)(v4 + 49) )
      {
        v6 = CAnimationEngine::SetupStoryboard(this, (struct CAnimationEngine::CTransitionVisualSet *)v4);
        v2 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xD7u);
          goto LABEL_21;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 32) + 96LL))(
               *(_QWORD *)(v4 + 32),
               v7,
               0LL);
        v2 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xDAu);
          goto LABEL_21;
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
                *((_QWORD *)this + 1),
                v9,
                0LL);
        v2 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xDDu);
          goto LABEL_21;
        }
        if ( *(_BYTE *)(v4 + 48) && !*(_BYTE *)(v4 + 49) )
        {
          v11 = CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
          v2 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xE3u);
            goto LABEL_21;
          }
          v12 = CAnimationEngine::CTransitionVisualSet::BindAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
          v2 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xE4u);
LABEL_21:
            CBaseObject::Release((CBaseObject *)v4);
            goto LABEL_22;
          }
        }
      }
      CBaseObject::Release((CBaseObject *)v4);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)this + 16) );
    if ( v2 >= 0 )
      return (unsigned int)v2;
LABEL_22:
    for ( i = *((_DWORD *)this + 16);
          (int)--i >= (int)v3;
          CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, i) )
    {
      ;
    }
  }
  return (unsigned int)v2;
}
