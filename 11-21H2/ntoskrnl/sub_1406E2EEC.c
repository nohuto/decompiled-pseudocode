/*
 * XREFs of sub_1406E2EEC @ 0x1406E2EEC
 * Callers:
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_14094C9C4 @ 0x14094C9C4 (sub_14094C9C4.c)
 *     sub_14094F4CC @ 0x14094F4CC (sub_14094F4CC.c)
 * Callees:
 *     sub_1402088DC @ 0x1402088DC (sub_1402088DC.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_140697760 @ 0x140697760 (sub_140697760.c)
 *     sub_1406E2FC8 @ 0x1406E2FC8 (sub_1406E2FC8.c)
 *     sub_1406E2FE8 @ 0x1406E2FE8 (sub_1406E2FE8.c)
 *     sub_1406E5528 @ 0x1406E5528 (sub_1406E5528.c)
 *     sub_14077139C @ 0x14077139C (sub_14077139C.c)
 *     sub_140778D60 @ 0x140778D60 (sub_140778D60.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14094B144 @ 0x14094B144 (sub_14094B144.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 *     sub_14094C238 @ 0x14094C238 (sub_14094C238.c)
 *     sub_14094C6A8 @ 0x14094C6A8 (sub_14094C6A8.c)
 *     sub_14094CBE0 @ 0x14094CBE0 (sub_14094CBE0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406E2EEC(int a1, __int64 a2, unsigned __int16 *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // esi
  int v9; // r13d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  char v16; // al
  __int64 v17; // rcx
  int v18; // eax
  _WORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  unsigned int *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // ecx
  PVOID v28; // rsi
  void *v29; // r14
  const wchar_t **v30; // rdx
  int v31; // [rsp+30h] [rbp-71h]
  int v32; // [rsp+30h] [rbp-71h]
  PVOID P; // [rsp+68h] [rbp-39h] BYREF
  int v34; // [rsp+70h] [rbp-31h] BYREF
  int v35; // [rsp+74h] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-21h] BYREF
  __int128 v38; // [rsp+90h] [rbp-11h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-1h]
  __int128 v40; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+C0h] [rbp+1Fh]

  v41 = 0LL;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v8 = a1;
  v35 = 0;
  v9 = 0;
  v34 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v10 = sub_1406E2FE8(a3, a4, &v38);
  v13 = 0LL;
  v14 = v10;
  if ( v10 < 0 )
    goto LABEL_8;
  if ( !(_QWORD)v38 )
  {
    v14 = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)sub_14077DA5C(
                       qword_140D00AC0,
                       *(_QWORD *)(a2 + 8),
                       1,
                       *(_QWORD *)(a2 + 16),
                       0LL,
                       (__int64)qword_1400395B0,
                       (__int64)&v35,
                       0LL,
                       0,
                       (__int64)&v34,
                       0) == -1073741789
    && v35 == 9
    && v34 == 8 )
  {
    goto LABEL_51;
  }
  if ( *((_QWORD *)&v38 + 1) )
  {
    v14 = sub_14094CBE0(&v38, *(_QWORD *)(a2 + 8), &P);
    if ( v14 < 0 )
    {
      P = 0LL;
      if ( v14 == -1073741772 )
        v14 = 0;
    }
    else
    {
      *((_QWORD *)P + 23) = 0LL;
    }
  }
  if ( !P )
  {
    v16 = sub_140778D60(*(PCWSTR *)(a2 + 8));
    v13 = 0LL;
    if ( v16 )
      goto LABEL_51;
    if ( !*(_QWORD *)(a2 + 64) )
      goto LABEL_46;
    v11 = v40;
    if ( !(_QWORD)v40 )
    {
      LODWORD(v17) = 0;
      if ( *(_QWORD *)&qword_140D00AC0 )
        v17 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
      v18 = sub_14077FFEC(v17, v38, (unsigned int)L"Locations", 0, 131097, (__int64)&v40);
      v13 = 0LL;
      if ( v18 == -1073741772 )
      {
        *(_QWORD *)&v40 = 0LL;
LABEL_46:
        if ( P )
          goto LABEL_52;
        if ( !*((_QWORD *)&v39 + 1) )
          goto LABEL_77;
        v22 = sub_14094B864(&v38, a2, *((_QWORD *)&v39 + 1), 69665LL, &P);
        v14 = v22;
        if ( v22 < 0 )
        {
          P = 0LL;
          if ( v22 == -1073741275 )
            v14 = 0;
        }
LABEL_51:
        if ( P )
          goto LABEL_52;
LABEL_77:
        sub_14094B144(&v38, *(_QWORD *)(a2 + 8));
        goto LABEL_8;
      }
      if ( v18 < 0 )
      {
LABEL_38:
        v14 = v18;
        goto LABEL_8;
      }
      v11 = v40;
      if ( !(_QWORD)v40 )
        goto LABEL_46;
    }
    v19 = *(_WORD **)(a2 + 64);
    if ( *v19 )
    {
      while ( 1 )
      {
        LODWORD(v20) = 0;
        if ( *(_QWORD *)&qword_140D00AC0 )
          v20 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
        v18 = sub_14077FFEC(v20, v11, (_DWORD)v19, 0, 131097, (__int64)&Handle);
        if ( v18 == -1073741772 )
        {
          v13 = 0LL;
        }
        else
        {
          if ( v18 < 0 )
            goto LABEL_38;
          v14 = sub_14094B864(&v38, a2, Handle, 70145LL, &P);
          ZwClose(Handle);
          v13 = 0LL;
          if ( v14 >= 0 )
            goto LABEL_45;
          P = 0LL;
          if ( v14 == -1073741275 )
            v14 = 0;
        }
        v21 = -1LL;
        do
          ++v21;
        while ( v19[v21] );
        v19 += v21 + 1;
        if ( !*v19 )
          break;
        LODWORD(v11) = v40;
      }
    }
    if ( v14 < 0 )
      goto LABEL_8;
LABEL_45:
    v8 = a1;
    goto LABEL_46;
  }
LABEL_52:
  v23 = *((_DWORD *)P + 4);
  if ( (v23 & 1) != 0 )
  {
    v14 = -1073740007;
  }
  else if ( (v23 & 2) != 0 )
  {
    v14 = -1073740719;
  }
  else
  {
    if ( sub_14067B838(*((HANDLE *)P + 5), L"ConfigFlags", 0, &DestinationString) >= 0 )
    {
      if ( sub_1402088DC(*(__int64 *)&DestinationString.Length) )
        v9 = *(unsigned int *)((char *)v24 + v24[2]);
      ExFreePoolWithTag(v24, 0);
    }
    v25 = *(_QWORD *)(a2 + 16);
    v26 = *(_QWORD *)(a2 + 8);
    v34 = 0;
    if ( (unsigned int)sub_14077DA5C(
                         qword_140D00AC0,
                         v26,
                         1,
                         v25,
                         0LL,
                         (__int64)&stru_140010A18,
                         (__int64)&v35,
                         0LL,
                         0,
                         (__int64)&v34,
                         0) != -1073741789
      || v35 != 13
      || v34 != 16 )
    {
      if ( a3 )
        sub_1406E5528(v27, a2, 9, 1, *((_QWORD *)a3 + 1), *a3 + 2);
      else
        sub_14077139C(
          qword_140D00AC0,
          a2,
          *(_QWORD *)(a2 + 8),
          1,
          *(_QWORD *)(a2 + 16),
          v31,
          (__int64)&stru_140010A18,
          13,
          (__int64)P + 80,
          16,
          0);
    }
    v14 = sub_140697760(v8, a2, *((_QWORD *)P + 5), -1, 0LL, 0LL, (__int64)a5, (__int64)a6);
    if ( v14 >= 0 )
    {
      if ( a5 )
        *a5 |= v9;
      v28 = P;
      if ( *((_QWORD *)P + 23) )
      {
        v29 = *(void **)(a2 + 16);
        DestinationString = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, L"ParentIdPrefix") >= 0 )
        {
          ZwDeleteValueKey(v29, &DestinationString);
          v28 = P;
        }
      }
      sub_14077139C(
        qword_140D00AC0,
        a2,
        *(_QWORD *)(a2 + 8),
        1,
        *(_QWORD *)(a2 + 16),
        v32,
        (__int64)qword_1400395B0,
        9,
        (__int64)v28 + 184,
        8,
        0);
    }
  }
  sub_14094C6A8(a2, P, (unsigned int)v14);
  v30 = (const wchar_t **)P;
  if ( (*((_DWORD *)P + 4) & 1) == 0 )
  {
    sub_14094B144(&v38, *((_QWORD *)P + 4));
    v30 = (const wchar_t **)P;
  }
  if ( !v30 || wcsicmp(*(const wchar_t **)(a2 + 8), v30[4]) )
    goto LABEL_77;
LABEL_8:
  if ( P )
    sub_14094C238(P);
  sub_1406E2FC8(&v38, v11, v12, v13);
  return (unsigned int)v14;
}
