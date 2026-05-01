/*
 * XREFs of ?at@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAAAEAUtagPRESENTFRAME@@_K@Z @ 0x18033CCEC
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x18022B9C4 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA-AV.c)
 */

__int64 __fastcall std::deque<tagPRESENTFRAME>::at(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r11
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( a1[4] <= a2 )
  {
    std::_Xout_of_range("invalid deque<T> subscript");
    __debugbreak();
  }
  v5[2] = a1[3];
  v5[0] = *a1;
  v5[1] = 0LL;
  v2 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>::operator+((__int64)v5);
  if ( *(_QWORD *)v2 )
    v3 = **(_QWORD **)v2;
  return *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * (*(_QWORD *)(v2 + 16) & (*(_QWORD *)(v3 + 16) - 1LL)));
}
