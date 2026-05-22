/*
 * XREFs of ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@?$_Ref_count_obj2@VSystemCursorShape2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEA_K@Z @ 0x180111E70
 * Callers:
 *     ??$make_shared@VSystemCursorShape2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursorShape2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEA_K@Z @ 0x18011291C (--$make_shared@VSystemCursorShape2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA-AV-.c)
 * Callees:
 *     ??0SystemCursorShape2@@QEAA@V?$shared_ptr@VSystemCursorService2@@@std@@_K@Z @ 0x180112D3C (--0SystemCursorShape2@@QEAA@V-$shared_ptr@VSystemCursorService2@@@std@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<SystemCursorShape2>::_Ref_count_obj2<SystemCursorShape2>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // r8
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<SystemCursorShape2>::`vftable';
  v4 = *a3;
  v6[0] = *a2;
  v6[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  SystemCursorShape2::SystemCursorShape2(a1 + 16, v6, v4);
  return a1;
}
