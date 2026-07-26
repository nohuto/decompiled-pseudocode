/*
 * XREFs of ?ndisNsiSetAllJobInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B6AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C013DE3C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 */

NTSTATUS __fastcall ndisNsiSetAllJobInformation(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  unsigned int *v3; // rdi
  PVOID v4; // rsi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v1 = -1073741811;
  if ( *((_DWORD *)a1 + 13) )
    return -1073741822;
  if ( !*((_DWORD *)a1 + 12) )
  {
    v3 = (unsigned int *)*((_QWORD *)a1 + 4);
    if ( v3 )
    {
      Object = 0LL;
      result = ObReferenceObjectByHandle(**((HANDLE **)a1 + 2), 4u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
      v4 = Object;
      if ( result < 0 )
        return result;
      v1 = NdisSetJobObjectCompartmentId((struct _EJOB *)Object, *v3);
      ObfDereferenceObject(v4);
    }
  }
  return v1;
}
