/*
 * XREFs of ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180527A48
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x18052787C (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180527844 (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 */

__int64 *__fastcall std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int128 v7; // xmm0

  if ( a1 != a2 )
  {
    v4 = a1 + 16;
    v5 = (char *)a3 - a1;
    do
    {
      v6 = *(_QWORD *)(v4 - 16);
      *(_QWORD *)(v4 - 16) = 0LL;
      *a3 = v6;
      a3 += 11;
      *(_DWORD *)&v5[v4 - 8] = *(_DWORD *)(v4 - 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      v7 = *(_OWORD *)(v4 + 8);
      v4 += 88LL;
      *(_OWORD *)&v5[v4 - 80] = v7;
      v5[v4 - 64] = *(_BYTE *)(v4 - 64);
      *(_QWORD *)&v5[v4 - 60] = *(_QWORD *)(v4 - 60);
      *(_DWORD *)&v5[v4 - 52] = *(_DWORD *)(v4 - 52);
      *(_QWORD *)&v5[v4 - 48] = *(_QWORD *)(v4 - 48);
      *(_DWORD *)&v5[v4 - 40] = *(_DWORD *)(v4 - 40);
      *(_OWORD *)&v5[v4 - 36] = *(_OWORD *)(v4 - 36);
    }
    while ( v4 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(a3, a3);
  return a3;
}
