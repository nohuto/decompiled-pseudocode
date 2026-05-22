/*
 * XREFs of ??$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@NonBamoInputDeliveryServer@@@Z @ 0x180033B4C
 * Callers:
 *     ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x1800340CC (-Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIIn.c)
 * Callees:
 *     ??0NonBamoInputDeliveryServer@@QEAA@XZ @ 0x180033C48 (--0NonBamoInputDeliveryServer@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum NonBamoInputDeliveryServer::TestMode &>(
        NonBamoInputDeliveryServer *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  NonBamoInputDeliveryServer *v7; // rax
  NonBamoInputDeliveryServer *v8; // rdi
  int v9; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  NonBamoInputDeliveryServer *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer = 0LL;
  v7 = (NonBamoInputDeliveryServer *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v7;
  v11[0] = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v12);
    return (unsigned int)v9;
  }
  v11[1] = v7;
  v8 = NonBamoInputDeliveryServer::NonBamoInputDeliveryServer(v7);
  v11[0] = v8;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(NonBamoInputDeliveryServer *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 56LL))(
         v8,
         *a2,
         *a3,
         *a4);
  if ( v9 < 0 )
  {
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(v11);
    goto LABEL_7;
  }
  v9 = (**(__int64 (__fastcall ***)(NonBamoInputDeliveryServer *, GUID *, struct IInputDeliveryServer **))v8)(
         v8,
         &GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba,
         &NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer);
  (*(void (__fastcall **)(NonBamoInputDeliveryServer *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v9;
}
