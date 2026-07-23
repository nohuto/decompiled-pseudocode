/*
 * XREFs of OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1402F8898
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObQueryNameStringMode @ 0x14075B9E4 (ObQueryNameStringMode.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B6CD0 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  PVOID result; // rax

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1520);
  else
    v1 = qword_140D49ED0;
  v2 = (unsigned int)PsObjectDirectorySiloContextSlot;
  if ( (unsigned int)PsObjectDirectorySiloContextSlot >= 0x20 )
  {
    v2 = (unsigned int)(PsObjectDirectorySiloContextSlot - 32);
    if ( (unsigned int)v2 >= 0x100 )
      return ObpRootDirectoryObject;
    v1 = *(_QWORD *)(v1 + 512);
    if ( !v1 )
      return ObpRootDirectoryObject;
  }
  v3 = *(_QWORD *)(v1 + 16 * v2 + 8);
  result = (PVOID)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v3 & 0xFFFFFFFFFFFFFFFEuLL) == 0 || (v3 & 1) == 0 )
    return ObpRootDirectoryObject;
  return result;
}
