/*
 * XREFs of ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x1803E95AC
 * Callers:
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x1803EA090 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Buy_nonzero@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAX_K@Z @ 0x1803EB288 (-_Buy_nonzero@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<unsigned short *>::vector<unsigned short *>(__int64 *a1, __int64 a2)
{
  signed __int64 v4; // rbx
  __int64 v5; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3 )
  {
    std::vector<unsigned short *>::_Buy_nonzero();
    v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v5 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v4);
    a1[1] = v5 + 8 * (v4 >> 3);
  }
  return a1;
}
