/*
 * XREFs of ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18000D1E0
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180012F84 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x18001312C (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18003022C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x180030260 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct CHostedAppInteractivity **a5)
{
  CHostedAppInteractivity *v5; // rbx
  int v6; // edi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  int *v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  struct CHostedAppInteractivity *v12; // [rsp+20h] [rbp-18h] BYREF
  ATL::CAtlException *v13; // [rsp+28h] [rbp-10h] BYREF

  v5 = 0LL;
  v6 = 0;
  v12 = 0LL;
  v7 = (_QWORD *)qword_180061698;
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    v12 = (struct CHostedAppInteractivity *)v8;
    if ( *(_DWORD *)(v8 + 8) == a4 && *(_QWORD *)(v8 + 16) == a3 )
      goto LABEL_10;
  }
  v6 = CHostedAppInteractivity::CreateInstance(a2, a3, a4, &v12);
  if ( v6 < 0 )
    goto LABEL_11;
  try
  {
    v6 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      &qword_180061698,
      &v12);
  }
  catch ( ATL::CAtlException *v13 )
  {
    a2 = (const unsigned __int16 *)&v11;
    v10 = (int *)v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      _o__resetstkoflw();
    v6 = *v10;
    if ( *v10 >= 0 )
    {
      v5 = 0LL;
      goto LABEL_10;
    }
LABEL_11:
    v5 = v12;
LABEL_12:
    if ( v5 )
      CHostedAppInteractivity::`scalar deleting destructor'(v5, (unsigned int)a2);
    if ( v6 < 0 )
    {
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17LL,
          &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
          (unsigned int)v6);
      }
      AudPolicyLogError("CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity", 457, v6);
    }
    result = (unsigned int)v6;
  }
LABEL_10:
  *a5 = v12;
  goto LABEL_12;
}
