/*
 * XREFs of ?SubscribeToViewChangeNotifications@PeoplePaneViewManager@@UEAAJPEAUIPeoplePaneViewUpdateSink@@PEAK@Z @ 0x1803D95F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z @ 0x1803D4FFC (--0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1803D98E0 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PeoplePaneViewManager::SubscribeToViewChangeNotifications(
        PeoplePaneViewManager *this,
        struct IPeoplePaneViewUpdateSink *a2,
        unsigned int *a3)
{
  struct IPeoplePaneViewUpdateSink *v6; // rdi
  unsigned int v7; // ecx
  _QWORD *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  PeoplePaneViewManager::ViewChangeListener *v13; // rcx
  int v15[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IPeoplePaneViewUpdateSink *v18; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)v15 = 0LL;
  v6 = 0LL;
  if ( a2 )
  {
    v18 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    *(_QWORD *)v15 = a2;
    v6 = a2;
  }
  v7 = *((_DWORD *)this + 106);
  v16 = v7;
  *((_DWORD *)this + 106) = v7 + 1;
  *a3 = v7;
  v8 = (_QWORD *)((char *)this + 392);
  v9 = 0;
  v10 = v8[1];
  if ( v10 == v8[3]
    && (v11 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                v8,
                v10 + 1),
        v9 = v11,
        v11 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
  }
  else
  {
    v12 = v8[1];
    v8[1] = v12 + 1;
    v13 = (PeoplePaneViewManager::ViewChangeListener *)(*v8 + 16 * v12);
    if ( v13 )
      PeoplePaneViewManager::ViewChangeListener::ViewChangeListener(
        v13,
        (const struct PeoplePaneViewManager::ViewChangeListener *)v15);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IPeoplePaneViewUpdateSink *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
