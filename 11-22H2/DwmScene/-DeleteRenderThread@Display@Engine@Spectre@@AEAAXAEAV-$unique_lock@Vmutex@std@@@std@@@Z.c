/*
 * XREFs of ?DeleteRenderThread@Display@Engine@Spectre@@AEAAXAEAV?$unique_lock@Vmutex@std@@@std@@@Z @ 0x1800578BC
 * Callers:
 *     ??1Display@Engine@Spectre@@QEAA@XZ @ 0x1800572C4 (--1Display@Engine@Spectre@@QEAA@XZ.c)
 *     ?SetRenderingMode@Display@Engine@Spectre@@QEAAXW4RenderingMode@123@@Z @ 0x180058314 (-SetRenderingMode@Display@Engine@Spectre@@QEAAXW4RenderingMode@123@@Z.c)
 * Callees:
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     _lambda_1d477eeb7fcd6b2c40a05bb000d8c39c_::operator() @ 0x1800573EC (_lambda_1d477eeb7fcd6b2c40a05bb000d8c39c_--operator().c)
 */

char __fastcall Spectre::Engine::Display::DeleteRenderThread(__int64 a1, _Mtx_t *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  char result; // al
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  std::atomic<bool>::operator=(a1 + 425, 0LL, a3, a4);
  std::atomic<bool>::operator=(a1 + 424, 0LL, v6, v7);
  _Cnd_signal((_Cnd_t)(a1 + 208));
  _Cnd_signal((_Cnd_t)(a1 + 280));
  v9 = a1;
  while ( 1 )
  {
    result = lambda_1d477eeb7fcd6b2c40a05bb000d8c39c_::operator()(&v9);
    if ( result )
      break;
    _Cnd_wait((_Cnd_t)(a1 + 352), *a2);
  }
  return result;
}
