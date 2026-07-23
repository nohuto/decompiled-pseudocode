/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x1406CE224
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x1406CE0F4 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1406CE0F4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x1406CE66C (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406CEEE0 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1406D9E50 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x140797B54 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14086F41C (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v8; // ebx
  unsigned int v11; // r13d
  wchar_t *v12; // rdi
  PVOID v13; // r15
  unsigned int v14; // r15d
  wchar_t *Pool2; // rax
  wchar_t *v16; // rsi
  int DeviceRegKeyPath; // eax
  int DeviceRegKeySecurityDescriptor; // ebx
  unsigned __int16 Length; // bx
  int v20; // r15d
  HANDLE v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v25; // rax
  int v26; // r13d
  int v27; // r12d
  int v28; // edi
  int Tree; // eax
  __int64 v30; // rcx
  HANDLE v31; // rax
  __int64 v32; // rcx
  size_t v33; // [rsp+30h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v35; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v36; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v37; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+50h] BYREF
  int v42; // [rsp+D8h] [rbp+58h]

  v42 = a4;
  LODWORD(v41) = 0;
  v8 = a4;
  v37 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v11 = 4;
  Handle = 0LL;
  v12 = 0LL;
  P = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( a3 && (a3 & 0xFFFFFCE8) == 0 )
  {
    v14 = (a3 & 0x200) != 0 ? 360 : 240;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v14, 1380994640LL);
    while ( 1 )
    {
      v12 = Pool2;
      if ( !Pool2 )
      {
        DeviceRegKeySecurityDescriptor = -1073741801;
        goto LABEL_20;
      }
      v16 = Pool2;
      LODWORD(v33) = v14 >> 1;
      DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, a2, a3, v8, a6, Pool2, v33, (__int64)&v41);
      DeviceRegKeySecurityDescriptor = DeviceRegKeyPath;
      if ( DeviceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(v12, 0);
      v25 = 2LL * (unsigned int)v41;
      v12 = 0LL;
      if ( v25 > 0xFFFFFFFF )
      {
        DeviceRegKeySecurityDescriptor = -1073741675;
        goto LABEL_20;
      }
      v14 = 2 * v41;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v25, 1380994640LL);
      v8 = v42;
    }
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_20;
    if ( (a3 & 0x100) != 0 )
    {
      v20 = (int)v16;
      if ( a1 )
        v32 = *(_QWORD *)(a1 + 224);
      else
        v32 = 0LL;
      DeviceRegKeySecurityDescriptor = SysCtxRegOpenCurrentUserKey(v32, 0LL, 0x2000000LL, &v36);
      if ( DeviceRegKeySecurityDescriptor < 0 )
        goto LABEL_20;
      v21 = v36;
LABEL_16:
      v37 = v21;
      if ( a1 )
        v22 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v22) = 0;
      v23 = SysCtxRegOpenKey(v22, (_DWORD)v21, v20, 0, a5, (__int64)a7);
      if ( !v23 )
      {
        *a8 = 2;
        goto LABEL_20;
      }
      if ( v23 == -1073741444 )
      {
        DeviceRegKeySecurityDescriptor = -1073741595;
        goto LABEL_20;
      }
      if ( v23 != -1073741772 )
      {
LABEL_56:
        DeviceRegKeySecurityDescriptor = v23;
        goto LABEL_20;
      }
      v26 = (unsigned __int8)a3;
      if ( !a6 )
      {
        if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
          DeviceRegKeySecurityDescriptor = -1073741772;
        else
          DeviceRegKeySecurityDescriptor = -1073741810;
        goto LABEL_41;
      }
      if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
      {
        DeviceRegKeySecurityDescriptor = CmOpenDeviceRegKey(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
        if ( DeviceRegKeySecurityDescriptor < 0 )
          goto LABEL_41;
      }
      DeviceRegKeySecurityDescriptor = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &P);
      v12 = v16;
      if ( DeviceRegKeySecurityDescriptor < 0 )
        goto LABEL_20;
      v27 = a5;
      v28 = a5;
      if ( P )
        v28 = 917510;
      Tree = PnpCtxRegCreateTree(a1, (_DWORD)v37, v20, v26 == 19, v28, (__int64)P, (__int64)&v35, (__int64)a8);
      if ( Tree == -1073741444 )
      {
        DeviceRegKeySecurityDescriptor = -1073741595;
      }
      else if ( Tree < 0 )
      {
        DeviceRegKeySecurityDescriptor = Tree;
      }
      else
      {
        if ( v28 != v27 )
        {
          if ( a1 )
            v30 = *(_QWORD *)(a1 + 224);
          else
            LODWORD(v30) = 0;
          v23 = SysCtxRegOpenKey(v30, (_DWORD)v35, 0, 0, v27, (__int64)a7);
          v12 = v16;
          if ( v23 == -1073741444 )
          {
            DeviceRegKeySecurityDescriptor = -1073741772;
            goto LABEL_20;
          }
          if ( v23 < 0 )
            goto LABEL_56;
LABEL_20:
          v13 = P;
          goto LABEL_21;
        }
        v31 = v35;
        v35 = 0LL;
        *a7 = v31;
      }
LABEL_41:
      v12 = v16;
      goto LABEL_20;
    }
    DeviceRegKeySecurityDescriptor = RtlInitUnicodeStringEx(&DestinationString, v16);
    if ( DeviceRegKeySecurityDescriptor < 0 )
      goto LABEL_20;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v14
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v20 = (_DWORD)v16 + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = v16 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&`_CmOpenDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
      {
        v11 = 5;
        v20 = (_DWORD)v16 + 60;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmOpenDeviceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v11 = 14;
        v20 = (_DWORD)v16 + 86;
      }
      DeviceRegKeySecurityDescriptor = PnpCtxGetCachedContextBaseKey(a1, v11, &v37);
      if ( DeviceRegKeySecurityDescriptor < 0 )
        goto LABEL_20;
      v21 = v37;
      goto LABEL_16;
    }
    v13 = P;
  }
  DeviceRegKeySecurityDescriptor = -1073741811;
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( v36 )
    ZwClose(v36);
  if ( v35 )
    ZwClose(v35);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)DeviceRegKeySecurityDescriptor;
}
