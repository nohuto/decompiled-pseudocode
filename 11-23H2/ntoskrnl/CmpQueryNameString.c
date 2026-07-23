/*
 * XREFs of CmpQueryNameString @ 0x140684F94
 * Callers:
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x14074EBE4 (CmpTraceHiveMountBaseFileMounted.c)
 *     CmpStartRMLog @ 0x140872DD8 (CmpStartRMLog.c)
 *     CmpTraceHiveRestoreStart @ 0x140A12F0C (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x140A1EB00 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x14075B9E4 (ObQueryNameStringMode.c)
 *     ExpAllocateStringRoutine @ 0x1407C7260 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  __int64 i; // rbp
  __int64 Pool2; // rax
  UNICODE_STRING *v7; // rdi
  int NameStringMode; // eax
  __int64 Length; // rcx
  __int64 StringRoutine; // rax
  NTSTATUS appended; // eax
  unsigned __int16 v12; // dx
  wchar_t *Buffer; // r8
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    for ( i = 272LL; ; i = v14 )
    {
      Pool2 = ExAllocatePool2(256LL, i, 1649626435LL);
      v7 = (UNICODE_STRING *)Pool2;
      if ( !Pool2 )
        break;
      NameStringMode = ObQueryNameStringMode((_DWORD)Object, Pool2, i, (unsigned int)&v14, 0);
      v4 = NameStringMode;
      if ( NameStringMode >= 0 )
      {
        a2->Length = 0;
        Length = v7->Length;
        a2->MaximumLength = v7->Length;
        StringRoutine = ExpAllocateStringRoutine(Length);
        a2->Buffer = (wchar_t *)StringRoutine;
        if ( StringRoutine )
        {
          appended = RtlAppendUnicodeStringToString(a2, v7);
          v12 = a2->Length;
          v4 = appended;
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)v12 >> 1) - 1] )
                break;
              v12 -= 2;
              a2->Length = v12;
            }
            while ( v12 );
          }
        }
        else
        {
          v4 = -1073741801;
        }
LABEL_9:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        break;
      }
      if ( NameStringMode != -2147483643 || v14 <= (unsigned int)i )
        goto LABEL_9;
      ExFreePoolWithTag(v7, 0);
    }
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
