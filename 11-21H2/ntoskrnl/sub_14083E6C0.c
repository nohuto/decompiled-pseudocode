/*
 * XREFs of sub_14083E6C0 @ 0x14083E6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140781748 @ 0x140781748 (sub_140781748.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083E6C0(__int64 a1, __int64 a2, _WORD *a3, unsigned int *a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v9; // r14
  WCHAR *v10; // rdi
  char v11; // r12
  __int64 v12; // rax
  int v13; // eax
  WCHAR *Pool2; // rax
  __int64 v15; // rdx
  WCHAR *v16; // r11
  _WORD *v17; // r11
  __int64 v18; // r8
  unsigned int v19; // esi
  unsigned int v20; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  int v26; // [rsp+30h] [rbp-50h] BYREF
  unsigned int KeyHandle[3]; // [rsp+34h] [rbp-4Ch] BYREF
  WCHAR *v28; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  char v33; // [rsp+C8h] [rbp+48h] BYREF

  v6 = -1LL;
  *(_QWORD *)&KeyHandle[1] = 0LL;
  v26 = 0;
  v7 = *a4;
  v28 = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  v10 = 0LL;
  v33 = 0;
  v11 = 0;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  if ( (_DWORD)v7 == 1 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a3[v22] );
    if ( v22 != 38 || *a3 != 123 )
      return 0LL;
  }
  else
  {
    if ( (unsigned int)(v7 - 2) <= 1 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      if ( !v12 || *a3 != 35 )
        return 0LL;
    }
    if ( (unsigned int)v7 >= 3 && ((_DWORD)v7 != 3 || !*((_BYTE *)a4 + 1428)) )
      goto LABEL_10;
  }
  v23 = 0LL;
  if ( a1 )
    v23 = *(_QWORD *)(a1 + 224);
  if ( (int)sub_14077FFEC(v23, a2, (__int64)a3, 8u, 0x20019u, (__int64)&KeyHandle[1]) < 0 )
    goto LABEL_37;
LABEL_10:
  v13 = *a4;
  if ( *a4 >= 3 )
  {
    if ( v13 == 3 )
    {
      do
        ++v6;
      while ( a3[v6] );
      if ( v6 > 1 && *a3 == 35 )
        v11 = 1;
    }
LABEL_19:
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, 1008LL, 1380994640LL);
    v10 = Pool2;
    if ( !Pool2 )
      goto LABEL_36;
    v15 = 504LL;
    if ( *((_WORD *)a4 + 2) )
    {
      if ( (int)sub_1402E0340(Pool2, 0x1F8uLL, (const WCHAR *)a4 + 2, &v28, &v29, 2304) < 0 )
        goto LABEL_35;
      v16 = v28;
      v15 = v29 - 1;
      *v28 = 0;
    }
    else
    {
      v16 = Pool2;
    }
    if ( v11 == 1 || *a4 == 2 )
    {
      if ( (int)sub_1402E0200(v16, v15, (__int64)a3) < 0 )
        goto LABEL_35;
      if ( v11 == 1 )
        *v17 = 92;
    }
LABEL_27:
    if ( *a4 < 3 )
    {
      v24 = ExAllocatePool2(256LL, 1464LL, 1380994640LL);
      v25 = v24;
      if ( v24 )
      {
        *(_DWORD *)v24 = *a4 + 1;
        sub_1402E0340((_WORD *)(v24 + 4), 0x1F8uLL, v10, 0LL, 0LL, 2304);
        sub_1402E0340((_WORD *)(v25 + 1012), 0xC8uLL, (const WCHAR *)a4 + 506, 0LL, 0LL, 2304);
        *(_QWORD *)(v25 + 1416) = *((_QWORD *)a4 + 177);
        *(_DWORD *)(v25 + 1424) = a4[356];
        *(_BYTE *)(v25 + 1428) = *((_BYTE *)a4 + 1428);
        *(_QWORD *)(v25 + 1432) = *((_QWORD *)a4 + 179);
        *(_QWORD *)(v25 + 1440) = *((_QWORD *)a4 + 180);
        *(_QWORD *)(v25 + 1448) = *((_QWORD *)a4 + 181);
        *(_DWORD *)(v25 + 1456) = a4[364];
        *(_DWORD *)(v25 + 1460) = a4[365];
        sub_14083EAEC(a1, *(_QWORD *)&KeyHandle[1], sub_14083E6C0, v25);
        *((_QWORD *)a4 + 177) = *(_QWORD *)(v25 + 1416);
        a4[356] = *(_DWORD *)(v25 + 1424);
        a4[365] = *(_DWORD *)(v25 + 1460);
        *((_QWORD *)a4 + 181) = *(_QWORD *)(v25 + 1448);
        a4[364] = *(_DWORD *)(v25 + 1456);
        ExFreePoolWithTag((PVOID)v25, 0);
      }
    }
    else
    {
      *(_QWORD *)v10 = 0x5C003F005C005CLL;
      if ( sub_14077F150(v7, (__int64)v10) >= 0 && RtlInitUnicodeStringEx(&DestinationString, v10) >= 0 )
      {
        v19 = DestinationString.MaximumLength >> 1;
        if ( (!*((_BYTE *)a4 + 1428) || sub_140781748(a1, v10, v18, (__int64)&v33) >= 0 && v33)
          && (!*((_QWORD *)a4 + 179) || (unsigned __int8)sub_14042A5E0(a1, v10)) )
        {
          a4[365] += v19;
          v20 = a4[364];
          if ( v20 > v19 )
          {
            sub_1402E0340(*((_WORD **)a4 + 181), v20, v10, 0LL, 0LL, 2304);
            *((_QWORD *)a4 + 181) += 2LL * v19;
            a4[364] -= v19;
          }
        }
      }
    }
    if ( !v10 )
    {
LABEL_36:
      if ( !v9 )
        goto LABEL_37;
      goto LABEL_60;
    }
LABEL_35:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_36;
  }
  if ( v13 != 2 || !*((_WORD *)a4 + 506) )
    goto LABEL_18;
  v9 = ExAllocatePool2(256LL, 400LL, 1380994640LL);
  if ( !v9 )
    goto LABEL_37;
  KeyHandle[0] = 400;
  if ( (int)sub_14077FC64(*(HANDLE *)&KeyHandle[1], L"DeviceInstance", &v26, (void *)v9, KeyHandle) >= 0
    && v26 == 1
    && KeyHandle[0] >= 2 )
  {
    *(_WORD *)(v9 + 398) = 0;
    if ( RtlInitUnicodeStringEx(&String1, (PCWSTR)v9) >= 0
      && RtlInitUnicodeStringEx(&String2, (PCWSTR)a4 + 506) >= 0
      && RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
LABEL_18:
      v11 = 0;
      if ( *a4 < 2 )
        goto LABEL_27;
      goto LABEL_19;
    }
  }
LABEL_60:
  ExFreePoolWithTag((PVOID)v9, 0);
LABEL_37:
  if ( *(_QWORD *)&KeyHandle[1] )
    ZwClose(*(HANDLE *)&KeyHandle[1]);
  return 0LL;
}
