/*
 * XREFs of PiDqPnPGetObjectProperty @ 0x14077D784
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140698510 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x140699E6C (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140776EE8 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqPropertyCallback @ 0x1407770E0 (PiDqPropertyCallback.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x140778B24 (PiDqPnPGetObjectPropertyInBestLocale.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     _PnpGetGenericStoreProperty @ 0x14077DF24 (_PnpGetGenericStoreProperty.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqPnPGetObjectProperty(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PCWSTR pszSrc,
        _OWORD *a7)
{
  __int128 v7; // xmm0
  _OWORD *v8; // rsi
  const wchar_t *v9; // r12
  void *Pool2; // rdi
  __int64 v13; // rbp
  int v14; // eax
  int PWSTR; // ebx
  int ObjectProperty; // eax
  void *v18; // rcx
  _DWORD v19[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+20h] BYREF

  v7 = *(_OWORD *)a4;
  v8 = a7;
  v9 = pszSrc;
  v19[0] = 0;
  v22 = 512;
  Pool2 = 0LL;
  *a7 = v7;
  LODWORD(v13) = 0;
  *((_DWORD *)v8 + 4) = *(_DWORD *)(a4 + 16);
  v14 = a5;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_DWORD *)v8 + 5) = v14;
  PWSTR = PnpAllocatePWSTR(v9);
  if ( PWSTR >= 0 )
  {
    do
    {
      if ( v22 > (unsigned int)v13 )
      {
        v13 = v22;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0x58706E50u);
        Pool2 = (void *)ExAllocatePool2(256LL, v13, 1483763280LL);
        if ( !Pool2 )
        {
          PWSTR = -1073741670;
          goto LABEL_18;
        }
      }
      v22 = 0;
      if ( a2 )
        ObjectProperty = PnpGetObjectProperty(
                           PiPnpRtlCtx,
                           a1,
                           a2,
                           a3,
                           (__int64)v9,
                           a4,
                           (__int64)v19,
                           (__int64)Pool2,
                           v13,
                           (__int64)&v22,
                           0);
      else
        ObjectProperty = PnpGetGenericStoreProperty(*(_QWORD *)&PiPnpRtlCtx, a3, v9, a4, v19);
      PWSTR = ObjectProperty;
    }
    while ( ObjectProperty == -1073741789 );
    if ( ObjectProperty >= 0 )
    {
      *((_DWORD *)v8 + 8) = v19[0];
      *((_DWORD *)v8 + 9) = v22;
      *((_QWORD *)v8 + 5) = Pool2;
      return (unsigned int)PWSTR;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x58706E50u);
  }
  if ( PWSTR == -1073741275 )
  {
    return 0;
  }
  else
  {
LABEL_18:
    v18 = (void *)*((_QWORD *)v8 + 3);
    if ( v18 )
      ExFreePoolWithTag(v18, 0x58706E50u);
  }
  return (unsigned int)PWSTR;
}
