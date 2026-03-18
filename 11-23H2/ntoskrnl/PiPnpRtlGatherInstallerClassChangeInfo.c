/*
 * XREFs of PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408827B0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1406D01F0 (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1406D8120 (PiDmGetObject.c)
 *     _PnpStringFromGuid @ 0x140787E54 (_PnpStringFromGuid.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407880B4 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14088438C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherInstallerClassChangeInfo(__int64 a1, _WORD *a2, PVOID *a3)
{
  __int64 Pool2; // rax
  int Object; // ebx
  int ObjectProperty; // eax
  int v10; // eax
  int v11; // [rsp+60h] [rbp-98h] BYREF
  int v12; // [rsp+64h] [rbp-94h] BYREF
  int v13[6]; // [rsp+68h] [rbp-90h] BYREF
  wchar_t v14[40]; // [rsp+80h] [rbp-78h] BYREF

  v12 = 0;
  v11 = 0;
  *(_OWORD *)v13 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1198550608LL);
  *a3 = (PVOID)Pool2;
  if ( !Pool2 )
  {
    Object = -1073741670;
LABEL_16:
    PiPnpRtlFreeInstallerClassChangeInfo(*a3);
    *a3 = 0LL;
    return (unsigned int)Object;
  }
  if ( a2 )
  {
    Object = PiDmAddCacheReferenceForObject(2u, a2, (volatile signed __int32 **)(Pool2 + 16));
    if ( Object < 0 )
      goto LABEL_16;
  }
  Object = PiDmGetObject(1LL, a1, *a3);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_16;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ClassGuid,
                     (__int64)&v12,
                     (__int64)v13,
                     16,
                     (__int64)&v11,
                     0);
  Object = ObjectProperty;
  if ( ObjectProperty == -1073741275 || ObjectProperty == -1073741772 )
    return 0;
  if ( ObjectProperty < 0 )
    goto LABEL_16;
  Object = PnpStringFromGuid(v13, v14);
  if ( Object < 0 )
    goto LABEL_16;
  v10 = PiDmGetObject(2LL, (__int64)v14, (_QWORD *)*a3 + 1);
  Object = v10;
  if ( v10 == -1073741772 )
  {
    return 0;
  }
  else if ( v10 < 0 )
  {
    goto LABEL_16;
  }
  return (unsigned int)Object;
}
