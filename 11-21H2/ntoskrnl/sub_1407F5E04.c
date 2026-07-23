/*
 * XREFs of sub_1407F5E04 @ 0x1407F5E04
 * Callers:
 *     sub_140692780 @ 0x140692780 (sub_140692780.c)
 * Callees:
 *     PsGetJobSilo @ 0x140212000 (PsGetJobSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402F6170 @ 0x1402F6170 (sub_1402F6170.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1407F5E04(__int64 a1, unsigned int a2, char a3, __int64 a4, _QWORD *a5, _DWORD *a6)
{
  int JobSilo; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  ULONG v12; // ecx
  HANDLE v13; // rcx
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  v16 = 0LL;
  Object = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( a2 < 0x10 || *(_DWORD *)(a1 + 8) > 2u )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    JobSilo = sub_140732D40(*(_QWORD *)a1, 4, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        if ( sub_1402F6170((__int64)KeGetCurrentThread(), v16) )
        {
          JobSilo = -1073741811;
        }
        else
        {
          v10 = PsAttachSiloToCurrentThread(v9);
          ObjectAttributes.RootDirectory = 0LL;
          v11 = v10;
          ObjectAttributes.Length = 48;
          v12 = 1088;
          if ( a3 != 1 )
            v12 = 576;
          ObjectAttributes.Attributes = v12;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&a24_1[8 * *(int *)(a1 + 8)];
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          JobSilo = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
          if ( JobSilo >= 0 )
          {
            v13 = KeyHandle;
            KeyHandle = 0LL;
            JobSilo = 0;
            *a6 = 8;
            *a5 = v13;
          }
          PsDetachSiloFromCurrentThread(v11);
        }
      }
    }
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
