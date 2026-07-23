/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x1406CC700
 * Callers:
 *     sub_1403DCE64 @ 0x1403DCE64 (sub_1403DCE64.c)
 *     sub_1405DFE94 @ 0x1405DFE94 (sub_1405DFE94.c)
 *     sub_1406C2FDC @ 0x1406C2FDC (sub_1406C2FDC.c)
 *     sub_1406CC6A0 @ 0x1406CC6A0 (sub_1406CC6A0.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_14070F040 @ 0x14070F040 (sub_14070F040.c)
 *     sub_1407F6CE0 @ 0x1407F6CE0 (sub_1407F6CE0.c)
 *     sub_1407F8490 @ 0x1407F8490 (sub_1407F8490.c)
 *     sub_140835490 @ 0x140835490 (sub_140835490.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        ULONG *a4,
        unsigned int a5,
        ULONG *a6)
{
  NTSTATUS result; // eax
  unsigned int v10; // esi
  __int128 *p_KeyValueInformation; // rdi
  NTSTATUS v12; // ebx
  ULONG Length; // ebx
  SIZE_T i; // rdx
  PVOID PoolWithQuotaTag; // rax
  void *v16; // r12
  NTSTATUS v17; // eax
  int v18; // ecx
  size_t v19; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  ULONG *v22; // [rsp+48h] [rbp-28h]
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-10h]

  v22 = a6;
  ResultLength = 0;
  v24 = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0 )
    return result;
  v10 = a5;
  if ( a5 < 8 )
  {
    p_KeyValueInformation = &KeyValueInformation;
    result = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    v12 = result;
    if ( result < 0 )
    {
      if ( result != -2147483643 )
        return result;
      Length = ResultLength;
      goto LABEL_7;
    }
    v16 = 0LL;
LABEL_15:
    if ( !a3 )
    {
      if ( *((_DWORD *)p_KeyValueInformation + 2) > a5 )
      {
        ResultLength = *((_DWORD *)p_KeyValueInformation + 2);
        goto LABEL_37;
      }
      a3 = *((_DWORD *)p_KeyValueInformation + 1);
      v10 = *((_DWORD *)p_KeyValueInformation + 2);
    }
    v18 = *((_DWORD *)p_KeyValueInformation + 1);
    if ( ((v18 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v18 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( v10 == 4 && *((_DWORD *)p_KeyValueInformation + 2) == 4 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              *a4 = *((_DWORD *)p_KeyValueInformation + 3);
              goto LABEL_26;
            }
LABEL_37:
            v12 = -2147483643;
            goto LABEL_26;
          }
          goto LABEL_36;
        }
        goto LABEL_55;
      }
      if ( v18 == 11 )
      {
        if ( a3 == 11 )
        {
          if ( v10 == 8 && *((_DWORD *)p_KeyValueInformation + 2) == 8 )
          {
            ResultLength = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)((char *)p_KeyValueInformation + 12);
LABEL_26:
              if ( v22 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
                *v22 = ResultLength;
              goto LABEL_11;
            }
            goto LABEL_37;
          }
          goto LABEL_36;
        }
LABEL_55:
        v12 = -1073741788;
        goto LABEL_11;
      }
      if ( v18 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_26;
      }
      if ( a3 == 4 )
      {
        if ( v10 == 4 )
        {
          if ( ((unsigned __int8)a4 & 3) == 0 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              DestinationString.Buffer = (wchar_t *)p_KeyValueInformation + 6;
              DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
              DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
              v12 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
              goto LABEL_26;
            }
            goto LABEL_37;
          }
          v12 = -2147483646;
LABEL_11:
          if ( v16 )
            ExFreePoolWithTag(v16, 0);
          return v12;
        }
LABEL_36:
        v12 = -1073741820;
        goto LABEL_11;
      }
      v19 = *((unsigned int *)p_KeyValueInformation + 2);
      ResultLength = *((_DWORD *)p_KeyValueInformation + 2);
    }
    else
    {
      if ( a3 != v18 )
        goto LABEL_55;
      ResultLength = *((_DWORD *)p_KeyValueInformation + 2);
      if ( !a4 )
        goto LABEL_37;
      v19 = *((unsigned int *)p_KeyValueInformation + 2);
    }
    if ( (unsigned int)v19 <= v10 )
    {
      memmove(a4, (char *)p_KeyValueInformation + 12, v19);
      goto LABEL_26;
    }
    goto LABEL_37;
  }
  Length = a5 + 12;
LABEL_7:
  for ( i = Length; ; i = ResultLength )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, i, 0x6B497452u);
    v16 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      break;
    p_KeyValueInformation = (__int128 *)PoolWithQuotaTag;
    v17 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            PoolWithQuotaTag,
            Length,
            &ResultLength);
    v12 = v17;
    if ( v17 >= 0 )
      goto LABEL_15;
    if ( v17 != -2147483643 )
      goto LABEL_11;
    ExFreePoolWithTag(v16, 0);
    Length = ResultLength;
  }
  return -1073741801;
}
