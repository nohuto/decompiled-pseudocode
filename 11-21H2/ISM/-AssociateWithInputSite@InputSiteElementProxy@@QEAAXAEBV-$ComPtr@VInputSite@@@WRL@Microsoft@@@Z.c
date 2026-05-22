/*
 * XREFs of ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x180012A40
 * Callers:
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x180012930 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180124860 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::AssociateWithInputSite(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx

  v3 = a1[39];
  v4 = *a2;
  if ( v3 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*a2);
      v3 = a1[39];
    }
    a1[39] = v4;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 160LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 176LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 192LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 208LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 224LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 240LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 256LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 288LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 304LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 336LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 352LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 368LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 384LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 400LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 416LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 432LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 448LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 464LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 480LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 496LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 512LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 528LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 544LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 560LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 576LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 592LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 608LL))(a1);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 624LL))(a1);
}
