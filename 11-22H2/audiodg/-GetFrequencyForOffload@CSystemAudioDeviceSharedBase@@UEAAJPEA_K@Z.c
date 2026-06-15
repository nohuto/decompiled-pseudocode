/*
 * XREFs of ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x140059180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1400528CC (WPP_SF_D.c)
 *     WPP_SF_i @ 0x14005A174 (WPP_SF_i.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetFrequencyForOffload(
        CSystemAudioDeviceSharedBase *this,
        unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-38h]
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v9 = *(_OWORD *)((char *)this + 248);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 41) + 48LL))(
         *((_QWORD *)this + 41),
         a2);
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids,
        v5);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetFrequencyForOffload", 0x14Du, v7);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), &WPP_GLOBAL_Control, v6, *a2, v9, *((_QWORD *)&v9 + 1));
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  EtwEventActivityIdControl(4LL, &v10);
  return v7;
}
