/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x14079AF70
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x14079AE5C (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406CEEE0 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1406D9E50 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x140797B54 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14079B1A0 (_CmGetDeviceContainerRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKeyWorker(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *v8; // rdi
  int v10; // ebx
  int v12; // r13d
  unsigned int v13; // r12d
  wchar_t *pszDest; // rax
  int v15; // r9d
  wchar_t *v16; // rsi
  int DeviceContainerRegKeyPath; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  __int64 v20; // r15
  HANDLE v21; // rdx
  __int64 v22; // rcx
  int Tree; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v30; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h] BYREF

  v8 = 0LL;
  LODWORD(v33) = 0;
  v30 = 0LL;
  v10 = a2;
  Handle = 0LL;
  v12 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
  {
LABEL_35:
    inited = -1073741811;
    goto LABEL_25;
  }
  v13 = 260;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, 260LL, 1380994640LL);
  while ( 1 )
  {
    v8 = pszDest;
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_25;
    }
    v16 = pszDest;
    LODWORD(cchDest) = v13 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  v13 >> 1,
                                  v10,
                                  a3,
                                  v15,
                                  v27,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v33);
    inited = DeviceContainerRegKeyPath;
    if ( DeviceContainerRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(v8, 0);
    v8 = 0LL;
    v25 = 2LL * (unsigned int)v33;
    if ( v25 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_25;
    }
    v13 = 2 * v33;
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v25, 1380994640LL);
    v10 = a2;
  }
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_25;
  if ( (a3 & 0x100) != 0 )
  {
    v20 = (__int64)v16;
    if ( a1 )
      v26 = *(_QWORD *)(a1 + 224);
    else
      v26 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v26, 0LL, 0x2000000LL, &Handle);
    if ( inited < 0 )
      goto LABEL_25;
    v21 = Handle;
    goto LABEL_16;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v16);
  if ( inited < 0 )
    goto LABEL_25;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= v13
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
    v8 = v16;
    goto LABEL_35;
  }
  v20 = (__int64)(v16 + 25);
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = v16 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmOpenDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
         &DestinationString,
         1u) )
  {
    v12 = 10;
    v20 = (__int64)(v16 + 50);
  }
  inited = PnpCtxGetCachedContextBaseKey(a1, v12, (__int64)&v30);
  v8 = v16;
  if ( inited >= 0 )
  {
    v21 = v30;
LABEL_16:
    if ( a6 )
    {
      Tree = PnpCtxRegCreateTree(a1, (__int64)v21, v20, 0LL, a5, 0LL);
    }
    else
    {
      if ( a1 )
        v22 = *(_QWORD *)(a1 + 224);
      else
        v22 = 0LL;
      Tree = SysCtxRegOpenKey(v22, (__int64)v21, v20, 0, a5, a7);
      if ( Tree >= 0 )
      {
        v8 = v16;
        *a8 = 2;
        goto LABEL_25;
      }
    }
    v8 = v16;
    if ( Tree == -1073741444 )
    {
      inited = -1073741595;
    }
    else if ( Tree < 0 )
    {
      inited = Tree;
    }
  }
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)inited;
}
