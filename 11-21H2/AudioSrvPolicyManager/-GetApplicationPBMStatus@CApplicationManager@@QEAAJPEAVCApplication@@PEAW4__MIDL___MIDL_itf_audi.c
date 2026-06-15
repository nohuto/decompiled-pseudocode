/*
 * XREFs of ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001F894
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18001AB8C (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001FA40 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001FF3C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180024DB4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x180025780 (WPP_SF_SSSSSSS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetApplicationPBMStatus(
        CApplicationManager *this,
        struct CApplication *a2,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a3,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a4,
        enum _PLM_EXEMPTION *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  unsigned int SoundLevel; // eax
  unsigned int v11; // r14d
  const wchar_t *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  const wchar_t *v17; // r10
  __int64 v18; // r11

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  SoundLevel = CApplicationManager::GetSoundLevel(this, a2);
  v11 = SoundLevel;
  if ( a3 )
    *(_DWORD *)a3 = SoundLevel;
  if ( a4 )
  {
    if ( *((_DWORD *)a2 + 156) )
      *(_DWORD *)a4 = *((_DWORD *)a2 + 157);
    else
      *(_DWORD *)a4 = SoundLevel;
  }
  if ( a5 )
    *(_DWORD *)a5 = CApplicationManager::GetPLMExemptionStatus(this, a2, SoundLevel);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v12 = L"(override)";
    if ( !*((_DWORD *)a2 + 160) )
      v12 = L" ";
    if ( a4 )
      SoundLevelToString(*(unsigned int *)a4);
    v13 = SoundLevelToString(v11);
    if ( !*((_DWORD *)a2 + 158) )
      v17 = L" ";
    WPP_SF_SSSSSSS(*(_QWORD *)(v15 + 16), v14, v15, *((_QWORD *)a2 + 3), v13, (__int64)v17, v18, v16, v14, (__int64)v12);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
