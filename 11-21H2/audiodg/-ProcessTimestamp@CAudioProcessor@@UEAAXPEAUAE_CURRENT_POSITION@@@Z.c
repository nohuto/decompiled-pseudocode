/*
 * XREFs of ?ProcessTimestamp@CAudioProcessor@@UEAAXPEAUAE_CURRENT_POSITION@@@Z @ 0x1400824A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAudioProcessor::ProcessTimestamp(CAudioProcessor *this, struct AE_CURRENT_POSITION *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( !*((_DWORD *)this + 18) )
  {
    v3 = *(_QWORD **)(*((_QWORD *)this + 101) + 48LL);
    while ( v3 )
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      v5 = *(_QWORD *)(v4 + 136);
      if ( v5 )
        (*(void (__fastcall **)(__int64, struct AE_CURRENT_POSITION *))(*(_QWORD *)v5 + 48LL))(v5, a2);
    }
  }
}
