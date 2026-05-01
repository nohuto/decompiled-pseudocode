/*
 * XREFs of ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1806187C8
 * Callers:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x18011F5F4 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?FindBufferItem@CAppLayout@@UEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x180616800 (-FindBufferItem@CAppLayout@@UEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180618BBC (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayout::_FindBufferItem(CAppLayout *this, struct IAppLayoutItem **a2, unsigned int *a3)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IAppLayoutItem **); // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0;
  v12 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v7);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) == 4 )
        break;
      if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 14) )
        goto LABEL_8;
    }
    v6 = v7;
    v9 = 0;
  }
  else
  {
LABEL_8:
    v9 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  if ( v9 >= 0 )
  {
    if ( !a2
      || (v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IAppLayoutItem **))(*((_QWORD *)this + 13) + 8 * v6),
          v9 = (**v10)(v10, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, a2),
          v9 >= 0) )
    {
      if ( a3 )
        *a3 = v6;
    }
  }
  return (unsigned int)v9;
}
