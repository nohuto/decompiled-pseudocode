/*
 * XREFs of ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0111D28
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01535AC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0027D90 (NdisConvertNdisStatusToNtStatus.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1C002BBF0 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     NdisIfDeregisterProvider @ 0x1C00B26D0 (NdisIfDeregisterProvider.c)
 */

__int64 ndisIfNdisProvidedInterfaceSubsystemInitialize(void)
{
  int v0; // eax
  __int64 result; // rax
  int v2; // ebx
  int v3; // ecx
  struct _NDIS_IF_PROVIDER_CHARACTERISTICS Src; // [rsp+20h] [rbp-38h] BYREF

  *((_DWORD *)&Src.Header + 1) = 0;
  Src.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryObject;
  Src.Header = (_NDIS_OBJECT_HEADER)2621824;
  Src.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))NetSetupKnobCollection::SetKnobInStore;
  *(_OWORD *)&Src.Reserved1 = 0LL;
  v0 = ndisIfRegisterProviderInternal(&Src, &qword_1C00EE2E0, &qword_1C00EE2E0);
  if ( v0 )
  {
    v3 = v0;
    return NdisConvertNdisStatusToNtStatus(v3);
  }
  Src.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryLoopbackObject;
  Src.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))NetSetupKnobCollection::SetKnobInStore;
  result = ndisIfRegisterProviderInternal(&Src, &qword_1C00EE2D8, &qword_1C00EE2D8);
  v2 = result;
  if ( (_DWORD)result )
  {
    NdisIfDeregisterProvider(&qword_1C00EE2E0);
    qword_1C00EE2E0 = 0LL;
    v3 = v2;
    return NdisConvertNdisStatusToNtStatus(v3);
  }
  return result;
}
