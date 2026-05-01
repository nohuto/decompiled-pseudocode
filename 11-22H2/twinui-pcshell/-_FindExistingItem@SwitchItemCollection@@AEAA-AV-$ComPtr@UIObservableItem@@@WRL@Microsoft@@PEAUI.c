/*
 * XREFs of ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1805653E0
 * Callers:
 *     ?GetItemForView@SwitchItemCollection@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E0C80 (-GetItemForView@SwitchItemCollection@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180565550 (-_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805655D8 (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180565690 (-_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall SwitchItemCollection::_FindExistingItem(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // r15d
  int (__fastcall ****v6)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // r12
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  bool v10; // bl
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // [rsp+70h] [rbp+40h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF
  __int64 v15; // [rsp+88h] [rbp+58h] BYREF

  v14 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  *a2 = 0LL;
  v5 = 1;
  v6 = *(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 24);
  v7 = &v6[*(_QWORD *)(a1 + 32)];
  while ( v6 != v7 )
  {
    v13 = 0LL;
    v8 = *v6;
    v9 = ***v6;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    v10 = 0;
    if ( v9(v8, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v13) >= 0 )
    {
      v5 |= 2u;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v15) == a3 )
        v10 = 1;
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
    }
    if ( v10 )
    {
      v11 = *v6;
      if ( (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2 != *v6 )
      {
        v14 = *v6;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
        v14 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2;
        *a2 = v11;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
      return a2;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    ++v6;
  }
  return a2;
}
