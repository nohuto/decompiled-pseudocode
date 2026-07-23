/*
 * XREFs of sub_140836AA4 @ 0x140836AA4
 * Callers:
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     DxgkInitialize @ 0x140836CC8 (DxgkInitialize.c)
 *     sub_140837574 @ 0x140837574 (sub_140837574.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS sub_140836AA4()
{
  wchar_t **p_Buffer; // rsi
  int i; // ebx
  NTSTATUS result; // eax
  struct _DRIVER_INITIALIZATION_DATA *v3; // r8
  NTSTATUS v4; // edi
  struct _DRIVER_INITIALIZATION_DATA *v5; // r8
  int v6; // r15d
  int v7; // r14d
  __int64 v8; // rdi
  int v9; // edi
  PVOID *v10; // rsi
  int v11; // eax
  __int64 v12; // rbx
  UNICODE_STRING RegistryPath; // [rsp+38h] [rbp-59h] BYREF
  PVOID P[16]; // [rsp+48h] [rbp-49h] BYREF

  RegistryPath.Buffer = 0LL;
  p_Buffer = &::RegistryPath.Buffer;
  qword_140C48E70 = 0LL;
  memset(&::RegistryPath.Buffer, 0, 0x80uLL);
  *(_DWORD *)&::RegistryPath.Length = 0;
  memset(P, 0, sizeof(P));
  i = 0;
  *(_DWORD *)&RegistryPath.Length = 0;
  result = ZwOpenKey((PHANDLE)&RegistryPath.Buffer, 0x20019u, (POBJECT_ATTRIBUTES)&stru_140005FB0);
  if ( result >= 0 )
  {
    v4 = DxgkInitialize((PDRIVER_OBJECT)&::RegistryPath.Buffer, &::RegistryPath, v3);
    if ( v4 >= 0 )
    {
      DxgkInitialize((PDRIVER_OBJECT)P, &RegistryPath, v5);
      if ( ::RegistryPath.Buffer && (*((_DWORD *)::RegistryPath.Buffer + 200) & 1) != 0 )
        qword_140C48E70 = (__int64)::RegistryPath.Buffer;
      v6 = 0;
      for ( i = *(_DWORD *)&RegistryPath.Length; v6 < *(int *)&::RegistryPath.Length; ++p_Buffer )
      {
        v7 = 0;
        v8 = 0LL;
        if ( i > 0 )
        {
          while ( RtlCompareUnicodeString((PCUNICODE_STRING)*p_Buffer + 1, (PCUNICODE_STRING)P[v8] + 1, 1u) )
          {
            ++v7;
            ++v8;
            if ( v7 >= i )
              goto LABEL_10;
          }
          sub_140837574(*p_Buffer, P[v8]);
        }
LABEL_10:
        ++v6;
      }
      if ( qword_140C48E70 )
      {
        v9 = 0;
        if ( i > 0 )
        {
          v10 = P;
          while ( RtlCompareUnicodeString((PCUNICODE_STRING)*v10 + 1, &stru_140A38CB0, 1u) )
          {
            ++v9;
            ++v10;
            if ( v9 >= i )
              goto LABEL_16;
          }
          sub_140837574(qword_140C48E70, P[v9]);
        }
LABEL_16:
        NtBuildNumber = *(_DWORD *)(qword_140C48E70 + 8) | 0xF0000000;
        MEMORY[0xFFFFF78000000260] = *(_DWORD *)(qword_140C48E70 + 8);
        dword_140C0C680 = *(_DWORD *)(qword_140C48E70 + 12);
      }
      v4 = 0;
    }
    v11 = i - 1;
    v12 = i - 1;
    if ( v11 >= 0 )
    {
      do
      {
        ExFreePoolWithTag(P[v12], 0x64764D43u);
        P[v12--] = 0LL;
      }
      while ( v12 >= 0 );
    }
    ZwClose(RegistryPath.Buffer);
    return v4;
  }
  return result;
}
