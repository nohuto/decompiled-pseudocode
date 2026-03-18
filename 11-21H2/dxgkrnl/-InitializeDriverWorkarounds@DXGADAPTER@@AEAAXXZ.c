/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0202464
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkInitializeBlockList @ 0x1C02025FC (DxgkInitializeBlockList.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C020D12C (-xwtol@@YAKPEBG@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  _DWORD **v1; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  const wchar_t *v8; // rcx
  wchar_t *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  const wchar_t *v12; // rcx
  wchar_t *v13; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-49h] BYREF
  __int64 v15; // [rsp+40h] [rbp-39h] BYREF
  int v16; // [rsp+48h] [rbp-31h]
  const wchar_t *v17; // [rsp+50h] [rbp-29h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+58h] [rbp-21h]
  int v19; // [rsp+60h] [rbp-19h]
  __int64 v20; // [rsp+68h] [rbp-11h]
  int v21; // [rsp+70h] [rbp-9h]
  __int64 v22; // [rsp+78h] [rbp-1h]
  int v23; // [rsp+80h] [rbp+7h]
  __int128 v24; // [rsp+88h] [rbp+Fh]
  __int128 v25; // [rsp+98h] [rbp+1Fh]
  __int64 v26; // [rsp+A8h] [rbp+2Fh]
  int Key; // [rsp+E0h] [rbp+67h] BYREF

  v1 = (_DWORD **)((char *)this + 2696);
  DxgkInitializeBlockList(*((_QWORD *)this + 27), *((unsigned int *)this + 606), (char *)this + 2696);
  if ( (**v1 & 0x80u) != 0 )
    WdDiagNotifyUser(32LL, 9LL, 0LL, 0LL);
  v3 = *((_DWORD *)this + 606);
  v4 = -1LL;
  if ( v3 == 8704 )
  {
    if ( (*((_DWORD *)this + 109) & 0x200) != 0 )
      *((_BYTE *)this + 2741) = 1;
  }
  else
  {
    if ( v3 < 0x2000 )
      goto LABEL_11;
    if ( v3 >= 9216 )
      goto LABEL_6;
  }
  v7 = *((_DWORD *)this + 103);
  if ( v7 == 32902 || v7 == 4098 )
  {
    **v1 |= 0x40u;
    v3 = *((_DWORD *)this + 606);
  }
  if ( v3 >= 0x2000 )
  {
LABEL_6:
    v5 = *((_DWORD *)this + 103);
    if ( v5 == 4098 || v5 == 4318 )
    {
      *((_DWORD *)this + 537) |= 0x40u;
    }
    else if ( v5 == 32902 && (*((_DWORD *)this + 537) & 0x40) != 0 )
    {
      Key = *((_DWORD *)this + 104);
      if ( bsearch(&Key, &unk_1C008A4D0, 0x18uLL, 4uLL, UintCompareFunc) )
      {
        v8 = (const wchar_t *)*((_QWORD *)this + 211);
        if ( v8 )
        {
          v9 = wcsrchr(v8, 0x2Eu);
          if ( v9 )
          {
            v10 = -1LL;
            do
              ++v10;
            while ( v9[v10] );
            if ( v10 == 5 && xwtol(v9 + 1) - 1 <= 0x116D )
              *((_DWORD *)this + 537) &= ~0x40u;
          }
        }
      }
    }
  }
LABEL_11:
  if ( *((int *)this + 606) >= 9216 )
    *((_DWORD *)this + 537) |= 8u;
  if ( *((_DWORD *)this + 103) == 1297040209 )
  {
    v11 = *((_DWORD *)this + 673);
    if ( v11 <= 2000 )
    {
      **v1 |= 0x10u;
      v17 = L"PhoneSOCVersion";
      p_UnicodeString = &UnicodeString;
      v26 = 0LL;
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = 0LL;
      v15 = 0LL;
      v16 = 292;
      v19 = 16777217;
      v20 = 0LL;
      v21 = 0;
      v22 = 0LL;
      v23 = 0;
      v24 = 0LL;
      v25 = 0LL;
      if ( (int)RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo",
                  &v15,
                  0LL,
                  0LL) >= 0
        && UnicodeString.Length >= 4u
        && (!RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8992", 4uLL, 0)
         || !RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8994", 4uLL, 0)) )
      {
        **v1 |= 0x20u;
      }
      RtlFreeUnicodeString(&UnicodeString);
      v11 = *((_DWORD *)this + 673);
    }
    if ( v11 <= 1300 )
    {
      **v1 |= 1u;
      **v1 |= 2u;
      **v1 |= 8u;
    }
    if ( *((_DWORD *)this + 606) == 4608 )
      **v1 |= 4u;
    if ( *((_DWORD *)this + 104) == 1161245232 )
    {
      if ( *((_DWORD *)this + 105) != 810570829
        || *((_DWORD *)this + 106) != 808794160
        || *((_DWORD *)this + 107) != 124
        || (**v1 |= 0x1000u, **v1 |= 0x2000u, *((_DWORD *)this + 104) == 1161245232) )
      {
        if ( *((_DWORD *)this + 105) == 810434888
          && *((_DWORD *)this + 106) == 808794160
          && *((_DWORD *)this + 107) == 124 )
        {
          **v1 |= 0x4000u;
        }
      }
    }
  }
  if ( (**v1 & 0x400) != 0 )
  {
    *((_BYTE *)this + 2628) = 0;
    *((_DWORD *)this + 658) = 1;
    *((_BYTE *)this + 2733) = 0;
    *((_BYTE *)this + 2737) = 0;
    *((_BYTE *)this + 2735) = 0;
  }
  if ( *((int *)this + 606) <= 9216 && *((_DWORD *)this + 103) == 32902 )
  {
    v12 = (const wchar_t *)*((_QWORD *)this + 211);
    if ( v12 )
    {
      v13 = wcsrchr(v12, 0x2Eu);
      if ( v13 )
      {
        do
          ++v4;
        while ( v13[v4] );
        if ( v4 == 5 && xwtol(v13 + 1) - 1 <= 0x17F6 )
          **v1 |= 0x200000u;
      }
    }
  }
  v6 = *((_DWORD *)this + 606);
  if ( v6 == 8960 )
  {
    if ( *((_DWORD *)this + 103) != 4098 )
      return;
    **v1 |= 0x400000u;
    v6 = *((_DWORD *)this + 606);
  }
  if ( v6 <= 9728 && *((_DWORD *)this + 103) == 4098 )
    **v1 |= 0x800000u;
}
