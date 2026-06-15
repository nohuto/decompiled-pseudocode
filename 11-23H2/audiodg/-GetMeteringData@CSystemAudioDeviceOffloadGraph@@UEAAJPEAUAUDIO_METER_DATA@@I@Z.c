/*
 * XREFs of ?GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x14005B140
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetMeteringData(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_METER_DATA *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // r14
  size_t v6; // rax
  __int64 v7; // rbp
  _BYTE *v8; // rsi
  int v9; // ebx
  signed __int64 v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  v12 = *(_OWORD *)((char *)this - 136);
  EtwEventActivityIdControl(4LL, &v12);
  v6 = 4 * v4;
  v7 = (unsigned int)v4;
  if ( !is_mul_ok(v4, 4uLL) )
    v6 = -1LL;
  v8 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 10) + 32LL))(
           *((_QWORD *)this + 10),
           (unsigned int)v4,
           v8);
    if ( v9 >= 0 && (_DWORD)v4 )
    {
      v10 = v8 - (_BYTE *)a2;
      do
      {
        *(_DWORD *)a2 = *(_DWORD *)((char *)a2 + v10);
        a2 = (struct AUDIO_METER_DATA *)((char *)a2 + 4);
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    v9 = -2147024882;
  }
  operator delete[](v8);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_73715f9ee22d38db1d35d5de395f8c05_Traceguids,
        v9);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::GetMeteringData", 0x18Fu, v9);
  }
  EtwEventActivityIdControl(4LL, &v12);
  return (unsigned int)v9;
}
