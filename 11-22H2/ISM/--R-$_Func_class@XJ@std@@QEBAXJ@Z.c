/*
 * XREFs of ??R?$_Func_class@XJ@std@@QEBAXJ@Z @ 0x18019BB68
 * Callers:
 *     ?SetError@AsyncPVPrincipal@@UEAAJPEAVBamoAsyncResult_PROPVARIANT_Stub@@H@Z @ 0x18019C1F0 (-SetError@AsyncPVPrincipal@@UEAAJPEAVBamoAsyncResult_PROPVARIANT_Stub@@H@Z.c)
 *     ?SetError@AsyncStringPrincipal@@UEAAJPEAVBamoAsyncResult_string_Stub@@H@Z @ 0x18019CC80 (-SetError@AsyncStringPrincipal@@UEAAJPEAVBamoAsyncResult_string_Stub@@H@Z.c)
 *     ?SetOutcome@AsyncHRESULTPrincipal@@UEAAJPEAVBamoAsyncHRESULTStub@@H@Z @ 0x18019D710 (-SetOutcome@AsyncHRESULTPrincipal@@UEAAJPEAVBamoAsyncHRESULTStub@@H@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,long>::operator()(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
