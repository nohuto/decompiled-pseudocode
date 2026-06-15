/*
 * XREFs of ?EndProcess@CAudioProcessor@@UEAAXH@Z @ 0x14001E960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAudioProcessor::EndProcess(CAudioProcessor *this, int a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rax

  if ( a2 )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 101);
    if ( v3[8] )
    {
      if ( *((_DWORD *)this + 18) )
      {
        v8 = (_QWORD *)v3[12];
        while ( v8 )
        {
          v9 = v8[2];
          v8 = (_QWORD *)*v8;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 128) + 40LL))(*(_QWORD *)(v9 + 128));
        }
      }
      else
      {
        v4 = (_QWORD *)v3[6];
        while ( v4 )
        {
          v5 = v4[2];
          v4 = (_QWORD *)*v4;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 120) + 40LL))(*(_QWORD *)(v5 + 120));
        }
        v6 = (_QWORD *)v3[12];
        while ( v6 )
        {
          v7 = v6[2];
          v6 = (_QWORD *)*v6;
          if ( *(_QWORD *)(v7 + 136) )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 128) + 40LL))(*(_QWORD *)(v7 + 128));
        }
      }
    }
  }
  _InterlockedExchange64((volatile __int64 *)this + 83, *((_QWORD *)this + 84));
  *((_QWORD *)this + 84) = 0LL;
  WakeByAddressAll((char *)this + 664);
  *((_QWORD *)this + 101) = 0LL;
}
