/*
 * XREFs of MiParseImageSectionHeaders @ 0x1406F4230
 * Callers:
 *     MiBuildImageControlArea @ 0x14070893C (MiBuildImageControlArea.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeDemandZeroPte @ 0x14026E548 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14026EA48 (MiMakeSubsectionPte.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r11
  __int64 v7; // r10
  int v8; // ebp
  int v9; // ebx
  __int64 *v10; // r9
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // eax
  __int64 v15; // r13
  unsigned int v16; // r14d
  unsigned int v17; // edx
  unsigned int *v18; // rdi
  unsigned int v19; // r8d
  unsigned int v20; // r11d
  int v21; // eax
  __int64 v22; // r10
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  int v27; // r8d
  __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int16 v31; // r8
  __int64 SubsectionPte; // rbx
  __int64 v33; // rdx
  char v34; // r8
  __int64 DemandZeroPte; // rsi
  char v36; // r8
  unsigned int v37; // r11d
  unsigned int v38; // ecx
  char v39; // dl
  unsigned int v40; // r14d
  int v41; // r12d
  bool v42; // zf
  unsigned int v43; // ecx
  unsigned __int64 v45; // rdi
  unsigned int *v46; // r8
  unsigned int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // r10d
  char v50; // [rsp+20h] [rbp-78h]
  char v51; // [rsp+21h] [rbp-77h]
  unsigned int v52; // [rsp+24h] [rbp-74h]
  unsigned int v53; // [rsp+28h] [rbp-70h]
  unsigned int v54; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v55; // [rsp+30h] [rbp-68h]
  unsigned int v56; // [rsp+34h] [rbp-64h]
  __int64 v57; // [rsp+38h] [rbp-60h]
  unsigned int *v58; // [rsp+40h] [rbp-58h]
  __int64 v59; // [rsp+48h] [rbp-50h]
  __int64 v60; // [rsp+50h] [rbp-48h]
  int v63; // [rsp+B8h] [rbp+20h]

  v63 = a4;
  v6 = *a2;
  v7 = (__int64)(a2 + 16);
  v8 = a1;
  v9 = a4;
  v10 = a2;
  v57 = v6;
  v11 = (_QWORD *)(a2[17] + 8LL * *((unsigned int *)a2 + 43));
  *(_BYTE *)(v6 + 14) = *(_BYTE *)(*a2 + 14) & 0xC1 | 0xE;
  if ( (a1 & 0x400000) != 0 )
  {
    if ( v9 )
    {
      v46 = (unsigned int *)(a3 + 16);
      while ( 1 )
      {
        v47 = *v46;
        v48 = *v46;
        v49 = v46[1];
        if ( *(v46 - 2) )
          v48 = *(v46 - 2);
        if ( v47 + v49 < v49 )
          break;
        if ( v49 != *(v46 - 1) || v48 > v47 )
        {
          dword_140C4F3D0 = 17;
          return 3221225595LL;
        }
        v46 += 10;
        if ( !--v9 )
          goto LABEL_62;
      }
      dword_140C4F3D0 = 16;
      return 3221225595LL;
    }
    else
    {
LABEL_62:
      v10[15] = *(unsigned int *)(v6 + 8);
      return 0LL;
    }
  }
  else
  {
    v12 = a5;
    v13 = *(_QWORD *)(v6 + 56);
    v14 = *(_DWORD *)(v13 + 56);
    v15 = *(_QWORD *)(v6 + 32) + (unsigned int)(*((_DWORD *)a2 + 43) << 12);
    v16 = *(_DWORD *)(a5 + 12);
    v55 = v16;
    v17 = v14 + 1;
    v59 = v13;
    if ( v9 )
    {
      v18 = (unsigned int *)(a3 + 20);
      v19 = a6;
      v58 = v18;
      while ( 1 )
      {
        v20 = *(v18 - 3);
        v21 = *(v18 - 1);
        if ( !v20 )
          v20 = *(v18 - 1);
        v54 = v20;
        if ( !v21 && *v18 )
        {
          if ( (v8 & 0x10000) != 0 && (v8 & 0x40000) == 0 )
          {
            dword_140C4F3D0 = 18;
            return 3221225595LL;
          }
          *v18 = 0;
        }
        if ( *v18 + v21 < *v18 )
          break;
        *(_QWORD *)(v7 + 56) = v10;
        *(_QWORD *)(v7 + 16) = v7 + 56;
        v22 = v7 + 56;
        v60 = v22;
        if ( v15 != *(_QWORD *)v12 + *(v18 - 2) || !v20 )
        {
          dword_140C4F3D0 = 20;
          return 3221225595LL;
        }
        if ( v16 + v20 - 1 <= v20 )
        {
          dword_140C4F3D0 = 21;
          return 3221225595LL;
        }
        v23 = ((v20 + (unsigned __int64)v16 - 1) >> 12) & (~((unsigned __int64)v16 - 1) >> 12);
        *(_DWORD *)(v22 + 44) = v23;
        if ( v23 > v19 )
        {
          dword_140C4F3D0 = 22;
          return 3221225595LL;
        }
        v24 = ((v20 + (unsigned __int64)v16 - 1) >> 12) & (~((unsigned __int64)v16 - 1) >> 12);
        if ( v9 == 1 && v23 != v19 )
        {
          *(_DWORD *)(v22 + 44) = v19;
          v24 = v19;
        }
        *(_DWORD *)(v22 + 32) = 0;
        v25 = *v18 >> 9;
        *(_DWORD *)(v22 + 36) = v25;
        v53 = v19 - v24;
        v26 = -*(_DWORD *)(v12 + 8) & (*(v18 - 1) + *(_DWORD *)(v12 + 8) + *v18 - 1);
        if ( v26 < *v18 )
        {
          dword_140C4F3D0 = 23;
          return 3221225595LL;
        }
        *(_QWORD *)(v22 + 8) = v11;
        *(_DWORD *)(v22 + 40) = (v26 >> 9) - v25;
        *(_WORD *)(v22 + 34) = 16 * (v26 & 0x1FF);
        v27 = v18[4];
        v28 = ((unsigned int)v27 >> 29) & 1 | 2;
        if ( (v27 & 0x40000000) == 0 )
          v28 = (v18[4] >> 29) & 1;
        v29 = v28 | 4;
        if ( v27 >= 0 )
          v29 = v28;
        v30 = v29 | 8;
        if ( (v27 & 0x10000000) == 0 )
          v30 = v29;
        v31 = *((char *)MiImageProtectionArray + v30);
        if ( (*((_BYTE *)MiImageProtectionArray + v30) & 2) != 0 )
          *(_BYTE *)(v13 + 50) = 1;
        *(_WORD *)(v22 + 32) ^= (*(_WORD *)(v22 + 32) ^ (2 * v31)) & 0x3E;
        SubsectionPte = MiMakeSubsectionPte(v22, v28);
        DemandZeroPte = MiMakeDemandZeroPte(v34, v33);
        if ( !*v18 )
          SubsectionPte = DemandZeroPte;
        v38 = *(v18 - 1);
        v39 = 0;
        v52 = v38;
        v56 = v38 + *v18;
        v51 = 0;
        v50 = 0;
        if ( (v36 & 4) != 0 )
        {
          if ( (v36 & 5) == 5 )
          {
            v50 = 1;
          }
          else
          {
            *(_WORD *)(v7 + 34) |= 2u;
            v39 = 1;
            *((_DWORD *)v10 + 14) |= 0x20000u;
            v38 = *(v18 - 1);
            v51 = 1;
          }
          v52 = v38;
        }
        v40 = 0;
        v41 = 0;
        if ( *(_DWORD *)(v7 + 44) )
        {
          while ( 1 )
          {
            if ( v40 < v37 )
            {
              if ( v39 )
                ++*(_QWORD *)(v57 + 16);
              if ( v50 )
                ++*(_QWORD *)(v57 + 48);
              if ( v40 >= v38 )
              {
                *v11 = DemandZeroPte;
                if ( !((unsigned __int8)v39 | (unsigned __int8)v50) )
                  ++*(_QWORD *)(v57 + 16);
              }
              else
              {
                ++v10[15];
                *v11 = SubsectionPte;
              }
              goto LABEL_33;
            }
            v45 = ZeroPte;
            if ( MiPteInShadowRange((unsigned __int64)v11) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
                  v45 = ZeroPte | 0x8000000000000000uLL;
                *v11 = v45;
                MiWritePteShadow((__int64)v11, v45);
                goto LABEL_50;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v45 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v11 = v45;
LABEL_50:
            v7 = v60;
            v10 = a2;
            v37 = v54;
            v39 = v51;
            *(_DWORD *)(v60 + 52) ^= (*(_DWORD *)(v60 + 52) ^ (*(_DWORD *)(v60 + 52) + 1)) & 0x3FFFFFFF;
            v38 = v52;
LABEL_33:
            v40 += 4096;
            ++v11;
            v15 += 4096LL;
            if ( (unsigned int)++v41 >= *(_DWORD *)(v7 + 44) )
            {
              v8 = a1;
              v18 = v58;
              break;
            }
          }
        }
        v18 += 10;
        v12 = a5;
        v42 = v63 == 1;
        v9 = --v63;
        v58 = v18;
        if ( v42 )
        {
          v43 = v53;
          v17 = v56;
          v14 = *(_DWORD *)(v59 + 56);
          goto LABEL_45;
        }
        v19 = v53;
        v16 = v55;
        v13 = v59;
      }
      dword_140C4F3D0 = 19;
      return 3221225595LL;
    }
    else
    {
      v43 = a6;
LABEL_45:
      if ( v17 > v14 )
      {
        dword_140C4F3D0 = 24;
        return 3221225595LL;
      }
      else if ( v43 >= *(_DWORD *)(v12 + 12) >> 12 )
      {
        dword_140C4F3D0 = 25;
        return 3221225595LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
