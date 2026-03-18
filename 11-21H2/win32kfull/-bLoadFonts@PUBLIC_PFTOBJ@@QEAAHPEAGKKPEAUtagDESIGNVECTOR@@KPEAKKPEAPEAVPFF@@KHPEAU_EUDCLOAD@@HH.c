/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00134A0
 * Callers:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C0013268 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C001F018 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     GreAddFontResourceWInternal @ 0x1C00F9550 (GreAddFontResourceWInternal.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02B9D30 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C000D7F0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C000D8E4 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C000F3E4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C000FF9C (-IsTrustedFontFilePath@@YA_NPEBG@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C0010028 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     EngUnmapFontFileFD @ 0x1C0011220 (EngUnmapFontFileFD.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C0011E94 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0012704 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0012A20 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0013CF0 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00E2784 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C010CD5C (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C010F37C (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C010F888 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0110C74 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011293C (--1PFFMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *a5,
        size_t a6,
        unsigned int *a7,
        unsigned int a8,
        struct PFF **a9,
        unsigned int a10,
        int a11,
        struct _EUDCLOAD *a12,
        int a13,
        int a14)
{
  struct PFF **v14; // r13
  __int64 v15; // r14
  unsigned int v17; // edi
  unsigned int v18; // r15d
  unsigned int *v19; // r12
  unsigned int v20; // r8d
  const unsigned __int16 *v21; // rdx
  struct _EUDCLOAD *v22; // rbx
  struct PFF *v23; // rax
  unsigned int v24; // eax
  struct PFF *v25; // rcx
  struct PFF *v27; // rbx
  void **v28; // rbx
  __int64 v29; // r13
  struct _FONTFILEVIEW **v30; // rsi
  unsigned __int16 *v31; // r10
  WCHAR *v32; // rcx
  __int64 v33; // r15
  void **v34; // r13
  void **v35; // rax
  __int64 v36; // rbx
  char *v37; // r14
  __int64 v38; // r12
  unsigned int v40; // ecx
  int v41; // eax
  ULONG_PTR *v42; // rbx
  __int64 v43; // r15
  struct _FONTFILEVIEW **v44; // rbx
  __int64 v45; // r15
  struct _FONTFILEVIEW **v46; // rbx
  struct _FONTFILEVIEW *v47; // rcx
  unsigned int FontFile; // edx
  unsigned int v49; // r9d
  const unsigned __int16 *v50; // r8
  struct PFF *v51; // rdx
  struct PFF **v52; // rax
  unsigned int v53; // edx
  __int64 v54; // rcx
  struct PFF **v55; // rdx
  struct PFF **v56; // rbx
  struct PFF *v57; // rcx
  _WORD *v58; // rcx
  struct _FONTFILEVIEW **v59; // rdx
  __int64 v60; // r8
  struct PFF *v62; // rcx
  __int64 v63; // rbx
  unsigned int v64; // ebx
  struct PFF *v65; // rax
  __int64 v66; // r14
  int v67; // edx
  __int64 v68; // rcx
  struct PFF **v69; // rdx
  struct PFF *v70; // rcx
  unsigned int v71; // eax
  unsigned int v72; // eax
  struct PFF *v73; // rcx
  struct tagDESIGNVECTOR *Src; // [rsp+30h] [rbp-E8h]
  size_t Size; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v76; // [rsp+40h] [rbp-D8h]
  HDEV v77; // [rsp+48h] [rbp-D0h]
  struct PFT *v78; // [rsp+58h] [rbp-C0h]
  unsigned int v79; // [rsp+60h] [rbp-B8h]
  int v80; // [rsp+88h] [rbp-90h]
  char v81; // [rsp+98h] [rbp-80h]
  int v82; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v83; // [rsp+A0h] [rbp-78h]
  int v84[2]; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v85[2]; // [rsp+B0h] [rbp-68h] BYREF
  char v86; // [rsp+C0h] [rbp-58h]
  struct PFF **v87; // [rsp+C8h] [rbp-50h] BYREF
  HDEV v88; // [rsp+D0h] [rbp-48h] BYREF
  HDEV v89; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v90; // [rsp+E0h] [rbp-38h] BYREF
  unsigned __int64 v91; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v92; // [rsp+F0h] [rbp-28h]
  void **v93; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v94; // [rsp+100h] [rbp-18h] BYREF
  void **v95; // [rsp+108h] [rbp-10h]
  PCWSTR SourceString; // [rsp+170h] [rbp+58h] BYREF
  unsigned int v98; // [rsp+178h] [rbp+60h]
  unsigned int v99; // [rsp+180h] [rbp+68h]

  v99 = a4;
  v98 = a3;
  SourceString = a2;
  v14 = a9;
  v15 = a4;
  v82 = 0;
  v17 = 0;
  v87 = 0LL;
  v90 = 0LL;
  v81 = 1;
  if ( a2 && a4 <= 3 )
  {
    v94 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v18 = a10;
    v19 = a7;
    v83 = a10;
    if ( !a11 )
    {
      v20 = v98;
      v21 = SourceString;
      *a7 = 0;
      v22 = a12;
      v84[0] = a12 != 0LL;
      v23 = PUBLIC_PFTOBJ::pPFFGet(this, v21, v20, v15, a5, a6, &v87, v84[0]);
      *v14 = v23;
      if ( v23 )
      {
        v24 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)this, v23, &v82, v18, v22);
        *v19 = v24;
        if ( v24 )
        {
          if ( (v18 & 0x40) != 0 )
            *v19 = 0;
          v25 = *v14;
          if ( (v18 & 0x400) != 0 )
            *((_DWORD *)v25 + 13) |= 0x400u;
          if ( (v18 & 0x100) != 0 )
            *((_DWORD *)v25 + 13) |= 0x800u;
          v17 = v82;
          goto LABEL_13;
        }
        v17 = v82;
      }
      v27 = PUBLIC_PFTOBJ::pPFFGet(this, SourceString, v98, v15, a5, a6, &v87, v22 == 0LL);
      if ( v27 && !a14 && !*((_QWORD *)v27 + 19) )
      {
        PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v85, v27, a8, v18, *(struct PFT **)this);
        v64 = *((_DWORD *)v27 + 52);
        v17 = 0;
        v82 = 0;
        SEMOBJ::vUnlock((SEMOBJ *)&v94);
        if ( v85[0] )
        {
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v85, SourceString, v64, 0LL, a12) )
          {
            v90 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v65 = PUBLIC_PFTOBJ::pPFFGet(this, SourceString, v98, v15, a5, a6, &v87, v84[0]);
            *v14 = v65;
            if ( v65
              && (v71 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)this, v65, &v82, v18, a12),
                  v17 = v82,
                  (v64 = v71) != 0) )
            {
              *v19 = v71;
            }
            else
            {
              v66 = v85[0];
              v67 = v84[0];
              *v14 = (struct PFF *)v85[0];
              if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v85, v67) )
              {
                v68 = *(_QWORD *)this;
                if ( (*(_DWORD *)(v66 + 52) & 0x200) == 0 )
                  ++*(_DWORD *)(v68 + 32);
                ++*(_DWORD *)(v68 + 28);
                v69 = v87;
                v70 = *v14;
                if ( *v87 )
                  *((_QWORD *)*v87 + 2) = v70;
                *((_QWORD *)v70 + 1) = *v69;
                *((_QWORD *)v70 + 2) = 0LL;
                *v69 = v70;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v85);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v85);
                *v19 = v64;
                v17 = 1;
              }
              else
              {
                *v19 = 0;
                PFFOBJ::vRemoveHash((PFFOBJ *)v85);
              }
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v90);
          }
          else
          {
            *v19 = 0;
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v85);
        goto LABEL_13;
      }
    }
    v91 = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v94);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v93, 12 * v15);
    v28 = v93;
    if ( !v93
      || (v29 = v15, !((_DWORD)v15 << 7))
      || (v92 = Win32AllocPoolZInit((unsigned int)((_DWORD)v15 << 7), 1986422343LL),
          (v30 = (struct _FONTFILEVIEW **)v92) == 0LL) )
    {
      v17 = 0;
      goto LABEL_50;
    }
    v31 = (unsigned __int16 *)SourceString;
    v32 = (WCHAR *)SourceString;
    *(_QWORD *)v84 = v92 + (unsigned int)(8 * v15);
    v88 = (HDEV)SourceString;
    if ( (_DWORD)v15 )
    {
      v95 = &v28[v15];
      v33 = v15;
      v34 = v95;
      v35 = v28;
      v36 = *(_QWORD *)v84;
      v37 = (char *)v35 - v92;
      v38 = v92;
      do
      {
        *(_QWORD *)v38 = v36;
        *(_QWORD *)(v36 + 80) = v32;
        *(_DWORD *)(*(_QWORD *)v38 + 40LL) = *(_DWORD *)(*(_QWORD *)v38 + 40LL) & 0xFFFFFFF7 | (8
                                                                                              * IsTrustedFontFilePath(v32));
        v32 = (WCHAR *)v88;
        *(_QWORD *)&v37[v38] = 0LL;
        *(_DWORD *)v34 = 0;
        while ( *v32++ )
          ;
        v36 += 120LL;
        v88 = (HDEV)v32;
        v38 += 8LL;
        v34 = (void **)((char *)v34 + 4);
        --v33;
      }
      while ( v33 );
      LODWORD(v15) = v99;
      v28 = v93;
      v29 = v99;
      v18 = v83;
      v19 = a7;
      v31 = (unsigned __int16 *)SourceString;
    }
    v88 = 0LL;
    v84[0] = 0;
    if ( a13 )
    {
      v40 = v98;
    }
    else
    {
      v40 = v98;
      if ( *(struct PFT **const *)this != gpPFTPrivate && (v18 & 0xFFFFFFFE) == 0 && v98 && !a5 && !(_DWORD)a6 )
      {
        v41 = 0;
LABEL_31:
        vLoadFontFileView(
          v31,
          v40,
          v30,
          (unsigned int)v15,
          v28,
          (unsigned int *)&v28[v29],
          a5,
          a6,
          &v91,
          (struct PDEV **)&v88,
          (struct _FNTCHECKSUM *)&v90,
          v41,
          v84);
        v89 = v88;
        if ( !v91 )
          goto LABEL_32;
        FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v89, v91, 2u, 0, 0LL);
        v83 = FontFile;
        if ( FontFile - 1 > 0xFFFFFFFD )
          goto LABEL_32;
        if ( !a12 || *((_QWORD *)a12 + 1) || FontFile <= 2 )
        {
          v49 = v98;
          v50 = SourceString;
          v80 = v84[0];
          v79 = a8;
          v78 = *(struct PFT **)this;
          v77 = v88;
          v76 = v91;
          LODWORD(Size) = a6;
          Src = a5;
          *v19 = FontFile;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v85,
            FontFile,
            v50,
            v49,
            v15,
            Src,
            Size,
            v76,
            v77,
            0LL,
            v78,
            v79,
            v18,
            (struct _FNTCHECKSUM *)&v90,
            v30,
            0LL,
            v80);
          if ( !v85[0] )
          {
LABEL_78:
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v85);
LABEL_32:
            if ( v30 && (_DWORD)v15 )
            {
              v42 = (ULONG_PTR *)v30;
              v43 = v29;
              do
              {
                EngUnmapFontFileFD(*v42++);
                --v43;
              }
              while ( v43 );
            }
            if ( v81 )
            {
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&a12, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
              if ( UmfdFileviewLookup && (_DWORD)v15 )
              {
                v44 = v30;
                v45 = v29;
                do
                {
                  LODWORD(SourceString) = *((_DWORD *)*v44 + 16);
                  NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(
                    (unsigned int)SourceString,
                    &SourceString);
                  ++v44;
                  --v45;
                }
                while ( v45 );
              }
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
              if ( (_DWORD)v15 )
              {
                v46 = v30;
                do
                {
                  v47 = *v46;
                  if ( (*((_DWORD *)*v46 + 10) & 8) == 0 && !*((_QWORD *)v47 + 2) && !*((_QWORD *)v47 + 1) )
                    vUnreferenceFileviewSection(v47);
                  ++v46;
                  --v29;
                }
                while ( v29 );
                v30 = (struct _FONTFILEVIEW **)v92;
              }
              Win32FreePool(v30);
            }
            goto LABEL_50;
          }
          v81 = 0;
          if ( !(unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v85, SourceString, v83, 0LL, a12) )
          {
            *v19 = 0;
LABEL_77:
            if ( (v86 & 2) == 0 )
            {
              if ( (_DWORD)v15 )
              {
                do
                {
                  EngUnmapFontFileFD((ULONG_PTR)*v30++);
                  --v29;
                }
                while ( v29 );
              }
              PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v85);
              goto LABEL_50;
            }
            goto LABEL_78;
          }
          v89 = (HDEV)ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v83 = a12 != 0LL;
          v51 = PUBLIC_PFTOBJ::pPFFGet(this, SourceString, v98, v15, a5, a6, &v87, v83);
          v52 = a9;
          *a9 = v51;
          if ( v51 )
          {
            v72 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)this, v51, &v82, v18, a12);
            if ( v72 )
            {
              if ( (v18 & 0x40) != 0 )
                v72 = 0;
              *v19 = v72;
              v73 = *a9;
              if ( (v18 & 0x400) != 0 )
                *((_DWORD *)v73 + 13) |= 0x400u;
              v17 = v82;
              if ( (v18 & 0x100) != 0 )
                *((_DWORD *)v73 + 13) |= 0x800u;
              goto LABEL_76;
            }
            v17 = v82;
            v52 = a9;
          }
          v53 = v83;
          *v52 = (struct PFF *)v85[0];
          if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v85, v53) )
          {
            v54 = *(_QWORD *)this;
            if ( (*(_DWORD *)(v85[0] + 52LL) & 0x200) == 0 )
              ++*(_DWORD *)(v54 + 32);
            ++*(_DWORD *)(v54 + 28);
            v55 = v87;
            v56 = a9;
            v57 = *a9;
            if ( *v87 )
              *((_QWORD *)*v87 + 2) = v57;
            *((_QWORD *)v57 + 1) = *v55;
            *((_QWORD *)v57 + 2) = 0LL;
            *v55 = v57;
            PFFOBJ::vSetUniqueness((PFFOBJ *)v85);
            PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v85);
            v58 = *(_WORD **)(v85[0] + 24LL);
            if ( (_DWORD)v15 )
            {
              v59 = v30;
              v60 = v29;
              do
              {
                *((_QWORD *)*v59 + 10) = v58;
                while ( *v58++ )
                  ;
                ++v59;
                --v60;
              }
              while ( v60 );
            }
            v62 = *v56;
            if ( (v18 & 0x40) != 0 )
              *((_DWORD *)v62 + 13) |= 0x80u;
            if ( (v18 & 0x400) != 0 )
              *((_DWORD *)v62 + 13) |= 0x400u;
            if ( (v18 & 0x100) != 0 )
              *((_DWORD *)v62 + 13) |= 0x800u;
            if ( (_DWORD)v15 )
            {
              v63 = v29;
              do
              {
                EngUnmapFontFileFD((ULONG_PTR)*v30++);
                --v63;
              }
              while ( v63 );
            }
            v30 = 0LL;
            v92 = 0LL;
            v17 = 1;
          }
          else
          {
            *v19 = 0;
            PFFOBJ::vRemoveHash((PFFOBJ *)v85);
          }
LABEL_76:
          SEMOBJ::vUnlock((SEMOBJ *)&v89);
          goto LABEL_77;
        }
LABEL_50:
        AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v93);
LABEL_13:
        SEMOBJ::vUnlock((SEMOBJ *)&v94);
        return v17;
      }
    }
    v41 = 1;
    goto LABEL_31;
  }
  return 0LL;
}
