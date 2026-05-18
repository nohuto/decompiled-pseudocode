/*
 * XREFs of ?_Check_C_return@std@@YAHH@Z @ 0x180011968
 * Callers:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1Display@Engine@Spectre@@QEAA@XZ @ 0x1800572C4 (--1Display@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Check_C_return(int a1)
{
  if ( a1 )
  {
    std::_Throw_C_error(a1);
    __debugbreak();
  }
  return 0LL;
}
