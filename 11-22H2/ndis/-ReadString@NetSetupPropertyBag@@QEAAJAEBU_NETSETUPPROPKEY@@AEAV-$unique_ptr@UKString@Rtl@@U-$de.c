/*
 * XREFs of ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011D8F0
 * Callers:
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0119890 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C011D598 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C011DA28 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C012D0C8 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C013C92C (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013D2E0 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C013E518 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01170A4 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C011DC54 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C011DD9C (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C011DED8 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadString(
        NetSetupPropertyBag *a1,
        const struct _NETSETUPPROPKEY *a2,
        void **a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // r10d
  unsigned int v8; // edi
  _WORD *v10; // rax
  __int64 v11; // rdx
  struct Rtl::KString *v12; // rax
  void *v13; // rcx
  struct _UNICODE_STRING v14; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF

  v4 = 0;
  Handle = 0LL;
  v6 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, (struct KRegKey *)&Handle);
  v7 = v6;
  if ( v6 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      v10 = &unk_1C00DA4D4;
      v14 = 0LL;
      v11 = 0x7FFFLL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v11;
      }
      while ( v11 );
      if ( v11 )
      {
        v14.Buffer = (wchar_t *)&unk_1C00DA4D4;
        v14.Length = 2 * (0x7FFF - v11);
        v14.MaximumLength = v14.Length + 2;
        v12 = Rtl::KString::Initialize(&v14);
      }
      else
      {
        v12 = 0LL;
      }
      v13 = *a3;
      *a3 = v12;
      if ( v13 )
        ExFreePoolWithTag(v13, 0x7274534Bu);
      if ( !*a3 )
        v4 = -1073741670;
      goto LABEL_16;
    }
LABEL_18:
    v4 = v7;
LABEL_16:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v4;
  }
  if ( v6 )
    goto LABEL_18;
  v14 = 0LL;
  v8 = KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(&Handle, &v14, a3);
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
