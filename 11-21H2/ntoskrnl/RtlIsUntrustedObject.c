/*
 * XREFs of RtlIsUntrustedObject @ 0x140206A00
 * Callers:
 *     sub_1407010C8 @ 0x1407010C8 (sub_1407010C8.c)
 * Callees:
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x14041E3C0 (ZwQuerySecurityObject.c)
 *     sub_140673A24 @ 0x140673A24 (sub_140673A24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlIsUntrustedObject(HANDLE Handle, PVOID Object, PBOOLEAN IsUntrustedObject)
{
  _BYTE *PoolWithQuotaTag; // rdi
  int v4; // r15d
  char v6; // r13
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  __int16 v9; // ax
  __int64 v10; // rax
  ACL *v11; // rsi
  _DWORD *AceByType; // rax
  NTSTATUS v13; // eax
  int v14; // ecx
  ULONG LengthNeeded; // [rsp+30h] [rbp-69h] BYREF
  ULONG Index; // [rsp+34h] [rbp-65h] BYREF
  PBOOLEAN v17; // [rsp+38h] [rbp-61h]
  _BYTE SecurityDescriptor[128]; // [rsp+40h] [rbp-59h] BYREF

  LengthNeeded = 0;
  PoolWithQuotaTag = SecurityDescriptor;
  v17 = IsUntrustedObject;
  v4 = (int)Object;
  *IsUntrustedObject = 1;
  if ( Object )
  {
    if ( !Handle )
    {
      v6 = 0;
      result = sub_140673A24((_DWORD)Object, 16, (unsigned int)SecurityDescriptor, 124, (__int64)&LengthNeeded);
      v8 = result;
      if ( result >= 0 )
        goto LABEL_4;
      if ( result == -1073741789 )
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LengthNeeded, 0x62507452u);
        if ( !PoolWithQuotaTag )
          return -1073741801;
        v6 = 1;
        v13 = sub_140673A24(v4, 16, (_DWORD)PoolWithQuotaTag, 124, (__int64)&LengthNeeded);
LABEL_22:
        v8 = v13;
        if ( v13 < 0 )
        {
LABEL_23:
          ExFreePoolWithTag(PoolWithQuotaTag, 0);
          return v8;
        }
LABEL_4:
        v9 = *((_WORD *)PoolWithQuotaTag + 1);
        if ( (v9 & 0x10) != 0 )
        {
          if ( v9 >= 0 )
          {
            v11 = (ACL *)*((_QWORD *)PoolWithQuotaTag + 3);
          }
          else
          {
            v10 = *((unsigned int *)PoolWithQuotaTag + 3);
            if ( !(_DWORD)v10 )
              goto LABEL_11;
            v11 = (ACL *)&PoolWithQuotaTag[v10];
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
  result = ZwQuerySecurityObject(Handle, 0x10u, SecurityDescriptor, 0x7Cu, &LengthNeeded);
  v8 = result;
  v6 = 0;
  if ( result >= 0 )
    goto LABEL_4;
  if ( result == -1073741789 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LengthNeeded, 0x62507452u);
    if ( !PoolWithQuotaTag )
      return -1073741801;
    v6 = 1;
    v13 = ZwQuerySecurityObject(Handle, 0x10u, PoolWithQuotaTag, 0x7Cu, &LengthNeeded);
    goto LABEL_22;
  }
  return result;
}
