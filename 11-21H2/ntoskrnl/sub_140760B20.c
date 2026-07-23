/*
 * XREFs of sub_140760B20 @ 0x140760B20
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     sub_140582708 @ 0x140582708 (sub_140582708.c)
 *     sub_1405B52C0 @ 0x1405B52C0 (sub_1405B52C0.c)
 *     sub_1406EB4B0 @ 0x1406EB4B0 (sub_1406EB4B0.c)
 *     sub_14075F194 @ 0x14075F194 (sub_14075F194.c)
 *     sub_140760730 @ 0x140760730 (sub_140760730.c)
 *     sub_1407608BC @ 0x1407608BC (sub_1407608BC.c)
 *     sub_14080F7F4 @ 0x14080F7F4 (sub_14080F7F4.c)
 *     sub_14097389C @ 0x14097389C (sub_14097389C.c)
 *     sub_140B085F8 @ 0x140B085F8 (sub_140B085F8.c)
 *     sub_140B2FE74 @ 0x140B2FE74 (sub_140B2FE74.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1403D6DF4 @ 0x1403D6DF4 (sub_1403D6DF4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140760F98 @ 0x140760F98 (sub_140760F98.c)
 */

__int64 __fastcall sub_140760B20(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  void *v10; // rbx
  PIMAGE_NT_HEADERS v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 SectionAlignment; // r11
  unsigned int NumberOfSections; // r9d
  unsigned __int64 v15; // r14
  __int64 SizeOfOptionalHeader; // r8
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r12
  __int64 *v19; // rdi
  unsigned int v20; // r8d
  unsigned int v21; // ebx
  int v22; // eax
  bool v23; // cf
  int v24; // eax
  int v25; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // r11
  __int16 v28; // dx
  PVOID v29; // rax
  bool v30; // zf
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned __int64 v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-B8h]
  unsigned int v36; // [rsp+24h] [rbp-B4h]
  unsigned __int64 v37; // [rsp+28h] [rbp-B0h]
  void *v40; // [rsp+58h] [rbp-80h]
  _IMAGE_NT_HEADERS64 *v41; // [rsp+60h] [rbp-78h]
  __int64 v42; // [rsp+68h] [rbp-70h]
  __int64 v43; // [rsp+70h] [rbp-68h] BYREF
  int v44; // [rsp+78h] [rbp-60h]
  __int128 v45; // [rsp+7Ch] [rbp-5Ch]
  __int64 v46; // [rsp+8Ch] [rbp-4Ch]
  int v47; // [rsp+94h] [rbp-44h]

  v6 = 0;
  v43 = 0LL;
  *a5 = 0LL;
  v45 = 0LL;
  *a6 = 0LL;
  v10 = *(void **)(a1 + 48);
  v46 = 0LL;
  v40 = v10;
  v11 = RtlImageNtHeader(v10);
  v41 = v11;
  v12 = a4 - (_QWORD)v10;
  SectionAlignment = v11->OptionalHeader.SectionAlignment;
  NumberOfSections = v11->FileHeader.NumberOfSections;
  v15 = (unsigned int)SectionAlignment;
  v37 = a4 - (_QWORD)v10;
  if ( SectionAlignment > 0x1000 )
    v15 = 4096LL;
  v36 = v11->FileHeader.NumberOfSections;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v11->FileHeader.SizeOfOptionalHeader;
  v42 = SizeOfOptionalHeader;
  v17 = 0LL;
  v47 = 0x40000000;
  v18 = 0LL;
  DWORD1(v45) = SizeOfOptionalHeader + 40 * NumberOfSections + (_DWORD)v11 + 24 - (_DWORD)v10;
  v44 = DWORD1(v45);
  while ( 1 )
  {
    if ( a2 )
      v19 = (__int64 *)((char *)&v11->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v19 = &v43;
    v20 = *((_DWORD *)v19 + 4);
    if ( v20 < *((_DWORD *)v19 + 2) )
      v20 = *((_DWORD *)v19 + 2);
    v35 = v20;
    if ( !a4 )
      break;
    v34 = *((unsigned int *)v19 + 3);
    if ( v12 < v34 || v12 >= v20 + (unsigned int)v34 )
      goto LABEL_19;
    if ( (a3 & 0x40) != 0 && (*((_DWORD *)v19 + 9) & 0x2000000) != 0 )
      return 0LL;
LABEL_25:
    if ( v17 )
      v25 = *((_DWORD *)v19 + 3);
    else
      v17 = sub_140313C70(((unsigned __int64)v10 + *((unsigned int *)v19 + 3) + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v26 = sub_140313C70(-(__int64)v15 & ((unsigned __int64)v10 + v15 + v20 + v25 - 1));
    v18 = v26;
    if ( (v28 & 0xFFF) == 0 || (a3 & 0xC) == 0 || v15 >= 0x1000 )
      v18 = v26 - 8;
    if ( v27 > 0x1000 )
      goto LABEL_19;
LABEL_20:
    if ( ++a2 > NumberOfSections )
    {
      if ( v17 )
      {
        v31 = *((_DWORD *)v19 + 4);
        if ( v31 < *((_DWORD *)v19 + 2) )
          v31 = *((_DWORD *)v19 + 2);
        v32 = sub_140313C70(((-(__int64)v15 & ((unsigned __int64)v10 + v15 + *((_DWORD *)v19 + 3) + v31 - 1)) + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( v17 <= v32 )
        {
          *a5 = v17;
          *a6 = v32;
        }
      }
      return 0LL;
    }
    v11 = v41;
    SizeOfOptionalHeader = v42;
  }
  if ( (a3 & 8) != 0 )
  {
    v24 = (*((_DWORD *)v19 + 9) & 0xE0000000) != 0;
    goto LABEL_24;
  }
  if ( (a3 & 1) != 0 )
  {
    v24 = sub_140760F98(v19);
    goto LABEL_23;
  }
  if ( (a3 & 4) != 0 )
  {
    v21 = *((_DWORD *)v19 + 9) & 0xE0000000;
    v22 = sub_140760F98(v19);
    v23 = v21 != 0;
    v10 = v40;
    v24 = v23 && v22 == 0;
LABEL_23:
    v20 = v35;
    NumberOfSections = v36;
    v12 = v37;
    goto LABEL_24;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v24 = *((_DWORD *)v19 + 9) & 0x20000000;
LABEL_24:
    if ( !v24 )
      goto LABEL_19;
    goto LABEL_25;
  }
  if ( (a3 & 0x20) != 0 )
  {
    if ( *(_BYTE *)v19 != 80
      || *((_BYTE *)v19 + 1) != 65
      || *((_BYTE *)v19 + 2) != 71
      || *((_BYTE *)v19 + 3) != 69
      || *((_BYTE *)v19 + 4) != 75 )
    {
      goto LABEL_19;
    }
    v30 = *((_BYTE *)v19 + 5) == 68;
    goto LABEL_35;
  }
  if ( a3 < 0 )
  {
    if ( *(_BYTE *)v19 != 80
      || *((_BYTE *)v19 + 1) != 65
      || *((_BYTE *)v19 + 2) != 71
      || *((_BYTE *)v19 + 3) != 69
      || *((_BYTE *)v19 + 4) != 67
      || *((_BYTE *)v19 + 5) != 77
      || *((_BYTE *)v19 + 6) != 82 )
    {
      goto LABEL_19;
    }
    v30 = *((_BYTE *)v19 + 7) == 67;
LABEL_35:
    if ( !v30 )
      goto LABEL_19;
    goto LABEL_25;
  }
  if ( !*(_DWORD *)v19 && v19 != &v43 )
    return 0LL;
  if ( ((*(_DWORD *)(a1 + 104) & 0x4000000) == 0 || *(_DWORD *)v19 != 1414090313)
    && (*((_DWORD *)v19 + 9) & 0x2000000) != 0 )
  {
    v29 = *(PVOID *)(a1 + 48);
    if ( v29 != qword_140D068F0 && v29 != qword_140D06988 )
      goto LABEL_25;
    v30 = !sub_1403D6DF4((__int64)v19);
    goto LABEL_35;
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_20;
  if ( v17 > v18 )
  {
    v17 = 0LL;
    goto LABEL_20;
  }
  *a5 = v17;
  *a6 = v18;
  if ( a2 + 1 <= NumberOfSections )
    return a2 + 1;
  return v6;
}
