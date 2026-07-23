/*
 * XREFs of PiPnpRtlIsDeviceEnumerableForUser @ 0x14074090C
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x140740A20 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PnpGetObjectProperty @ 0x1406D00E0 (PnpGetObjectProperty.c)
 *     PiAuVerifyAccessToObject @ 0x14079AABC (PiAuVerifyAccessToObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlIsDeviceEnumerableForUser(
        __int64 a1,
        int a2,
        __int64 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        _BYTE *a5)
{
  int ObjectProperty; // eax
  int v7; // ebx
  int v9; // [rsp+68h] [rbp+Fh] BYREF
  PVOID P; // [rsp+70h] [rbp+17h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+78h] [rbp+1Fh] BYREF

  v9 = 0;
  P = 0LL;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericAll = 983041;
  *a5 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0x200u,
                     a2,
                     1,
                     a3,
                     0LL,
                     (__int64)&DEVPKEY_Device_EffectiveRestrictedSD,
                     (__int64)&v9,
                     &P,
                     0LL,
                     0);
  v7 = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_2;
  if ( ObjectProperty >= 0 )
  {
    if ( v9 != 19 )
      goto LABEL_3;
    v7 = PiAuVerifyAccessToObject(1u, P, &GenericMapping, a4, (__int64)a5);
    if ( v7 < 0 )
    {
LABEL_2:
      v7 = 0;
LABEL_3:
      *a5 = 1;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)v7;
}
