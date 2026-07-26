/*
 * XREFs of ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002BA64
 * Callers:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0006E00 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisGetThreadObjectCompartmentScope @ 0x1C00075F0 (NdisGetThreadObjectCompartmentScope.c)
 *     ?ndisNsiGetAllThreadInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00077B0 (-ndisNsiGetAllThreadInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     NdisGetThreadObjectCompartmentId @ 0x1C00079C0 (NdisGetThreadObjectCompartmentId.c)
 *     NdisGetSessionCompartmentId @ 0x1C00089C0 (NdisGetSessionCompartmentId.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B3C0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E330 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00108B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0012E80 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisCmGetThreadState @ 0x1C002B9FC (ndisCmGetThreadState.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B1CA0 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmGetThreadSessionId(PETHREAD Thread)
{
  __int64 v2; // rcx
  PACCESS_TOKEN v3; // rax
  void *v4; // rsi
  NTSTATUS v6; // ebx
  PVOID TokenInformation; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+68h] [rbp+20h] BYREF

  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  if ( KeGetCurrentIrql() >= 2u )
    return PsGetCurrentProcessSessionId(v2);
  v3 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v4 = v3;
  if ( v3
    && (v6 = SeQueryInformationToken(v3, TokenSessionId, &TokenInformation), PsDereferenceImpersonationToken(v4),
                                                                             v6 >= 0) )
  {
    return (unsigned int)TokenInformation;
  }
  else
  {
    return PsGetThreadSessionId(Thread);
  }
}
