/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14069B554
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14069AF98 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x14069B3FC (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A68994 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x140A68F5C (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     _CmGetInstallerClassRegProp @ 0x14069B694 (_CmGetInstallerClassRegProp.c)
 *     _PnpParseIndirectResourceString @ 0x14079E614 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1407CB534 (_PnpParseIndirectInfString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegProp(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  unsigned int *v9; // r15
  __int64 v11; // rsi
  unsigned int v13; // r14d
  int v14; // r11d
  DEVPROPKEY **v15; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v17; // r9
  DEVPROPKEY **v18; // rdi
  __int64 v19; // rcx
  int v20; // r12d
  unsigned int v21; // eax
  unsigned int InstallerClassRegProp; // ebx
  __int64 v23; // rdx
  int v25; // eax
  __int64 v26; // rax
  void *Pool2; // rdi
  int v28; // eax
  int v29; // [rsp+40h] [rbp-10h] BYREF
  int v30; // [rsp+44h] [rbp-Ch] BYREF
  int v31; // [rsp+48h] [rbp-8h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v29 = 0;
  *a5 = 0;
  *v9 = 0;
  v31 = 0;
  v30 = 0;
  if ( v11 )
  {
    v13 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  v15 = &CmClassRegPropMap;
  for ( i = 0; i < 9; ++i )
  {
    v17 = *v15;
    v18 = v15;
    if ( v14 == (*v15)->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v17->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v19 )
        break;
    }
    v15 += 3;
    v18 = 0LL;
  }
  if ( !v18 )
    return (unsigned int)-1073741264;
  v20 = *((_DWORD *)v18 + 3);
  if ( v20 == 25 )
    return (unsigned int)-1073741637;
  if ( v20 == 27 )
  {
    LODWORD(a5) = 4;
    InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, 27, (__int64)&v29, (__int64)&v30, (__int64)&a5);
    if ( (InstallerClassRegProp & 0x80000000) != 0 )
      return InstallerClassRegProp;
    if ( v29 == *((_DWORD *)v18 + 4) )
    {
      *v9 = 1;
      *v8 = *((_DWORD *)v18 + 2);
      if ( v13 >= *v9 )
        *(_BYTE *)v11 = -(v30 != 0);
      else
        return (unsigned int)-1073741789;
      return InstallerClassRegProp;
    }
    return (unsigned int)-1073741811;
  }
  *v9 = v13;
  v21 = CmGetInstallerClassRegProp(a1, a2, a3, v20, (__int64)&v29, v11, (__int64)v9);
  InstallerClassRegProp = v21;
  v23 = 3221225507LL;
  if ( v21 && v21 != -1073741789 )
    return InstallerClassRegProp;
  if ( v29 != *((_DWORD *)v18 + 4) )
    return (unsigned int)-1073741811;
  v25 = *((_DWORD *)v18 + 2);
  *v8 = v25;
  if ( v25 != 18 )
    return InstallerClassRegProp;
  v26 = *v9;
  LODWORD(a5) = *v9;
  if ( InstallerClassRegProp )
  {
    if ( InstallerClassRegProp != -1073741789 )
      return InstallerClassRegProp;
    Pool2 = (void *)ExAllocatePool2(256LL, v26, 1380994640LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v28 = CmGetInstallerClassRegProp(a1, a2, a3, v20, (__int64)&v31, (__int64)Pool2, (__int64)&a5);
    if ( v28 >= 0 )
    {
      if ( (unsigned int)a5 >= 2 )
      {
        v11 = (__int64)Pool2;
        goto LABEL_33;
      }
    }
    else
    {
      InstallerClassRegProp = v28;
    }
LABEL_37:
    ExFreePoolWithTag(Pool2, 0);
    return InstallerClassRegProp;
  }
  if ( v13 < 2 )
    return InstallerClassRegProp;
  Pool2 = 0LL;
  if ( !v11 )
    return InstallerClassRegProp;
LABEL_33:
  if ( (unsigned __int8)PnpParseIndirectInfString(v11, v23) || (unsigned __int8)PnpParseIndirectResourceString(v11) )
    *v8 = 25;
  if ( Pool2 )
    goto LABEL_37;
  return InstallerClassRegProp;
}
