/*
 * XREFs of sub_140B4FF80 @ 0x140B4FF80
 * Callers:
 *     sub_140B2AE28 @ 0x140B2AE28 (sub_140B2AE28.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14041B9C0 (ZwEnumerateValueKey.c)
 *     ZwDeleteFile @ 0x14041D260 (ZwDeleteFile.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14095A3E4 @ 0x14095A3E4 (sub_14095A3E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B50ACC @ 0x140B50ACC (sub_140B50ACC.c)
 */

void __fastcall sub_140B4FF80(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  __int64 Pool2; // rbx
  __int64 v6; // r8
  ULONG v7; // edx
  int v8; // edi
  unsigned int v9; // eax
  _WORD *v10; // rcx
  __int64 v11; // rdx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES v16; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v18[544]; // [rsp+C0h] [rbp-40h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Destination = 0LL;
  Source = 0LL;
  memset(&v16, 0, 44);
  memset(v18, 0, 0x218uLL);
  ResultLength = 0;
  Pool2 = ExAllocatePool2(256LL, 0x21CuLL, 0x674C7050u);
  if ( Pool2 )
  {
    sub_140B50ACC(a1, v4, v6, a1);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      v7 = 0;
      v8 = 1;
      while ( ZwEnumerateValueKey(KeyHandle, v7, KeyValueFullInformation, (PVOID)Pool2, 0x21Cu, &ResultLength) >= 0 )
      {
        if ( ResultLength
          && *(_DWORD *)(Pool2 + 4) == 4
          && *(_DWORD *)(Pool2 + 12) == 4
          && (unsigned __int8)*(_DWORD *)(*(unsigned int *)(Pool2 + 8) + Pool2) == 1 )
        {
          *(_DWORD *)&Destination.Length = 35127296;
          Destination.Buffer = (wchar_t *)v18;
          Source.Buffer = (wchar_t *)(Pool2 + 20);
          Source.Length = *(_WORD *)(Pool2 + 16);
          Source.MaximumLength = Source.Length;
          RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          v9 = Destination.Length >> 1;
          if ( v9 > 0xD )
          {
            v10 = &v18[26];
            v11 = v9 - 13;
            do
            {
              if ( *v10 == 47 )
                *v10 = 92;
              ++v10;
              --v11;
            }
            while ( v11 );
          }
          sub_14095A3E4(&Destination);
          v16.Length = 48;
          v16.ObjectName = &Destination;
          v16.RootDirectory = 0LL;
          *(_OWORD *)&v16.SecurityDescriptor = 0LL;
          v16.Attributes = 576;
          ZwDeleteFile(&v16);
        }
        v7 = v8++;
      }
      ZwDeleteKey(KeyHandle);
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag((PVOID)Pool2, 0x674C7050u);
  }
}
