/*
 * XREFs of ?PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C001FBE4
 * Callers:
 *     ?PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C001F3AC (-PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1C00070A0 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1C0007A98 (RtlStringCbCatW.c)
 *     RtlStringCbPrintfW @ 0x1C0007B40 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall PmConstructDeviceLocationDefault(struct _DEVICE_EXTENSION *a1)
{
  unsigned int v2; // edi
  size_t v3; // rdx
  size_t v4; // rdx
  size_t v5; // rdx
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rsi
  wchar_t *Pool2; // rax
  PCWSTR v10; // r11
  size_t v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  wchar_t pszDest[128]; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t pszSrc[128]; // [rsp+130h] [rbp+30h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  memset(pszSrc, 0, sizeof(pszSrc));
  v2 = 0;
  if ( *((_DWORD *)a1 + 103) == -1 )
    RtlStringCbPrintfW(pszDest, 0x100uLL, L"Integrated");
  else
    RtlStringCbPrintfW(pszDest, 0x100uLL, L"PCI Slot %u");
  RtlStringCbCatW(pszSrc, v3, pszDest);
  if ( *((_DWORD *)a1 + 108) != -1 && *((_DWORD *)a1 + 109) != -1 && *((_DWORD *)a1 + 110) != -1 )
  {
    RtlStringCbPrintfW(pszDest, 0x100uLL, L" : Bus %u : Device %u : Function %u");
    RtlStringCbCatW(pszSrc, v12, pszDest);
  }
  RtlStringCbPrintfW(pszDest, 0x100uLL, L" : Adapter %u", *((unsigned int *)a1 + 104));
  RtlStringCbCatW(pszSrc, v4, pszDest);
  v6 = *(_DWORD *)(*((_QWORD *)a1 + 29) + 28LL);
  if ( v6 > 6 )
  {
    v13 = v6 - 7;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_6;
      v15 = v14 - 2;
      if ( !v15 )
        goto LABEL_6;
      if ( v15 != 1 )
      {
LABEL_20:
        pszDest[0] = 0;
        goto LABEL_7;
      }
    }
    RtlStringCbPrintfW(pszDest, 0x100uLL, L" : Port %u", *((unsigned int *)a1 + 105));
    goto LABEL_7;
  }
  if ( v6 != 6 )
  {
    v16 = v6 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 || (v18 = v17 - 1) == 0 )
      {
        RtlStringCbPrintfW(
          pszDest,
          0x100uLL,
          L" : Channel %u : Device %u",
          *((unsigned int *)a1 + 106),
          *((_DWORD *)a1 + 107));
        goto LABEL_7;
      }
      if ( (unsigned int)(v18 - 1) >= 2 )
        goto LABEL_20;
    }
  }
LABEL_6:
  RtlStringCbPrintfW(
    pszDest,
    0x100uLL,
    L" : Port %u : Target %u : LUN %u",
    *((unsigned int *)a1 + 105),
    *((_DWORD *)a1 + 106),
    *((_DWORD *)a1 + 107));
LABEL_7:
  RtlStringCbCatW(pszSrc, v5, pszDest);
  v7 = -1LL;
  do
    ++v7;
  while ( pszSrc[v7] );
  v8 = (unsigned int)(2 * v7 + 2);
  Pool2 = (wchar_t *)ExAllocatePool2(66LL, v8, 1112108368LL);
  if ( Pool2 )
  {
    RtlStringCbCopyW(Pool2, (unsigned int)v8, pszSrc);
    RtlInitUnicodeString((PUNICODE_STRING)a1 + 28, v10);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
