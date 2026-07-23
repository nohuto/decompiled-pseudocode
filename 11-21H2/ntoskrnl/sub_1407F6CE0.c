/*
 * XREFs of sub_1407F6CE0 @ 0x1407F6CE0
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1407F6CE0(HANDLE KeyHandle, __int64 a2)
{
  ULONG v2; // r12d
  __int128 *p_KeyValueInformation; // rsi
  NTSTATUS v6; // eax
  NTSTATUS v7; // edi
  ULONG Length; // edi
  PVOID PoolWithQuotaTag; // rax
  void *v10; // r14
  NTSTATUS v11; // eax
  NTSTATUS result; // eax
  int v13; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  ULONG Value[3]; // [rsp+34h] [rbp-3Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+60h] [rbp-10h]

  v2 = 0;
  Value[0] = 0;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"IoPriority", 4, (ULONG *)(a2 + 8), 4u, 0LL) >= 0 )
    *(_DWORD *)a2 |= 1u;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"PagePriority", 4, (ULONG *)(a2 + 12), 4u, 0LL) >= 0 )
    *(_DWORD *)a2 |= 2u;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"CpuPriorityClass", 4, (ULONG *)(a2 + 16), 4u, 0LL) >= 0 )
    *(_DWORD *)a2 |= 4u;
  ResultLength = 0;
  v18 = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, L"WorkingSetLimitInKB") < 0 )
    goto LABEL_17;
  p_KeyValueInformation = &KeyValueInformation;
  v6 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = 0LL;
LABEL_21:
    v13 = *((_DWORD *)p_KeyValueInformation + 1);
    if ( ((v13 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v13 == 4 )
      {
        if ( *((_DWORD *)p_KeyValueInformation + 2) == 4 )
        {
          ResultLength = 4;
          v2 = *((_DWORD *)p_KeyValueInformation + 3);
        }
        else
        {
          v7 = -1073741820;
        }
        goto LABEL_13;
      }
      if ( v13 == 1 )
      {
        if ( ((unsigned __int8)Value & 3) != 0 )
        {
          v7 = -2147483646;
        }
        else
        {
          ResultLength = 4;
          DestinationString.Buffer = (wchar_t *)p_KeyValueInformation + 6;
          DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
          DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
          v7 = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
          v2 = Value[0];
        }
        goto LABEL_13;
      }
    }
    v7 = -1073741788;
LABEL_13:
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a2 + 4) |= 1u;
      *(_QWORD *)(a2 + 24) = (unsigned __int64)v2 >> 2;
    }
    goto LABEL_17;
  }
  if ( v6 == -2147483643 )
  {
    while ( 1 )
    {
      Length = ResultLength;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
      v10 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
        break;
      p_KeyValueInformation = (__int128 *)PoolWithQuotaTag;
      v11 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              PoolWithQuotaTag,
              Length,
              &ResultLength);
      v7 = v11;
      if ( v11 >= 0 )
        goto LABEL_21;
      if ( v11 != -2147483643 )
        goto LABEL_13;
      ExFreePoolWithTag(v10, 0);
    }
  }
LABEL_17:
  result = RtlQueryImageFileKeyOption(KeyHandle, L"ExpectedConcurrencyCount", 4, (ULONG *)(a2 + 32), 4u, 0LL);
  if ( result >= 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  return result;
}
