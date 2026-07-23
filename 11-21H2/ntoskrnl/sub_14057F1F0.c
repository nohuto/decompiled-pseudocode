/*
 * XREFs of sub_14057F1F0 @ 0x14057F1F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 */

__int64 sub_14057F1F0()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  char v2; // al
  int ValueData[6]; // [rsp+30h] [rbp-18h] BYREF

  ValueData[0] = 1;
  v0 = RtlWriteRegistryValue(2u, L"Session Manager\\Memory Management", L"KernelPadSectionsOverride", 4u, ValueData, 4u);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v1 + 1] = v0;
    v2 = dword_140D04880;
    dword_140C2A220[2 * v1] = 1179791;
    if ( (v2 & 2) != 0 )
      sub_14057D738(12LL, "KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
    sub_140368C88(12LL, (__int64)"KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
  }
  return 3221226348LL;
}
