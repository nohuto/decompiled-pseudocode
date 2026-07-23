/*
 * XREFs of PiDcResetChildDeviceContainerCallback @ 0x14095B430
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbCopyW @ 0x14022B114 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     _CmIsRootDevice @ 0x14079A688 (_CmIsRootDevice.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDcResetChildDeviceContainerCallback(__int64 a1, const wchar_t *a2, __int64 a3)
{
  __int64 Pool2; // rbx
  const WCHAR *i; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r11
  _QWORD *v11; // rcx
  int v13; // [rsp+60h] [rbp-59h] BYREF
  int v14; // [rsp+64h] [rbp-55h] BYREF
  int v15; // [rsp+68h] [rbp-51h] BYREF
  int v16; // [rsp+6Ch] [rbp-4Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  wchar_t Str1[40]; // [rsp+80h] [rbp-39h] BYREF

  DestinationString = 0LL;
  v14 = 0;
  Pool2 = 0LL;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  for ( i = a2; !CmIsRootDevice(i) && RtlInitUnicodeStringEx(&DestinationString, i) >= 0; i = (const WCHAR *)Pool2 )
  {
    v8 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      break;
    }
    if ( i != a2 )
    {
      v13 = 78;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)i,
                  0LL,
                  37,
                  (__int64)&v14,
                  (__int64)Str1,
                  (__int64)&v13,
                  0) < 0
        || v14 != 1
        || v13 != 78
        || wcsicmp(Str1, *(const wchar_t **)(a3 + 8)) )
      {
        break;
      }
    }
    if ( !Pool2 )
    {
      Pool2 = ExAllocatePool2(256LL, 400LL, 1198550608LL);
      if ( !Pool2 )
        return 0LL;
    }
    if ( (int)PnpGetObjectProperty(
                a1,
                (__int64)i,
                1LL,
                0LL,
                0LL,
                (__int64)DEVPKEY_Device_LastKnownParent,
                (__int64)&v15,
                Pool2,
                400,
                (__int64)&v16,
                0) < 0 )
      goto LABEL_24;
    if ( v15 != 18 )
      break;
    *(_WORD *)(Pool2 + 398) = 0;
    if ( !wcsicmp((const wchar_t *)Pool2, *(const wchar_t **)a3) )
    {
      v9 = ExAllocatePool2(256LL, 416LL, 1198550608LL);
      if ( v9 )
      {
        if ( RtlStringCbCopyW((NTSTRSAFE_PWSTR)(v9 + 16), 0x190uLL, a2) < 0 )
        {
          ExFreePoolWithTag(v10, 0x47706E50u);
        }
        else
        {
          v11 = *(_QWORD **)(a3 + 24);
          if ( *v11 != a3 + 16 )
            __fastfail(3u);
          *v10 = a3 + 16;
          v10[1] = v11;
          *v11 = v10;
          *(_QWORD *)(a3 + 24) = v10;
        }
      }
      break;
    }
  }
  if ( !Pool2 )
    return 0LL;
LABEL_24:
  ExFreePoolWithTag((PVOID)Pool2, 0x47706E50u);
  return 0LL;
}
