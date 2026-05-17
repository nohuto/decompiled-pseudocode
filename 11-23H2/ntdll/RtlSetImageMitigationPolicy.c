/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1800EE2C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x1800A1AA0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A2A40 (ZwDeleteValueKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800EF57C (RtlpDeleteEmptyImageFileOptionsKey.c)
 */

__int64 __fastcall RtlSetImageMitigationPolicy(__int64 a1, int a2, char a3, _QWORD *a4, int a5)
{
  int v5; // r14d
  char v6; // si
  const wchar_t *v10; // rdx
  int v11; // r12d
  int inited; // ebx
  int v13; // eax
  int ValueKey; // eax
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r9d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  bool v57; // cf
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // r10
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r9
  unsigned __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r10
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // edi
  int v78; // edi
  int v79; // edi
  int v80; // edi
  int v81; // edi
  int v82; // edi
  int v83; // edi
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r10
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rcx
  int v93; // r10d
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rcx
  unsigned __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // r8
  unsigned __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // r8
  unsigned __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rcx
  unsigned __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rdx
  unsigned __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // r8
  __int64 v134; // r11
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // r9
  __int64 v138; // rdx
  __int64 v139; // rdx
  __int64 v140; // r8
  unsigned __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // r11
  __int64 v145; // rax
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  char v148[16]; // [rsp+48h] [rbp-81h] BYREF
  char v149[16]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int16 v150[8]; // [rsp+70h] [rbp-59h] BYREF
  int v151; // [rsp+80h] [rbp-49h]
  __int64 v152; // [rsp+88h] [rbp-41h]
  void *v153; // [rsp+90h] [rbp-39h]
  int v154; // [rsp+98h] [rbp-31h]
  __int128 v155; // [rsp+A0h] [rbp-29h]
  __int128 v156; // [rsp+B0h] [rbp-19h] BYREF
  unsigned __int64 v157; // [rsp+C0h] [rbp-9h]
  unsigned int Size; // [rsp+D0h] [rbp+7h]
  size_t Size_4; // [rsp+D4h] [rbp+Bh] BYREF

  Handle = 0LL;
  v157 = 0LL;
  v5 = a3 & 2;
  v6 = a3 & 1;
  v10 = L"MitigationOptions";
  v156 = 0LL;
  v11 = a3 & 8;
  if ( (a3 & 8) != 0 )
    v10 = L"MitigationAuditOptions";
  inited = RtlInitUnicodeStringEx((__int64)v148, (__int64)v10);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx((__int64)v149, (__int64)L"EAFModules");
    if ( inited >= 0 )
    {
      if ( (v6 || v5) && (a5 || a4) )
        goto LABEL_310;
      inited = RtlInitUnicodeStringEx((__int64)v150, a1);
      if ( inited < 0 )
        goto LABEL_313;
      if ( a1 )
      {
        v13 = RtlpOpenImageFileOptionsKeyEx(v150, 0x2000Fu, v5 == 0, &Handle);
      }
      else
      {
        v152 = 0LL;
        v153 = &unk_180133E00;
        v151 = 48;
        v154 = 576;
        v155 = 0LL;
        v13 = NtOpenKey();
      }
      inited = v13;
      if ( v13 < 0 )
        goto LABEL_311;
      ValueKey = NtQueryValueKey();
      inited = ValueKey;
      if ( ValueKey >= 0 )
      {
        if ( Size > 0x18 )
        {
          inited = -1073741788;
          goto LABEL_311;
        }
        memmove(&v156, &Size_4, Size);
      }
      else if ( ValueKey != -1073741772 )
      {
        goto LABEL_311;
      }
      if ( a2 <= 9 )
      {
        if ( a2 == 9 )
        {
          if ( v6 )
          {
            v21 = 0xFFF0FFFFFFFFFFFFuLL;
            goto LABEL_32;
          }
          if ( a5 != 8 )
            goto LABEL_310;
          v44 = 0xFFF0FFFFFFFFFFFFuLL;
          v75 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v76 = v75 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v76 = v75 != 0 ? 7LL : 3LL;
            }
            else
            {
              v76 = v75 != 0 ? 5LL : 1LL;
            }
            v43 = v76 << 48;
            goto LABEL_76;
          }
          v57 = v75 != 0;
          v58 = 0x4000000000000LL;
          goto LABEL_154;
        }
        if ( !a2 )
        {
          if ( v6 )
          {
            *(_QWORD *)&v156 = v156 & 0xFFFFFFFFFFFFFFF0uLL;
            goto LABEL_309;
          }
          if ( a5 != 8 )
            goto LABEL_310;
          v74 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v43 = v74 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v43 = v74 != 0 ? 7LL : 3LL;
            }
            else
            {
              v43 = v74 != 0 ? 5LL : 1LL;
            }
          }
          else
          {
            v43 = v74 != 0 ? 4 : 0;
          }
          v46 = v156 & 0xFFFFFFFFFFFFFFF0uLL;
          goto LABEL_148;
        }
        v15 = a2 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 2;
                if ( v19 )
                {
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    if ( v20 != 1 )
                      goto LABEL_311;
                    if ( v6 )
                    {
                      v21 = 0xFFFF0FFFFFFFFFFFuLL;
LABEL_32:
                      *(_QWORD *)&v156 = v21 & v156;
LABEL_309:
                      inited = ZwSetValueKey();
                      goto LABEL_311;
                    }
                    if ( a5 == 16 )
                    {
                      v22 = a4[1];
                      v23 = v22 & 4;
                      v24 = *a4 & 4LL;
                      if ( (*a4 & 3) != 0 )
                      {
                        if ( (*a4 & 3LL) == 2 )
                        {
                          v26 = v24 != 0 ? 6LL : 2LL;
                        }
                        else if ( (*(_BYTE *)a4 & 8) != 0 )
                        {
                          v26 = v24 != 0 ? 7LL : 3LL;
                        }
                        else
                        {
                          v26 = v24 != 0 ? 5LL : 1LL;
                        }
                        v25 = v26 << 44;
                      }
                      else
                      {
                        v25 = -(__int64)(v24 != 0) & 0x400000000000LL;
                      }
                      *(_QWORD *)&v156 = v156 & 0xFFFF0FFFFFFFFFFFuLL | v25;
                      v27 = v22 & 3;
                      if ( v27 )
                      {
                        if ( v27 == 2LL )
                        {
                          v28 = (v23 != 0 ? 6LL : 2LL) << 44;
                          v30 = v23 != 0 ? 96LL : 32LL;
                        }
                        else
                        {
                          v28 = (v23 != 0 ? 5LL : 1LL) << 44;
                          v30 = v23 != 0 ? 80LL : 16LL;
                        }
                        v29 = v30 & 0xFFFF0FFFFFFFFFFFuLL;
                      }
                      else
                      {
                        v28 = v23 != 0 ? 0x40uLL : 0;
                        v29 = -(__int64)(v23 != 0) & 0x400000000000LL;
                      }
                      v31 = v29 | v28;
                      v32 = 0xFFFF0FFFFFFFFF0FuLL;
                      goto LABEL_49;
                    }
                    goto LABEL_310;
                  }
                  if ( v6 )
                  {
                    v156 &= __PAIR128__(-3841LL, 0xFFFFF0FFFFFFFFFFuLL);
                    goto LABEL_309;
                  }
                  if ( a5 == 16 )
                  {
                    v34 = a4[1];
                    v35 = v34 & 4;
                    v36 = *a4 & 4LL;
                    if ( (*a4 & 3) != 0 )
                    {
                      if ( (*a4 & 3LL) == 2 )
                      {
                        v39 = v156 & 0xFFFFF0FFFFFFFFFFuLL | ((v36 != 0 ? 6LL : 2LL) << 40);
                        v38 = *((_QWORD *)&v156 + 1);
                        *(_QWORD *)&v156 = v39;
                        v31 = v35 != 0 ? 1536LL : 512LL;
                        goto LABEL_66;
                      }
                      if ( (*(_BYTE *)a4 & 8) != 0 )
                        v40 = v36 != 0 ? 7LL : 3LL;
                      else
                        v40 = v36 != 0 ? 5LL : 1LL;
                      v38 = *((_QWORD *)&v156 + 1);
                      *(_QWORD *)&v156 = v156 & 0xFFFFF0FFFFFFFFFFuLL | (v40 << 40);
                      v41 = v34 & 3;
                      if ( v41 )
                      {
                        if ( v41 != 2LL )
                        {
                          v31 = v35 != 0 ? 1280LL : 256LL;
                          goto LABEL_66;
                        }
                        goto LABEL_56;
                      }
                    }
                    else
                    {
                      v37 = v156 & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v36 != 0) & 0x40000000000LL;
                      v38 = *((_QWORD *)&v156 + 1);
                      *(_QWORD *)&v156 = v37;
                      if ( (v34 & 3) == 2 )
                      {
LABEL_56:
                        v31 = v35 != 0 ? 1536LL : 512LL;
LABEL_66:
                        v33 = v38 & 0xFFFFFFFFFFFFF0FFuLL;
                        goto LABEL_50;
                      }
                    }
                    v31 = v35 != 0 ? 0x400 : 0;
                    goto LABEL_66;
                  }
LABEL_310:
                  inited = -1073741811;
                  goto LABEL_311;
                }
                if ( v6 )
                {
                  v21 = 0xFFFFFFF0FFFFFFFFuLL;
                  goto LABEL_32;
                }
                if ( a5 != 8 )
                  goto LABEL_310;
                v42 = *a4 & 4LL;
                if ( (*a4 & 3) != 0 )
                {
                  v44 = 0xFFFFFFF0FFFFFFFFuLL;
                  if ( (*a4 & 3LL) == 2 )
                    v45 = v42 != 0 ? 6LL : 2LL;
                  else
                    v45 = v42 != 0 ? 5LL : 1LL;
                  v43 = v45 << 32;
                }
                else
                {
                  v43 = -(__int64)(v42 != 0) & 0x400000000LL;
                  v44 = 0xFFFFFFF0FFFFFFFFuLL;
                }
                goto LABEL_76;
              }
              if ( v6 )
              {
                *(_QWORD *)&v156 = v156 & 0xFFFFFFFF0FFFFFFFuLL;
                v157 &= 0xFFFFFFFF0FFFFFFFuLL;
                goto LABEL_309;
              }
              if ( a5 != 16 )
                goto LABEL_310;
              v47 = *a4 & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                  v49 = v47 != 0 ? 6LL : 2LL;
                else
                  v49 = v47 != 0 ? 5LL : 1LL;
                v48 = v49 << 28;
              }
              else
              {
                v48 = -(__int64)(v47 != 0) & 0x40000000;
              }
              *(_QWORD *)&v156 = v156 & 0xFFFFFFFF0FFFFFFFuLL | v48;
              v50 = a4[1] & 4LL;
              if ( (a4[1] & 3) != 0 )
              {
                if ( (a4[1] & 3LL) == 2 )
                  v52 = v50 != 0 ? 6LL : 2LL;
                else
                  v52 = v50 != 0 ? 5LL : 1LL;
                v51 = v52 << 28;
              }
              else
              {
                v51 = -(__int64)(v50 != 0) & 0x40000000;
              }
              v53 = v157 & 0xFFFFFFFF0FFFFFFFuLL;
LABEL_93:
              v157 = v53 | v51;
              goto LABEL_309;
            }
            if ( v6 )
            {
              *(_QWORD *)&v156 = v156 & 0xFFFFFFFFF0FFFFFFuLL;
              goto LABEL_309;
            }
            if ( a5 != 8 )
              goto LABEL_310;
            v54 = *a4 & 4LL;
            if ( (*a4 & 3) != 0 )
            {
              if ( (*a4 & 3LL) == 2 )
                v55 = v54 != 0 ? 6LL : 2LL;
              else
                v55 = v54 != 0 ? 5LL : 1LL;
              v43 = v55 << 24;
            }
            else
            {
              v43 = v54 != 0 ? 0x4000000 : 0;
            }
            v46 = v156 & 0xFFFFFFFFF0FFFFFFuLL;
            goto LABEL_148;
          }
          if ( v6 )
          {
            v21 = 0xFFFFFF0FFFFFFFFFuLL;
            goto LABEL_32;
          }
          if ( a5 != 8 )
            goto LABEL_310;
          v44 = 0xFFFFFF0FFFFFFFFFuLL;
          v56 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v59 = v56 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v59 = v56 != 0 ? 7LL : 3LL;
            }
            else
            {
              v59 = v56 != 0 ? 5LL : 1LL;
            }
            v43 = v59 << 36;
            goto LABEL_76;
          }
          v57 = v56 != 0;
          v58 = 0x4000000000LL;
LABEL_154:
          v43 = v58 & -(__int64)v57;
LABEL_76:
          v46 = v44 & v156;
          goto LABEL_148;
        }
        if ( v6 )
        {
          *(_QWORD *)&v156 = v156 & 0xFFFFFFFFFF00F0FFuLL;
          goto LABEL_309;
        }
        if ( a5 != 24 )
          goto LABEL_310;
        v60 = a4[1];
        v61 = a4[2];
        v62 = v60 & 4;
        v63 = v61 & 4;
        v64 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
          {
            v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 512;
          }
          else if ( (*(_BYTE *)a4 & 8) != 0 )
          {
            v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 768;
          }
          else
          {
            v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 256;
          }
        }
        else
        {
          v65 = ((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400;
        }
        v66 = v60 & 3;
        v67 = v156 & 0xFFFFFFFFFFF0F0FFuLL | v65 & 0xFFFFFFFFFFF0FFFFuLL;
        if ( v66 )
        {
          if ( v66 == 2 )
            v69 = v62 != 0 ? 6LL : 2LL;
          else
            v69 = v62 != 0 ? 5LL : 1LL;
          v68 = v69 << 16;
        }
        else
        {
          v68 = v62 != 0 ? 0x40000 : 0;
        }
        v70 = v61 & 3;
        v71 = (v67 | v68) & 0xFFFFFFFFFF0FFFFFuLL;
        if ( v70 )
        {
          if ( v70 == 2 )
            v73 = v63 != 0 ? 6LL : 2LL;
          else
            v73 = v63 != 0 ? 5LL : 1LL;
          v72 = v73 << 20;
        }
        else
        {
          v72 = v63 != 0 ? 0x400000 : 0;
        }
LABEL_308:
        *(_QWORD *)&v156 = v71 | v72;
        goto LABEL_309;
      }
      v77 = a2 - 10;
      if ( !v77 )
      {
        if ( v6 )
        {
          *(_QWORD *)&v156 = v156 & 0xFFFFFFFFFFFFFLL;
          goto LABEL_309;
        }
        if ( a5 != 24 )
          goto LABEL_310;
        v133 = a4[1];
        v134 = a4[2];
        v135 = *a4 & 4LL;
        v136 = v133 & 4;
        v137 = v134 & 4;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
            v139 = (((unsigned __int128)-(__int128)(unsigned __int64)v135 >> 64) & 4) + 2;
          else
            v139 = (((unsigned __int128)-(__int128)(unsigned __int64)v135 >> 64) & 4) + 1;
          v138 = v139 << 52;
        }
        else
        {
          v138 = -(__int64)(v135 != 0) & 0x40000000000000LL;
        }
        v140 = v133 & 3;
        v141 = v156 & 0xF00FFFFFFFFFFFFFuLL | v138 & 0xF0FFFFFFFFFFFFFFuLL;
        if ( v140 )
        {
          if ( v140 == 2 )
            v143 = v136 != 0 ? 6LL : 2LL;
          else
            v143 = v136 != 0 ? 5LL : 1LL;
          v142 = v143 << 56;
        }
        else
        {
          v142 = -(__int64)(v136 != 0) & 0x400000000000000LL;
        }
        v71 = (v141 | v142) & 0xFFFFFFFFFFFFFFFLL;
        v144 = v134 & 3;
        if ( v144 )
        {
          if ( v144 == 2 )
            v145 = v137 != 0 ? 6LL : 2LL;
          else
            v145 = v137 != 0 ? 5LL : 1LL;
          v72 = v145 << 60;
        }
        else
        {
          v72 = -(__int64)(v137 != 0) & 0x4000000000000000LL;
        }
        goto LABEL_308;
      }
      v78 = v77 - 1;
      if ( !v78 )
      {
        if ( v6 )
        {
          *((_QWORD *)&v156 + 1) &= 0xFFFFF0F00000FFFFuLL;
          if ( !v11 )
            ZwDeleteValueKey();
          goto LABEL_309;
        }
        if ( a5 == 1072 )
        {
          if ( v11 || (inited = ZwSetValueKey(), inited >= 0) )
          {
            v102 = a4[3] & 4LL;
            if ( (a4[3] & 3) != 0 )
            {
              if ( (a4[3] & 3LL) == 2 )
                v104 = v102 != 0 ? 6LL : 2LL;
              else
                v104 = v102 != 0 ? 5LL : 1LL;
              v103 = v104 << 16;
            }
            else
            {
              v103 = v102 != 0 ? 0x40000 : 0;
            }
            v105 = a4[4] & 4LL;
            v106 = a4[4] & 3LL;
            v107 = *((_QWORD *)&v156 + 1) & 0xFFFFFFFFFF00FFFFuLL | v103 & 0xFFFFFFFFFF0FFFFFuLL;
            if ( v106 )
            {
              if ( v106 == 2 )
                v109 = v105 != 0 ? 6LL : 2LL;
              else
                v109 = v105 != 0 ? 5LL : 1LL;
              v108 = v109 << 20;
            }
            else
            {
              v108 = v105 != 0 ? 0x400000 : 0;
            }
            v110 = (v107 | v108) & 0xFFFFFFFFF0FFFFFFuLL;
            v111 = a4[5] & 4LL;
            v112 = a4[5] & 3LL;
            if ( v112 )
            {
              if ( v112 == 2 )
                v114 = v111 != 0 ? 6LL : 2LL;
              else
                v114 = v111 != 0 ? 5LL : 1LL;
              v113 = v114 << 24;
            }
            else
            {
              v113 = v111 != 0 ? 0x4000000 : 0;
            }
            v115 = v110 | v113;
            v116 = *a4 & 4LL;
            v117 = *a4 & 3LL;
            v118 = v115 & 0xFFFFFFFF0FFFFFFFuLL;
            if ( v117 )
            {
              if ( v117 == 2 )
                v120 = v116 != 0 ? 6LL : 2LL;
              else
                v120 = v116 != 0 ? 5LL : 1LL;
              v119 = v120 << 28;
            }
            else
            {
              v119 = -(__int64)(v116 != 0) & 0x40000000;
            }
            v121 = v118 | v119;
            v122 = a4[1] & 4LL;
            v123 = a4[1] & 3LL;
            v124 = v121 & 0xFFFFFFF0FFFFFFFFuLL;
            if ( v123 )
            {
              if ( v123 == 2 )
                v126 = v122 != 0 ? 6LL : 2LL;
              else
                v126 = v122 != 0 ? 5LL : 1LL;
              v125 = v126 << 32;
            }
            else
            {
              v125 = -(__int64)(v122 != 0) & 0x400000000LL;
            }
            v127 = v124 | v125;
            v128 = a4[2] & 4LL;
            v129 = a4[2] & 3LL;
            v130 = v127 & 0xFFFFF0FFFFFFFFFFuLL;
            if ( v129 )
            {
              if ( v129 == 2 )
                v132 = v128 != 0 ? 6LL : 2LL;
              else
                v132 = v128 != 0 ? 5LL : 1LL;
              v131 = v132 << 40;
            }
            else
            {
              v131 = -(__int64)(v128 != 0) & 0x40000000000LL;
            }
            *((_QWORD *)&v156 + 1) = v130 | v131;
            goto LABEL_309;
          }
LABEL_311:
          if ( Handle )
            NtClose(Handle);
          goto LABEL_313;
        }
        goto LABEL_310;
      }
      v79 = v78 - 1;
      if ( v79 )
      {
        v80 = v79 - 1;
        if ( v80 )
        {
          v81 = v80 - 1;
          if ( v81 )
          {
            v82 = v81 - 1;
            if ( !v82 )
            {
              if ( v6 )
              {
                *((_QWORD *)&v156 + 1) &= 0xFFFFFFFFFFFFFFFuLL;
                v157 &= 0xFFFFFFFFFFFFFF00uLL;
                goto LABEL_309;
              }
              if ( a5 == 24 )
              {
                v87 = a4[1];
                v88 = v87 & 4;
                v89 = *a4 & 4LL;
                v90 = a4[2] & 4LL;
                if ( (*a4 & 3) != 0 )
                {
                  if ( (*a4 & 3LL) == 2 )
                  {
                    v92 = v89 != 0 ? 6LL : 2LL;
                  }
                  else if ( (*(_BYTE *)a4 & 8) != 0 )
                  {
                    v92 = v89 != 0 ? 7LL : 3LL;
                  }
                  else
                  {
                    v92 = v89 != 0 ? 5LL : 1LL;
                  }
                  v91 = v92 << 60;
                }
                else
                {
                  v91 = -(__int64)(v89 != 0) & 0x4000000000000000LL;
                }
                *((_QWORD *)&v156 + 1) = *((_QWORD *)&v156 + 1) & 0xFFFFFFFFFFFFFFFLL | v91;
                v93 = v87 & 3;
                if ( v93 )
                {
                  if ( v93 == 2LL )
                    v94 = v88 != 0 ? 6LL : 2LL;
                  else
                    v94 = v88 != 0 ? 5LL : 1LL;
                }
                else
                {
                  v94 = v88 != 0 ? 4 : 0;
                }
                v95 = a4[2] & 3LL;
                v96 = v157 & 0xFFFFFFFFFFFFFF00uLL | v94 & 0xFFFFFFFFFFFFFF0FuLL;
                if ( v95 )
                {
                  if ( v95 == 2 )
                  {
                    v97 = v90 != 0 ? 96LL : 32LL;
                  }
                  else if ( (a4[2] & 8) != 0 )
                  {
                    v97 = v90 != 0 ? 112LL : 48LL;
                  }
                  else
                  {
                    v97 = v90 != 0 ? 80LL : 16LL;
                  }
                }
                else
                {
                  v97 = v90 != 0 ? 0x40 : 0;
                }
                v157 = v96 | v97;
                goto LABEL_309;
              }
              goto LABEL_310;
            }
            v83 = v82 - 1;
            if ( v83 )
            {
              if ( v83 != 1 )
                goto LABEL_311;
              if ( v6 )
              {
                v157 &= 0xFFFFFFFFFFFF0FFFuLL;
                goto LABEL_309;
              }
              if ( a5 != 8 )
                goto LABEL_310;
              v84 = *a4 & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                  v51 = v84 != 0 ? 24576LL : 0x2000LL;
                else
                  v51 = v84 != 0 ? 20480LL : 4096LL;
              }
              else
              {
                v51 = v84 != 0 ? 0x4000 : 0;
              }
              v53 = v157 & 0xFFFFFFFFFFFF0FFFuLL;
            }
            else
            {
              if ( v6 )
              {
                v157 &= 0xFFFFFFFFFF0FFFFFuLL;
                goto LABEL_309;
              }
              if ( a5 != 8 )
                goto LABEL_310;
              v85 = *a4 & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                  v86 = v85 != 0 ? 6LL : 2LL;
                else
                  v86 = v85 != 0 ? 5LL : 1LL;
                v51 = v86 << 20;
              }
              else
              {
                v51 = v85 != 0 ? 0x400000 : 0;
              }
              v53 = v157 & 0xFFFFFFFFFF0FFFFFuLL;
            }
            goto LABEL_93;
          }
          if ( v6 )
          {
            *(_QWORD *)&v156 = v156 & 0xFFFFFFFFFFFF0FFFuLL;
            goto LABEL_309;
          }
          if ( a5 != 8 )
            goto LABEL_310;
          v98 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
              v43 = v98 != 0 ? 24576LL : 0x2000LL;
            else
              v43 = v98 != 0 ? 20480LL : 4096LL;
          }
          else
          {
            v43 = v98 != 0 ? 0x4000 : 0;
          }
          v46 = v156 & 0xFFFFFFFFFFFF0FFFuLL;
        }
        else
        {
          if ( v6 )
          {
            *(_QWORD *)&v156 = v156 & 0xFFFFFFFFFFFFFF0FuLL;
            goto LABEL_309;
          }
          if ( a5 != 8 )
            goto LABEL_310;
          v99 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v43 = v99 != 0 ? 96LL : 32LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v43 = v99 != 0 ? 112LL : 48LL;
            }
            else
            {
              v43 = v99 != 0 ? 80LL : 16LL;
            }
          }
          else
          {
            v43 = v99 != 0 ? 0x40 : 0;
          }
          v46 = v156 & 0xFFFFFFFFFFFFFF0FuLL;
        }
LABEL_148:
        *(_QWORD *)&v156 = v46 | v43;
        goto LABEL_309;
      }
      if ( v6 )
      {
        *((_QWORD *)&v156 + 1) &= 0xFFFFFF0FFFFFFFFFuLL;
        goto LABEL_309;
      }
      if ( a5 != 8 )
        goto LABEL_310;
      v100 = *a4 & 4LL;
      if ( (*a4 & 3) != 0 )
      {
        if ( (*a4 & 3LL) != 2 )
        {
          v32 = 0xFFFFFF0FFFFFFFFFuLL;
          if ( (*(_BYTE *)a4 & 8) != 0 )
            v101 = v100 != 0 ? 7LL : 3LL;
          else
            v101 = v100 != 0 ? 5LL : 1LL;
          v31 = v101 << 36;
          goto LABEL_49;
        }
        v31 = (v100 != 0 ? 6LL : 2LL) << 36;
      }
      else
      {
        v31 = -(__int64)(v100 != 0) & 0x4000000000LL;
      }
      v32 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_49:
      v33 = v32 & *((_QWORD *)&v156 + 1);
LABEL_50:
      *((_QWORD *)&v156 + 1) = v33 | v31;
      goto LABEL_309;
    }
  }
LABEL_313:
  if ( inited == -1073741772 && v5 )
    return 0;
  return (unsigned int)inited;
}
