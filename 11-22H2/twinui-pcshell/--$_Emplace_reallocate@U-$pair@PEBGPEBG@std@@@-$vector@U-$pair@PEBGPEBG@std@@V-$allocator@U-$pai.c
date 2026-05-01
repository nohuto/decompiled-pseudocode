/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x1803E5C34
 * Callers:
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1802D25DE (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803E876C (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXQEAU?$pair@PEBGPEBG@2@_K1@Z @ 0x1803E8934 (-_Change_array@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXQ.c)
 */

_OWORD *__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        char **a1,
        char *a2,
        _OWORD *a3)
{
  char *v4; // rbx
  signed __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // rdx
  _OWORD *v15; // rsi
  char *v16; // r8
  char *v17; // rcx
  char *v18; // rcx
  signed __int64 v19; // rax
  _OWORD *result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  try
  {
    v15 = (_OWORD *)((char *)v13 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
    *v15 = *a3;
    v16 = a1[1];
    v17 = *a1;
    if ( v4 == v16 )
    {
      while ( v17 != v16 )
      {
        *v13++ = *(_OWORD *)v17;
        v17 += 16;
      }
    }
    else
    {
      while ( v17 != v4 )
      {
        *v13++ = *(_OWORD *)v17;
        v17 += 16;
      }
      v18 = a1[1];
      if ( v4 != v18 )
      {
        v19 = (char *)(v15 + 1) - v4;
        do
        {
          *(_OWORD *)&v4[v19] = *(_OWORD *)v4;
          v4 += 16;
        }
        while ( v4 != v18 );
      }
    }
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Change_array(a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, 16 * v8);
    throw;
  }
  return result;
}
