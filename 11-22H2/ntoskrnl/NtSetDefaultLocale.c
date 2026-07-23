/*
 * XREFs of NtSetDefaultLocale @ 0x1407FCF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1403713AC (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041C240 (ZwDeleteValueKey.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0FE8 (ExCheckFullProcessInformationAccess.c)
 *     RtlIsMultiSessionSku @ 0x1407ED2A0 (RtlIsMultiSessionSku.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  int v2; // edi
  NTSTATUS result; // eax
  ULONG v5; // ecx
  int v6; // ebx
  int *v7; // rdx
  unsigned int i; // r9d
  int v9; // ecx
  unsigned int v10; // eax
  _KPROCESS *Process; // rdx
  unsigned __int64 v12; // rcx
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
  v2 = DefaultLocaleId;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ResultLength[0] = 0;
  v23 = 0LL;
  DestinationString_8 = 0LL;
  if ( UserProfile )
  {
    result = OpenGlobalizationUserSettingsKey(UserProfile, *(__int64 *)&DefaultLocaleId, &DestinationString);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString_8, L"Locale");
    RtlInitUnicodeString(&v23, L"Control Panel\\International");
    v5 = 1600;
  }
  else
  {
    result = ExCheckFullProcessInformationAccess(KeGetCurrentThread()->PreviousMode);
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
    if ( !UserProfile || RtlIsMultiSessionSku() )
    {
      v6 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
      if ( v6 < 0 )
        goto LABEL_17;
      v13 = v2;
      v14 = (_WORD *)((char *)KeyValueInformation + (UserProfile != 0 ? 16LL : 8LL));
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
      v6 = ZwSetValueKey(KeyHandle, &DestinationString_8, 0, 1u, KeyValueInformation, UserProfile != 0 ? 18 : 10);
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
    if ( UserProfile )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v12 = Process[1].Affinity.StaticBitmap[25];
      if ( !v12 || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        PsDefaultThreadLocaleId = v2;
      else
        *(_DWORD *)(v12 + 72) = v2;
    }
    else
    {
      PsDefaultSystemLocaleId = v2;
    }
  }
  return v6;
}
