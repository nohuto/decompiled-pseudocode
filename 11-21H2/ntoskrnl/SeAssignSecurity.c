/*
 * XREFs of SeAssignSecurity @ 0x140719100
 * Callers:
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140B152D4 @ 0x140B152D4 (sub_140B152D4.c)
 * Callees:
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 */

NTSTATUS __stdcall SeAssignSecurity(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR ExplicitDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PGENERIC_MAPPING GenericMapping,
        POOL_TYPE PoolType)
{
  int v7; // r10d

  v7 = 0;
  if ( ParentDescriptor )
  {
    if ( (!ExplicitDescriptor || (*((_BYTE *)ExplicitDescriptor + 2) & 4) == 0)
      && (v7 = (*((unsigned __int16 *)ParentDescriptor + 1) >> 10) & 1, !ExplicitDescriptor)
      || (*((_BYTE *)ExplicitDescriptor + 2) & 0x10) == 0 )
    {
      if ( _bittest16((const signed __int16 *)ParentDescriptor + 1, 0xBu) )
        v7 |= 2u;
    }
  }
  return sub_1407CE760(
           (_DWORD)ParentDescriptor,
           (_DWORD)ExplicitDescriptor,
           (_DWORD)NewDescriptor,
           0,
           0,
           IsDirectoryObject,
           v7,
           (__int64)SubjectContext,
           (__int64)GenericMapping,
           0LL);
}
