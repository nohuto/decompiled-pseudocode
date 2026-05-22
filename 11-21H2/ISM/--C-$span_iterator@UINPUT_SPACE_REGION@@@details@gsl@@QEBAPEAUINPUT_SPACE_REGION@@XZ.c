/*
 * XREFs of ??C?$span_iterator@UINPUT_SPACE_REGION@@@details@gsl@@QEBAPEAUINPUT_SPACE_REGION@@XZ @ 0x180129860
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18012992C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall gsl::details::span_iterator<INPUT_SPACE_REGION>::operator->(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 result; // rax

  if ( !*a1 || !a1[1] || (result = a1[2], *a1 > result) || result >= a1[1] )
  {
    result = _o_terminate(a1, a2, a3, a4);
    __debugbreak();
  }
  return result;
}
