/*
 * XREFs of std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___ @ 0x180151EB4
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18015233C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        POINT *a4)
{
  const RECT *i; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  if ( *(_OWORD *)a2 != *(_OWORD *)a3 || a2[2] > *(_QWORD *)(a3 + 16) )
  {
    _o_terminate(*a2, a2, a3, a4);
    __debugbreak();
    JUMPOUT(0x180151F92LL);
  }
  for ( i = (const RECT *)a2[2]; i != *(const RECT **)(a3 + 16); i = (const RECT *)((char *)i + 200) )
  {
    if ( PtInRect(i, *a4) )
      break;
  }
  a2[2] = i;
  result = a1;
  v10 = a2[2];
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
