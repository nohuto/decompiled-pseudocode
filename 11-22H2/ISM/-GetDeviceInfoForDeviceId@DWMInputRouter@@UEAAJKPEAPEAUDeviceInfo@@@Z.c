/*
 * XREFs of ?GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180002F20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18001AC34 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 */

__int64 __fastcall DWMInputRouter::GetDeviceInfoForDeviceId(DWMInputRouter *this, int a2, struct DeviceInfo **a3)
{
  char *v4; // rbx
  unsigned __int64 appended; // rax
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (char *)this + 144;
  appended = std::_Fnv1a_append_bytes((unsigned __int64)this, (const unsigned __int8 *const)&v10, 4uLL);
  v7 = *(_QWORD *)(std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
                     v4,
                     v9,
                     &v10,
                     appended)
                 + 8);
  if ( !v7 )
    v7 = *((_QWORD *)v4 + 1);
  if ( v7 == *((_QWORD *)this + 19) )
    return 2147500037LL;
  *a3 = *(struct DeviceInfo **)(v7 + 24);
  return 0LL;
}
