/*
 * XREFs of ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x1800DFE6C
 * Callers:
 *     ?GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x1800E4500 (-GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800DF428 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::GetDuckingState(struct _RTL_CRITICAL_SECTION *this, float *a2)
{
  float v4; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  _QWORD *i; // rbx
  float v7; // xmm0_4
  float v8; // xmm0_4

  v4 = FLOAT_1_0;
  v5 = this + 9;
  EnterCriticalSection(this + 9);
  for ( i = &this[10].DebugInfo->Type; i; i = (_QWORD *)*i )
  {
    v7 = (***(float (__fastcall ****)(_QWORD))(i[1] + 56LL))(*(_QWORD *)(i[1] + 56LL));
    v8 = ConvertDbToEngineVolume(v7);
    if ( v8 <= v4 )
      v4 = v8;
  }
  *a2 = v4;
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
