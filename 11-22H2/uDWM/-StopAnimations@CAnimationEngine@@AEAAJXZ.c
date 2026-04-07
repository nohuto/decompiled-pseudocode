/*
 * XREFs of ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x18004468C
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18004418C (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800AAFEC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x1800459CC (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::StopAnimations(CAnimationEngine *this)
{
  unsigned int v2; // ebp
  int v3; // esi
  __int64 i; // r15
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rdi
  int v8; // r14d
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax

  v2 = 0;
  v3 = *((_DWORD *)this + 16) - 1;
  if ( v3 >= 0 )
  {
    for ( i = 8LL * v3; ; i -= 8LL )
    {
      v5 = *(_QWORD *)(i + *((_QWORD *)this + 5));
      v6 = (volatile signed __int32 *)(v5 + 8);
      if ( v5 )
        _InterlockedIncrement(v6);
      if ( *(_BYTE *)(v5 + 49) )
      {
        v8 = 0;
        if ( *(_DWORD *)(v5 + 20) )
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v5 + 32);
            if ( v9 )
            {
              v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 120LL))(v9);
              v2 = v10;
              if ( v10 < 0 )
                break;
            }
            if ( (unsigned int)++v8 >= *(_DWORD *)(v5 + 20) )
              goto LABEL_16;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x113u, 0LL);
          if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
            goto LABEL_14;
          return v2;
        }
LABEL_16:
        v11 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, v3);
        v2 = v11;
        if ( v11 < 0 )
          break;
      }
      if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
      if ( --v3 < 0 )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x117u, 0LL);
    if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
LABEL_14:
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
  }
  return v2;
}
