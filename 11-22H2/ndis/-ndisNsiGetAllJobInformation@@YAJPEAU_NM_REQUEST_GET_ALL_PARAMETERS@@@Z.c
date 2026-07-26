/*
 * XREFs of ?ndisNsiGetAllJobInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0006810
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetJobObjectCompartmentId @ 0x1C00068A0 (NdisGetJobObjectCompartmentId.c)
 */

NTSTATUS __fastcall ndisNsiGetAllJobInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // edx
  _DWORD *v2; // rbx
  NTSTATUS result; // eax
  PVOID v4; // rdi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  if ( v1 )
  {
    if ( (unsigned int)(v1 - 1) < 2 )
      return -1073741822;
    else
      return -1073741811;
  }
  else
  {
    v2 = (_DWORD *)*((_QWORD *)a1 + 5);
    if ( v2 )
    {
      Object = 0LL;
      result = ObReferenceObjectByHandle(**((HANDLE **)a1 + 2), 4u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
      v4 = Object;
      if ( result < 0 )
        return result;
      *v2 = NdisGetJobObjectCompartmentId(Object);
      ObfDereferenceObject(v4);
    }
    return 0;
  }
}
