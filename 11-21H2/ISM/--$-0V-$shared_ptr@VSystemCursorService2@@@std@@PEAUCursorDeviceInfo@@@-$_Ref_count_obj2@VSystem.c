/*
 * XREFs of ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@@?$_Ref_count_obj2@VSystemCursor2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@$$QEAPEAUCursorDeviceInfo@@@Z @ 0x1800EA84C
 * Callers:
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800EC658 (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 * Callees:
 *     ??0SystemCursor2@@QEAA@V?$shared_ptr@VSystemCursorService2@@@std@@PEBUCursorDeviceInfo@@@Z @ 0x1800EB33C (--0SystemCursor2@@QEAA@V-$shared_ptr@VSystemCursorService2@@@std@@PEBUCursorDeviceInfo@@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj2<SystemCursor2>::_Ref_count_obj2<SystemCursor2>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // r8
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<SystemCursor2>::`vftable';
  v4 = *a3;
  v6[0] = *a2;
  v6[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  SystemCursor2::SystemCursor2(a1 + 16, v6, v4);
  return a1;
}
