/*
 * XREFs of ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0118C60
 * Callers:
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0119850 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C002B7DC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_RECORDER_SF_d @ 0x1C003338C (WPP_RECORDER_SF_d_ea_1C003338C.c)
 */

__int64 __fastcall RegistryKnobCollection::Open(RegistryKnobCollection *this, unsigned int a2, void **a3)
{
  unsigned int v6; // ebx
  unsigned __int16 v8; // r9

  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    a3,
    0LL);
  v6 = IoOpenDriverRegistryKey(**((_QWORD **)this + 3), 2LL, a2);
  if ( v6 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = 10;
LABEL_7:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v8,
        (struct _GUID *)&WPP_9435edde217234e5ab0ef78f2248663b_Traceguids,
        v6);
    }
  }
  else
  {
    if ( (a2 & 2) != 0
      || (wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
            a3 + 1,
            0LL),
          (v6 = IoOpenDriverRegistryKey(**((_QWORD **)this + 3), 0LL, a2)) == 0) )
    {
      *((_BYTE *)a3 + 16) = 1;
      return 0LL;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = 11;
      goto LABEL_7;
    }
  }
  return v6;
}
