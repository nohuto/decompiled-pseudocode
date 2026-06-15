/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x1800151E4
 * Callers:
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800151BC (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x180030378 (--1CPickerHostContext@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x18004B8F0 (_dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800151BC (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180015F18 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(
        __int64 *a1)
{
  __int64 *v2; // rdx
  ATL::CAtlPlex *v3; // rcx

  while ( a1[2] )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v2;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode((__int64)a1, v2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v3 = (ATL::CAtlPlex *)a1[3];
  if ( v3 )
  {
    ATL::CAtlPlex::FreeDataChain(v3);
    a1[3] = 0LL;
  }
}
