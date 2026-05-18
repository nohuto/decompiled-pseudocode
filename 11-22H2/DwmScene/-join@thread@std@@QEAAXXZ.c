/*
 * XREFs of ?join@thread@std@@QEAAXXZ @ 0x180038800
 * Callers:
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::thread::join(std::thread *this)
{
  _Thrd_t v2; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    std::_Throw_Cpp_error(1);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 2) == _Thrd_id() )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  v2 = *(_Thrd_t *)this;
  if ( _Thrd_join(&v2, 0LL) )
  {
    std::_Throw_Cpp_error(2);
    __debugbreak();
  }
  *(_OWORD *)this = 0LL;
}
