/*
 * XREFs of sub_140AFE184 @ 0x140AFE184
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_1406A6378 @ 0x1406A6378 (sub_1406A6378.c)
 *     sub_1406A9B40 @ 0x1406A9B40 (sub_1406A9B40.c)
 *     sub_1406B9100 @ 0x1406B9100 (sub_1406B9100.c)
 *     sub_1406B96B0 @ 0x1406B96B0 (sub_1406B96B0.c)
 *     sub_1406C2A50 @ 0x1406C2A50 (sub_1406C2A50.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     sub_140825158 @ 0x140825158 (sub_140825158.c)
 *     sub_140825414 @ 0x140825414 (sub_140825414.c)
 *     sub_14082C020 @ 0x14082C020 (sub_14082C020.c)
 *     sub_140859318 @ 0x140859318 (sub_140859318.c)
 *     sub_1409B8050 @ 0x1409B8050 (sub_1409B8050.c)
 *     sub_140A57C10 @ 0x140A57C10 (sub_140A57C10.c)
 *     sub_140B2206C @ 0x140B2206C (sub_140B2206C.c)
 *     sub_140B2CE90 @ 0x140B2CE90 (sub_140B2CE90.c)
 */

char __fastcall sub_140AFE184(int a1)
{
  __int16 v1; // di
  __int16 v2; // bx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  int v7; // edi
  unsigned int v8; // edi
  char *v9; // rsi
  unsigned int v10; // eax
  _OWORD *v11; // rdi
  void *v12; // rdi
  NTSTATUS v13; // eax
  char *v14; // r14
  char *i; // rdi
  char *v16; // rax
  unsigned __int16 *v17; // rcx
  ULONG v18; // edx
  __int64 v19; // rdx
  _BYTE *v20; // rax
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-B8h] BYREF
  __m256i Handle; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v24[16]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v25; // [rsp+F8h] [rbp-10h]
  __int128 v26; // [rsp+108h] [rbp+0h]
  _OWORD *v27; // [rsp+118h] [rbp+10h]
  __int64 v28; // [rsp+120h] [rbp+18h]
  UNICODE_STRING DestinationString; // [rsp+128h] [rbp+20h] BYREF
  UNICODE_STRING v30; // [rsp+138h] [rbp+30h] BYREF
  UNICODE_STRING v31; // [rsp+148h] [rbp+40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v33; // [rsp+178h] [rbp+70h]
  ACL Acl; // [rsp+188h] [rbp+80h] BYREF

  Ace = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v33 = 0LL;
  v27 = 0LL;
  LODWORD(v28) = 0;
  v30 = 0LL;
  Handle.m256i_i64[0] = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  DestinationString = 0LL;
  if ( (_BYTE)dword_140D051DC )
  {
    v1 = 64;
    v2 = 32;
  }
  else
  {
    v1 = 32;
    v2 = 16;
  }
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
        sub_1406D2264((char *)&dword_140C03008, 0LL, 0LL);
      return 1;
    }
    if ( sub_140859318(0LL) >= 0 )
    {
      v7 = 0;
      if ( (_DWORD)dword_140D06884 )
      {
        while ( (int)sub_140825414((_QWORD *)qword_140D088C0[v7]) >= 0 )
        {
          if ( ++v7 >= (unsigned int)dword_140D06884 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        v8 = 0;
        v9 = (char *)&unk_140CF5C00;
        do
        {
          v10 = 14 * v8 + 24;
          if ( v10 >= 0x40 )
            v10 = 64;
          sub_140250C50((__int64)v9, 0LL, 0LL, 512, 48 * v10, 1834443343, 0, 0);
          ++v8;
          v9 += 128;
        }
        while ( v8 < 4 );
        v11 = (_OWORD *)qword_140D3CA48;
        if ( !dword_140C2541C && !dword_140C25420 )
          goto LABEL_28;
        v18 = 4 * *((unsigned __int8 *)qword_140C5AFA8 + 1) + 28;
        if ( v18 < 0xFA
          && RtlCreateAcl(&Acl, v18, 2u) >= 0
          && (int)sub_1409B8050(&Acl, v19, 1610612736) >= 0
          && RtlGetAce(&Acl, 0, &Ace) >= 0 )
        {
          v20 = Ace;
          if ( dword_140C2541C )
            *((_BYTE *)Ace + 1) |= 0xAu;
          if ( dword_140C25420 )
            v20[1] |= 9u;
          v11 = SecurityDescriptor;
          if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
            && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, ::Acl, 0) >= 0
            && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
          {
LABEL_28:
            LODWORD(v25) = 48;
            *(_QWORD *)&v26 = &qword_140A383E8;
            *((_QWORD *)&v25 + 1) = 0LL;
            DWORD2(v26) = 80;
            v27 = v11;
            v28 = 0LL;
            if ( (int)sub_1406C2A50((__int64)&Handle) >= 0 )
            {
              v12 = (void *)Handle.m256i_i64[0];
              Object = 0LL;
              v13 = ObReferenceObjectByHandle((HANDLE)Handle.m256i_i64[0], 0, qword_140C24FB8, 0, &Object, 0LL);
              qword_140C246D0 = Object;
              if ( v13 >= 0 && (int)sub_14082C020(0LL, v12, 0LL, 0LL) >= 0 && NtClose(v12) >= 0 )
              {
                memset(&Handle.m256i_u64[1], 0, 24);
                sub_1406B96B0((__int64)&Handle.m256i_i64[1], (__int64)qword_140C24F00);
                v14 = (char *)qword_140C246D8;
                for ( i = *(char **)qword_140C246D8; i != v14; i = *(char **)i )
                {
                  if ( (i[58] & 2) != 0 )
                  {
                    v16 = (char *)byte_140C25440[i[58] & 3];
                    v17 = (unsigned __int16 *)(i + 32 - v16);
                    if ( i + 32 != v16
                      && !*(_QWORD *)v17
                      && !sub_1406A9B40(v17 + 4, 0x40u, &Handle.m256i_i64[1])
                      && (!*((_QWORD *)i + 9) && (int)sub_140825158((__int64)(i + 80), 0LL) < 0
                       || !sub_1406B9100((char *)qword_140C24F00, i + 80, (__int64)&Handle.m256i_i64[1])) )
                    {
                      return 0;
                    }
                  }
                }
                if ( Handle.m256i_i64[1] )
                  sub_14066960C((__int64)&Handle.m256i_i64[1]);
                Object = &unk_140C0BBCC;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    dword_140D06C0C = sub_140363220(0);
    sub_140A57C10((__int64)&unk_140CF91C0, 512, 64, 1766023759, v1, (__int64)&qword_140C11710);
    sub_140A57C10((__int64)&unk_140CF9240, 1, 248, 1833853519, v2, (__int64)&qword_140C11710);
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = 256LL;
    *((_QWORD *)CurrentPrcb + 265) = &unk_140CF91C0;
    *((_QWORD *)CurrentPrcb + 264) = &unk_140CF91C0;
    *((_QWORD *)CurrentPrcb + 267) = &unk_140CF9240;
    *((_QWORD *)CurrentPrcb + 266) = &unk_140CF9240;
    v5 = &unk_140D33BC8;
    qword_140C24F08 = 0LL;
    qword_140C24F80 = 0LL;
    do
    {
      *(v5 - 1) = 0LL;
      *v5 = 0LL;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    word_140C24FA0 = 0;
    qword_140C24FB0 = (__int64)&qword_140C24FA8;
    qword_140C24FA8 = (__int64)&qword_140C24FA8;
    byte_140C24FA2 = 6;
    dword_140C24FA4 = 1;
    qword_140C24F88 = sub_1406A6378(0LL, 1LL);
    *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1392LL) = qword_140C24F88;
    if ( qword_140C24F88 )
    {
      stru_140C24F20.Parameter = 0LL;
      stru_140C24F20.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406A1000;
      qword_140C24F58 = (__int64)sub_1405C5D80;
      stru_140C24F20.List.Flink = 0LL;
      LODWORD(dword_140C24F40) = 275;
      qword_140C24F60 = 0LL;
      qword_140C24F78 = 0LL;
      qword_140C24F50 = 0LL;
      sub_140B2206C();
      qword_140D07498 = (__int64)MmBadPointer;
      memset(v24, 0, 0x78uLL);
      LOWORD(v24[0]) = 120;
      LODWORD(v24[1]) = 256;
      HIDWORD(v24[4]) = 512;
      RtlInitUnicodeString(&DestinationString, L"Type");
      BYTE2(v24[0]) |= 0x24u;
      HIDWORD(v24[3]) = 983041;
      HIDWORD(v24[5]) = 216;
      *(_OWORD *)((char *)&v24[1] + 4) = xmmword_140B57A70;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v24, 0LL, (__int64)&qword_140C246D8) >= 0 )
      {
        HIDWORD(v24[4]) = 1;
        RtlInitUnicodeString(&v30, L"Directory");
        HIDWORD(v24[5]) = 344;
        HIDWORD(v24[3]) = 983055;
        BYTE2(v24[0]) = BYTE2(v24[0]) & 0xD2 | 0xD;
        v24[8] = sub_1406BF480;
        v24[9] = sub_1406D9780;
        *(_OWORD *)((char *)&v24[1] + 4) = xmmword_140B57A60;
        if ( (int)ObCreateObjectType(&v30, (__int64)v24, 0LL, (__int64)&qword_140C24FB8) >= 0 )
        {
          v24[8] = 0LL;
          *((_DWORD *)qword_140C24FB8 + 23) &= ~0x100000u;
          RtlInitUnicodeString(&v31, L"SymbolicLink");
          BYTE3(v24[0]) |= 1u;
          v24[9] = sub_1406E5670;
          HIDWORD(v24[5]) = 40;
          v24[10] = sub_140784700;
          HIDWORD(v24[4]) = 1;
          HIDWORD(v24[3]) = 0xFFFFF;
          BYTE2(v24[0]) = BYTE2(v24[0]) & 0xF6 | 1;
          *(_OWORD *)((char *)&v24[1] + 4) = xmmword_140B57A80;
          if ( (int)ObCreateObjectType(&v31, (__int64)v24, 0LL, (__int64)&qword_140C24FC0) >= 0 )
          {
            *((_DWORD *)qword_140C24FC0 + 23) &= ~0x100000u;
            sub_140B2CE90();
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
