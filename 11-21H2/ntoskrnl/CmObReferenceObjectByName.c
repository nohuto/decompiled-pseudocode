/*
 * XREFs of CmObReferenceObjectByName @ 0x140AB4008
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall CmObReferenceObjectByName(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // eax
  PADAPTER_OBJECT v8; // rcx
  unsigned int v9; // ebx
  PADAPTER_OBJECT v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = ObReferenceObjectByNameEx(a1, a2, a3, (__int64)CmKeyObjectType, a5, a6, &v11);
  v8 = v11;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *(_DWORD *)&v11->Version == 1803104306 )
    {
      *a7 = v11;
      v8 = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -1073741816;
    }
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return v9;
}
