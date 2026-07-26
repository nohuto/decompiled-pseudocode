/*
 * XREFs of ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B813C
 * Callers:
 *     ndisCmSetThreadState @ 0x1C00258B0 (ndisCmSetThreadState.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B6EB0 (NdisSetSessionCompartmentId.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C013DE1C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C00B6BF0 (NdisGetProcessObjectCompartmentId.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B8B6C (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z @ 0x1C00B8D44 (-ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C00B8DB4 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 */

void *__fastcall ndisCmValidateCompartmentChange(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 CurrentProcess; // rax
  unsigned int ProcessObjectCompartmentId; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  void *v9; // rdi
  __int64 v10; // rax
  void *v11; // [rsp+20h] [rbp-30h] BYREF
  struct _GUID v12; // [rsp+28h] [rbp-28h] BYREF
  struct _GUID v13; // [rsp+38h] [rbp-18h] BYREF

  v12 = 0LL;
  v3 = a1;
  v13 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessObjectCompartmentId = NdisGetProcessObjectCompartmentId(CurrentProcess);
  v6 = ProcessObjectCompartmentId;
  if ( ProcessObjectCompartmentId != v3 && ProcessObjectCompartmentId != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(ProcessObjectCompartmentId, &v12) < 0
      || (int)ndisIfGetCompartmentNamespaceGuid(v3, &v13) < 0 )
    {
      return 0LL;
    }
    v7 = *(_QWORD *)&v12.Data1 - *(_QWORD *)&v13.Data1;
    if ( *(_QWORD *)&v12.Data1 == *(_QWORD *)&v13.Data1 )
      v7 = *(_QWORD *)v12.Data4 - *(_QWORD *)v13.Data4;
    if ( v7 )
      return 0LL;
  }
  v11 = 0LL;
  ndisIfReferenceCompartmentForUser(0LL, a2, &v11);
  v9 = v11;
  if ( v11 && v6 != a2 && v6 != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(v6, &v12) < 0 || (int)ndisIfGetCompartmentNamespaceGuid(a2, &v13) < 0 )
      goto LABEL_17;
    v10 = *(_QWORD *)&v12.Data1 - *(_QWORD *)&v13.Data1;
    if ( *(_QWORD *)&v12.Data1 == *(_QWORD *)&v13.Data1 )
      v10 = *(_QWORD *)v12.Data4 - *(_QWORD *)v13.Data4;
    if ( v10 )
    {
LABEL_17:
      ndisIfDereferenceCompartmentForUser(v9);
      return 0LL;
    }
  }
  return v9;
}
