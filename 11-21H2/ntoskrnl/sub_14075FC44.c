/*
 * XREFs of sub_14075FC44 @ 0x14075FC44
 * Callers:
 *     sub_1403B670C @ 0x1403B670C (sub_1403B670C.c)
 *     MmLoadSystemImage @ 0x14075FC00 (MmLoadSystemImage.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_14081CF60 @ 0x14081CF60 (sub_14081CF60.c)
 *     sub_14082ECCC @ 0x14082ECCC (sub_14082ECCC.c)
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_14027E128 @ 0x14027E128 (sub_14027E128.c)
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_140287380 @ 0x140287380 (sub_140287380.c)
 *     sub_140287450 @ 0x140287450 (sub_140287450.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_14029C6C4 @ 0x14029C6C4 (sub_14029C6C4.c)
 *     sub_14029E72C @ 0x14029E72C (sub_14029E72C.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402D8E2C @ 0x1402D8E2C (sub_1402D8E2C.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 *     sub_140590908 @ 0x140590908 (sub_140590908.c)
 *     sub_1405A1F60 @ 0x1405A1F60 (sub_1405A1F60.c)
 *     sub_1406CCD8C @ 0x1406CCD8C (sub_1406CCD8C.c)
 *     sub_1406E7320 @ 0x1406E7320 (sub_1406E7320.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14075C2E0 @ 0x14075C2E0 (sub_14075C2E0.c)
 *     sub_14075CCC8 @ 0x14075CCC8 (sub_14075CCC8.c)
 *     sub_14075F4A4 @ 0x14075F4A4 (sub_14075F4A4.c)
 *     sub_1407603D4 @ 0x1407603D4 (sub_1407603D4.c)
 *     sub_140760554 @ 0x140760554 (sub_140760554.c)
 *     sub_1407608BC @ 0x1407608BC (sub_1407608BC.c)
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     sub_14076146C @ 0x14076146C (sub_14076146C.c)
 *     sub_1407614BC @ 0x1407614BC (sub_1407614BC.c)
 *     sub_1407615BC @ 0x1407615BC (sub_1407615BC.c)
 *     sub_140761604 @ 0x140761604 (sub_140761604.c)
 *     sub_140761714 @ 0x140761714 (sub_140761714.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 *     sub_140761E94 @ 0x140761E94 (sub_140761E94.c)
 *     sub_14080F7F4 @ 0x14080F7F4 (sub_14080F7F4.c)
 *     sub_14096C4AC @ 0x14096C4AC (sub_14096C4AC.c)
 *     sub_14096C6C4 @ 0x14096C6C4 (sub_14096C6C4.c)
 *     sub_140970C20 @ 0x140970C20 (sub_140970C20.c)
 *     sub_140972D10 @ 0x140972D10 (sub_140972D10.c)
 *     sub_1409730F0 @ 0x1409730F0 (sub_1409730F0.c)
 *     sub_140973418 @ 0x140973418 (sub_140973418.c)
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_140981070 @ 0x140981070 (sub_140981070.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A7C1B8 @ 0x140A7C1B8 (sub_140A7C1B8.c)
 */

__int64 __fastcall sub_14075FC44(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned __int64 *a7)
{
  unsigned int v7; // r14d
  char v9; // bl
  __int64 v10; // rdx
  __int64 v11; // r10
  signed int v12; // edi
  unsigned int v13; // r15d
  struct _KTHREAD *v14; // r12
  int v15; // eax
  char *v16; // rsi
  void *v17; // rcx
  __int64 *v18; // r12
  char **v19; // r13
  unsigned __int64 v20; // r8
  int v21; // ecx
  int v22; // eax
  int v23; // r11d
  int v24; // eax
  PVOID v25; // r8
  int v26; // edi
  char *v27; // r12
  char *v28; // rax
  PIMAGE_NT_HEADERS v29; // r15
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  int v34; // r12d
  __int64 *v35; // r15
  __int64 *v36; // r13
  __int64 v37; // rdx
  unsigned __int64 *v38; // rcx
  int v39; // r14d
  bool v41; // sf
  __int64 HostSilo; // rax
  __int64 v43; // rax
  void *v44; // rax
  DWORD TimeDateStamp; // eax
  unsigned __int64 v46; // rdi
  char *v47; // rdi
  __int64 v48; // rcx
  int v49; // r9d
  int v50; // eax
  int v51; // r14d
  unsigned __int64 v52; // rax
  char v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+34h] [rbp-CCh]
  __int64 v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+40h] [rbp-C0h]
  char *BaseOfImage; // [rsp+48h] [rbp-B8h]
  int v58; // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+54h] [rbp-ACh] BYREF
  PVOID v60; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v62; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h]
  int v64; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-80h] BYREF
  char *v66; // [rsp+90h] [rbp-70h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h]
  PVOID v68[2]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v70[14]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = a5;
  v66 = 0LL;
  v60 = 0LL;
  v67 = 0LL;
  v56 = 1;
  v9 = 0;
  v58 = 1;
  *(_OWORD *)v68 = 0LL;
  String1 = 0LL;
  *a7 = 0LL;
  v70[0] = 0LL;
  if ( *((_BYTE *)sub_140347DB0() + 1368) )
  {
    HostSilo = PsGetHostSilo();
    v43 = PsAttachSiloToCurrentThread(HostSilo);
    v11 = a1;
    v9 = 4;
    v10 = a2;
    v67 = v43;
  }
  v59 = v7 & 1;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_5;
LABEL_98:
    v12 = -1073741582;
    goto LABEL_76;
  }
  if ( (v7 & 2) != 0 || (v7 & 0x80000004) == 4 )
    goto LABEL_98;
  if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1124LL) & 0x10000) == 0 && (v7 & 0x40000000) == 0 )
  {
    v12 = -1073741801;
    goto LABEL_76;
  }
  v56 = v58;
LABEL_5:
  v12 = sub_140760554(v11, v10, a3, &String1, v70, v68);
  if ( v12 < 0 )
    goto LABEL_76;
  v54 = 1;
  LOBYTE(a5) = 1;
  v13 = 0;
  v53 = 0;
  P = 0LL;
  v14 = sub_1406F5B50();
  v55 = (__int64)v14;
  v15 = sub_1407603D4((PCUNICODE_STRING)v68, &P);
  v16 = (char *)P;
  v12 = v15;
  if ( v15 < 0 )
  {
    v39 = 1;
    v23 = 1;
    goto LABEL_70;
  }
  v17 = (void *)*((_QWORD *)P + 14);
  Object = v17;
  if ( v17 )
  {
    v18 = (__int64 *)sub_140287970((__int64)v17);
    v62 = v18;
    v13 = *(_DWORD *)(*v18 + 8);
  }
  else
  {
    v18 = 0LL;
    v62 = 0LL;
  }
  if ( !v12 )
  {
    v9 |= 2 * (v7 & 1) + 1;
    *((_DWORD *)v16 + 16) = v13 << 12;
    BaseOfImage = (char *)sub_140761A2C(v17, v7, &v58);
    if ( !BaseOfImage )
    {
      ObDereferenceObjectDeferDelete(Object);
      ExFreePoolWithTag(v16, 0);
      v39 = 1;
      v16 = 0LL;
      v23 = 1;
      v12 = -1073741670;
      goto LABEL_122;
    }
    sub_140287450((__int64)v18);
    v19 = (char **)(v16 + 48);
    *((_QWORD *)v16 + 6) = BaseOfImage;
    sub_1402D8E2C((__int64)v16, 0);
    v9 |= 8u;
    v56 = v58;
    LOBYTE(v23) = 1;
LABEL_21:
    if ( (v9 & 3) != 1 )
    {
LABEL_24:
      if ( (v9 & 2) != 0 && dword_140C4F478 )
      {
        if ( ((unsigned __int8)v9 & (unsigned __int8)v23) != 0 )
        {
          if ( !(unsigned int)sub_140981070(v18, *v19, 0LL) || (v44 = (void *)sub_140972D10(), (v60 = v44) == 0LL) )
          {
            v12 = -1073741670;
            goto LABEL_121;
          }
          v25 = v44;
        }
        else
        {
          v25 = (PVOID)*((_QWORD *)v16 + 36);
          v60 = v25;
        }
      }
      else
      {
        v25 = v60;
      }
      v12 = sub_140761714(Object, BaseOfImage, v25, v7);
      if ( v12 < 0 )
      {
LABEL_121:
        v39 = v54;
        v23 = 1;
        goto LABEL_122;
      }
      if ( v59 )
      {
        v26 = v56;
      }
      else
      {
        _InterlockedExchangeAdd(&dword_140C53550, v13);
        v26 = v58;
        v16 = (char *)P;
        v56 = v58;
      }
      v27 = 0LL;
      v53 = 1;
      if ( (v7 & 0x40000021) != 0 )
        goto LABEL_32;
      if ( BaseOfImage != *(char **)(*v62 + 32) )
      {
        v28 = BaseOfImage;
        goto LABEL_33;
      }
      if ( (unsigned int)sub_1406E7320(&String1)
        && (v28 = (char *)sub_14098325C(Object, v13, BaseOfImage), (v27 = v28) != 0LL) )
      {
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 3, -v13);
        v26 = v58;
        v16 = (char *)P;
        v56 = v58;
        BaseOfImage = v28;
        *v19 = v28;
      }
      else
      {
LABEL_32:
        v28 = BaseOfImage;
      }
LABEL_33:
      LOBYTE(a5) = 0;
      if ( (v9 & 1) != 0 )
      {
        v29 = RtlImageNtHeader(v28);
        if ( !v29 )
        {
          v12 = -1073741279;
          goto LABEL_129;
        }
        if ( v29->FileHeader.Machine != 0x8664 || v29->OptionalHeader.Magic != 523 )
        {
          v12 = -1073741520;
          goto LABEL_129;
        }
        if ( (dword_140D06880 & 0x8000) != 0 && (v7 & 0x40000000) == 0 )
        {
          v12 = sub_140590908((__int64)v29, v7);
          if ( v12 < 0 )
          {
            memset(&v70[1], 0, 0xA0uLL);
            DWORD2(v70[8]) = v29->OptionalHeader.CheckSum;
            TimeDateStamp = v29->FileHeader.TimeDateStamp;
            *(UNICODE_STRING *)((char *)&v70[6] + 8) = String1;
            HIDWORD(v70[10]) = TimeDateStamp;
            sub_14096C6C4("SectionWXable");
            goto LABEL_129;
          }
          v26 = v56;
        }
        v12 = sub_14075F4A4((__int64)v16, (const void **)&String1, (const void **)v68, v7, v26, (__int64 *)&v66);
        if ( v12 < 0 )
        {
LABEL_129:
          v39 = v54;
          v23 = 1;
          goto LABEL_122;
        }
        sub_1402D8E2C((__int64)v16, 1);
        v9 &= ~8u;
        ExFreePoolWithTag(v16, 0);
        v16 = v66;
        v26 = v56;
        if ( v60 )
        {
          *((_QWORD *)v66 + 36) = v60;
          v60 = 0LL;
        }
      }
      v53 = 5;
      if ( v54 == 2 )
        *((_DWORD *)v16 + 49) |= 0x80u;
      if ( !v27 && !v59 )
      {
        if ( !v26 )
          goto LABEL_100;
        v30 = (__int64)v62;
        v31 = sub_140281750((__int64)v62);
        if ( sub_14029E72C(*(_QWORD *)(v31 + 8)) || (*(_DWORD *)(v32 + 52) & 0x11) != 0 )
          v26 = 0;
        sub_140280D08(v30, v33);
        if ( !v26 )
LABEL_100:
          sub_14080F7F4(v16);
      }
      v34 = v7 & 0x40000000;
      if ( (v7 & 0x10000000) == 0 )
      {
        v12 = sub_140761604(
                (_DWORD)v16,
                a2,
                (unsigned int)v70,
                (unsigned int)&String1,
                (v7 & 0x40000000) != 0,
                (__int64)&a5);
        if ( v12 < 0 )
          goto LABEL_129;
        v53 = 21;
      }
      v35 = v62;
      v36 = v62 + 16;
      if ( v34 || (v12 = sub_14075C2E0((__int64)v16), v12 >= 0) )
      {
        if ( !sub_14029C6C4() )
          goto LABEL_56;
        v46 = *((_QWORD *)v16 + 6);
        if ( !(unsigned int)sub_1402FDD20(v46) )
          sub_1405A1F60(v46, (unsigned __int64)*((unsigned int *)v16 + 16) >> 12);
        v12 = sub_140970C20(v16, 1LL);
        if ( v12 >= 0 )
        {
LABEL_56:
          sub_1407615BC(v16);
          if ( (*(_BYTE *)(*(_QWORD *)(*v35 + 56) + 46LL) & 0x40) == 0 )
          {
            v47 = &BaseOfImage[*(unsigned int *)(*(_QWORD *)(v35[12] + 32) + 60LL)];
            sub_14027E128((__int64)v16, (unsigned __int64)v47, 8, 4LL);
            v48 = *(_QWORD *)(v35[12] + 32);
            if ( v48 )
              v48 = *(_QWORD *)(v48 + 40);
            *(_QWORD *)v47 = &BaseOfImage[-v48];
            if ( v36[2] )
              sub_14027E128((__int64)v16, (unsigned __int64)v47, 8, 256LL);
          }
          if ( v34
            || (sub_140A7C1B8(v16, v37, 0LL), v53 |= 2u, v12 = sub_14075CCC8((__int64)v16), v12 >= 0)
            && (v12 = sub_1407614BC(v16, v35, v7), v12 >= 0) )
          {
            if ( (v9 & 2) == 0 || (v7 & 4) == 0 || (v12 = sub_1406CCD8C((__int64)v16), v12 >= 0) )
            {
              v12 = sub_1407608BC(v16, v7, 1LL);
              if ( v12 >= 0 )
              {
                if ( (v9 & 2) != 0 )
                  *((_BYTE *)sub_1402DBF3C((unsigned __int64)BaseOfImage) + 64) = 1;
                if ( v34 )
                {
                  LOBYTE(v13) = v53;
                  goto LABEL_69;
                }
                v12 = sub_14076146C(v16, v7, v36);
                if ( v12 >= 0 )
                {
                  if ( (v9 & 1) != 0 )
                  {
                    DestinationString = 0LL;
                    if ( (dword_140C533E4 & 1) == 0 )
                    {
LABEL_68:
                      sub_140761234((_DWORD)v16, (_DWORD)Object, a1, (unsigned int)v68, (__int64)&String1, v9 & 1);
                      LOBYTE(v13) = v53 | 8;
LABEL_69:
                      v14 = (struct _KTHREAD *)v55;
                      sub_1406F5AF0(v55);
                      v12 = 0;
                      v38 = a7;
                      v23 = 1;
                      v39 = v54;
                      *a6 = v16;
                      *v38 = (unsigned __int64)BaseOfImage;
LABEL_70:
                      if ( (v9 & 8) != 0 )
                      {
                        sub_1402D8E2C((__int64)v16, v23);
                        v9 &= ~8u;
                      }
                      if ( v12 < 0 )
                      {
                        if ( v16 )
                        {
                          if ( v39 == 2 && (v13 & 4) == 0 )
                          {
                            v52 = sub_140287970(*((_QWORD *)v16 + 14));
                            sub_14058C0E4(v52);
                          }
                          sub_1406F4FB8((__int64)v16, v13);
                        }
                        sub_1406F5AF0((__int64)v14);
                        if ( !(_BYTE)a5 )
                          sub_14096C4AC(a1, 0LL, 0LL, (unsigned int)v12);
                      }
                      goto LABEL_73;
                    }
                    RtlInitUnicodeString(&DestinationString, 0LL);
                    v49 = *((_DWORD *)v16 + 39);
                    v64 = *((_DWORD *)v16 + 30);
                    v59 = v49;
                    v50 = sub_1409730F0((int)&qword_140C533B0, 0, v64, v49, &DestinationString);
                    v51 = v50;
                    if ( v50 >= 0 )
                    {
                      v51 = sub_140974020(&DestinationString, 0LL, &v64, &v59);
                      RtlFreeUnicodeString(&DestinationString);
                    }
                    else if ( v50 == -1073741275 )
                    {
                      v51 = 0;
                    }
                    v12 = v51;
                    v41 = v51 < 0;
                  }
                  else
                  {
                    if ( (v9 & 2) == 0 )
                      goto LABEL_68;
                    v12 = sub_140761E94(v16);
                    v41 = v12 < 0;
                  }
                  if ( v41 )
                    goto LABEL_129;
                  goto LABEL_68;
                }
                goto LABEL_129;
              }
            }
          }
        }
      }
      goto LABEL_121;
    }
    v24 = sub_140287380((__int64)v18);
    v54 = v24;
    if ( v24 )
    {
      if ( v24 == 2 )
      {
        v12 = sub_140286DE0(v18 + 16, 136, 0x11u);
        v23 = 1;
        if ( v12 < 0 )
        {
          v39 = 1;
          goto LABEL_122;
        }
      }
      goto LABEL_24;
    }
    v12 = -1073740277;
    v39 = 0;
LABEL_122:
    v14 = (struct _KTHREAD *)v55;
    LOBYTE(v13) = v53;
    goto LABEL_70;
  }
  v19 = (char **)(v16 + 48);
  v20 = *((_QWORD *)v16 + 6);
  v21 = v7 & 0x40000000;
  BaseOfImage = (char *)v20;
  if ( (*((_DWORD *)v16 + 49) & 0x20) != 0 )
  {
    if ( !v21 )
    {
      sub_1406F5AF0(v55);
      v12 = -1073740608;
      goto LABEL_73;
    }
  }
  else if ( !v21 )
  {
    goto LABEL_12;
  }
  if ( (v7 & 0x20000000) == 0 )
    goto LABEL_16;
LABEL_12:
  if ( !v59 )
  {
    if ( v12 != 272 )
    {
LABEL_90:
      LOBYTE(v23) = 1;
      ++*((_WORD *)v16 + 54);
      goto LABEL_21;
    }
LABEL_16:
    *a6 = v16;
    *a7 = v20;
    if ( (*((_DWORD *)v16 + 26) & 0x4000000) != 0 )
      v12 = -1073741411;
    else
      v12 = (v7 & 0x40000001) != 1 ? 0xC000010E : 0;
    goto LABEL_18;
  }
  v22 = sub_1402D9A54(v20, v18, v20);
  v12 = v22;
  if ( v22 >= 0 )
  {
    if ( v22 == 272 )
    {
      v20 = (unsigned __int64)BaseOfImage;
      goto LABEL_16;
    }
    v9 |= 2u;
    goto LABEL_90;
  }
LABEL_18:
  sub_1406F5AF0(v55);
LABEL_73:
  if ( a2 )
    ExFreePoolWithTag(v68[1], 0);
  if ( (v9 & 1) != 0 && v60 )
    sub_140973418(v60);
LABEL_76:
  if ( (v9 & 4) != 0 )
    PsDetachSiloFromCurrentThread(v67);
  return (unsigned int)v12;
}
