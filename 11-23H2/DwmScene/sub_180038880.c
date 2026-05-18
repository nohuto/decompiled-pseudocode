/*
 * XREFs of sub_180038880 @ 0x180038880
 * Callers:
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180038880(_Thrd_t *a1)
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
