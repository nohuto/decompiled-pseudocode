/*
 * XREFs of _CmServiceFilterCallback @ 0x140A27340
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _CmGetInstallerClassRegProp @ 0x1406BDAE4 (_CmGetInstallerClassRegProp.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall CmServiceFilterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  char v7; // di
  const WCHAR *v8; // rdx
  __int64 v9; // rdx
  int DeviceRegProp; // edi
  unsigned int v11; // eax
  void *v12; // rcx
  __int64 Pool2; // rax
  int v14; // esi
  int *v15; // r13
  int v16; // r12d
  unsigned int v17; // r15d
  int *v18; // r14
  unsigned int v19; // eax
  int InstallerClassRegProp; // eax
  __int64 (__fastcall *v21)(__int64, __int64, __int64, _QWORD); // rax
  void *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // eax
  const WCHAR *i; // rdi
  __int64 v27; // rax
  unsigned int v28; // [rsp+40h] [rbp-99h] BYREF
  int v29; // [rsp+44h] [rbp-95h] BYREF
  int v30; // [rsp+48h] [rbp-91h]
  unsigned int v31; // [rsp+4Ch] [rbp-8Dh]
  __int64 v32; // [rsp+50h] [rbp-89h]
  __int64 v33; // [rsp+58h] [rbp-81h]
  _DWORD v34[2]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v35[2]; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v38[76]; // [rsp+90h] [rbp-49h] BYREF
  __int16 v39; // [rsp+DCh] [rbp+3h]

  v31 = a3;
  v33 = a2;
  v32 = a1;
  v28 = 0;
  v29 = 0;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( !a4 )
    return v7;
  v8 = *(const WCHAR **)a4;
  if ( !*(_QWORD *)a4 || !*v8 )
    goto LABEL_29;
  if ( RtlInitUnicodeStringEx(&DestinationString, v8) < 0 )
    return v7;
  v9 = *(_QWORD *)(a4 + 8);
  while ( 1 )
  {
    v28 = *(_DWORD *)(a4 + 16);
    DeviceRegProp = CmGetDeviceRegProp(v6, v5, 0LL, 5, (__int64)&v29, v9, (__int64)&v28, 0);
    v11 = v28;
    if ( !DeviceRegProp && v28 < 2 )
      break;
    if ( DeviceRegProp != -1073741789 )
    {
      v14 = DeviceRegProp;
      if ( DeviceRegProp )
        goto LABEL_15;
      *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 16) >> 1) - 2) = 0;
      if ( RtlInitUnicodeStringEx(&String2, *(PCWSTR *)(a4 + 8)) < 0
        || !RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      {
        goto LABEL_15;
      }
LABEL_28:
      a3 = v31;
LABEL_29:
      v7 = 1;
      v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(a4 + 24);
      if ( v21 )
        return v21(v6, v5, a3, *(_QWORD *)(a4 + 32));
      return v7;
    }
    if ( v28 < 2 )
      break;
    v12 = *(void **)(a4 + 8);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v11 = v28;
    }
    Pool2 = ExAllocatePool2(256LL, v11, 1380994640LL);
    *(_QWORD *)(a4 + 8) = Pool2;
    v9 = Pool2;
    if ( !Pool2 )
    {
      *(_DWORD *)(a4 + 16) = 0;
      v14 = -1073741801;
      goto LABEL_15;
    }
    *(_DWORD *)(a4 + 16) = v28;
  }
  v14 = -1073741811;
LABEL_15:
  v34[0] = 1;
  v15 = v34;
  v34[1] = 2;
  v30 = 0;
  v35[0] = 18;
  v35[1] = 19;
  while ( 2 )
  {
    v16 = *v15;
    if ( *v15 == 2 )
    {
      v28 = 78;
      v14 = CmGetDeviceRegProp(v6, v5, 0LL, 9, (__int64)&v29, (__int64)v38, (__int64)&v28, 0);
      v7 = 0;
      if ( v14 < 0 || v29 != 1 || v28 < 2 )
        return v7;
      v39 = 0;
    }
    v17 = 0;
    v18 = v35;
    do
    {
      while ( 1 )
      {
        v19 = *(_DWORD *)(a4 + 16);
        v28 = v19;
        if ( v16 == 1 )
        {
          InstallerClassRegProp = CmGetDeviceRegProp(
                                    v32,
                                    v33,
                                    0LL,
                                    *v18,
                                    (__int64)&v29,
                                    *(_QWORD *)(a4 + 8),
                                    (__int64)&v28,
                                    0);
LABEL_34:
          v14 = InstallerClassRegProp;
          v19 = v28;
          goto LABEL_35;
        }
        if ( v16 == 2 )
        {
          InstallerClassRegProp = CmGetInstallerClassRegProp(
                                    v32,
                                    (__int64)v38,
                                    0LL,
                                    *v18,
                                    (__int64)&v29,
                                    *(_QWORD *)(a4 + 8),
                                    (__int64)&v28);
          goto LABEL_34;
        }
LABEL_35:
        if ( !v14 && v19 < 2 )
        {
LABEL_37:
          v14 = -1073741811;
          goto LABEL_58;
        }
        if ( v14 != -1073741789 )
          break;
        if ( v19 < 2 )
          goto LABEL_37;
        v23 = *(void **)(a4 + 8);
        if ( v23 )
        {
          ExFreePoolWithTag(v23, 0);
          v19 = v28;
        }
        v24 = ExAllocatePool2(256LL, v19, 1380994640LL);
        *(_QWORD *)(a4 + 8) = v24;
        if ( !v24 )
        {
          *(_DWORD *)(a4 + 16) = 0;
          v14 = -1073741801;
          goto LABEL_58;
        }
        *(_DWORD *)(a4 + 16) = v28;
      }
      if ( v14 >= 0 && v29 == 7 )
      {
        v25 = *(_DWORD *)(a4 + 16);
        if ( v25 > 2 )
        {
          *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v25 >> 1) - 2) = 0;
          v25 = *(_DWORD *)(a4 + 16);
        }
        if ( v25 > 4 )
          *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v25 >> 1) - 4) = 0;
        for ( i = *(const WCHAR **)(a4 + 8); *i; i += v27 + 1 )
        {
          if ( RtlInitUnicodeStringEx(&String2, i) >= 0 && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
          {
            v6 = v32;
            v5 = v33;
            goto LABEL_28;
          }
          v27 = -1LL;
          do
            ++v27;
          while ( i[v27] );
        }
      }
LABEL_58:
      ++v17;
      ++v18;
    }
    while ( v17 < 2 );
    ++v15;
    if ( (unsigned int)++v30 < 2 )
    {
      v6 = v32;
      v5 = v33;
      continue;
    }
    return 0;
  }
}
