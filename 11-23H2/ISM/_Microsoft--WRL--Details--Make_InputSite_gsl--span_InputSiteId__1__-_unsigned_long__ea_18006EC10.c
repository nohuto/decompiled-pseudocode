/*
 * XREFs of _Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1__&_unsigned_long_&_InputSiteManager____::_1_::dtor$3 @ 0x18006EC10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CA998 (--1-$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1____unsigned_long___InputSiteManager____::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return Microsoft::WRL::ComPtr<InputSiteManager>::~ComPtr<InputSiteManager>(a2 + 64);
  }
  return result;
}
