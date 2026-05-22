/*
 * XREFs of ?OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180061A90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4GestureRecognizerState@@1W4GestureOperationState@@@Z @ 0x180061C94 (-StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4Gest.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x18009811C (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18011DC70 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x18016FE4C (-_Unchecked_erase@-$list@U-$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V-$alloca.c)
 */

__int64 __fastcall ShellGesturesProcessor::OnStreamEnded(
        ShellGesturesProcessor *this,
        struct InputContext *a2,
        struct ContextualProcessorResponse *a3)
{
  __int64 v3; // rdi
  __int64 i; // rbx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 appended; // rax

  v3 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    i = *((_QWORD *)this + 16);
LABEL_3:
    for ( i = *(_QWORD *)i;
          i != *((_QWORD *)this + 16);
          i = std::list<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>::_Unchecked_erase((char *)this + 128) )
    {
      if ( *(_QWORD *)(i + 24) != v3 )
        goto LABEL_3;
      if ( *(_BYTE *)(v3 + 424) )
        v7 = *(_DWORD *)(v3 + 396);
      else
        v7 = 0;
      if ( *(_BYTE *)(v3 + 384) )
        v8 = *(_DWORD *)(v3 + 248);
      else
        v8 = 0;
      InputTraceLogging::ShellGestures::StaleActiveContacts(
        *(unsigned int *)(i + 36),
        *(unsigned int *)(i + 44),
        *((unsigned int *)a2 + 26),
        *(unsigned int *)(v3 + 24),
        v8,
        v7);
      MicrosoftTelemetryAssertTriggeredNoArgs(v10, v9, v11);
      appended = std::_Fnv1a_append_bytes(v12, (const unsigned __int8 *const)(i + 16), 4uLL);
      std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
        (char *)this + 120,
        i,
        appended & *((_QWORD *)this + 21));
    }
  }
  return 0LL;
}
