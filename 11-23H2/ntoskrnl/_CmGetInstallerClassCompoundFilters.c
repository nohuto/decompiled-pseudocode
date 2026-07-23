/*
 * XREFs of _CmGetInstallerClassCompoundFilters @ 0x14069B3FC
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14069B198 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14069B554 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x140787A24 (_CmOpenInstallerClassRegKey.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A68994 (_CmGetInstallerClassCompoundFiltersWorker.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFilters(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  const DEVPROPKEY *v12; // r14
  int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r12
  int v17; // ebx
  int v18; // r13d
  int InstallerClassMappedPropertyFromRegProp; // eax
  __int64 v21; // rax
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE v23; // [rsp+A8h] [rbp+20h] BYREF

  Handle = 0LL;
  v23 = 0LL;
  if ( *(_DWORD *)(a4 + 16) != 20 )
    goto LABEL_2;
  v21 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_CompoundUpperFilters )
    v21 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
  v12 = &DEVPKEY_DeviceClass_UpperFilters;
  if ( v21 )
LABEL_2:
    v12 = &DEVPKEY_DeviceClass_LowerFilters;
  if ( a3 )
  {
    v13 = (int)a3;
    Handle = a3;
  }
  else
  {
    v17 = CmOpenInstallerClassRegKey(a1, a2, 0, a4, 33554433, 0, (__int64)&Handle, 0LL);
    if ( v17 < 0 )
      goto LABEL_10;
    v13 = (int)Handle;
  }
  if ( a1 )
    v14 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v14) = 0;
  v15 = SysCtxRegOpenKey(v14, v13, (unsigned int)L"Filters", 0, 131103, (__int64)&v23);
  v16 = a8;
  v17 = v15;
  v18 = a7;
  if ( v15 < 0
    || (InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassCompoundFiltersWorker(
                                                    a1,
                                                    a2,
                                                    (_DWORD)Handle,
                                                    (_DWORD)v23,
                                                    a4,
                                                    (__int64)v12,
                                                    a5,
                                                    a6,
                                                    a7,
                                                    a8),
        InstallerClassMappedPropertyFromRegProp == -1073741772)
    || InstallerClassMappedPropertyFromRegProp == -1073741444
    || InstallerClassMappedPropertyFromRegProp == -1073741275 )
  {
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                a2,
                                                (_DWORD)Handle,
                                                (_DWORD)v12,
                                                a5,
                                                a6,
                                                v18,
                                                v16);
  }
  else if ( InstallerClassMappedPropertyFromRegProp >= 0 )
  {
    goto LABEL_10;
  }
  v17 = InstallerClassMappedPropertyFromRegProp;
LABEL_10:
  if ( Handle && !a3 )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  return (unsigned int)v17;
}
