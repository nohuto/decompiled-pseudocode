/*
 * XREFs of ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800B5588
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800B6A70 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULegacyInputInfo@@QEAU1@0PEAU1@AEAV?$allocator@ULegacyInputInfo@@@0@@Z @ 0x1800B5AFC (--$_Uninitialized_move@PEAULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULeg.c)
 *     ?_Change_array@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULegacyInputInfo@@_K1@Z @ 0x1800B6E50 (-_Change_array@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULe.c)
 */

char *__fastcall std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>(
        void **a1,
        _BYTE *a2,
        const void *a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rdi
  char *v14; // r14
  void *v15; // rcx
  char *result; // rax
  __int64 v17; // [rsp+50h] [rbp+8h]
  void *v18; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 3008;
  v7 = 0x51B3BEA3677D46CFLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 6);
  if ( v7 == 0x15C9882B931057LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0x51B3BEA3677D46CFLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 6);
  v10 = v9 >> 1;
  if ( v9 <= 0x15C9882B931057LL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    v17 = v11;
    if ( v11 > 0x15C9882B931057LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x15C9882B931057LL;
    v17 = 0x15C9882B931057LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(3008 * v11);
  v13 = v12;
  v18 = v12;
  try
  {
    v14 = &v12[3008 * v6];
    memcpy_0(v14, a3, 0xBC0uLL);
    v15 = *a1;
    if ( a2 != a1[1] )
    {
      std::_Uninitialized_move<LegacyInputInfo *>(v15);
      v15 = a2;
    }
    std::_Uninitialized_move<LegacyInputInfo *>(v15);
    std::vector<LegacyInputInfo>::_Change_array(a1, v13, v8, v11);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v18, 3008 * v17);
    throw;
  }
  return result;
}
