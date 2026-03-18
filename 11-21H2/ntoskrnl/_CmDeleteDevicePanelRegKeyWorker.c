/*
 * XREFs of _CmDeleteDevicePanelRegKeyWorker @ 0x140A281F8
 * Callers:
 *     _CmDeleteDevicePanelRegKey @ 0x140A280B8 (_CmDeleteDevicePanelRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _RegRtlDeleteTreeInternal @ 0x1406CB238 (_RegRtlDeleteTreeInternal.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140862B44 (_RegRtlDeleteKeyTransacted.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A28CA4 (_CmGetDevicePanelRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmDeleteDevicePanelRegKeyWorker(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  int v6; // ebx
  int v8; // r13d
  wchar_t *pszDest; // rdi
  unsigned __int64 v10; // r12
  int v11; // r9d
  int DevicePanelRegKeyPath; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  const WCHAR *v16; // r15
  char *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  wchar_t *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  wchar_t *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v33; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v36) = 0;
  v33 = 0LL;
  v6 = a2;
  Handle = 0LL;
  v8 = 4;
  pszDest = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
  {
LABEL_15:
    inited = -1073741811;
    goto LABEL_16;
  }
  LODWORD(v10) = 317;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, 317LL, 1380994640LL);
  if ( !pszDest )
  {
LABEL_59:
    inited = -1073741801;
    goto LABEL_16;
  }
  while ( 1 )
  {
    LODWORD(cchDest) = (unsigned int)v10 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath(
                              (unsigned int)v10 >> 1,
                              v6,
                              a3,
                              v11,
                              v30,
                              pszDest,
                              cchDest,
                              (__int64)&v36);
    inited = DevicePanelRegKeyPath;
    if ( DevicePanelRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    v10 = 2LL * (unsigned int)v36;
    pszDest = 0LL;
    if ( v10 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_16;
    }
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v10, 1380994640LL);
    if ( !pszDest )
      goto LABEL_59;
    v6 = a2;
  }
  if ( DevicePanelRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v16 = pszDest;
      v18 = 0LL;
      if ( a1 )
        v18 = *(_QWORD *)(a1 + 224);
      inited = SysCtxRegOpenCurrentUserKey(v18, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_16;
      v17 = (char *)Handle;
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
      if ( inited < 0 )
        goto LABEL_16;
      Length = DestinationString.Length;
      if ( DestinationString.Length >= (unsigned int)v10
        || DestinationString.Length <= 0x32u
        || !RtlPrefixUnicodeString(
              &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
              &DestinationString,
              1u) )
      {
        goto LABEL_15;
      }
      v16 = pszDest + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(
             &`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix,
             &DestinationString,
             1u) )
      {
        v8 = 11;
        v16 = pszDest + 46;
      }
      inited = PnpCtxGetCachedContextBaseKey(a1, v8, (__int64)&v33);
      if ( inited < 0 )
        goto LABEL_16;
      v17 = v33;
    }
    if ( a5 )
    {
      if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
        v20 = *(_QWORD *)(v19 + 8);
      else
        v20 = 0LL;
      v21 = RegRtlDeleteTreeInternal((__int64)v17, (__int64)v16, v20, 0);
    }
    else
    {
      if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
        v23 = *(_QWORD *)(v22 + 8);
      else
        v23 = 0LL;
      v21 = RegRtlDeleteKeyTransacted(v17, v16, v23);
    }
    if ( v21 == -1073741444 )
      goto LABEL_16;
    if ( v21 < 0 )
      goto LABEL_42;
    v24 = wcsrchr(v16, 0x5Cu);
    if ( !v24 )
      goto LABEL_44;
    *v24 = 0;
    if ( a1 && (v25 = *(_QWORD *)(a1 + 224)) != 0 )
      v26 = *(_QWORD *)(v25 + 8);
    else
      v26 = 0LL;
    v21 = RegRtlDeleteKeyTransacted(v17, v16, v26);
    if ( v21 != -1073741535 )
    {
      if ( v21 < 0 )
        goto LABEL_42;
      v27 = wcsrchr(v16, 0x5Cu);
      if ( !v27 )
      {
LABEL_44:
        inited = -1073741595;
        goto LABEL_16;
      }
      *v27 = 0;
      if ( a1 && (v28 = *(_QWORD *)(a1 + 224)) != 0 )
        v29 = *(_QWORD *)(v28 + 8);
      else
        v29 = 0LL;
      v21 = RegRtlDeleteKeyTransacted(v17, v16, v29);
      if ( v21 != -1073741535 && v21 < 0 )
LABEL_42:
        inited = v21;
    }
  }
LABEL_16:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
