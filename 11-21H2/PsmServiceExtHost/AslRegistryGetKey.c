/*
 * XREFs of AslRegistryGetKey @ 0x18009E0B4
 * Callers:
 *     AslpProcessMatchRegNode @ 0x1800A5D50 (AslpProcessMatchRegNode.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslRegistryBuildMachinePath @ 0x18009DEE0 (AslRegistryBuildMachinePath.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, const WCHAR *a2)
{
  int v3; // ebx
  NTSTATUS v4; // eax
  void *v5; // rax
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  *(_OWORD *)P = 0LL;
  v3 = AslRegistryBuildMachinePath((PUNICODE_STRING)P, a2);
  if ( v3 < 0 )
    goto LABEL_2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v3 = v4;
  if ( v4 >= 0 )
  {
    v5 = KeyHandle;
    v3 = 0;
    KeyHandle = 0LL;
    *a1 = v5;
  }
  else if ( v4 != -1073741772 )
  {
LABEL_2:
    AslLogCallPrintf(1LL);
  }
  if ( P[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  return (unsigned int)v3;
}
