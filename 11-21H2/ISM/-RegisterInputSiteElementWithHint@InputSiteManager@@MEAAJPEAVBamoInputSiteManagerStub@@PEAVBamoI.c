/*
 * XREFs of ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180124860
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x1800018D0 (-GetInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UInpu.c)
 *     ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x180012A40 (-AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180012E30 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180019AF0 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?CreateInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@K@Z @ 0x18004DB30 (-CreateInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputSiteManager::RegisterInputSiteElementWithHint(
        InputSiteManager *this,
        struct BamoInputSiteManagerStub *a2,
        struct BamoInputSiteElementProxy *a3,
        const struct InputSiteId *a4)
{
  struct BamoInputSiteElementProxy *v5; // rbx
  char *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rcx
  __int128 *v12; // rdx
  __int64 v14[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int128 v19; // [rsp+60h] [rbp-20h]

  v5 = a3;
  v7 = (char *)a3 + 8;
  v17 = (*(__int64 (__fastcall **)(char *, struct BamoInputSiteManagerStub *))(*((_QWORD *)a3 + 1) + 24LL))(
          (char *)a3 + 8,
          a2);
  v18 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 32LL))(v7);
  v19 = *(_OWORD *)a4;
  *(_QWORD *)&v15 = 2LL;
  *((_QWORD *)&v15 + 1) = &v17;
  v16 = v15;
  InputSiteManager::GetInputSiteFromIds((__int64)this, v14, &v16);
  v8 = v14[0];
  if ( !v14[0] )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v5 + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)v5 + 4) + 16LL));
    *(_QWORD *)&v16 = 2LL;
    *((_QWORD *)&v16 + 1) = &v17;
    v10 = (char *)InputSiteManager::CreateInputSiteFromIds((__int64)this, &v15, &v16, *(_DWORD *)(v9 + 32));
    Microsoft::WRL::ComPtr<InputSite>::operator=(v14, v10);
    v11 = v15;
    if ( (_QWORD)v15 )
    {
      *(_QWORD *)&v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v8 = v14[0];
  }
  InputSiteElementProxy::AssociateWithInputSite(v5, v14);
  *(_QWORD *)&v15 = v5;
  (**(void (__fastcall ***)(struct BamoInputSiteElementProxy *))v5)(v5);
  v12 = (__int128 *)*((_QWORD *)this + 11);
  if ( v12 == *((__int128 **)this + 12) )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
      (__int64 **)this + 10,
      (unsigned __int64)v12,
      &v15);
    v5 = (struct BamoInputSiteElementProxy *)v15;
  }
  else
  {
    *(_QWORD *)v12 = 0LL;
    if ( v12 != &v15 )
    {
      *(_QWORD *)v12 = v5;
      v5 = 0LL;
    }
    *((_QWORD *)this + 11) += 8LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}
