/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1800ECF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007689C (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x18009F9E0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A0980 (ZwDeleteValueKey.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800EE16C (RtlpDeleteEmptyImageFileOptionsKey.c)
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
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  bool v52; // cf
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // r10
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r9
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r10
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  int v72; // edi
  int v73; // edi
  int v74; // edi
  int v75; // edi
  int v76; // edi
  int v77; // edi
  int v78; // edi
  __int64 v79; // rax
  __int64 v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r10
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // r10d
  __int64 v91; // rcx
  __int64 v92; // rax
  unsigned __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rcx
  unsigned __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // r8
  unsigned __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rax
  unsigned __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // r8
  unsigned __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rcx
  unsigned __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdx
  unsigned __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // r8
  __int64 v131; // r11
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // r9
  __int64 v135; // rdx
  __int64 v136; // rdx
  __int64 v137; // r8
  unsigned __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rcx
  __int64 v141; // r11
  __int64 v142; // rax
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  char v145[16]; // [rsp+48h] [rbp-81h] BYREF
  char v146[16]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int16 v147[8]; // [rsp+70h] [rbp-59h] BYREF
  int v148; // [rsp+80h] [rbp-49h]
  __int64 v149; // [rsp+88h] [rbp-41h]
  _DWORD *v150; // [rsp+90h] [rbp-39h]
  int v151; // [rsp+98h] [rbp-31h]
  __int128 v152; // [rsp+A0h] [rbp-29h]
  __int128 v153; // [rsp+B0h] [rbp-19h] BYREF
  unsigned __int64 v154; // [rsp+C0h] [rbp-9h]
  unsigned int Size; // [rsp+D0h] [rbp+7h]
  size_t Size_4; // [rsp+D4h] [rbp+Bh] BYREF

  Handle = 0LL;
  v154 = 0LL;
  v5 = a3 & 2;
  v6 = a3 & 1;
  v10 = L"MitigationOptions";
  v153 = 0LL;
  v11 = a3 & 8;
  if ( (a3 & 8) != 0 )
    v10 = L"MitigationAuditOptions";
  inited = RtlInitUnicodeStringEx((__int64)v145, (__int64)v10);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx((__int64)v146, (__int64)L"EAFModules");
    if ( inited >= 0 )
    {
      if ( (v6 || v5) && (a5 || a4) )
        goto LABEL_303;
      inited = RtlInitUnicodeStringEx((__int64)v147, a1);
      if ( inited < 0 )
        goto LABEL_306;
      if ( a1 )
      {
        v13 = RtlpOpenImageFileOptionsKeyEx(v147, 0x2000Fu, v5 == 0, &Handle);
      }
      else
      {
        v149 = 0LL;
        v150 = dword_180131DB0;
        v148 = 48;
        v151 = 576;
        v152 = 0LL;
        v13 = NtOpenKey();
      }
      inited = v13;
      if ( v13 < 0 )
        goto LABEL_304;
      ValueKey = NtQueryValueKey();
      inited = ValueKey;
      if ( ValueKey >= 0 )
      {
        if ( Size > 0x18 )
        {
          inited = -1073741788;
          goto LABEL_304;
        }
        memmove(&v153, &Size_4, Size);
      }
      else if ( ValueKey != -1073741772 )
      {
        goto LABEL_304;
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
            goto LABEL_303;
          v44 = 0xFFF0FFFFFFFFFFFFuLL;
          v70 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v71 = v70 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v71 = v70 != 0 ? 7LL : 3LL;
            }
            else
            {
              v71 = v70 != 0 ? 5LL : 1LL;
            }
            v43 = v71 << 48;
            goto LABEL_85;
          }
          v52 = v70 != 0;
          v53 = 0x4000000000000LL;
          goto LABEL_146;
        }
        if ( !a2 )
        {
          if ( v6 )
          {
            *(_QWORD *)&v153 = v153 & 0xFFFFFFFFFFFFFFF0uLL;
            goto LABEL_302;
          }
          if ( a5 != 8 )
            goto LABEL_303;
          v69 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v43 = v69 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v43 = v69 != 0 ? 7LL : 3LL;
            }
            else
            {
              v43 = v69 != 0 ? 5LL : 1LL;
            }
          }
          else
          {
            v43 = v69 != 0 ? 4 : 0;
          }
          v48 = v153 & 0xFFFFFFFFFFFFFFF0uLL;
          goto LABEL_140;
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
                      goto LABEL_304;
                    if ( v6 )
                    {
                      v21 = 0xFFFF0FFFFFFFFFFFuLL;
LABEL_32:
                      *(_QWORD *)&v153 = v21 & v153;
LABEL_302:
                      inited = ZwSetValueKey();
                      goto LABEL_304;
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
                      *(_QWORD *)&v153 = v153 & 0xFFFF0FFFFFFFFFFFuLL | v25;
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
                    goto LABEL_303;
                  }
                  if ( v6 )
                  {
                    v153 &= __PAIR128__(-3841LL, 0xFFFFF0FFFFFFFFFFuLL);
                    goto LABEL_302;
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
                        v39 = v153 & 0xFFFFF0FFFFFFFFFFuLL | ((v36 != 0 ? 6LL : 2LL) << 40);
                        v38 = *((_QWORD *)&v153 + 1);
                        *(_QWORD *)&v153 = v39;
                        v31 = v35 != 0 ? 1536LL : 512LL;
                        goto LABEL_66;
                      }
                      if ( (*(_BYTE *)a4 & 8) != 0 )
                        v40 = v36 != 0 ? 7LL : 3LL;
                      else
                        v40 = v36 != 0 ? 5LL : 1LL;
                      v38 = *((_QWORD *)&v153 + 1);
                      *(_QWORD *)&v153 = v153 & 0xFFFFF0FFFFFFFFFFuLL | (v40 << 40);
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
                      v37 = v153 & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v36 != 0) & 0x40000000000LL;
                      v38 = *((_QWORD *)&v153 + 1);
                      *(_QWORD *)&v153 = v37;
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
                  goto LABEL_303;
                }
                if ( v6 )
                {
                  v21 = 0xFFFFFFF0FFFFFFFFuLL;
                  goto LABEL_32;
                }
                if ( a5 != 8 )
                  goto LABEL_303;
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
              }
              else
              {
                if ( v6 )
                {
                  v21 = 0xFFFFFFFF0FFFFFFFuLL;
                  goto LABEL_32;
                }
                if ( a5 != 8 )
                  goto LABEL_303;
                v44 = 0xFFFFFFFF0FFFFFFFuLL;
                v46 = *a4 & 4LL;
                if ( (*a4 & 3) != 0 )
                {
                  if ( (*a4 & 3LL) == 2 )
                    v47 = v46 != 0 ? 6LL : 2LL;
                  else
                    v47 = v46 != 0 ? 5LL : 1LL;
                  v43 = v47 << 28;
                }
                else
                {
                  v43 = v46 != 0 ? 0x40000000 : 0;
                }
              }
              goto LABEL_85;
            }
            if ( v6 )
            {
              *(_QWORD *)&v153 = v153 & 0xFFFFFFFFF0FFFFFFuLL;
              goto LABEL_302;
            }
            if ( a5 != 8 )
              goto LABEL_303;
            v49 = *a4 & 4LL;
            if ( (*a4 & 3) != 0 )
            {
              if ( (*a4 & 3LL) == 2 )
                v50 = v49 != 0 ? 6LL : 2LL;
              else
                v50 = v49 != 0 ? 5LL : 1LL;
              v43 = v50 << 24;
            }
            else
            {
              v43 = v49 != 0 ? 0x4000000 : 0;
            }
            v48 = v153 & 0xFFFFFFFFF0FFFFFFuLL;
LABEL_140:
            *(_QWORD *)&v153 = v48 | v43;
            goto LABEL_302;
          }
          if ( v6 )
          {
            v21 = 0xFFFFFF0FFFFFFFFFuLL;
            goto LABEL_32;
          }
          if ( a5 != 8 )
            goto LABEL_303;
          v44 = 0xFFFFFF0FFFFFFFFFuLL;
          v51 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v54 = v51 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v54 = v51 != 0 ? 7LL : 3LL;
            }
            else
            {
              v54 = v51 != 0 ? 5LL : 1LL;
            }
            v43 = v54 << 36;
            goto LABEL_85;
          }
          v52 = v51 != 0;
          v53 = 0x4000000000LL;
LABEL_146:
          v43 = v53 & -(__int64)v52;
LABEL_85:
          v48 = v44 & v153;
          goto LABEL_140;
        }
        if ( v6 )
        {
          *(_QWORD *)&v153 = v153 & 0xFFFFFFFFFF00F0FFuLL;
          goto LABEL_302;
        }
        if ( a5 != 24 )
          goto LABEL_303;
        v55 = a4[1];
        v56 = a4[2];
        v57 = v55 & 4;
        v58 = v56 & 4;
        v59 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
          {
            v60 = (((unsigned __int128)-(__int128)(unsigned __int64)v59 >> 64) & 0x400) + 512;
          }
          else if ( (*(_BYTE *)a4 & 8) != 0 )
          {
            v60 = (((unsigned __int128)-(__int128)(unsigned __int64)v59 >> 64) & 0x400) + 768;
          }
          else
          {
            v60 = (((unsigned __int128)-(__int128)(unsigned __int64)v59 >> 64) & 0x400) + 256;
          }
        }
        else
        {
          v60 = ((unsigned __int128)-(__int128)(unsigned __int64)v59 >> 64) & 0x400;
        }
        v61 = v55 & 3;
        v62 = v153 & 0xFFFFFFFFFFF0F0FFuLL | v60 & 0xFFFFFFFFFFF0FFFFuLL;
        if ( v61 )
        {
          if ( v61 == 2 )
            v64 = v57 != 0 ? 6LL : 2LL;
          else
            v64 = v57 != 0 ? 5LL : 1LL;
          v63 = v64 << 16;
        }
        else
        {
          v63 = v57 != 0 ? 0x40000 : 0;
        }
        v65 = v56 & 3;
        v66 = (v62 | v63) & 0xFFFFFFFFFF0FFFFFuLL;
        if ( v65 )
        {
          if ( v65 == 2 )
            v68 = v58 != 0 ? 6LL : 2LL;
          else
            v68 = v58 != 0 ? 5LL : 1LL;
          v67 = v68 << 20;
        }
        else
        {
          v67 = v58 != 0 ? 0x400000 : 0;
        }
LABEL_301:
        *(_QWORD *)&v153 = v66 | v67;
        goto LABEL_302;
      }
      v72 = a2 - 10;
      if ( !v72 )
      {
        if ( v6 )
        {
          *(_QWORD *)&v153 = v153 & 0xFFFFFFFFFFFFFLL;
          goto LABEL_302;
        }
        if ( a5 != 24 )
          goto LABEL_303;
        v130 = a4[1];
        v131 = a4[2];
        v132 = *a4 & 4LL;
        v133 = v130 & 4;
        v134 = v131 & 4;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
            v136 = (((unsigned __int128)-(__int128)(unsigned __int64)v132 >> 64) & 4) + 2;
          else
            v136 = (((unsigned __int128)-(__int128)(unsigned __int64)v132 >> 64) & 4) + 1;
          v135 = v136 << 52;
        }
        else
        {
          v135 = -(__int64)(v132 != 0) & 0x40000000000000LL;
        }
        v137 = v130 & 3;
        v138 = v153 & 0xF00FFFFFFFFFFFFFuLL | v135 & 0xF0FFFFFFFFFFFFFFuLL;
        if ( v137 )
        {
          if ( v137 == 2 )
            v140 = v133 != 0 ? 6LL : 2LL;
          else
            v140 = v133 != 0 ? 5LL : 1LL;
          v139 = v140 << 56;
        }
        else
        {
          v139 = -(__int64)(v133 != 0) & 0x400000000000000LL;
        }
        v66 = (v138 | v139) & 0xFFFFFFFFFFFFFFFLL;
        v141 = v131 & 3;
        if ( v141 )
        {
          if ( v141 == 2 )
            v142 = v134 != 0 ? 6LL : 2LL;
          else
            v142 = v134 != 0 ? 5LL : 1LL;
          v67 = v142 << 60;
        }
        else
        {
          v67 = -(__int64)(v134 != 0) & 0x4000000000000000LL;
        }
        goto LABEL_301;
      }
      v73 = v72 - 1;
      if ( !v73 )
      {
        if ( v6 )
        {
          *((_QWORD *)&v153 + 1) &= 0xFFFFF0F00000FFFFuLL;
          if ( !v11 )
            ZwDeleteValueKey();
          goto LABEL_302;
        }
        if ( a5 == 1072 )
        {
          if ( v11 || (inited = ZwSetValueKey(), inited >= 0) )
          {
            v99 = a4[3] & 4LL;
            if ( (a4[3] & 3) != 0 )
            {
              if ( (a4[3] & 3LL) == 2 )
                v101 = v99 != 0 ? 6LL : 2LL;
              else
                v101 = v99 != 0 ? 5LL : 1LL;
              v100 = v101 << 16;
            }
            else
            {
              v100 = v99 != 0 ? 0x40000 : 0;
            }
            v102 = a4[4] & 4LL;
            v103 = a4[4] & 3LL;
            v104 = *((_QWORD *)&v153 + 1) & 0xFFFFFFFFFF00FFFFuLL | v100 & 0xFFFFFFFFFF0FFFFFuLL;
            if ( v103 )
            {
              if ( v103 == 2 )
                v106 = v102 != 0 ? 6LL : 2LL;
              else
                v106 = v102 != 0 ? 5LL : 1LL;
              v105 = v106 << 20;
            }
            else
            {
              v105 = v102 != 0 ? 0x400000 : 0;
            }
            v107 = (v104 | v105) & 0xFFFFFFFFF0FFFFFFuLL;
            v108 = a4[5] & 4LL;
            v109 = a4[5] & 3LL;
            if ( v109 )
            {
              if ( v109 == 2 )
                v111 = v108 != 0 ? 6LL : 2LL;
              else
                v111 = v108 != 0 ? 5LL : 1LL;
              v110 = v111 << 24;
            }
            else
            {
              v110 = v108 != 0 ? 0x4000000 : 0;
            }
            v112 = v107 | v110;
            v113 = *a4 & 4LL;
            v114 = *a4 & 3LL;
            v115 = v112 & 0xFFFFFFFF0FFFFFFFuLL;
            if ( v114 )
            {
              if ( v114 == 2 )
                v117 = v113 != 0 ? 6LL : 2LL;
              else
                v117 = v113 != 0 ? 5LL : 1LL;
              v116 = v117 << 28;
            }
            else
            {
              v116 = v113 != 0 ? 0x40000000 : 0;
            }
            v118 = v115 | v116;
            v119 = a4[1] & 4LL;
            v120 = a4[1] & 3LL;
            v121 = v118 & 0xFFFFFFF0FFFFFFFFuLL;
            if ( v120 )
            {
              if ( v120 == 2 )
                v123 = v119 != 0 ? 6LL : 2LL;
              else
                v123 = v119 != 0 ? 5LL : 1LL;
              v122 = v123 << 32;
            }
            else
            {
              v122 = -(__int64)(v119 != 0) & 0x400000000LL;
            }
            v124 = v121 | v122;
            v125 = a4[2] & 4LL;
            v126 = a4[2] & 3LL;
            v127 = v124 & 0xFFFFF0FFFFFFFFFFuLL;
            if ( v126 )
            {
              if ( v126 == 2 )
                v129 = v125 != 0 ? 6LL : 2LL;
              else
                v129 = v125 != 0 ? 5LL : 1LL;
              v128 = v129 << 40;
            }
            else
            {
              v128 = -(__int64)(v125 != 0) & 0x40000000000LL;
            }
            *((_QWORD *)&v153 + 1) = v127 | v128;
            goto LABEL_302;
          }
LABEL_304:
          if ( Handle )
            NtClose(Handle);
          goto LABEL_306;
        }
        goto LABEL_303;
      }
      v74 = v73 - 1;
      if ( v74 )
      {
        v75 = v74 - 1;
        if ( v75 )
        {
          v76 = v75 - 1;
          if ( v76 )
          {
            v77 = v76 - 1;
            if ( v77 )
            {
              v78 = v77 - 1;
              if ( v78 )
              {
                if ( v78 != 1 )
                  goto LABEL_304;
                if ( v6 )
                {
                  v154 &= 0xFFFFFFFFFFFF0FFFuLL;
                  goto LABEL_302;
                }
                if ( a5 != 8 )
                  goto LABEL_303;
                v79 = *a4 & 4LL;
                if ( (*a4 & 3) != 0 )
                {
                  if ( (*a4 & 3LL) == 2 )
                    v80 = v79 != 0 ? 24576LL : 0x2000LL;
                  else
                    v80 = v79 != 0 ? 20480LL : 4096LL;
                }
                else
                {
                  v80 = v79 != 0 ? 0x4000 : 0;
                }
                v81 = v154 & 0xFFFFFFFFFFFF0FFFuLL;
              }
              else
              {
                if ( v6 )
                {
                  v154 &= 0xFFFFFFFFFF0FFFFFuLL;
                  goto LABEL_302;
                }
                if ( a5 != 8 )
                  goto LABEL_303;
                v82 = *a4 & 4LL;
                if ( (*a4 & 3) != 0 )
                {
                  if ( (*a4 & 3LL) == 2 )
                    v83 = v82 != 0 ? 6LL : 2LL;
                  else
                    v83 = v82 != 0 ? 5LL : 1LL;
                  v80 = v83 << 20;
                }
                else
                {
                  v80 = v82 != 0 ? 0x400000 : 0;
                }
                v81 = v154 & 0xFFFFFFFFFF0FFFFFuLL;
              }
              v154 = v81 | v80;
              goto LABEL_302;
            }
            if ( v6 )
            {
              *((_QWORD *)&v153 + 1) &= 0xFFFFFFFFFFFFFFFuLL;
              v154 &= 0xFFFFFFFFFFFFFF00uLL;
              goto LABEL_302;
            }
            if ( a5 == 24 )
            {
              v84 = a4[1];
              v85 = v84 & 4;
              v86 = *a4 & 4LL;
              v87 = a4[2] & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                {
                  v89 = v86 != 0 ? 6LL : 2LL;
                }
                else if ( (*(_BYTE *)a4 & 8) != 0 )
                {
                  v89 = v86 != 0 ? 7LL : 3LL;
                }
                else
                {
                  v89 = v86 != 0 ? 5LL : 1LL;
                }
                v88 = v89 << 60;
              }
              else
              {
                v88 = -(__int64)(v86 != 0) & 0x4000000000000000LL;
              }
              *((_QWORD *)&v153 + 1) = *((_QWORD *)&v153 + 1) & 0xFFFFFFFFFFFFFFFLL | v88;
              v90 = v84 & 3;
              if ( v90 )
              {
                if ( v90 == 2LL )
                  v91 = v85 != 0 ? 6LL : 2LL;
                else
                  v91 = v85 != 0 ? 5LL : 1LL;
              }
              else
              {
                v91 = v85 != 0 ? 4 : 0;
              }
              v92 = a4[2] & 3LL;
              v93 = v154 & 0xFFFFFFFFFFFFFF00uLL | v91 & 0xFFFFFFFFFFFFFF0FuLL;
              if ( v92 )
              {
                if ( v92 == 2 )
                {
                  v94 = v87 != 0 ? 96LL : 32LL;
                }
                else if ( (a4[2] & 8) != 0 )
                {
                  v94 = v87 != 0 ? 112LL : 48LL;
                }
                else
                {
                  v94 = v87 != 0 ? 80LL : 16LL;
                }
              }
              else
              {
                v94 = v87 != 0 ? 0x40 : 0;
              }
              v154 = v93 | v94;
              goto LABEL_302;
            }
LABEL_303:
            inited = -1073741811;
            goto LABEL_304;
          }
          if ( v6 )
          {
            *(_QWORD *)&v153 = v153 & 0xFFFFFFFFFFFF0FFFuLL;
            goto LABEL_302;
          }
          if ( a5 != 8 )
            goto LABEL_303;
          v95 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
              v43 = v95 != 0 ? 24576LL : 0x2000LL;
            else
              v43 = v95 != 0 ? 20480LL : 4096LL;
          }
          else
          {
            v43 = v95 != 0 ? 0x4000 : 0;
          }
          v48 = v153 & 0xFFFFFFFFFFFF0FFFuLL;
        }
        else
        {
          if ( v6 )
          {
            *(_QWORD *)&v153 = v153 & 0xFFFFFFFFFFFFFF0FuLL;
            goto LABEL_302;
          }
          if ( a5 != 8 )
            goto LABEL_303;
          v96 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v43 = v96 != 0 ? 96LL : 32LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v43 = v96 != 0 ? 112LL : 48LL;
            }
            else
            {
              v43 = v96 != 0 ? 80LL : 16LL;
            }
          }
          else
          {
            v43 = v96 != 0 ? 0x40 : 0;
          }
          v48 = v153 & 0xFFFFFFFFFFFFFF0FuLL;
        }
        goto LABEL_140;
      }
      if ( v6 )
      {
        *((_QWORD *)&v153 + 1) &= 0xFFFFFF0FFFFFFFFFuLL;
        goto LABEL_302;
      }
      if ( a5 != 8 )
        goto LABEL_303;
      v97 = *a4 & 4LL;
      if ( (*a4 & 3) != 0 )
      {
        if ( (*a4 & 3LL) != 2 )
        {
          v32 = 0xFFFFFF0FFFFFFFFFuLL;
          if ( (*(_BYTE *)a4 & 8) != 0 )
            v98 = v97 != 0 ? 7LL : 3LL;
          else
            v98 = v97 != 0 ? 5LL : 1LL;
          v31 = v98 << 36;
          goto LABEL_49;
        }
        v31 = (v97 != 0 ? 6LL : 2LL) << 36;
      }
      else
      {
        v31 = -(__int64)(v97 != 0) & 0x4000000000LL;
      }
      v32 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_49:
      v33 = v32 & *((_QWORD *)&v153 + 1);
LABEL_50:
      *((_QWORD *)&v153 + 1) = v33 | v31;
      goto LABEL_302;
    }
  }
LABEL_306:
  if ( inited == -1073741772 && v5 )
    return 0;
  return (unsigned int)inited;
}
