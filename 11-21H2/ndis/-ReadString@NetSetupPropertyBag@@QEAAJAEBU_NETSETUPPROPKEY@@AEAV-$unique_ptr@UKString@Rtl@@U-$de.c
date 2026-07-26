/*
 * XREFs of ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0110158
 * Callers:
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C010D8A0 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010FDEC (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C0110270 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C0121634 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0130AB0 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01313BC (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0132938 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C010B850 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0110310 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C01105F4 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C0110720 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadString(
        NetSetupPropertyBag *a1,
        const struct _NETSETUPPROPKEY *a2,
        void **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _WORD *v8; // rax
  __int64 v9; // rdx
  signed int v10; // ecx
  __int16 v11; // dx
  struct Rtl::KString *v12; // rax
  void *v13; // rcx
  struct _UNICODE_STRING v14; // [rsp+20h] [rbp-18h] BYREF
  struct KRegKey v15; // [rsp+58h] [rbp+20h] BYREF

  v15.m_ptr = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, &v15);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      v14 = 0LL;
      v8 = &unk_1C00D2784;
      v9 = 0x7FFFLL;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v9;
      }
      while ( v9 );
      v10 = v9 == 0 ? 0xC000000D : 0;
      if ( v9 )
      {
        v11 = 2 * v9;
        v14.Buffer = (wchar_t *)&unk_1C00D2784;
        v14.Length = -2 - v11;
        v14.MaximumLength = -v11;
      }
      if ( v10 < 0 )
        v12 = 0LL;
      else
        v12 = Rtl::KString::Initialize(&v14);
      v13 = *a3;
      *a3 = v12;
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0x7274534Bu);
        v12 = (struct Rtl::KString *)*a3;
      }
      v6 = v12 == 0LL ? 0xC000009A : 0;
    }
  }
  else if ( !v5 )
  {
    v14 = 0LL;
    v6 = KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(&v15, &v14, a3);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v15.m_ptr);
  return v6;
}
