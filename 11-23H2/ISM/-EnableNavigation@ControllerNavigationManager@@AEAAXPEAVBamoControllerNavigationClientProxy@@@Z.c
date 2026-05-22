/*
 * XREFs of ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180190F88
 * Callers:
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18019244C (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180191134 (-NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x180196C7C (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 */

void __fastcall ControllerNavigationManager::EnableNavigation(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  struct BamoControllerNavigationClientProxy *v3; // rbx
  unsigned int v4; // ebp
  struct tagRECT v5; // xmm6
  struct tagPOINT v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  _QWORD *v9; // rdi
  _QWORD *i; // rbx
  ControllerProcessor *v11; // rcx
  struct tagRECT v12; // [rsp+40h] [rbp-28h] BYREF

  v3 = a2;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(char *, struct BamoControllerNavigationClientProxy *))(*((_QWORD *)this + 1) + 32LL))(
    (char *)this + 8,
    a2);
  v3 = (struct BamoControllerNavigationClientProxy *)((char *)v3 + 8);
  v4 = (*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 40LL))(v3);
  v5 = *(struct tagRECT *)(*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 48LL))(v3);
  v6 = *(struct tagPOINT *)(*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 56LL))(v3);
  v7 = (*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 64LL))(v3);
  v12 = v5;
  v8 = v7;
  InputETW::ControllerNavigationManager::NavigationEnabled(&v12, v6);
  v9 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
  {
    v11 = (ControllerProcessor *)i[3];
    v12 = v5;
    ControllerProcessor::NavigationEnable(v11, v4, &v12, v6, v8, 1, 1);
  }
}
