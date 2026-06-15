/*
 * XREFs of ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x1800184AC
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001FF3C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180017860 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 *     WPP_SF_Sd @ 0x18001E018 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::IsMutedForSleep(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // esi
  _QWORD *v4; // rbx
  CProcess *v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (CProcess *)v4[2];
      v4 = (_QWORD *)*v4;
      if ( !*((_DWORD *)v5 + 104) && CProcess::GetSessionDisplayPolicyVolume(v5) < 0.000099999997 )
        break;
      if ( !v4 )
        goto LABEL_7;
    }
    v3 = 1;
  }
LABEL_7:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      26,
      (unsigned int)&WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
      *((_QWORD *)this + 3),
      v3);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
