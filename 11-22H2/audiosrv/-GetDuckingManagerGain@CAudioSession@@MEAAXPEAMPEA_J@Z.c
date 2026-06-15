/*
 * XREFs of ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x180048820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800DF478 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 */

void __fastcall CAudioSession::GetDuckingManagerGain(CAudioSession *this, float *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  _QWORD *i; // rbx
  float v8; // xmm0_4
  __int64 v9; // rax
  __int64 v10; // rcx

  if ( a3 )
    *a3 = 0LL;
  *a2 = 1.0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 352);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  for ( i = (_QWORD *)*((_QWORD *)this + 49); i; i = (_QWORD *)*i )
  {
    v8 = (***(float (__fastcall ****)(_QWORD))(i[1] + 56LL))(*(_QWORD *)(i[1] + 56LL));
    *a2 = fminf(*a2, ConvertDbToEngineVolume(v8));
    if ( a3 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
      v10 = *a3;
      if ( *a3 <= v9 )
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
      *a3 = v10;
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
}
