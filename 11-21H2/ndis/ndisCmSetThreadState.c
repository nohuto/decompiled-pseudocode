/*
 * XREFs of ndisCmSetThreadState @ 0x1C0008E80
 * Callers:
 *     ?ndisNsiSetAllThreadInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B1990 (-ndisNsiSetAllThreadInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x1C0101160 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x1C01323B0 (NdisSetThreadObjectCompartmentId.c)
 * Callees:
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C0008FD8 (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ndisCmGetThreadState @ 0x1C002B9FC (ndisCmGetThreadState.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B2EEC (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B3B78 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C00B5990 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 */

__int64 __fastcall ndisCmSetThreadState(PETHREAD Thread, unsigned int *a2, _DWORD *a3)
{
  struct _NDIS_CM_STATE *v3; // r9
  void *v4; // r14
  char v5; // bl
  char v6; // r12
  struct _NDIS_CM_STATE *ThreadProperty; // rax
  int v11; // ebx
  unsigned int v13; // r15d
  void *v14; // rax
  struct _NDIS_CM_STATE *v15; // [rsp+20h] [rbp-10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v15 = 0LL;
  v6 = 0;
  if ( a2 )
  {
    v13 = *a2;
    if ( *a2 )
    {
      ndisCmGetThreadState(Thread);
      v14 = ndisCmValidateCompartmentChange(0, v13);
      v3 = v15;
      v4 = v14;
      if ( !v14 )
      {
        v11 = -1073741275;
        goto LABEL_18;
      }
      v5 = 1;
    }
  }
  if ( a3 )
  {
    if ( *a3 == -1 )
    {
      v5 = 1;
    }
    else if ( *a3 )
    {
      v11 = -1073741811;
      goto LABEL_16;
    }
  }
  ThreadProperty = (struct _NDIS_CM_STATE *)PsGetThreadProperty(Thread, 0x6D43644EuLL, 1u);
  v15 = ThreadProperty;
  v3 = ThreadProperty;
  if ( ThreadProperty )
  {
    if ( a2 )
    {
      *(_DWORD *)ThreadProperty = *a2;
      ndisCmAssignCompartmentHandleToCmState(v15, v4);
      v3 = v15;
    }
    if ( a3 )
    {
      *((_DWORD *)v3 + 1) = *a3;
      v3 = v15;
    }
    if ( !*(_DWORD *)v3 && !*((_DWORD *)v3 + 1) )
    {
      ObfDereferenceObject(v3);
      v3 = 0LL;
      v6 = 1;
      v15 = 0LL;
    }
    v11 = 0;
    if ( !v6 )
      goto LABEL_16;
    goto LABEL_14;
  }
  if ( v5 )
  {
    v11 = ndisCmCreateStateObject(&v15);
    if ( v11 < 0 )
      goto LABEL_15;
    if ( a2 )
    {
      *(_DWORD *)v15 = *a2;
      ndisCmAssignCompartmentHandleToCmState(v15, v4);
    }
    if ( a3 )
      *((_DWORD *)v15 + 1) = *a3;
    v3 = v15;
LABEL_14:
    v11 = PsSetThreadProperty(Thread, 1833133134LL, v3);
LABEL_15:
    v3 = v15;
    goto LABEL_16;
  }
  v11 = 0;
LABEL_16:
  if ( v4 )
  {
    ndisIfDereferenceCompartmentForUser(v4);
    v3 = v15;
  }
LABEL_18:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v11;
}
