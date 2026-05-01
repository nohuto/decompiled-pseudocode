/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18070A7BC
 * Callers:
 *     ??1?$list@U?$pair@$$CBUhstring@winrt@@U12@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@2@@std@@QEAA@XZ @ 0x18070E780 (--1-$list@U-$pair@$$CBUhstring@winrt@@U12@@std@@V-$allocator@U-$pair@$$CBUhstring@winrt@@U12@@st.c)
 *     ??1?$unordered_map@Uhstring@winrt@@U12@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAA@XZ @ 0x18070EA78 (--1-$unordered_map@Uhstring@winrt@@U12@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@.c)
 *     ??1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18070ED30 (--1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@$$CBUhstring@winrt@@U12@@std@@QEAAPEAXI@Z @ 0x1806C7680 (--_G-$pair@$$CBUhstring@winrt@@U12@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 **v2; // rdi
  volatile signed __int32 *v3; // rbx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(volatile signed __int32 ***)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = *v2;
      std::pair<winrt::hstring const,winrt::hstring>::`scalar deleting destructor'(v2 + 2);
      std::_Deallocate<16,0>(v2, 0x20uLL);
      v2 = (volatile signed __int32 **)v3;
    }
    while ( v3 );
  }
}
