/*
 * XREFs of ExpInitFullProcessSecurityInfo @ 0x14085F8E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLengthSid @ 0x140227A60 (RtlLengthSid.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140297520 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlpAddKnownAce @ 0x140735770 (RtlpAddKnownAce.c)
 *     RtlValidSid @ 0x1407378A0 (RtlValidSid.c)
 */

_BOOL8 __fastcall ExpInitFullProcessSecurityInfo(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  int DaclSecurityDescriptor; // ebx
  _DWORD *v5; // rdi
  BOOLEAN DaclPresent; // [rsp+30h] [rbp-69h] BYREF
  BOOLEAN DaclDefaulted[3]; // [rsp+31h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-65h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-61h] BYREF
  PACL Dacl; // [rsp+40h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+80h] [rbp-19h] BYREF

  DaclPresent = 0;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  ObjectAttributes.RootDirectory = 0LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DaclSecurityDescriptor = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( DaclSecurityDescriptor >= 0 )
  {
    DaclSecurityDescriptor = ZwQueryValueKey(
                               KeyHandle,
                               &stru_140C06748,
                               KeyValuePartialInformation,
                               KeyValueInformation,
                               0x50u,
                               &ResultLength);
    if ( DaclSecurityDescriptor >= 0 )
    {
      Dacl = 0LL;
      DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                 &ExpFullProcessInfoSecurityDescriptor,
                                 &DaclPresent,
                                 &Dacl,
                                 DaclDefaulted);
      if ( DaclSecurityDescriptor >= 0 )
      {
        if ( DaclPresent )
        {
          v5 = &KeyValueInformation[3];
          if ( &KeyValueInformation[3] > (_DWORD *)((char *)&ObjectAttributes.SecurityDescriptor
                                                  + KeyValueInformation[2]
                                                  + 4) )
          {
LABEL_10:
            *a3 = &ExpFullProcessInfoSecurityDescriptor;
          }
          else
          {
            while ( RtlValidSid(v5) )
            {
              if ( RtlLengthSid(v5) != 32 )
              {
                DaclSecurityDescriptor = -1073741271;
                goto LABEL_11;
              }
              DaclSecurityDescriptor = RtlpAddKnownAce(Dacl, 2u, 0, 1, (unsigned __int8 *)v5, 0);
              if ( DaclSecurityDescriptor < 0 )
                goto LABEL_11;
              v5 += 8;
              if ( v5 > (_DWORD *)((char *)&ObjectAttributes.SecurityDescriptor + KeyValueInformation[2] + 4) )
                goto LABEL_10;
            }
            DaclSecurityDescriptor = -1073741704;
          }
        }
        else
        {
          DaclSecurityDescriptor = -1073741703;
        }
      }
    }
  }
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return DaclSecurityDescriptor >= 0;
}
