/*
 * XREFs of AslRegistryGetKey @ 0x180098ACC
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051804 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x180052070 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeSdbsDisabled @ 0x180052484 (SdbpGetMergeSdbsDisabled.c)
 *     AslpProcessMatchRegNode @ 0x18009FA98 (AslpProcessMatchRegNode.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslRegistryBuildMachinePath @ 0x1800988F8 (AslRegistryBuildMachinePath.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, const WCHAR *a2, ACCESS_MASK a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  int v9; // r8d
  void *v10; // rax
  NTSTATUS v12; // [rsp+28h] [rbp-48h]
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  *(_OWORD *)P = 0LL;
  v6 = AslRegistryBuildMachinePath((PUNICODE_STRING)P, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = "AslRegistryBuildMachinePath failed for %ws [%x]";
    v9 = 1556;
LABEL_3:
    v12 = v6;
    AslLogCallPrintf(1LL, (unsigned int)"AslRegistryGetKey", v9, (_DWORD)v8, a2, v12);
    goto LABEL_8;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = KeyHandle;
    v7 = 0;
    KeyHandle = 0LL;
    *a1 = v10;
  }
  else if ( v6 != -1073741772 )
  {
    v8 = "NtOpenKey failed for %ws [%x]";
    v9 = 1599;
    goto LABEL_3;
  }
LABEL_8:
  if ( P[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  return v7;
}
