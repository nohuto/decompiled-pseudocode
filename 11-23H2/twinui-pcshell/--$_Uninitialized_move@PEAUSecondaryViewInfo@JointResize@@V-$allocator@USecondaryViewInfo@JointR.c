/*
 * XREFs of ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x1805E08BC
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805E06E0 (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x1802E68FC (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 */

__int64 *__fastcall std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 16;
    v5 = (char *)a3 - a1;
    do
    {
      v6 = *(_QWORD *)(v4 - 16);
      *(_QWORD *)(v4 - 16) = 0LL;
      *a3 = v6;
      a3 += 12;
      *(_DWORD *)&v5[v4 - 8] = *(_DWORD *)(v4 - 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      v7 = *(_OWORD *)(v4 + 8);
      v4 += 96LL;
      *(_OWORD *)&v5[v4 - 88] = v7;
      v5[v4 - 72] = *(_BYTE *)(v4 - 72);
      v8 = *(_QWORD *)(v4 - 64);
      *(_QWORD *)(v4 - 64) = 0LL;
      *(_QWORD *)&v5[v4 - 64] = v8;
      *(_QWORD *)&v5[v4 - 56] = *(_QWORD *)(v4 - 56);
      *(_DWORD *)&v5[v4 - 48] = *(_DWORD *)(v4 - 48);
      *(_QWORD *)&v5[v4 - 44] = *(_QWORD *)(v4 - 44);
      *(_DWORD *)&v5[v4 - 36] = *(_DWORD *)(v4 - 36);
      *(_OWORD *)&v5[v4 - 32] = *(_OWORD *)(v4 - 32);
    }
    while ( v4 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(a3, a3);
  return a3;
}
