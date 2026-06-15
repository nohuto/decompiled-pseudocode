/*
 * XREFs of ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800269E4
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180025F90 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x180026964 (-RemoveAll@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        LPVOID *a2)
{
  __int64 v3; // rcx
  bool i; // zf

  v3 = qword_18005C628;
  for ( i = qword_18005C628 == 0; !i; i = v3 == 0 )
  {
    if ( *(LPVOID **)(v3 + 16) == a2 )
    {
      if ( v3 )
      {
        if ( v3 == qword_18005C628 )
          qword_18005C628 = *(_QWORD *)v3;
        else
          **(_QWORD **)(v3 + 8) = *(_QWORD *)v3;
        if ( v3 == (_QWORD)xmmword_18005C630 )
          *(_QWORD *)&xmmword_18005C630 = *(_QWORD *)(v3 + 8);
        else
          *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(v3 + 8);
        *(_QWORD *)v3 = *((_QWORD *)&xmmword_18005C640 + 1);
        *((_QWORD *)&xmmword_18005C640 + 1) = v3;
        if ( !--*((_QWORD *)&xmmword_18005C630 + 1) )
          ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(&qword_18005C628);
        if ( a2 )
        {
          if ( *a2 )
          {
            CoTaskMemFree(*a2);
            *a2 = 0LL;
          }
          operator delete(a2);
        }
      }
      return;
    }
    v3 = *(_QWORD *)v3;
  }
}
