/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x180026964
 * Callers:
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x180025CEC (--1CPickerHostContext@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180026380 (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800269E4 (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 *     _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x180046B60 (_dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180026380 (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 */

void __fastcall ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(
        __int64 *a1)
{
  bool i; // zf
  __int64 *v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx

  for ( i = a1[2] == 0; !i; i = a1[2] == 0 )
  {
    v3 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v3;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode((__int64)a1, v3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v4 = (_QWORD *)a1[3];
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      free(v4);
      v4 = v5;
    }
    while ( v5 );
    a1[3] = 0LL;
  }
}
