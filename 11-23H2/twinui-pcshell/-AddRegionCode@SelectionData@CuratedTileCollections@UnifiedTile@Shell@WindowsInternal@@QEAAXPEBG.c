/*
 * XREFs of ?AddRegionCode@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXPEBG@Z @ 0x1803E9AFC
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x1803E9B60 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1804965BC (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Do_call @ 0x18073A7D0 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Do_c.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1803E8E40 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQE.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::AddRegionCode(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const unsigned __int16 *a2)
{
  _BYTE *v3; // rdx
  LPWSTR ppwsz; // [rsp+40h] [rbp+18h] BYREF

  ppwsz = 0LL;
  if ( SHStrDupW(a2, &ppwsz) >= 0 )
  {
    v3 = (_BYTE *)*((_QWORD *)this + 3);
    if ( v3 == *((_BYTE **)this + 4) )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)this + 2, v3, &ppwsz);
    }
    else
    {
      *(_QWORD *)v3 = ppwsz;
      *((_QWORD *)this + 3) += 8LL;
    }
    *(_BYTE *)this = 1;
  }
}
