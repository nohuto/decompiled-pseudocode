/*
 * XREFs of sub_140AFA274 @ 0x140AFA274
 * Callers:
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AFA320 @ 0x140AFA320 (sub_140AFA320.c)
 *     sub_140AFA5EC @ 0x140AFA5EC (sub_140AFA5EC.c)
 *     sub_140AFA63C @ 0x140AFA63C (sub_140AFA63C.c)
 *     sub_140B4C370 @ 0x140B4C370 (sub_140B4C370.c)
 *     sub_140B4C3F8 @ 0x140B4C3F8 (sub_140B4C3F8.c)
 *     sub_140B4C81C @ 0x140B4C81C (sub_140B4C81C.c)
 *     sub_140B4C8B8 @ 0x140B4C8B8 (sub_140B4C8B8.c)
 *     sub_140B4CC80 @ 0x140B4CC80 (sub_140B4CC80.c)
 */

void *__fastcall sub_140AFA274(__int64 a1)
{
  __int64 v1; // r14
  void *result; // rax
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  char v11; // r12
  int v12; // r13d
  __int64 v13; // r10
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int8 *v18; // r10
  unsigned __int8 *v19; // r11
  int v20; // r8d
  __int64 v21; // r11
  __int64 v22; // r9
  unsigned int v23; // ecx
  int v24; // r11d
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // r10
  __int64 v36; // rdx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // r11
  unsigned int v40; // r10d
  unsigned int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // r11d
  unsigned int v48; // r10d
  unsigned int v49; // ebx
  int v50; // ebx
  unsigned int v51; // edi
  __int16 v52; // ax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // r9
  __int64 v56; // rax
  unsigned int *v57; // rdi
  unsigned int *v58; // r14
  int v59; // ebx
  unsigned int v60; // r10d
  _QWORD *v61; // rsi
  unsigned int v62; // r11d
  unsigned int v63; // edx
  unsigned int v64; // r11d
  unsigned int v65; // r8d
  unsigned int v66; // edx
  __int16 v67; // ax
  __int64 v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rbx
  unsigned int v72; // edi
  unsigned int i; // esi
  int v74; // r15d
  int v75; // eax
  __int64 v76; // r11
  int v77; // r12d
  __int64 v78; // rcx
  unsigned int v79; // r10d
  int v80; // r9d
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r10
  bool v84; // zf
  unsigned int v85; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v86; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v87[4]; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int8 v89; // [rsp+B0h] [rbp+58h]
  unsigned int v90; // [rsp+B8h] [rbp+60h] BYREF

  byte_140C4AD04 = 1;
  v90 = 0;
  v87[0] = 0;
  v85 = 0;
  v86 = 0;
  v1 = a1;
  qword_140C4E850 = sub_140213A40(a1, 1414746189, 0, 0);
  qword_140C4ACC8 = sub_140213A40(v1, 1413567059, 0, 0);
  qword_140C4AD20 = sub_140213A40(v1, 1413698381, 0, 0);
  if ( !qword_140C4ACC8 )
    return (void *)sub_140AFA320(v1);
  v89 = *(_BYTE *)(qword_140C4ACC8 + 8);
  result = (void *)sub_140B4C3F8(v87, &v86, &v85, &v90);
  if ( (_BYTE)result )
  {
    v3 = v85;
    v4 = v86;
    result = (void *)sub_140AFA63C(v87[0], v86, v85, v90);
    if ( qword_140C4AD18 )
    {
      if ( !v3 || (result = (void *)sub_1403BF104(24 * v3, 1u), (qword_140C4ACD8 = result) != 0LL) )
      {
        v6 = 0;
        if ( v4 )
        {
          if ( v4 >= 4 )
          {
            v5 = qword_140C4AD18;
            if ( *(_QWORD *)qword_140C4AD18 > (unsigned __int64)qword_140C4AD18
              || *(_QWORD *)qword_140C4AD18 + 4 * (unsigned __int64)(v4 - 1) < qword_140C4AD18 )
            {
              v7 = v4 & 0xFFFFFFFC;
              do
                v6 += 4;
              while ( v6 < v7 );
              memset(*(void **)qword_140C4AD18, -1, 16 * ((unsigned __int64)v7 >> 2));
            }
          }
          if ( v6 < v4 )
          {
            v5 = 4LL * v6;
            v8 = v4 - v6;
            do
            {
              *(_DWORD *)(v5 + *(_QWORD *)qword_140C4AD18) = -1;
              v5 += 4LL;
              --v8;
            }
            while ( v8 );
          }
        }
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = qword_140C4ACC8 + 48;
        v14 = qword_140C4ACC8 + *(unsigned int *)(qword_140C4ACC8 + 4);
        if ( qword_140C4ACC8 + 50 <= v14 )
        {
          v15 = qword_140C4AD18;
          while ( 1 )
          {
            v16 = *(unsigned __int8 *)(v13 + 1);
            if ( (unsigned __int8)v16 < 2u || (v17 = v13 + v16, v13 + v16 > v14) )
            {
LABEL_58:
              v1 = a1;
              goto LABEL_59;
            }
            LOBYTE(v5) = v89 >= 3u;
            if ( (unsigned __int8)sub_140B4CC80(v13, v5) )
              break;
            v13 = v17;
LABEL_57:
            if ( v13 + 2 > v14 )
              goto LABEL_58;
          }
          if ( *(_BYTE *)(qword_140C4ACC8 + 8) == 1 )
          {
            v20 = *v19;
          }
          else if ( *v18 )
          {
            if ( *v18 == 2 )
              v20 = *((_DWORD *)v18 + 1);
            else
              v20 = *(_DWORD *)v19;
          }
          else
          {
            v20 = *v19 + ((v18[9] + ((v18[10] + (v18[11] << 8)) << 8)) << 8);
          }
          v21 = qword_140C4AD18;
          v22 = 0LL;
          v23 = *(_DWORD *)(qword_140C4AD18 + 56);
          if ( v23 )
          {
            while ( v20 != *(_DWORD *)(*(_QWORD *)(v15 + 24) + 4 * v22) )
            {
              v22 = (unsigned int)(v22 + 1);
              if ( (unsigned int)v22 >= v23 )
                goto LABEL_34;
            }
          }
          else
          {
LABEL_34:
            if ( (_DWORD)v22 == v23 )
            {
              *(_DWORD *)(*(_QWORD *)(v15 + 24) + 4 * v22) = v20;
              *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 32) + 4 * v22) = v20;
              ++*(_DWORD *)(v21 + 56);
            }
          }
          v5 = *v18;
          switch ( *v18 )
          {
            case 0u:
              goto LABEL_39;
            case 1u:
              v25 = *((_QWORD *)v18 + 1) >> 12;
              v26 = *((_QWORD *)v18 + 2) >> 12;
              v27 = v26 + v25 - 1;
              if ( v25 < qword_140C0CAA8 )
                qword_140C0CAA8 = *((_QWORD *)v18 + 1) >> 12;
              if ( v27 > qword_140C4ACB8 )
                qword_140C4ACB8 = v26 + v25 - 1;
              qword_140C4ACE8 += v26;
              v28 = 2LL * v10;
              v5 = v10++;
              *((_QWORD *)Base + v28) = v25;
              *((_DWORD *)Base + 2 * v28 + 2) = v20;
              v29 = 3 * v5;
              v30 = qword_140C4ACD8;
              *((_QWORD *)qword_140C4ACD8 + v29 + 1) = v25;
              v30[v29 + 2] = v27;
              LODWORD(v30[v29]) = v20;
              break;
            case 2u:
LABEL_39:
              if ( (_BYTE)v5 )
              {
                v24 = *((_DWORD *)v18 + 2);
              }
              else
              {
                v24 = v18[3];
                if ( v24 == 255 )
                  v24 = -1;
              }
              v5 = qword_140C4AD18;
              v31 = v9++;
              *(_DWORD *)(*(_QWORD *)qword_140C4AD18 + 4 * v31) = v24;
              *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v31) = v20;
              ++*(_DWORD *)(*(_QWORD *)(v5 + 40) + 4 * v22);
              if ( v89 >= 3u )
              {
                if ( *v18 )
                  v32 = *((_DWORD *)v18 + 4);
                else
                  v32 = *((_DWORD *)v18 + 3);
                if ( v11 )
                {
                  if ( v12 != v32 )
                    dword_140C0CAA4 = 2;
                }
                else
                {
                  v11 = 1;
                  v12 = v32;
                }
              }
              break;
          }
          v13 = (__int64)&v18[v18[1]];
          goto LABEL_57;
        }
LABEL_59:
        dword_140C4ACE0 = v10;
        LODWORD(dword_140C4AD10) = v10;
        *(_DWORD *)(qword_140C4AD18 + 60) = v9;
        qsort(Base, v10, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_1403DEC40);
        qsort(
          qword_140C4ACD8,
          (unsigned int)dword_140C4AD10,
          0x18uLL,
          (int (__cdecl *)(const void *, const void *))sub_14051E360);
        v33 = 0;
        if ( v10 > 1 )
        {
          v34 = 0LL;
          v35 = v10 - 1;
          v36 = 16LL;
          do
          {
            if ( *(_DWORD *)((char *)Base + v34 + 8) != *(_DWORD *)((char *)Base + v36 + 8) )
            {
              v34 = 16LL * (unsigned int)++v33;
              *(_OWORD *)((char *)Base + v34) = *(_OWORD *)((char *)Base + v36);
            }
            v36 += 16LL;
            --v35;
          }
          while ( v35 );
        }
        v37 = 0;
        v38 = 2LL * (unsigned int)(v33 + 1);
        dword_140C4ACE0 = v33 + 1;
        dword_140C4AD00 = v33 + 1;
        *((_QWORD *)Base + v38) = -1LL;
        *((_DWORD *)Base + 2 * v38 + 2) = 0;
        *(_QWORD *)Base = 0LL;
        if ( v33 != -1 )
        {
          v39 = qword_140C4AD18;
          do
          {
            v40 = *(_DWORD *)(v39 + 56);
            v41 = 0;
            if ( v40 )
            {
              while ( *((_DWORD *)Base + 4 * v37 + 2) != *(_DWORD *)(*(_QWORD *)(v39 + 24) + 4LL * v41) )
              {
                if ( ++v41 >= v40 )
                  goto LABEL_71;
              }
              *((_DWORD *)Base + 4 * v37 + 2) = v41;
            }
LABEL_71:
            ++v37;
          }
          while ( v37 < v33 + 1 );
        }
        if ( qword_140C4AD20 )
          sub_140B4C8B8(
            qword_140C4AD18 + 56,
            *(_DWORD *)(qword_140C4AD18 + 64),
            qword_140C4AD18 + 60,
            *(_DWORD *)(qword_140C4AD18 + 68),
            (__int64)&dword_140C0CAA4,
            *(_QWORD *)(qword_140C4AD18 + 24),
            *(_QWORD *)(qword_140C4AD18 + 40),
            *(_QWORD *)(qword_140C4AD18 + 16));
        v42 = sub_140213A40(v1, 1414089811, 0, 0);
        v46 = v42;
        if ( v42 )
        {
          v47 = *(_DWORD *)(v42 + 36);
          v44 = v47 * v47 + 44;
          if ( (unsigned int)v44 > *(_DWORD *)(v42 + 4) )
          {
LABEL_85:
            v55 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 296LL);
            if ( !qword_140C4AD08 )
            {
              if ( v55
                && (v43 = qword_140C4AD18,
                    v56 = *(unsigned int *)v55,
                    v57 = (unsigned int *)(qword_140C4AD18 + 56),
                    v45 = *(unsigned int *)(qword_140C4AD18 + 56),
                    (_DWORD)v56 == (_DWORD)v45) )
              {
                v58 = (unsigned int *)(v55 + 4 * v56);
                v59 = 0;
                v60 = 0;
                if ( (_DWORD)v45 )
                {
                  v61 = (_QWORD *)(qword_140C4AD18 + 24);
                  do
                  {
                    v62 = *(_DWORD *)v55;
                    v63 = 0;
                    if ( *(_DWORD *)v55 )
                    {
                      v44 = *(unsigned int *)(*v61 + 4LL * v60);
                      while ( *(_DWORD *)(v55 + 4LL * v63 + 4) != (_DWORD)v44 )
                      {
                        if ( ++v63 >= v62 )
                          goto LABEL_94;
                      }
                      v59 = v63 * v62;
                    }
                    else
                    {
LABEL_94:
                      if ( v63 == v62 )
                        goto LABEL_105;
                    }
                    v64 = 0;
                    if ( (_DWORD)v45 )
                    {
                      do
                      {
                        v65 = *(_DWORD *)v55;
                        v66 = 0;
                        if ( *(_DWORD *)v55 )
                        {
                          v44 = *(unsigned int *)(*v61 + 4LL * v64);
                          while ( *(_DWORD *)(v55 + 4LL * v66 + 4) != (_DWORD)v44 )
                          {
                            if ( ++v66 >= v65 )
                              goto LABEL_100;
                          }
                        }
                        else
                        {
LABEL_100:
                          if ( v66 == v65 )
                            goto LABEL_105;
                        }
                        v67 = *((_WORD *)v58 + v59 + v66 + 2);
                        v44 = *(_QWORD *)(qword_140C4AD18 + 48);
                        v68 = v64 + v60 * *(_DWORD *)(qword_140C4AD18 + 64);
                        ++v64;
                        *(_WORD *)(v44 + 2 * v68) = v67;
                      }
                      while ( v64 < *v57 );
                    }
                    v43 = qword_140C4AD18;
                    v44 = v60 * (*(_DWORD *)(qword_140C4AD18 + 64) + 1);
                    ++v60;
                    *(_WORD *)(*(_QWORD *)(qword_140C4AD18 + 48) + 2 * v44) = 0;
                    v45 = *v57;
                  }
                  while ( v60 < (unsigned int)v45 );
                }
              }
              else
              {
LABEL_105:
                v43 = qword_140C4AD18;
                v45 = 0LL;
                v69 = *(_DWORD *)(qword_140C4AD18 + 56);
                if ( v69 )
                {
                  do
                  {
                    v55 = 0LL;
                    if ( v69 )
                    {
                      do
                      {
                        v70 = (unsigned int)(v55 + v45 * *(_DWORD *)(v43 + 64));
                        v55 = (unsigned int)(v55 + 1);
                        *(_WORD *)(*(_QWORD *)(v43 + 48) + 2 * v70) = 1;
                      }
                      while ( (unsigned int)v55 < *(_DWORD *)(v43 + 56) );
                    }
                    v44 = (unsigned int)(v45 * (*(_DWORD *)(v43 + 64) + 1));
                    v45 = (unsigned int)(v45 + 1);
                    *(_WORD *)(*(_QWORD *)(v43 + 48) + 2 * v44) = 0;
                    v69 = *(_DWORD *)(v43 + 56);
                  }
                  while ( (unsigned int)v45 < v69 );
                }
              }
            }
            if ( byte_140C54BF8 )
            {
              v71 = qword_140C4AD18;
              sub_140B4C81C(
                *(unsigned int *)(qword_140C4AD18 + 60),
                *(_QWORD *)(qword_140C4AD18 + 16),
                *(_QWORD *)qword_140C4AD18,
                v55);
              v72 = *(_DWORD *)(v71 + 56);
              for ( i = 0; i < v72; ++i )
              {
                v74 = dword_140C0CAA0;
                if ( *(_DWORD *)(*(_QWORD *)(v71 + 40) + 4LL * i) > (unsigned int)dword_140C0CAA0 )
                {
                  v75 = sub_140B4C370();
                  v76 = qword_140C4AD18;
                  *(_DWORD *)(v71 + 56) = v72 + 1;
                  v77 = v75;
                  v78 = *(_QWORD *)(v71 + 40);
                  v79 = 0;
                  v80 = *(_DWORD *)(v78 + 4LL * i);
                  *(_DWORD *)(v78 + 4LL * i) = v74;
                  v55 = (unsigned int)(v80 - v74);
                  *(_DWORD *)(*(_QWORD *)(v71 + 40) + 4LL * v72) = v55;
                  *(_DWORD *)(*(_QWORD *)(v76 + 24) + 4LL * v72) = v75;
                  for ( *(_DWORD *)(*(_QWORD *)(v76 + 32) + 4LL * v72) = *(_DWORD *)(*(_QWORD *)(v76 + 32) + 4LL * i);
                        v79 < v72;
                        *(_WORD *)(v45 + 2 * v82) = *(_WORD *)(v45 + 2 * v81) )
                  {
                    *(_WORD *)(*(_QWORD *)(v76 + 48) + 2LL * (v72 + v79 * *(_DWORD *)(v76 + 64))) = *(_WORD *)(*(_QWORD *)(v76 + 48) + 2LL * (v79 * *(_DWORD *)(v76 + 64) + i));
                    v45 = *(_QWORD *)(v76 + 48);
                    v81 = v79 + i * *(_DWORD *)(v76 + 64);
                    v82 = v79 + v72 * *(_DWORD *)(v76 + 64);
                    ++v79;
                  }
                  v44 = v72 * (*(_DWORD *)(qword_140C4AD18 + 64) + 1);
                  *(_WORD *)(*(_QWORD *)(qword_140C4AD18 + 48) + 2 * v44) = 0;
                  v43 = (unsigned int)(*(_DWORD *)(v71 + 60) - 1);
                  if ( *(_DWORD *)(v71 + 60) != 1 )
                  {
                    do
                    {
                      if ( !(_DWORD)v55 )
                        break;
                      v83 = *(_QWORD *)(v71 + 16);
                      v44 = *(unsigned int *)(*(_QWORD *)(v76 + 24) + 4LL * i);
                      if ( *(_DWORD *)(v83 + 4 * v43) == (_DWORD)v44 )
                      {
                        v55 = (unsigned int)(v55 - 1);
                        *(_DWORD *)(v83 + 4 * v43) = v77;
                      }
                      v84 = (_DWORD)v43 == 1;
                      v43 = (unsigned int)(v43 - 1);
                    }
                    while ( !v84 );
                  }
                }
                v72 = *(_DWORD *)(v71 + 56);
              }
            }
            if ( dword_140C0CAA4 != 1 )
              byte_140C4E410 = 1;
            return (void *)sub_140AFA5EC(v44, v43, v45, v55);
          }
          v45 = qword_140C4AD18;
          v48 = 0;
          v43 = *(unsigned int *)(qword_140C4AD18 + 56);
          if ( (_DWORD)v43 )
          {
            do
            {
              v44 = v48;
              v49 = *(_DWORD *)(*(_QWORD *)(v45 + 24) + 4LL * v48);
              if ( v49 >= v47 )
                goto LABEL_85;
              v50 = v47 * v49;
              v51 = 0;
              if ( (_DWORD)v43 )
              {
                do
                {
                  v44 = v51;
                  v43 = *(unsigned int *)(*(_QWORD *)(v45 + 24) + 4LL * v51);
                  if ( (unsigned int)v43 >= v47 )
                    goto LABEL_85;
                  v52 = *(unsigned __int8 *)((unsigned int)(v43 + v50) + v46 + 44);
                  if ( (unsigned __int8)v52 < 0xAu )
                    goto LABEL_85;
                  v53 = v51 + v48 * *(_DWORD *)(v45 + 64);
                  ++v51;
                  *(_WORD *)(*(_QWORD *)(v45 + 48) + 2 * v53) = v52 << 7;
                }
                while ( v51 < *(_DWORD *)(v45 + 56) );
              }
              v43 = 1280LL;
              v54 = *(_QWORD *)(v45 + 48);
              v44 = v48 * (*(_DWORD *)(v45 + 64) + 1);
              if ( *(_WORD *)(v54 + 2 * v44) != 1280 )
                goto LABEL_85;
              *(_WORD *)(v54 + 2 * v44) = 0;
              ++v48;
              v43 = *(unsigned int *)(v45 + 56);
            }
            while ( v48 < (unsigned int)v43 );
          }
        }
        qword_140C4AD08 = v46;
        goto LABEL_85;
      }
    }
  }
  return result;
}
