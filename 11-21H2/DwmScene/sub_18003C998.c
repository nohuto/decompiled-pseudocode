/*
 * XREFs of sub_18003C998 @ 0x18003C998
 * Callers:
 *     sub_180038370 @ 0x180038370 (sub_180038370.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003C998(_Thrd_t *a1)
{
  _Thrd_t v2; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1->_Id )
  {
    std::_Throw_Cpp_error(1);
    __debugbreak();
  }
  if ( a1->_Id == Thrd_id() )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  v2 = *a1;
  if ( Thrd_join(&v2, 0LL) )
  {
    std::_Throw_Cpp_error(2);
    __debugbreak();
  }
  *a1 = 0LL;
}
