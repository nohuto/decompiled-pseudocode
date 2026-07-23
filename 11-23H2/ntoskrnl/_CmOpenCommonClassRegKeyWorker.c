/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x140787C24
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x140787AD8 (_CmOpenCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406CEEE0 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1406D9E50 (RtlPrefixUnicodeString.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140787E94 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x140797B54 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  int v10; // ebx
  int v11; // r12d
  unsigned int v12; // r14d
  wchar_t *pszDest; // rax
  wchar_t *v14; // rdi
  wchar_t *v15; // rsi
  int CommonClassRegKeyPath; // eax
  int CachedContextBaseKey; // ebx
  unsigned __int16 Length; // bx
  __int64 v19; // r14
  HANDLE v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r13
  int Tree; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE v29; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+50h] BYREF
  int v34; // [rsp+B8h] [rbp+58h]

  v34 = a4;
  LODWORD(v33) = 0;
  v29 = 0LL;
  Handle = 0LL;
  v10 = a4;
  v11 = 4;
  v12 = (a3 & 0x200) != 0 ? 320 : 200;
  DestinationString = 0LL;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, v12, 1380994640LL);
  while ( 1 )
  {
    v14 = pszDest;
    if ( !pszDest )
    {
      CachedContextBaseKey = -1073741801;
      goto LABEL_23;
    }
    v15 = pszDest;
    LODWORD(cchDest) = v12 >> 1;
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(v12 >> 1, a2, a3, v10, v27, pszDest, cchDest, (__int64)&v33);
    CachedContextBaseKey = CommonClassRegKeyPath;
    if ( CommonClassRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(v14, 0);
    v14 = 0LL;
    v25 = 2LL * (unsigned int)v33;
    if ( v25 > 0xFFFFFFFF )
    {
      CachedContextBaseKey = -1073741675;
      goto LABEL_23;
    }
    v12 = 2 * v33;
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v25, 1380994640LL);
    v10 = v34;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_23;
  if ( (a3 & 0x100) != 0 )
  {
    v19 = (__int64)v15;
    if ( a1 )
      v26 = *(_QWORD *)(a1 + 224);
    else
      v26 = 0LL;
    CachedContextBaseKey = SysCtxRegOpenCurrentUserKey(v26, 0LL, 0x2000000LL, &Handle);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_23;
    v20 = Handle;
    v29 = Handle;
LABEL_15:
    if ( a6 )
    {
      Tree = PnpCtxRegCreateTree(a1, (_DWORD)v20, v19, 0, a5, 0LL, a7, (__int64)a8);
    }
    else
    {
      if ( a1 )
        v21 = *(_QWORD *)(a1 + 224);
      else
        v21 = 0LL;
      v22 = a7;
      Tree = SysCtxRegOpenKey(v21, (__int64)v20, v19, 0, a5, a7);
      if ( Tree >= 0 )
        goto LABEL_19;
      if ( Tree == -1073741772 )
      {
        if ( v11 != 8 || !*(_BYTE *)(a1 + 4) )
          goto LABEL_31;
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v29);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_23;
        Tree = SysCtxRegOpenKey(*(_QWORD *)(a1 + 224), (__int64)v29, v19, 0, a5, v22);
        if ( Tree >= 0 )
        {
LABEL_19:
          *a8 = 2;
          goto LABEL_23;
        }
      }
    }
    v14 = v15;
    if ( Tree == -1073741444 )
    {
      CachedContextBaseKey = -1073741595;
      goto LABEL_23;
    }
    if ( Tree >= 0 )
      goto LABEL_23;
LABEL_31:
    CachedContextBaseKey = Tree;
    v14 = v15;
    goto LABEL_23;
  }
  CachedContextBaseKey = RtlInitUnicodeStringEx(&DestinationString, v15);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_23;
  Length = DestinationString.Length;
  if ( DestinationString.Length < v12
    && DestinationString.Length > 0x32u
    && RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
    v19 = (__int64)(v15 + 25);
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = v15 + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&`_CmOpenCommonClassRegKeyWorker'::`2'::ClassKeyPrefix, &DestinationString, 1u) )
    {
      v11 = 7;
      v19 = (__int64)(v15 + 39);
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 8;
      v19 = (__int64)(v15 + 47);
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 14;
      v19 = (__int64)(v15 + 43);
    }
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, v11, (__int64)&v29);
    if ( CachedContextBaseKey >= 0 )
    {
      v20 = v29;
      goto LABEL_15;
    }
  }
  else
  {
    CachedContextBaseKey = -1073741811;
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)CachedContextBaseKey;
}
