/*
 * XREFs of ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015CCC
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC8C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::ConfigureAPOInterfaces(CPipeInstance *this, struct IAudioGraphCallback *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  _QWORD *v17; // rbx

  v4 = 0LL;
  v5 = 0LL;
  if ( !a2 )
    return 0;
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 16);
      v6 = *(_QWORD *)(v6 + 8);
      if ( *(_DWORD *)(v7 + 40) == 2 && (*((_DWORD *)this + 28) == 2 || !**(_DWORD **)(v7 + 32)) )
        v4 = (unsigned int)(v4 + 1);
    }
    while ( v6 );
    if ( (_DWORD)v4 )
    {
      v8 = 8LL * (unsigned int)v4;
      if ( !is_mul_ok((unsigned int)v4, 8uLL) )
        v8 = -1LL;
      v9 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
      v5 = v9;
      if ( !v9 )
      {
        v16 = -2147024882;
LABEL_37:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            57LL,
            &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
            (unsigned int)v16);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::ConfigureAPOInterfaces", 0x113Du, v16);
        return (unsigned int)v16;
      }
      memset_0(v9, 0, 8 * v4);
      v10 = 0LL;
      v11 = *((_QWORD *)this + 3);
      while ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 16);
        v11 = *(_QWORD *)(v11 + 8);
        if ( *(_DWORD *)(v12 + 40) == 2 )
        {
          v13 = *(_QWORD *)(v12 + 32);
          if ( (*((_DWORD *)this + 28) == 2 || !*(_DWORD *)v13) && (unsigned int)v10 < (unsigned int)v4 )
          {
            v14 = &v5[v10];
            if ( v14 )
            {
              *v14 = *(_QWORD *)(v13 + 40);
              v15 = *(_QWORD *)(v13 + 40);
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
              v16 = 0;
            }
            else
            {
              v16 = -2147467261;
            }
            if ( v16 < 0 )
              goto LABEL_27;
            v10 = (unsigned int)(v10 + 1);
          }
        }
      }
    }
  }
  v16 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, CPipeInstance *, _QWORD, _QWORD *))(*(_QWORD *)a2 + 24LL))(
          a2,
          this,
          (unsigned int)v4,
          v5);
  if ( v5 )
  {
LABEL_27:
    if ( (_DWORD)v4 )
    {
      v17 = v5;
      do
      {
        if ( *v17 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 16LL))(*v17);
          *v17 = 0LL;
        }
        ++v17;
        --v4;
      }
      while ( v4 );
    }
    operator delete[](v5);
  }
  if ( v16 < 0 )
    goto LABEL_37;
  return (unsigned int)v16;
}
