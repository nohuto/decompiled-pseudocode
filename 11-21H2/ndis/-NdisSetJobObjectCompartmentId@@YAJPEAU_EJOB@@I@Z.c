/*
 * XREFs of ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C013224C
 * Callers:
 *     ?ndisNsiSetAllJobInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B18E0 (-ndisNsiSetAllJobInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisGetJobObjectCompartmentId @ 0x1C00020B0 (NdisGetJobObjectCompartmentId.c)
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C0008FD8 (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ndisIfSetCompartmentJobObject @ 0x1C00B1784 (ndisIfSetCompartmentJobObject.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B2EEC (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C00B5990 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00B59E4 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 */

__int64 __fastcall NdisSetJobObjectCompartmentId(struct _EJOB *a1, unsigned int a2)
{
  _QWORD *JobProperty; // rdi
  _DWORD *v3; // rsi
  unsigned int JobObjectCompartmentId; // eax
  int StateObject; // ebx
  __int64 v8; // rcx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  JobProperty = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    JobObjectCompartmentId = NdisGetJobObjectCompartmentId((__int64)a1);
    v3 = ndisCmValidateCompartmentChange(JobObjectCompartmentId, a2);
    if ( !v3 )
    {
      StateObject = -1073741275;
      goto LABEL_17;
    }
    StateObject = ndisCmCreateStateObject((struct _NDIS_CM_STATE **)&Object);
    if ( StateObject < 0 )
      goto LABEL_16;
    *(_DWORD *)Object = a2;
    ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v3);
  }
  JobProperty = (_QWORD *)PsGetJobProperty(a1, 1833133134LL);
  do
  {
    StateObject = PsSetJobProperty(a1, 1833133134LL, Object);
    if ( StateObject != -1073741771 )
      break;
    StateObject = PsSetJobProperty(a1, 1833133134LL, 0LL);
  }
  while ( StateObject == -1073741771 );
  if ( StateObject < 0 )
  {
    if ( !v3 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( JobProperty )
  {
    v8 = JobProperty[1];
    if ( v8 )
      StateObject = ndisIfSetCompartmentJobObject(v8, a1, 1);
  }
  if ( v3 )
  {
    StateObject = ndisIfSetCompartmentJobObject((__int64)v3, a1, 0);
LABEL_16:
    ndisCmDereferenceCompartment(v3);
  }
LABEL_17:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( JobProperty )
    ObfDereferenceObject(JobProperty);
  return (unsigned int)StateObject;
}
