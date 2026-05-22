/*
 * XREFs of ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180045EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x180029530 (-AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x180029950 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1800460B4 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180046200 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x18005F408 (-GetInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UInpu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall InputSiteManager::RegisterInputSiteElementWithHint(
        InputSiteManager *this,
        struct BamoInputSiteManagerStub *a2,
        struct BamoInputSiteElementProxy *a3,
        const struct InputSiteId *a4)
{
  struct BamoInputSiteElementProxy *v5; // rbx
  __int64 v7; // rdi
  struct BamoInputSiteElementProxy **v8; // rdx
  int v10; // ecx
  _QWORD *v11; // rdx
  _QWORD v12[2]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v13; // [rsp+30h] [rbp-39h] BYREF
  int v14; // [rsp+40h] [rbp-29h] BYREF
  __int64 v15; // [rsp+48h] [rbp-21h] BYREF
  __int64 v16; // [rsp+50h] [rbp-19h] BYREF
  __int128 v17; // [rsp+60h] [rbp-9h] BYREF
  int v18; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int128 v20; // [rsp+80h] [rbp+17h]

  v5 = a3;
  LODWORD(v12[0]) = 0;
  v18 = (*(__int64 (__fastcall **)(char *, struct BamoInputSiteManagerStub *))(*((_QWORD *)a3 + 1) + 24LL))(
          (char *)a3 + 8,
          a2);
  v19 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v5 + 1) + 32LL))((__int64)v5 + 8);
  v20 = *(_OWORD *)a4;
  *(_QWORD *)&v13 = 2LL;
  *((_QWORD *)&v13 + 1) = &v18;
  InputSiteManager::GetInputSiteFromIds(this, &v15, &v13);
  v7 = v15;
  if ( !v15 )
  {
    v10 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v5 + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)v5 + 4) + 16LL))
                    + 32);
    *(_QWORD *)&v13 = 2LL;
    *((_QWORD *)&v13 + 1) = &v18;
    v17 = v13;
    v14 = v10;
    *(_QWORD *)&v13 = this;
    Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
      &v16,
      &v17,
      &v14,
      (__int64 *)&v13);
    LODWORD(v12[0]) = 2;
    *(_QWORD *)&v13 = v16;
    v11 = (_QWORD *)*((_QWORD *)this + 8);
    if ( v11 == *((_QWORD **)this + 9) )
    {
      std::vector<InputSite *>::_Emplace_reallocate<InputSite *>((char *)this + 56, v11, &v13);
    }
    else
    {
      *v11 = v16;
      *((_QWORD *)this + 8) += 8LL;
    }
    v7 = v16;
    v15 = v16;
  }
  InputSiteElementProxy::AssociateWithInputSite(v5, &v15);
  v12[0] = v5;
  (**(void (__fastcall ***)(struct BamoInputSiteElementProxy *))v5)(v5);
  v8 = (struct BamoInputSiteElementProxy **)*((_QWORD *)this + 11);
  if ( v8 == *((struct BamoInputSiteElementProxy ***)this + 12) )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
      (char *)this + 80,
      v8,
      v12);
    v5 = (struct BamoInputSiteElementProxy *)v12[0];
  }
  else
  {
    *v8 = 0LL;
    if ( v8 != v12 )
    {
      *v8 = v5;
      v5 = 0LL;
    }
    *((_QWORD *)this + 11) += 8LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
