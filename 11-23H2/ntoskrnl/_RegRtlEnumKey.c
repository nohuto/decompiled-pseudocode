/*
 * XREFs of _RegRtlEnumKey @ 0x14086B6EC
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B254 (_CmGetDeviceContainerIdFromBase.c)
 *     _PnpCtxRegEnumKey @ 0x140812ACC (_PnpCtxRegEnumKey.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14082B718 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B4A8 (_RegRtlDeleteTreeInternal.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140875E04 (_PnpGetGenericStorePropertyKeys.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14095C544 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiCMDeleteDeviceKey @ 0x140969490 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140969B9C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970388 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140970928 (PiDrvDbOverlayNodeHive.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140A640E4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A948 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x14041B730 (ZwEnumerateKey.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RegRtlEnumKey(HANDLE KeyHandle, ULONG a2, char *a3, unsigned int *a4)
{
  _DWORD *v7; // rsi
  unsigned __int64 v8; // rdi
  ULONG Length; // r15d
  char *v10; // rbp
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _DWORD *Pool2; // rax
  NTSTATUS v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-B8h] BYREF
  ULONG Index; // [rsp+34h] [rbp-B4h]
  char v22; // [rsp+38h] [rbp-B0h] BYREF

  Index = a2;
  ResultLength = 0;
  v7 = 0LL;
  if ( !a3 )
  {
    LODWORD(v8) = 0;
LABEL_4:
    Length = 96;
    goto LABEL_5;
  }
  v8 = 2LL * *a4;
  if ( v8 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (unsigned int)v8 <= 0x60 )
    goto LABEL_4;
  Length = 2 * *a4;
LABEL_5:
  v10 = &v22;
  if ( (unsigned int)v8 > 0x60 )
    v10 = a3;
  v11 = ZwEnumerateKey(KeyHandle, a2, KeyBasicInformation, v10, Length, &ResultLength);
  v12 = v11;
  if ( !v11 || v11 == -2147483643 )
  {
    v13 = *((_DWORD *)v10 + 3);
    v14 = v13 + 2;
    if ( v13 + 2 >= v13 )
    {
      v12 = 0;
      *a4 = v14 >> 1;
      if ( v14 > (unsigned int)v8 )
        return (unsigned int)-1073741789;
      if ( ResultLength <= Length )
        goto LABEL_11;
      if ( (unsigned int)v8 < 0xFFFFFFF0 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(v8 + 16), 1279739218LL);
        v7 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        v10 = (char *)Pool2;
        v17 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, Pool2, v8 + 16, &ResultLength);
        v12 = v17;
        if ( v17 && v17 != -2147483643 )
          goto LABEL_22;
        v18 = v7[3];
        v19 = v18 + 2;
        if ( v18 + 2 < v18 )
        {
          v12 = -1073741675;
          goto LABEL_22;
        }
        v12 = 0;
        *a4 = v19 >> 1;
        if ( v19 > (unsigned int)v8 )
        {
          v12 = -1073741789;
          goto LABEL_22;
        }
LABEL_11:
        memmove(a3, v10 + 16, *((unsigned int *)v10 + 3));
        *(_WORD *)&a3[2 * *a4 - 2] = 0;
        if ( !v7 )
          return v12;
LABEL_22:
        ExFreePoolWithTag(v7, 0);
        return v12;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v12;
}
