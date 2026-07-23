/*
 * XREFs of sub_14095A750 @ 0x14095A750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_140698AAC @ 0x140698AAC (sub_140698AAC.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DF24 @ 0x14077DF24 (sub_14077DF24.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 *     sub_14078D510 @ 0x14078D510 (sub_14078D510.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     sub_140953B9C @ 0x140953B9C (sub_140953B9C.c)
 *     sub_140957E34 @ 0x140957E34 (sub_140957E34.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14095A750(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  unsigned int v4; // r14d
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  ULONG v8; // r15d
  wchar_t *v9; // r13
  PVOID v10; // rsi
  void *Pool2; // r12
  int v12; // edi
  wchar_t *Buffer; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  ULONG v16; // r15d
  unsigned int v17; // edi
  wchar_t *v18; // rax
  int *v19; // rbx
  PCWCH *v20; // r13
  int v21; // r9d
  wchar_t *v22; // rax
  const wchar_t *v23; // rbx
  __int64 v24; // rax
  NTSTATUS v25; // eax
  PCWSTR v26; // rdi
  __int64 v27; // rcx
  PVOID v28; // r14
  unsigned int v29; // r15d
  __int64 v30; // r14
  unsigned int v31; // ebx
  unsigned int v32; // eax
  __int64 v33; // rsi
  _DWORD *v34; // r14
  char *v35; // rax
  const wchar_t *v36; // r14
  char *v37; // rbx
  __int64 v38; // rdx
  int v39; // eax
  unsigned int v40; // eax
  void *v41; // rcx
  __int64 v42; // rax
  PVOID *v43; // r14
  PVOID *v44; // rbx
  PVOID *v45; // rbx
  __int64 v46; // r8
  HANDLE v47; // rcx
  unsigned int v49; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR SourceString; // [rsp+78h] [rbp-88h]
  _DWORD *v51; // [rsp+80h] [rbp-80h]
  wchar_t *Str1; // [rsp+88h] [rbp-78h]
  PVOID v53; // [rsp+90h] [rbp-70h] BYREF
  ULONG HashValue; // [rsp+98h] [rbp-68h] BYREF
  ULONG v55; // [rsp+9Ch] [rbp-64h] BYREF
  int v56; // [rsp+A0h] [rbp-60h]
  int v57; // [rsp+A4h] [rbp-5Ch] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  int v59; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v60; // [rsp+B4h] [rbp-4Ch]
  PVOID P; // [rsp+B8h] [rbp-48h]
  int *v62; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v64; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING GuidString; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v66; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING String2; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v69; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v70; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v71; // [rsp+148h] [rbp+48h] BYREF
  _DWORD v72[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  _QWORD v75[2]; // [rsp+170h] [rbp+70h] BYREF
  GUID Guid; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v77[50]; // [rsp+190h] [rbp+90h] BYREF

  v73 = a1;
  v4 = 0;
  SourceString = a3;
  v59 = 1;
  P = 0LL;
  v6 = 0LL;
  v49 = 0;
  Handle = 0LL;
  v7 = a4;
  v51 = a4;
  v8 = 0;
  v57 = 0;
  v9 = 0LL;
  v55 = 0;
  v10 = 0LL;
  HashValue = 0;
  Pool2 = 0LL;
  Str1 = 0LL;
  v56 = 0;
  v53 = 0LL;
  v74 = 0LL;
  v60 = 0;
  v66 = 0LL;
  UnicodeString = 0LL;
  v64 = 0LL;
  GuidString = 0LL;
  Guid = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  String2 = 0LL;
  DestinationString = 0LL;
  v69 = 0LL;
  if ( a1 )
    v6 = *(_QWORD *)(a1 + 224);
  v12 = sub_14077FFEC(v6, a2, (__int64)a3, 0, 0x20019u, (__int64)&Handle);
  if ( v12 < 0 )
    goto LABEL_128;
  memset(v77, 0, 0x188uLL);
  LODWORD(v77[25]) = 0x4000000;
  LODWORD(v77[1]) = 304;
  LODWORD(v77[4]) = 117440512;
  v77[2] = L"HardwareIds";
  LODWORD(v77[8]) = 304;
  v77[3] = &UnicodeString;
  LODWORD(v77[11]) = 117440512;
  v77[9] = L"CompatibleIds";
  LODWORD(v77[15]) = 288;
  v77[10] = &v64;
  LODWORD(v77[18]) = 0x1000000;
  v77[16] = L"ContainerId";
  v77[17] = &GuidString;
  v77[23] = L"Capabilities";
  v77[24] = &v57;
  v77[30] = L"Description";
  v77[31] = &v70;
  v77[37] = L"LocationInfo";
  LODWORD(v77[22]) = 288;
  LODWORD(v77[29]) = 288;
  LODWORD(v77[32]) = 0x1000000;
  LODWORD(v77[36]) = 288;
  LODWORD(v77[39]) = 0x1000000;
  v77[38] = &v71;
  v12 = sub_140781F40(-1073741824, (const WCHAR *)Handle, (__int64)v77, 0LL);
  if ( v12 < 0 )
    goto LABEL_128;
  if ( UnicodeString.Buffer && UnicodeString.Length <= 2u )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v64.Buffer && v64.Length <= 2u )
    RtlFreeUnicodeString(&v64);
  Buffer = GuidString.Buffer;
  if ( !GuidString.Buffer )
    goto LABEL_16;
  if ( GuidString.Length < 2u )
  {
    RtlFreeUnicodeString(&GuidString);
    Buffer = GuidString.Buffer;
  }
  if ( !Buffer || RtlGUIDFromString(&GuidString, &Guid) < 0 )
LABEL_16:
    Guid = 0LL;
  if ( v70.Buffer && v70.Length < 2u )
    RtlFreeUnicodeString(&v70);
  if ( v71.Buffer && v71.Length < 2u )
    RtlFreeUnicodeString(&v71);
  if ( !UnicodeString.Buffer && !v64.Buffer )
  {
    v12 = -1073741637;
LABEL_128:
    v36 = SourceString;
    goto LABEL_129;
  }
  v14 = *(_QWORD *)v7;
  v15 = -1LL;
  v75[0] = UnicodeString.Buffer;
  v75[1] = v64.Buffer;
  v72[0] = 2;
  v72[1] = 3;
  if ( (PVOID)v14 == qword_140C46278 )
    goto LABEL_73;
  do
  {
    if ( *(PDRIVER_OBJECT *)(*(_QWORD *)(v14 + 32) + 8LL) == DriverObject )
    {
      RtlInitUnicodeString(&DestinationString, L"SWD\\");
      if ( RtlPrefixUnicodeString(&DestinationString, (PCUNICODE_STRING)(v14 + 40), 1u) )
      {
        RtlInitUnicodeString(
          &String2,
          (PCWSTR)(*(_QWORD *)(v14 + 48) + 2 * ((unsigned __int64)DestinationString.Length >> 1)));
        RtlInitUnicodeString(&DestinationString, L"DRIVERENUM");
        if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
        {
          if ( String2.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92 )
          {
            if ( !v8 )
            {
              v12 = sub_14078D510((__int64)UnicodeString.Buffer, (__int64)v64.Buffer, &v55);
              if ( v12 < 0 )
                goto LABEL_43;
              if ( (v57 & 8) != 0 )
              {
                v16 = v55;
              }
              else
              {
                RtlInitUnicodeString(&String2, aSwdGene);
                v12 = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                if ( v12 < 0 )
                  goto LABEL_43;
                v16 = HashValue + v55;
              }
              RtlInitUnicodeString(&String2, aSwdGene_0);
              v12 = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
              if ( v12 < 0 )
                goto LABEL_43;
              v8 = HashValue + v16;
              v55 = v8;
            }
            if ( *(_DWORD *)(v14 + 684) == v8 )
            {
              if ( v9 )
              {
                v17 = v56;
              }
              else
              {
                v17 = 2048;
                v56 = 2048;
                Str1 = (wchar_t *)ExAllocatePool2(256LL, 2048LL, 538996816LL);
                v9 = Str1;
                if ( !Str1 )
                {
                  v12 = -1073741670;
                  goto LABEL_43;
                }
              }
              v18 = Str1;
              v19 = v72;
              v62 = v72;
              v20 = (PCWCH *)v75;
              while ( 1 )
              {
                v21 = *v19;
                v49 = v17;
                if ( (int)sub_14077CD90(
                            *(__int64 *)&qword_140D00AC0,
                            *(_QWORD *)(v14 + 48),
                            0LL,
                            v21,
                            (__int64)&v59,
                            (__int64)v18,
                            (__int64)&v49,
                            0) >= 0
                  && v59 == 7
                  && v49 >= 2 )
                {
                  v22 = Str1;
                }
                else
                {
                  v22 = Str1;
                  *Str1 = 0;
                }
                if ( v4 == 1 )
                {
                  v23 = v22;
                  if ( *v22 )
                  {
                    while ( wcsicmp(v23, aSwdGene) && wcsicmp(v23, aSwdGene_0) )
                    {
                      v24 = -1LL;
                      do
                        ++v24;
                      while ( v23[v24] );
                      v23 += v24 + 1;
                      if ( !*v23 )
                        goto LABEL_60;
                    }
                    *v23 = 0;
                  }
LABEL_60:
                  v19 = v62;
                }
                if ( *v20 )
                {
                  if ( !sub_140957E34(*v20, Str1, 1u) )
                  {
                    v9 = Str1;
                    goto LABEL_69;
                  }
                  v18 = Str1;
                }
                else
                {
                  v18 = Str1;
                  if ( *Str1 )
                  {
                    v9 = Str1;
LABEL_69:
                    v4 = 0;
                    break;
                  }
                }
                ++v19;
                ++v4;
                ++v20;
                v62 = v19;
                if ( v4 >= 2 )
                {
                  v12 = -1073740028;
                  goto LABEL_77;
                }
                v17 = v56;
              }
            }
          }
        }
      }
    }
    v14 = *(_QWORD *)(v14 + 16);
  }
  while ( (PVOID)v14 != qword_140C46278 );
  Str1 = v9;
  v15 = -1LL;
LABEL_73:
  v25 = sub_14067B838(Handle, L"Security", 0, &v53);
  v10 = v53;
  v12 = v25;
  if ( v25 >= 0 )
  {
    if ( *((_DWORD *)v53 + 1) != 3 || (v60 = *((_DWORD *)v53 + 3), v60 < 0x28) )
    {
      v12 = -1073741823;
      goto LABEL_127;
    }
    v74 = (__int64)v53 + *((unsigned int *)v53 + 2);
  }
  else if ( v25 != -1073741772 )
  {
    goto LABEL_127;
  }
  if ( *(PVOID *)v51 != qword_140C46278 )
  {
    v12 = sub_14080E438(*(_QWORD *)(*(_QWORD *)v51 + 32LL), 0LL, (wchar_t **)&v66);
    if ( v12 < 0 )
      goto LABEL_127;
    v26 = SourceString;
    v27 = -1LL;
    do
      ++v27;
    while ( SourceString[v27] );
    v28 = v66;
    v29 = 0;
    do
      ++v15;
    while ( *((_WORD *)v66 + v15) );
    v69.MaximumLength = 2 * (v15 + v27 + 2);
    v69.Buffer = (wchar_t *)sub_1406BE560((unsigned __int16)(2 * (v15 + v27) + 4));
    if ( !v69.Buffer )
    {
LABEL_88:
      v12 = -1073741670;
      goto LABEL_127;
    }
    v12 = sub_1402D17BC(&v69, L"%ws&%ws", v26, v28);
    if ( v12 >= 0 )
    {
LABEL_90:
      v30 = v73;
      v12 = sub_140698AAC(v73, (int)Handle, 0LL, 0, 0LL, 0, &v49);
      if ( v12 == -1073741789 )
      {
        v31 = 0;
        while ( 1 )
        {
          v32 = v49;
          if ( v49 <= v31 )
            break;
          if ( Pool2 )
          {
            ExFreePoolWithTag(Pool2, 0);
            v32 = v49;
          }
          v31 = v32;
          Pool2 = (void *)ExAllocatePool2(256LL, 20LL * v32, 538996816LL);
          if ( !Pool2 )
            goto LABEL_88;
          v12 = sub_140698AAC(v30, (int)Handle, 0LL, 0, (__int64)Pool2, v31, &v49);
          if ( v12 != -1073741789 )
            goto LABEL_97;
        }
        v12 = -1073741595;
        goto LABEL_119;
      }
LABEL_97:
      v33 = v49;
      v34 = Pool2;
      if ( v12 >= 0 )
      {
        if ( v49 )
        {
          v35 = (char *)ExAllocatePool2(256LL, 48LL * v49, 538996816LL);
          P = v35;
          if ( !v35 )
          {
            v12 = -1073741670;
            goto LABEL_119;
          }
          v37 = v35 + 36;
          do
          {
            v38 = *(_QWORD *)(v37 + 4);
            *(_OWORD *)(v37 - 36) = *(_OWORD *)v34;
            v39 = v34[4];
            *((_DWORD *)v37 - 4) = 0;
            *((_DWORD *)v37 - 5) = v39;
            while ( 1 )
            {
              v12 = sub_14077DF24(
                      v73,
                      (int)Handle,
                      0LL,
                      (__int64)Pool2 + 20 * v29,
                      (_DWORD *)v37 - 1,
                      v38,
                      *(_DWORD *)v37,
                      &v49);
              v40 = v49;
              if ( v12 != -1073741789 )
                break;
              if ( v49 <= *(_DWORD *)v37 )
              {
                v12 = -1073741595;
                goto LABEL_112;
              }
              v41 = *(void **)(v37 + 4);
              if ( v41 )
              {
                ExFreePoolWithTag(v41, 0);
                v40 = v49;
              }
              *(_DWORD *)v37 = v40;
              v42 = ExAllocatePool2(256LL, v49, 538996816LL);
              *(_QWORD *)(v37 + 4) = v42;
              v38 = v42;
              if ( !v42 )
              {
                v12 = -1073741670;
LABEL_112:
                v43 = (PVOID *)P;
                goto LABEL_113;
              }
            }
            *(_DWORD *)v37 = v49;
            if ( v12 < 0 )
              goto LABEL_112;
            ++v29;
            v37 += 48;
            v34 += 5;
          }
          while ( v29 < (unsigned int)v33 );
        }
        v45 = (PVOID *)P;
        v12 = sub_140953B9C(
                (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                *(const wchar_t **)(*(_QWORD *)v51 + 48LL),
                v69.Buffer,
                (__int64)UnicodeString.Buffer,
                (__int64)v64.Buffer,
                (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                v57,
                (__int64)v70.Buffer,
                (__int64)v71.Buffer,
                v74,
                v60,
                (__int64)P,
                v33);
        v43 = v45;
        if ( v45 )
        {
LABEL_113:
          if ( (_DWORD)v33 )
          {
            v44 = v43 + 5;
            do
            {
              if ( *v44 )
                ExFreePoolWithTag(*v44, 0);
              v44 += 6;
              --v33;
            }
            while ( v33 );
          }
          ExFreePoolWithTag(v43, 0);
        }
      }
LABEL_119:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
LABEL_77:
      v9 = Str1;
LABEL_43:
      v10 = v53;
    }
LABEL_127:
    v7 = v51;
    goto LABEL_128;
  }
  v36 = SourceString;
  v29 = 0;
  if ( RtlCreateUnicodeString(&v69, SourceString) )
    goto LABEL_90;
  v7 = v51;
  v12 = -1073741670;
LABEL_129:
  RtlFreeUnicodeString(&v69);
  if ( v66 )
    ExFreePoolWithTag(v66, 0);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v64);
  RtlFreeUnicodeString(&GuidString);
  RtlFreeUnicodeString(&v70);
  RtlFreeUnicodeString(&v71);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v47 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( v12 < 0 && byte_140C0DD4B < 0 )
    sub_1405637DC(
      (__int64)v47,
      (const EVENT_DESCRIPTOR *)qword_14003B570,
      v46,
      *(const wchar_t **)(*(_QWORD *)v7 + 48LL),
      v36,
      v12);
  if ( (int)v7[2] >= 0 )
    v7[2] = v12;
  return 0LL;
}
