/*
 * XREFs of RtlIsUntrustedObject @ 0x140200EE0
 * Callers:
 *     SeGetImageRequiredSigningLevel @ 0x1406AA89C (SeGetImageRequiredSigningLevel.c)
 * Callees:
 *     RtlFindAceByType @ 0x1402AD480 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x14041DDB0 (ZwQuerySecurityObject.c)
 *     ObQuerySecurityObject @ 0x14069C84C (ObQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlIsUntrustedObject(HANDLE Handle, PVOID Object, PBOOLEAN IsUntrustedObject)
{
  _BYTE *Pool2; // rdi
  int v4; // r15d
  char v6; // r13
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  __int16 v9; // ax
  __int64 v10; // rax
  ACL *v11; // rsi
  _DWORD *AceByType; // rax
  NTSTATUS SecurityObject; // eax
  int v14; // ecx
  ULONG LengthNeeded; // [rsp+30h] [rbp-69h] BYREF
  ULONG Index; // [rsp+34h] [rbp-65h] BYREF
  PBOOLEAN v17; // [rsp+38h] [rbp-61h]
  _BYTE SecurityDescriptor[128]; // [rsp+40h] [rbp-59h] BYREF

  LengthNeeded = 0;
  Pool2 = SecurityDescriptor;
  v17 = IsUntrustedObject;
  v4 = (int)Object;
  *IsUntrustedObject = 1;
  if ( Object )
  {
    if ( !Handle )
    {
      v6 = 0;
      result = ObQuerySecurityObject((_DWORD)Object, 16, (unsigned int)SecurityDescriptor, 124, (__int64)&LengthNeeded);
      v8 = result;
      if ( result >= 0 )
        goto LABEL_4;
      if ( result == -1073741789 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(65LL, LengthNeeded, 1649439826LL);
        if ( !Pool2 )
          return -1073741801;
        v6 = 1;
        SecurityObject = ObQuerySecurityObject(v4, 16, (_DWORD)Pool2, 124, (__int64)&LengthNeeded);
LABEL_22:
        v8 = SecurityObject;
        if ( SecurityObject < 0 )
        {
LABEL_23:
          ExFreePoolWithTag(Pool2, 0);
          return v8;
        }
LABEL_4:
        v9 = *((_WORD *)Pool2 + 1);
        if ( (v9 & 0x10) != 0 )
        {
          if ( v9 >= 0 )
          {
            v11 = (ACL *)*((_QWORD *)Pool2 + 3);
          }
          else
          {
            v10 = *((unsigned int *)Pool2 + 3);
            if ( !(_DWORD)v10 )
              goto LABEL_11;
            v11 = (ACL *)&Pool2[v10];
          }
          if ( v11 )
          {
            Index = 0;
            while ( 1 )
            {
              AceByType = RtlFindAceByType(v11, 0x11u, &Index);
              if ( !AceByType )
                break;
              if ( (*((_BYTE *)AceByType + 1) & 8) == 0 )
              {
                v14 = *((unsigned __int8 *)AceByType + 9);
                if ( !(_BYTE)v14 || AceByType[v14 - 1 + 4] < 0x2000u )
                  goto LABEL_12;
                break;
              }
            }
          }
        }
LABEL_11:
        *v17 = 0;
LABEL_12:
        if ( !v6 )
          return v8;
        goto LABEL_23;
      }
      return result;
    }
    return -1073741811;
  }
  if ( !Handle )
    return -1073741811;
  v6 = 0;
  result = ZwQuerySecurityObject(Handle, 0x10u, SecurityDescriptor, 0x7Cu, &LengthNeeded);
  v8 = result;
  if ( result >= 0 )
    goto LABEL_4;
  if ( result == -1073741789 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(65LL, LengthNeeded, 1649439826LL);
    if ( !Pool2 )
      return -1073741801;
    v6 = 1;
    SecurityObject = ZwQuerySecurityObject(Handle, 0x10u, Pool2, 0x7Cu, &LengthNeeded);
    goto LABEL_22;
  }
  return result;
}
