/*
 * XREFs of sub_140835590 @ 0x140835590
 * Callers:
 *     sub_1408351BC @ 0x1408351BC (sub_1408351BC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     sub_1405DFE94 @ 0x1405DFE94 (sub_1405DFE94.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char sub_140835590()
{
  ULONG v0; // r15d
  char v1; // r14
  unsigned int v2; // r12d
  HANDLE v3; // r13
  NTSTATUS inited; // ebx
  __int128 *p_KeyValueInformation; // rdi
  NTSTATUS v6; // eax
  void *v7; // rsi
  ULONG Length; // ebx
  PVOID PoolWithQuotaTag; // rax
  NTSTATUS v10; // eax
  int v11; // ecx
  ULONG ResultLength; // [rsp+38h] [rbp-49h] BYREF
  ULONG Value[3]; // [rsp+3Ch] [rbp-45h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-21h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+Fh] BYREF
  int v19; // [rsp+A0h] [rbp+1Fh]

  v0 = 0;
  KeyHandle = 0LL;
  v1 = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v2 = 0;
  Value[0] = 0;
  while ( 1 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A38670[2 * v2];
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
    {
LABEL_17:
      if ( !v1 )
        return v1;
LABEL_21:
      sub_1405DFE94();
      return v1;
    }
    v3 = KeyHandle;
    ResultLength = 0;
    v19 = 0;
    DestinationString = 0LL;
    KeyValueInformation = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"EnableCpuQuota");
    if ( inited >= 0 )
    {
      p_KeyValueInformation = &KeyValueInformation;
      v6 = ZwQueryValueKey(
             v3,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      inited = v6;
      if ( v6 >= 0 )
      {
        v7 = 0LL;
LABEL_8:
        v11 = *((_DWORD *)p_KeyValueInformation + 1);
        if ( ((v11 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v11 == 4 )
          {
            if ( *((_DWORD *)p_KeyValueInformation + 2) == 4 )
            {
              ResultLength = 4;
              v0 = *((_DWORD *)p_KeyValueInformation + 3);
              Value[0] = v0;
            }
            else
            {
              inited = -1073741820;
            }
            goto LABEL_13;
          }
          if ( v11 == 1 )
          {
            if ( ((unsigned __int8)Value & 3) != 0 )
            {
              inited = -2147483646;
            }
            else
            {
              ResultLength = 4;
              DestinationString.Buffer = (wchar_t *)p_KeyValueInformation + 6;
              DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
              DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
              inited = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
              v0 = Value[0];
            }
LABEL_13:
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            goto LABEL_16;
          }
        }
        inited = -1073741788;
        goto LABEL_13;
      }
      if ( v6 == -2147483643 )
      {
        while ( 1 )
        {
          Length = ResultLength;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
          v7 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
            break;
          p_KeyValueInformation = (__int128 *)PoolWithQuotaTag;
          v10 = ZwQueryValueKey(
                  v3,
                  &DestinationString,
                  KeyValuePartialInformation,
                  PoolWithQuotaTag,
                  Length,
                  &ResultLength);
          inited = v10;
          if ( v10 >= 0 )
            goto LABEL_8;
          if ( v10 != -2147483643 )
            goto LABEL_13;
          ExFreePoolWithTag(v7, 0);
        }
        inited = -1073741801;
      }
    }
LABEL_16:
    ZwClose(KeyHandle);
    if ( inited < 0 )
      goto LABEL_17;
    if ( !v0 )
      return 0;
    ++v2;
    v1 = 1;
    if ( v2 >= 2 )
      goto LABEL_21;
  }
}
