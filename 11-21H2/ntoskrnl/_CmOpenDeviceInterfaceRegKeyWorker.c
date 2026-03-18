/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x140781A70
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x140784B14 (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x1406E6244 (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 *     _PnpCtxRegCreateTree @ 0x140772AA0 (_PnpCtxRegCreateTree.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140781814 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140784B14 (_CmOpenDeviceInterfaceRegKey.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v8; // ebx
  int v11; // r13d
  wchar_t *Pool2; // rdi
  PVOID v13; // r15
  unsigned int v14; // r15d
  wchar_t *v15; // rsi
  int DeviceInterfaceRegKeyPath; // eax
  int DeviceInterfaceRegKeySecurityDescriptor; // ebx
  unsigned __int16 Length; // bx
  __int64 v19; // r15
  HANDLE v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r13d
  int Tree; // eax
  int v25; // edi
  HANDLE v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // [rsp+20h] [rbp-60h]
  size_t cchDest; // [rsp+30h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v34; // [rsp+48h] [rbp-38h]
  HANDLE v35; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v36; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+D0h] [rbp+50h] BYREF
  int v41; // [rsp+D8h] [rbp+58h]

  v41 = a4;
  LODWORD(v40) = 0;
  v8 = a4;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v11 = 4;
  Handle = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( a3 && (a3 & 0xFFFFFCCC) == 0 )
  {
    v14 = (a3 & 0x200) != 0 ? 600 : 480;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v14, 1380994640LL);
    if ( !Pool2 )
    {
LABEL_72:
      DeviceInterfaceRegKeySecurityDescriptor = -1073741801;
      goto LABEL_20;
    }
    while ( 1 )
    {
      LODWORD(cchDest) = v14 >> 1;
      v15 = Pool2;
      DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v14 >> 1, a2, a3, v8, v31, Pool2, cchDest, &v40);
      DeviceInterfaceRegKeySecurityDescriptor = DeviceInterfaceRegKeyPath;
      if ( DeviceInterfaceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(Pool2, 0);
      v27 = 2LL * (unsigned int)v40;
      Pool2 = 0LL;
      if ( v27 > 0xFFFFFFFF )
      {
        DeviceInterfaceRegKeySecurityDescriptor = -1073741675;
        goto LABEL_20;
      }
      v14 = 2 * v40;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v27, 1380994640LL);
      if ( !Pool2 )
        goto LABEL_72;
      v8 = v41;
    }
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_20;
    if ( (a3 & 0x100) != 0 )
    {
      v19 = (__int64)Pool2;
      if ( a1 )
        v28 = *(_QWORD *)(a1 + 224);
      else
        v28 = 0LL;
      DeviceInterfaceRegKeySecurityDescriptor = SysCtxRegOpenCurrentUserKey(v28, 0LL, 0x2000000LL, &v35);
      if ( DeviceInterfaceRegKeySecurityDescriptor >= 0 )
      {
        v20 = v35;
LABEL_15:
        v36 = v20;
        v21 = 0LL;
        if ( a1 )
          v21 = *(_QWORD *)(a1 + 224);
        v22 = a5;
        Tree = SysCtxRegOpenKey(v21, (__int64)v20, v19, 0, a5, (__int64)a7);
        if ( !Tree )
        {
          *a8 = 2;
          goto LABEL_19;
        }
        if ( Tree != -1073741444 )
        {
          if ( Tree != -1073741772 )
            goto LABEL_62;
          if ( !a6 )
          {
            if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
              DeviceInterfaceRegKeySecurityDescriptor = -1073741772;
            else
              DeviceInterfaceRegKeySecurityDescriptor = -1073741127;
            goto LABEL_19;
          }
          if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
          {
            DeviceInterfaceRegKeySecurityDescriptor = CmOpenDeviceInterfaceRegKey(
                                                        a1,
                                                        (_DWORD)a2,
                                                        48,
                                                        0,
                                                        1,
                                                        0,
                                                        (__int64)&Handle,
                                                        0LL);
            if ( DeviceInterfaceRegKeySecurityDescriptor < 0 )
            {
LABEL_19:
              Pool2 = v15;
              goto LABEL_20;
            }
          }
          DeviceInterfaceRegKeySecurityDescriptor = CmGetDeviceInterfaceRegKeySecurityDescriptor(a1, a3, &P);
          if ( DeviceInterfaceRegKeySecurityDescriptor < 0 )
            goto LABEL_20;
          v25 = v22;
          if ( P )
            v25 = 917510;
          Tree = PnpCtxRegCreateTree(a1);
          if ( Tree != -1073741444 )
          {
            if ( Tree >= 0 )
            {
              if ( v25 == v22 )
              {
                v26 = v34;
                v34 = 0LL;
                *a7 = v26;
                goto LABEL_19;
              }
              if ( a1 )
                v29 = *(_QWORD *)(a1 + 224);
              else
                v29 = 0LL;
              v30 = SysCtxRegOpenKey(v29, (__int64)v34, 0LL, 0, v22, (__int64)a7);
              Pool2 = v15;
              if ( v30 == -1073741444 )
              {
                DeviceInterfaceRegKeySecurityDescriptor = -1073741772;
              }
              else if ( v30 < 0 )
              {
                DeviceInterfaceRegKeySecurityDescriptor = v30;
              }
              goto LABEL_20;
            }
LABEL_62:
            DeviceInterfaceRegKeySecurityDescriptor = Tree;
            goto LABEL_19;
          }
        }
        DeviceInterfaceRegKeySecurityDescriptor = -1073741595;
        goto LABEL_19;
      }
LABEL_20:
      v13 = P;
      goto LABEL_21;
    }
    DeviceInterfaceRegKeySecurityDescriptor = RtlInitUnicodeStringEx(&DestinationString, Pool2);
    if ( DeviceInterfaceRegKeySecurityDescriptor < 0 )
      goto LABEL_20;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v14
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v19 = (__int64)(Pool2 + 25);
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = Pool2 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(
             &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
             &DestinationString,
             1u) )
      {
        v11 = 9;
        v19 = (__int64)(Pool2 + 47);
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v11 = 14;
        v19 = (__int64)(Pool2 + 43);
      }
      DeviceInterfaceRegKeySecurityDescriptor = PnpCtxGetCachedContextBaseKey(a1, v11, (__int64)&v36);
      if ( DeviceInterfaceRegKeySecurityDescriptor >= 0 )
      {
        v20 = v36;
        goto LABEL_15;
      }
      goto LABEL_20;
    }
    v13 = P;
  }
  DeviceInterfaceRegKeySecurityDescriptor = -1073741811;
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( v35 )
    ZwClose(v35);
  if ( v34 )
    ZwClose(v34);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)DeviceInterfaceRegKeySecurityDescriptor;
}
