/*
 * XREFs of ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x180012930
 * Callers:
 *     <none>
 * Callees:
 *     ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x180012A40 (-AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180012E30 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18004DF20 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputSiteManager::RegisterInputSiteElement(
        InputSiteManager *this,
        struct BamoInputSiteManagerStub *a2,
        struct BamoInputSiteElementProxy *a3)
{
  struct BamoInputSiteElementProxy *v3; // rbx
  __int64 v5; // rdi
  unsigned int v6; // eax
  struct BamoInputSiteElementProxy **v7; // rdx
  __int64 v8; // rcx
  struct BamoInputSiteElementProxy *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  v5 = (*(__int64 (__fastcall **)(char *, struct BamoInputSiteManagerStub *))(*((_QWORD *)a3 + 1) + 32LL))(
         (char *)a3 + 8,
         a2);
  v6 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v3 + 1) + 24LL))((__int64)v3 + 8);
  InputSiteManager::GetOrCreateInputSiteFromId(this, &v11, v6, v5);
  InputSiteElementProxy::AssociateWithInputSite(v3, &v11);
  v10 = v3;
  (**(void (__fastcall ***)(struct BamoInputSiteElementProxy *))v3)(v3);
  v7 = (struct BamoInputSiteElementProxy **)*((_QWORD *)this + 11);
  if ( v7 == *((struct BamoInputSiteElementProxy ***)this + 12) )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
      (char *)this + 80,
      v7,
      &v10);
    v3 = v10;
  }
  else
  {
    *v7 = 0LL;
    if ( v7 != &v10 )
    {
      *v7 = v3;
      v3 = 0LL;
    }
    *((_QWORD *)this + 11) += 8LL;
  }
  if ( v3 )
    (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 8LL))(v3);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
