/*
 * XREFs of PiPnpRtlServiceFilterCallback @ 0x140948B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     _CmIsDevicePresent @ 0x1406C5724 (_CmIsDevicePresent.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall PiPnpRtlServiceFilterCallback(__int64 a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // esi
  char v8; // di
  PCUNICODE_STRING v9; // rax
  __int64 i; // rsi
  int DeviceRegProp; // eax
  void *v12; // rcx
  unsigned int v13; // r15d
  __int64 *v14; // r14
  __int64 j; // rsi
  __int64 v16; // r8
  const WCHAR *v17; // rdx
  int ObjectProperty; // eax
  void *v19; // rcx
  unsigned int v20; // eax
  const WCHAR *k; // rsi
  __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64, const WCHAR *, _QWORD, _QWORD); // rax
  int v25; // [rsp+40h] [rbp-99h]
  _BYTE v26[4]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v27; // [rsp+64h] [rbp-75h] BYREF
  int v28; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-6Dh] BYREF
  int v30; // [rsp+70h] [rbp-69h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-65h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-61h] BYREF
  _WORD v33[40]; // [rsp+90h] [rbp-49h] BYREF

  v31 = a3;
  v5 = a3;
  memset(v33, 0, 0x4EuLL);
  v8 = 0;
  v28 = 0;
  v30 = 0;
  DestinationString = 0LL;
  v26[0] = 0;
  v27 = 0;
  v29 = 0;
  if ( !*(_BYTE *)(a4 + 8) || CmIsDevicePresent(a1, a2, v26) >= 0 && v26[0] )
  {
    v9 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v9->Length >= 2u && *v9->Buffer )
    {
      for ( i = *(_QWORD *)(a4 + 16); ; *(_QWORD *)(a4 + 16) = i )
      {
        v27 = *(_DWORD *)(a4 + 24);
        DeviceRegProp = CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 5, (__int64)&v28, i, (__int64)&v27, 0);
        v8 = 1;
        if ( !DeviceRegProp && v27 < 2 )
          break;
        if ( DeviceRegProp != -1073741789 )
        {
          if ( !DeviceRegProp )
          {
            *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
            if ( RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) >= 0 )
            {
              if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
              {
LABEL_19:
                v5 = v31;
                goto LABEL_54;
              }
            }
          }
          break;
        }
        if ( v27 < 2 )
          break;
        i = ExAllocatePool2(256LL, v27, 1198550608LL);
        if ( !i )
          break;
        v12 = *(void **)(a4 + 16);
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
        *(_DWORD *)(a4 + 24) = v27;
      }
      v13 = 0;
      v14 = &qword_14000A628;
      do
      {
        if ( *(_DWORD *)v14 == 2 && !v33[0] )
        {
          v27 = 78;
          if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 9, (__int64)&v28, (__int64)v33, (__int64)&v27, 0) < 0
            || v28 != 1
            || v27 < 2 )
          {
            return 0;
          }
          v33[38] = 0;
        }
        for ( j = *(_QWORD *)(a4 + 16); ; *(_QWORD *)(a4 + 16) = j )
        {
          v16 = *(unsigned int *)v14;
          v17 = v33;
          v25 = *(_DWORD *)(a4 + 24);
          if ( (_DWORD)v16 == 1 )
            v17 = a2;
          v27 = *(_DWORD *)(a4 + 24);
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             (__int64)v17,
                             v16,
                             0LL,
                             0LL,
                             *(v14 - 1),
                             (__int64)&v30,
                             j,
                             v25,
                             (__int64)&v29,
                             0);
          v27 = v29;
          if ( !ObjectProperty && v29 < 2 )
            break;
          if ( ObjectProperty != -1073741789 )
          {
            if ( ObjectProperty >= 0 && v30 == 8210 )
            {
              v20 = *(_DWORD *)(a4 + 24);
              if ( v20 > 2 )
              {
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v20 >> 1) - 2) = 0;
                v20 = *(_DWORD *)(a4 + 24);
              }
              if ( v20 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v20 >> 1) - 4) = 0;
              for ( k = *(const WCHAR **)(a4 + 16); *k; k += v22 + 1 )
              {
                if ( RtlInitUnicodeStringEx(&DestinationString, k) >= 0
                  && RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                {
                  goto LABEL_19;
                }
                v22 = -1LL;
                do
                  ++v22;
                while ( k[v22] );
              }
            }
            break;
          }
          if ( v29 < 2 )
            break;
          j = ExAllocatePool2(256LL, v29, 1198550608LL);
          if ( !j )
            break;
          v19 = *(void **)(a4 + 16);
          if ( v19 )
            ExFreePoolWithTag(v19, 0);
          *(_DWORD *)(a4 + 24) = v27;
        }
        ++v13;
        v14 += 2;
      }
      while ( v13 < 4 );
      return 0;
    }
    else
    {
      v8 = 1;
LABEL_54:
      v23 = *(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD, _QWORD))(a4 + 32);
      if ( v23 )
        return v23(a1, a2, v5, *(_QWORD *)(a4 + 40));
    }
  }
  return v8;
}
