/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800F7780
 * Callers:
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800F9F54 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::find<void>(
        __int64 a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *result; // rax

  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v7 = v6[3];
  v8 = 2 * (v6[6] & appended);
  v9 = *(_QWORD *)(v7 + 8 * v8 + 8);
  if ( v9 == v6[1] )
  {
LABEL_6:
    v9 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 8 * v8);
    while ( *(_DWORD *)a3 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == v10 )
        goto LABEL_6;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  result = a2;
  if ( !v9 )
    v9 = v6[1];
  *a2 = v9;
  return result;
}
