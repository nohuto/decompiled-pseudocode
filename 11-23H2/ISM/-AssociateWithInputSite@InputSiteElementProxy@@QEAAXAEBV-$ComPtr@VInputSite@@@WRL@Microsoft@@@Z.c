/*
 * XREFs of ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x180029530
 * Callers:
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x180029410 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180045EB0 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::AssociateWithInputSite(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = *a2;
  if ( a1[41] != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*a2);
    v4 = a1[41];
    a1[41] = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
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
  (*(void (__fastcall **)(_QWORD *))(*a1 + 624LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 640LL))(a1);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 656LL))(a1);
}
