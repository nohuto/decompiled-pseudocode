/*
 * XREFs of ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B33FC
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B2890 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804B35BC (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804B226C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _lambda_8b7f561eeecd700a6a36bc0a9fbde639_::operator() @ 0x1804B2530 (_lambda_8b7f561eeecd700a6a36bc0a9fbde639_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationView(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  _QWORD *Ptr; // rdi
  _QWORD *v7; // rbx
  unsigned int v8; // ebx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  AcquireSRWLockShared(a1 + 16);
  Ptr = a1[17].Ptr;
  v10[0] = a2;
  v10[1] = a1;
  v7 = a1[18].Ptr;
  while ( Ptr != v7 && !lambda_8b7f561eeecd700a6a36bc0a9fbde639_::operator()(v10, (__int64)Ptr) )
    Ptr += 2;
  if ( Ptr == a1[18].Ptr )
  {
    v8 = -2147023728;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=(a3, Ptr);
    v8 = 0;
  }
  if ( a1 != (RTL_SRWLOCK *)-128LL )
    ReleaseSRWLockShared(a1 + 16);
  return v8;
}
