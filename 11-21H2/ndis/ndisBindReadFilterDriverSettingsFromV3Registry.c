/*
 * XREFs of ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C0110270
 * Callers:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010E7A4 (ndisBindReadFilterDriverFromV3Registry.c)
 * Callees:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0110158 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverSettingsFromV3Registry(__int64 a1, __int64 a2)
{
  const struct _NETSETUPPROPKEY *v2; // rbx
  void *v4; // rcx
  int String; // eax
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 40) = 0;
  v2 = (const struct _NETSETUPPROPKEY *)&unk_1C00D1A20;
  v8 = a2;
  while ( 1 )
  {
    v7 = 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadBoolean((NetSetupPropertyBag *)&v8, v2, &v7) )
      break;
    if ( v7 )
      *(_DWORD *)(a1 + 40) |= *((_DWORD *)v2 + 5);
    v2 = (const struct _NETSETUPPROPKEY *)((char *)v2 + 24);
    if ( v2 == (const struct _NETSETUPPROPKEY *)&unk_1C00D1A98 )
    {
      v4 = *(void **)(a1 + 48);
      *(_QWORD *)(a1 + 48) = 0LL;
      if ( v4 )
        ExFreePoolWithTag(v4, 0x7274534Bu);
      String = NetSetupPropertyBag::ReadString(
                 (NetSetupPropertyBag *)&v8,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00D2598,
                 (void **)(a1 + 48));
      return !String || String == -1073741772;
    }
  }
  return 0;
}
