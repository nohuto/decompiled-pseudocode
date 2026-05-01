/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x18051C3F8
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@AEAV21@@Z @ 0x18050A870 (--$_Emplace_reallocate@AEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(void **a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char *v9; // r14
  std::_Ref_count_base *v10; // rcx

  v4 = (char *)*a1;
  if ( *a1 )
  {
    v9 = (char *)a1[1];
    while ( v4 != v9 )
    {
      v10 = (std::_Ref_count_base *)*((_QWORD *)v4 + 1);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      v4 += 16;
    }
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = a2;
  a1[1] = &a2[16 * a3];
  a1[2] = &a2[16 * a4];
}
