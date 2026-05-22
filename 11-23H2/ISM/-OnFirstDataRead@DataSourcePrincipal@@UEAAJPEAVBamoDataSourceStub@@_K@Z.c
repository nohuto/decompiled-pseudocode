/*
 * XREFs of ?OnFirstDataRead@DataSourcePrincipal@@UEAAJPEAVBamoDataSourceStub@@_K@Z @ 0x1801148F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?OnDataSourceFirstRead@GestureServices@@QEAAX_K0@Z @ 0x180060BFC (-OnDataSourceFirstRead@GestureServices@@QEAAX_K0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DataSourcePrincipal::OnFirstDataRead(
        DataSourcePrincipal *this,
        struct BamoDataSourceStub *a2,
        __int64 a3)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  GestureServices *v6; // rdi
  unsigned __int64 v8; // [rsp+30h] [rbp+8h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                             + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v8 = *(_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 96LL))((char *)this + 8);
  GestureServices::OnDataSourceFirstRead(v6, v8, a3);
  return 0LL;
}
