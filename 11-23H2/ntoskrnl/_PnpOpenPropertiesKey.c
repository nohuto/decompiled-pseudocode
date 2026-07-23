/*
 * XREFs of _PnpOpenPropertiesKey @ 0x1406CDC70
 * Callers:
 *     _CmGetInstallerClassRegPropWorker @ 0x14069B808 (_CmGetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x1406CDA30 (_PnpGetGenericStoreProperty.c)
 *     _PnpSetPropertyWorker @ 0x140797E34 (_PnpSetPropertyWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1407C6270 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14083A2C4 (_PnpGetGenericStorePropertyLocales.c)
 *     _PnpDeletePropertyWorker @ 0x14086F87C (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140875E04 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14088138C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A63640 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140A67A58 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140A67C28 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A69FC0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A6A42C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14022B77C (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x14022B830 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x140797B54 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x1407980B0 (_PnpCtxRegCreateKey.c)
 *     RtlValidSecurityDescriptor @ 0x1407B4FF0 (RtlValidSecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880FB4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(__int64 a1, int a2, const wchar_t *a3, int a4, char a5, __int64 a6, void **a7)
{
  NTSTATUS v7; // ebx
  void *v9; // rbp
  wchar_t *Pool2; // rsi
  void *v11; // r12
  int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v18; // rcx
  int Key; // eax
  void *PropertiesSecurityDescriptor; // rax
  unsigned int v21; // edx
  int Tree; // eax
  int v24; // [rsp+48h] [rbp-E0h]
  size_t pcchLength[2]; // [rsp+50h] [rbp-D8h] BYREF
  wchar_t pszDest[64]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = 0;
  pcchLength[0] = 0LL;
  v9 = 0LL;
  v24 = a2;
  Pool2 = 0LL;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = a4;
  if ( a3 )
  {
    v7 = RtlUnalignedStringCchLengthW(a3, 0x200uLL, pcchLength);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( pcchLength[0] >= 0x30 )
    {
      v14 = LODWORD(pcchLength[0]) + 12;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * (unsigned int)(LODWORD(pcchLength[0]) + 12), 1380994640LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
    }
    else
    {
      Pool2 = pszDest;
      v14 = 59;
    }
    v7 = RtlStringCchPrintfExW(Pool2, v14, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", a3);
    if ( v7 < 0 )
      goto LABEL_11;
    if ( a1 )
      v15 = *(_QWORD *)(a1 + 224);
    else
      LODWORD(v15) = 0;
    v16 = SysCtxRegOpenKey(v15, v24, (_DWORD)Pool2, 0, a4, (__int64)a7);
    if ( v16 == -1073741444 )
    {
      v7 = -1073741772;
      goto LABEL_11;
    }
    if ( !a5 || v16 != -1073741772 )
    {
      v7 = v16;
      goto LABEL_11;
    }
    v12 = a4;
    a2 = v24;
  }
  if ( a1 )
    v18 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v18) = 0;
  Key = SysCtxRegOpenKey(v18, a2, (unsigned int)L"Properties", 0, v12, (__int64)a7);
  if ( Key != -1073741772 )
    goto LABEL_27;
  if ( !a5 )
  {
LABEL_23:
    v7 = Key;
    goto LABEL_30;
  }
  PropertiesSecurityDescriptor = (void *)PnpGetPropertiesSecurityDescriptor();
  v9 = PropertiesSecurityDescriptor;
  if ( PropertiesSecurityDescriptor )
  {
    if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
    {
      v7 = -1073741595;
LABEL_31:
      ExFreePoolWithTag(v9, 0);
      goto LABEL_11;
    }
    Key = PnpCtxRegCreateKey(a1, v24, (unsigned int)L"Properties", 0, a4, (__int64)v9, (__int64)a7, 0LL);
LABEL_27:
    if ( Key != -1073741444 )
    {
      if ( Key < 0 )
        goto LABEL_23;
      if ( !a3 )
      {
LABEL_30:
        if ( !v9 )
          goto LABEL_11;
        goto LABEL_31;
      }
      v11 = *a7;
      v21 = (unsigned int)*a7;
      *a7 = 0LL;
      Tree = PnpCtxRegCreateTree(a1, v21, (_DWORD)a3, 0, a4, 0LL, (__int64)a7, 0LL);
      if ( Tree != -1073741444 )
      {
        if ( Tree < 0 )
          v7 = Tree;
        goto LABEL_30;
      }
    }
    v7 = -1073741772;
    goto LABEL_30;
  }
  v7 = -1073741595;
LABEL_11:
  if ( Pool2 && Pool2 != pszDest )
    ExFreePoolWithTag(Pool2, 0);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v7;
}
