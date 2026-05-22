/*
 * XREFs of ?SetError@AsyncPVPrincipal@@UEAAJPEAVBamoAsyncResult_PROPVARIANT_Stub@@H@Z @ 0x18018E3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XJ@std@@QEBAXJ@Z @ 0x18018DD58 (--R-$_Func_class@XJ@std@@QEBAXJ@Z.c)
 */

__int64 __fastcall AsyncPVPrincipal::SetError(
        AsyncPVPrincipal *this,
        struct BamoAsyncResult_PROPVARIANT_Stub *a2,
        int a3)
{
  *((_BYTE *)this + 184) = 0;
  std::_Func_class<void,long>::operator()((__int64)this + 120, a3);
  return 0LL;
}
