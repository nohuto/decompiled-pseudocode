/*
 * XREFs of ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BA70
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006E90 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18000B180 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18000D430 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180012290 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800270C0 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::Category(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // esi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v3 = 4;
  if ( *(_DWORD *)(a1 + 612) )
  {
    v3 = *(_DWORD *)(a1 + 616);
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 72);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      if ( !*(_DWORD *)(v5 + 416) || *(_QWORD *)(v5 + 360) )
      {
        v6 = *(_DWORD *)(v5 + 480);
        v7 = v6 ? *(_DWORD *)(v5 + 484) : *(_DWORD *)(v5 + 312);
        if ( v7 < v3 )
        {
          if ( v6 )
            v3 = *(_DWORD *)(v5 + 484);
          else
            v3 = *(_DWORD *)(v5 + 312);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
