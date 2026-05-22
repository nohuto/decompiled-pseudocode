/*
 * XREFs of ?SetError@AsyncStringPrincipal@@UEAAJPEAVBamoAsyncResult_string_Stub@@H@Z @ 0x18016F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XJ@std@@QEBAXJ@Z @ 0x18016E668 (--R-$_Func_class@XJ@std@@QEBAXJ@Z.c)
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
