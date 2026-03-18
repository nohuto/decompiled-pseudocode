/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406BDEE4
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x1406BD3A8 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x140A2B950 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x14077D29C (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 *     _CmOpenInstallerClassRegKey @ 0x140789460 (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  _BYTE *v9; // r12
  DEVPROPKEY **v12; // rdx
  int v13; // r10d
  int v14; // ebx
  unsigned int v15; // r9d
  DEVPROPKEY *v16; // r8
  DEVPROPKEY **v17; // rsi
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // ecx
  int v21; // edx
  DEVPROPKEY *v22; // r8
  int ValueIndirect; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  HANDLE v30; // rcx
  int Value; // eax
  int v32; // eax
  __int64 v33; // rax
  int v34; // edi
  const WCHAR *v35; // r8
  int v36; // edx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  HANDLE v40; // rdx
  int v41; // eax
  int v42; // [rsp+20h] [rbp-79h]
  _BYTE v43[4]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v44; // [rsp+44h] [rbp-55h] BYREF
  HANDLE v45; // [rsp+50h] [rbp-49h] BYREF
  int v46; // [rsp+58h] [rbp-41h]
  __int64 v47; // [rsp+60h] [rbp-39h]
  _DWORD *v48; // [rsp+68h] [rbp-31h]
  HANDLE Handle; // [rsp+70h] [rbp-29h]
  wchar_t Str2[12]; // [rsp+78h] [rbp-21h] BYREF

  v9 = (_BYTE *)a6;
  v47 = a1;
  v48 = a8;
  v12 = &off_140A39F60;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = 0;
  v45 = 0LL;
  v15 = 0;
  Handle = 0LL;
  v44 = 0LL;
  v43[0] = 0;
  v46 = 0;
  do
  {
    v16 = *v12;
    v17 = v12;
    if ( v13 == (*v12)->pid )
    {
      v18 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v18 )
        break;
    }
    ++v15;
    v12 += 4;
    v17 = 0LL;
  }
  while ( v15 < 0xD );
  if ( !v17 )
    return (unsigned int)-1073741802;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v19 = a7;
    v9 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v19 = 0;
  }
  if ( !a3 )
  {
    v14 = CmOpenInstallerClassRegKey(v47, a2, (_DWORD)v16, 0, 1, 0, (__int64)&v45, 0LL);
    if ( v14 < 0 )
      goto LABEL_22;
  }
  v20 = *(_DWORD *)(a4 + 16);
  if ( v20 == 7 )
  {
    v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
      v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
    if ( !v25 )
      goto LABEL_50;
  }
  if ( v20 == 8 )
  {
    v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
      v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
    if ( !v26 )
      goto LABEL_50;
  }
  if ( v20 == 9 )
  {
    v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
      v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
    if ( !v27 )
      goto LABEL_50;
  }
  if ( v20 == 10 )
  {
    v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
      v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
    if ( !v28 )
      goto LABEL_50;
  }
  if ( v20 == 15 )
  {
    v29 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
      v29 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
    if ( v29 )
      goto LABEL_18;
LABEL_50:
    v30 = v45;
    LODWORD(v44) = 22;
    if ( a3 )
      v30 = a3;
    Value = RegRtlQueryValue(v30, (__int64)&v44);
    if ( Value == -1073741772 || Value == -1073741444 )
    {
LABEL_21:
      v14 = -1073741275;
      goto LABEL_22;
    }
    if ( Value >= 0 )
    {
      *v48 = 1;
      *a5 = *((_DWORD *)v17 + 2);
      if ( v19 )
      {
        Str2[10] = 0;
        v32 = wcsicmp(L"0", Str2);
LABEL_59:
        *v9 = -(v32 != 0);
        goto LABEL_22;
      }
LABEL_58:
      v14 = -1073741789;
      goto LABEL_22;
    }
LABEL_57:
    v14 = Value;
    goto LABEL_22;
  }
  if ( v20 != 2 )
    goto LABEL_18;
  v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1 )
    v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_Name.fmtid.Data4;
  if ( v33 )
  {
    v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
      v39 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
    if ( !v39 )
    {
      v40 = v45;
      if ( a3 )
        v40 = a3;
      LOBYTE(v42) = 0;
      LODWORD(v44) = 4;
      v41 = PnpOpenPropertiesKey(v47, v40, 0LL, 1LL, v42);
      v14 = v41;
      if ( v41 == -1073741772 )
        goto LABEL_21;
      if ( v41 < 0 )
        goto LABEL_22;
      Value = RegRtlQueryValue(Handle, (__int64)&v44);
      if ( Value == -1073741772 || Value == -1073741444 )
        goto LABEL_21;
      if ( Value >= 0 )
      {
        *v48 = 1;
        *a5 = *((_DWORD *)v17 + 2);
        if ( v19 )
        {
          v32 = v46;
          goto LABEL_59;
        }
        goto LABEL_58;
      }
      goto LABEL_57;
    }
LABEL_18:
    v21 = (int)v45;
    v22 = v17[2];
    if ( a3 )
      v21 = (int)a3;
    LODWORD(v44) = v19;
    ValueIndirect = PnpCtxRegQueryValueIndirect(
                      v47,
                      v21,
                      (_DWORD)v22,
                      (unsigned int)&v44 + 4,
                      (__int64)v9,
                      (__int64)&v44,
                      (__int64)v43);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( ValueIndirect && ValueIndirect != -1073741789 )
      {
        v14 = ValueIndirect;
        goto LABEL_22;
      }
      if ( HIDWORD(v44) != *((_DWORD *)v17 + 6) )
      {
        v14 = -1073741811;
        goto LABEL_22;
      }
      goto LABEL_78;
    }
    goto LABEL_21;
  }
  v34 = 0;
  v14 = -1073741275;
  while ( 1 )
  {
    if ( v34 )
    {
      v35 = &word_140867F00;
    }
    else
    {
      v35 = (const WCHAR *)v17[2];
      if ( !v35 )
        goto LABEL_22;
    }
    v36 = (int)v45;
    LODWORD(v44) = v19;
    if ( a3 )
      v36 = (int)a3;
    v37 = PnpCtxRegQueryValueIndirect(
            v47,
            v36,
            (_DWORD)v35,
            (unsigned int)&v44 + 4,
            (__int64)v9,
            (__int64)&v44,
            (__int64)v43);
    ValueIndirect = v37;
    if ( v37 != -1073741772 && v37 != -1073741444 )
      break;
    if ( ++v34 >= 2 )
      goto LABEL_22;
  }
  if ( !v37 || v37 == -1073741789 )
  {
    v14 = 0;
    goto LABEL_78;
  }
  v14 = v37;
  if ( v37 >= 0 )
  {
LABEL_78:
    *v48 = v44;
    v38 = *((_DWORD *)v17 + 2);
    *a5 = v38;
    if ( ValueIndirect || !v19 )
      v14 = -1073741789;
    if ( v38 == 18 && v43[0] )
      *a5 = 25;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( v45 )
    ZwClose(v45);
  return (unsigned int)v14;
}
