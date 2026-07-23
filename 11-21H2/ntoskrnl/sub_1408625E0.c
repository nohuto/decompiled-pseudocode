/*
 * XREFs of sub_1408625E0 @ 0x1408625E0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1408625E0(HANDLE Handle)
{
  _DWORD *v2; // rbx
  NTSTATUS result; // eax
  void *v4; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = sub_140347DB0();
  if ( !SeSinglePrivilegeCheck(stru_140D3CA10, *((_BYTE *)KeGetCurrentThread() + 562)) )
    return -1073741727;
  if ( v2[224] == 1 )
    return -1073741823;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
  *((_QWORD *)v2 + 111) = Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo() )
      byte_140C5B134 = 1;
    v2[224] = 1;
    v4 = (void *)*((_QWORD *)KeGetCurrentThread() + 23);
    *((_QWORD *)v2 + 110) = v4;
    ObfReferenceObject(v4);
    return 0;
  }
  return result;
}
