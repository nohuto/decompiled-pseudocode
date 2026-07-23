/*
 * XREFs of IoGetContainerInformation @ 0x1409371A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     sub_1402DF7D8 @ 0x1402DF7D8 (sub_1402DF7D8.c)
 *     sub_14096DD80 @ 0x14096DD80 (sub_14096DD80.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  PVOID v5; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    v5 = sub_1402DF7D8(CurrentProcessSessionId, v8, v9, v10);
    if ( !v5 )
      return -1073741584;
  }
  v12 = 0;
  *((_DWORD *)Buffer + 1) = sub_14096DD80(v5, &v12);
  v11 = v12 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v12;
  *((_BYTE *)Buffer + 8) = v11;
  return 0;
}
