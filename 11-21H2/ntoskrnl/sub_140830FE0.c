/*
 * XREFs of sub_140830FE0 @ 0x140830FE0
 * Callers:
 *     sub_1403C64C0 @ 0x1403C64C0 (sub_1403C64C0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_140830FE0(PCWSTR SourceString, PULONG Type, PULONG ResultDataSize, _QWORD *a4)
{
  void *v4; // rbx
  NTSTATUS result; // eax
  ULONG v9; // ecx
  ULONG v10; // ebp
  PVOID PoolWithTag; // rax
  NTSTATUS v12; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  ValueName = 0LL;
  if ( !Type || !ResultDataSize || !a4 || !SourceString )
    return -1073741811;
  RtlInitUnicodeString(&ValueName, SourceString);
  result = ZwQueryLicenseValue(&ValueName, Type, 0LL, 0, ResultDataSize);
  if ( result >= 0 )
  {
    v9 = *ResultDataSize;
    if ( !*ResultDataSize )
    {
      *a4 = 0LL;
      return result;
    }
LABEL_8:
    v10 = v9;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x72746C6Du);
    v4 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v10);
    if ( v4 )
      goto LABEL_11;
    return -1073741801;
  }
  if ( result == -1073741789 )
  {
    v9 = *ResultDataSize;
    if ( !*ResultDataSize )
      return -1073741801;
    goto LABEL_8;
  }
LABEL_11:
  result = ZwQueryLicenseValue(&ValueName, Type, v4, *ResultDataSize, ResultDataSize);
  v12 = result;
  if ( result < 0 )
  {
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      return v12;
    }
  }
  else
  {
    *a4 = v4;
  }
  return result;
}
