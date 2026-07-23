/*
 * XREFs of sub_1407F42D0 @ 0x1407F42D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140372788 @ 0x140372788 (sub_140372788.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_1406D75F4 @ 0x1406D75F4 (sub_1406D75F4.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 */

NTSTATUS __fastcall sub_1407F42D0(__int16 a1, __int64 a2)
{
  int v2; // edi
  char v3; // si
  NTSTATUS result; // eax
  ULONG v5; // ecx
  NTSTATUS v6; // ebx
  int *v7; // rdx
  unsigned int i; // r9d
  int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r9d
  _WORD *v14; // r8
  _WORD *v15; // r8
  _WORD *v16; // rdx
  unsigned int v17; // ecx
  __int16 v18; // ax
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v23; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _WORD KeyValueInformation[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v26; // [rsp+ACh] [rbp-5Ch]
  unsigned int v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B4h] [rbp-54h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = a2;
  DestinationString = 0LL;
  v3 = a1;
  KeyHandle = 0LL;
  ResultLength[0] = 0;
  v23 = 0LL;
  DestinationString_8 = 0LL;
  if ( (_BYTE)a1 )
  {
    result = sub_140372788(a1, a2, &DestinationString);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString_8, L"Locale");
    RtlInitUnicodeString(&v23, L"Control Panel\\International");
    v5 = 1600;
  }
  else
  {
    result = sub_1406D75F4(*((_BYTE *)KeGetCurrentThread() + 562));
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString_8, L"Default");
    RtlInitUnicodeString(&v23, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
    v5 = 576;
  }
  ObjectAttributes.RootDirectory = DestinationString;
  ObjectAttributes.ObjectName = &v23;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v5;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v2 )
  {
    if ( !v3 || RtlIsMultiSessionSku() )
    {
      v6 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
      if ( v6 < 0 )
        goto LABEL_17;
      v13 = v2;
      v14 = (_WORD *)((char *)KeyValueInformation + (v3 != 0 ? 16LL : 8LL));
      *v14 = 0;
      v15 = v14 - 1;
      if ( v15 >= KeyValueInformation )
      {
        do
        {
          v16 = v15 - 1;
          v17 = v13 & 0xF;
          v18 = 48;
          if ( v17 > 9 )
            v18 = 55;
          v13 >>= 4;
          *v15-- = v17 + v18;
        }
        while ( v16 >= KeyValueInformation );
      }
      v6 = ZwSetValueKey(KeyHandle, &DestinationString_8, 0, 1u, KeyValueInformation, v3 != 0 ? 18 : 10);
    }
    else
    {
      v6 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
      if ( v6 < 0 )
        goto LABEL_17;
      ZwDeleteValueKey(KeyHandle, &DestinationString_8);
    }
    goto LABEL_16;
  }
  v6 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v6 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString_8,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x100u,
           ResultLength);
    if ( v6 >= 0 )
    {
      if ( v26 == 1 )
      {
        v7 = &v28;
        for ( i = 0; i < v27; v2 = v10 | (16 * v2) )
        {
          v9 = *(unsigned __int16 *)v7;
          v7 = (int *)((char *)v7 + 2);
          if ( (unsigned __int16)(v9 - 48) > 9u )
          {
            if ( (unsigned __int16)(v9 - 65) <= 5u )
            {
              v10 = v9 - 55;
            }
            else
            {
              if ( (unsigned __int16)(v9 - 97) > 5u )
                break;
              v10 = v9 - 87;
            }
          }
          else
          {
            v10 = v9 - 48;
          }
          if ( v10 >= 0x10 )
            break;
          i += 2;
        }
      }
      else if ( v26 == 4 && v27 == 4 )
      {
        v2 = v28;
      }
      else
      {
        v6 = -1073741823;
      }
    }
LABEL_16:
    ZwClose(KeyHandle);
  }
LABEL_17:
  if ( DestinationString )
    ZwClose(DestinationString);
  if ( v6 >= 0 )
  {
    if ( v3 )
    {
      v11 = *((_QWORD *)KeGetCurrentThread() + 23);
      v12 = *(_QWORD *)(v11 + 1368);
      if ( !v12 || (*(_DWORD *)(v11 + 2172) & 0x1000) != 0 )
        dword_140D3CBE8 = v2;
      else
        *(_DWORD *)(v12 + 88) = v2;
    }
    else
    {
      dword_140D3CA30 = v2;
    }
  }
  return v6;
}
