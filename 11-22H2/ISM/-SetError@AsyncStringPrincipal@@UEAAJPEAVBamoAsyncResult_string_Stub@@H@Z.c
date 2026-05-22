/*
 * XREFs of ?SetError@AsyncStringPrincipal@@UEAAJPEAVBamoAsyncResult_string_Stub@@H@Z @ 0x18019CC80
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XJ@std@@QEBAXJ@Z @ 0x18019BB68 (--R-$_Func_class@XJ@std@@QEBAXJ@Z.c)
 */

__int64 __fastcall AsyncStringPrincipal::SetError(
        AsyncStringPrincipal *this,
        struct BamoAsyncResult_string_Stub *a2,
        int a3)
{
  *((_BYTE *)this + 184) = 0;
  std::_Func_class<void,long>::operator()((__int64)this + 120, a3);
  return 0LL;
}
