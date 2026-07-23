/*
 * XREFs of sub_1406797C8 @ 0x1406797C8
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_14075EA10 @ 0x14075EA10 (sub_14075EA10.c)
 *     sub_140950968 @ 0x140950968 (sub_140950968.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406797C8(int a1, void *a2, void *a3, int a4, _DWORD *a5, bool *a6)
{
  int v8; // edi
  PIMAGE_NT_HEADERS v10; // rax
  unsigned int v11; // edi
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  __int128 v16; // [rsp+80h] [rbp-9h] BYREF

  v8 = (int)a3;
  *a5 = 0;
  *a6 = 0;
  DestinationString = 0LL;
  v10 = RtlImageNtHeader(a3);
  if ( !v10 )
    return 3221225473LL;
  v16 = 0LL;
  v11 = sub_14075EA10(a1, (_DWORD)a2, v8, v10->OptionalHeader.SizeOfImage, a4, (__int64)&v16);
  if ( v11 + 1073740949 <= 1 )
    sub_140950968(&v16);
  if ( (int)sub_14067B838(a2) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      *a5 = *(_DWORD *)MEMORY[8];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, L"Parameters") >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      if ( (int)sub_14067B838(KeyHandle) >= 0 )
      {
        if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
          *a6 = *(_DWORD *)MEMORY[8] != 0;
        ExFreePoolWithTag(0LL, 0);
      }
      NtClose(KeyHandle);
    }
  }
  return v11;
}
