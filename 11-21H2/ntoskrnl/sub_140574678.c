/*
 * XREFs of sub_140574678 @ 0x140574678
 * Callers:
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402B9680 @ 0x1402B9680 (sub_1402B9680.c)
 *     sub_140342694 @ 0x140342694 (sub_140342694.c)
 *     sub_140571770 @ 0x140571770 (sub_140571770.c)
 *     sub_140573CBC @ 0x140573CBC (sub_140573CBC.c)
 */

__int64 __fastcall sub_140574678(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, char a7)
{
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v13; // r10
  __int64 v14; // r8
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // r14
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  bool v35; // zf
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r10
  __int64 v38; // r9
  char v39; // cl
  unsigned int v40; // eax
  __int64 v41; // r9
  unsigned __int8 v42; // dl
  __int64 v43; // rax
  unsigned int v44; // ecx
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  char v49; // cl
  unsigned __int64 v50; // rax
  __int64 v51; // [rsp+28h] [rbp-8h] BYREF

  v7 = a5;
  v8 = 0LL;
  if ( !a5 )
  {
    v13 = *(unsigned __int16 *)(a4 + 136);
    if ( (unsigned __int16)v13 >= *a1 )
      v14 = 0LL;
    else
      v14 = *(_QWORD *)&a1[4 * v13 + 4];
    v15 = *(_QWORD *)(a4 + 128);
    v16 = v15 & v14;
    if ( !v16 )
      return 0LL;
    _BitScanForward64(&v18, *(_QWORD *)(*(_QWORD *)(a3 + 192) + 128LL));
    _BitScanForward64(&v19, v15);
    v20 = (v19 + *(_BYTE *)(a3 + 209) - v18) & 0x3F;
    _BitScanForward64(&v19, __ROR8__(v16, v20));
    v7 = qword_140D088C0[dword_140D105E0[64 * (_DWORD)v13 + (((_BYTE)v19 + v20) & 0x3F)]];
  }
  v21 = *(unsigned __int16 *)(a4 + 136);
  if ( (unsigned __int16)v21 >= *a1 )
    v22 = 0LL;
  else
    v22 = *(_QWORD *)&a1[4 * v21 + 4];
  v23 = *(_QWORD *)(a4 + 8);
  v24 = v22 & v23;
  v51 = v22 & v23;
  if ( a7 )
  {
    if ( v24 )
      goto LABEL_15;
    v23 = *(_QWORD *)(a4 + 40) & *(_QWORD *)(a4 + 88);
    v24 = v22 & v23;
    v51 = v22 & v23;
  }
  if ( !v24 )
    return v8;
LABEL_15:
  if ( (*(_BYTE *)(a4 + 184) & 1) == 0 || a6 && sub_140573CBC(v7, &v51) )
    goto LABEL_49;
  if ( (v51 & *(_QWORD *)(a4 + 16)) != 0 )
  {
    if ( a6
      && (unsigned int)((0x101010101010101LL
                       * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < dword_140D06AC0 )
    {
      return v8;
    }
    v51 &= *(_QWORD *)(a4 + 16);
LABEL_49:
    v46 = *(_QWORD *)(a4 + 32);
    v47 = v51;
    if ( (v46 & v51) != 0 )
      v47 = v46 & v51;
    if ( (v47 & *(_QWORD *)(v7 + 200)) != 0 )
      return v7;
    v48 = v47 & *(_QWORD *)(v7 + 34912);
    if ( v48 || (v48 = v47 & *(_QWORD *)(v7 + 34936)) != 0 )
    {
      v47 = v48;
    }
    else if ( (dword_140D0507C & 1) != 0 && (v47 & *(_QWORD *)(v7 + 34928)) != 0 )
    {
      v47 &= *(_QWORD *)(v7 + 34928);
    }
    v49 = *(_BYTE *)(v7 + 209);
    _BitScanForward64(&v50, __ROR8__(v47, v49));
    return qword_140D088C0[dword_140D105E0[64 * *(unsigned __int8 *)(v7 + 208) + (((unsigned __int8)v50 + v49) & 0x3F)]];
  }
  if ( !a6 )
  {
    v25 = *(_QWORD *)(a2 + 192);
    if ( v25 == a4 )
    {
      v26 = v51 & *(_QWORD *)(v25 + 40);
      v28 = v51 & *(_QWORD *)(a2 + 34912) & ~*(_QWORD *)(a2 + 200);
      if ( v28 )
      {
        v27 = *(_QWORD *)(a2 + 34912) & ~*(_QWORD *)(a2 + 200);
        if ( (v26 & v27) == v27 && (*(_BYTE *)(a2 + 13244) & 1) == 0 && !*(_DWORD *)(a2 + 32472) )
        {
          v29 = *(_QWORD *)(a2 + 8);
          if ( !*(_BYTE *)(a2 + 32) )
          {
            _disable();
            *(_BYTE *)(a2 + 32) = 1;
            v30 = __rdtsc();
            v31 = v30 - *(_QWORD *)(a2 + 33152);
            v32 = *(unsigned int *)(v29 + 80);
            *(_QWORD *)(v29 + 72) += v31;
            v33 = v31 * *(unsigned int *)(a2 + 33208);
            *(_QWORD *)(a2 + 33152) = v30;
            v34 = (v33 >> 16) + v32;
            if ( v34 > 0xFFFFFFFF )
              LODWORD(v34) = -1;
            v35 = (*(_BYTE *)(v29 + 2) & 0xBE) == 0;
            *(_DWORD *)(v29 + 80) = v34;
            if ( !v35 )
              sub_1402B9680(a2, v29, v31, 0LL);
            v36 = __rdtsc();
            v37 = v36;
            v38 = v36 - *(_QWORD *)(a2 + 33152);
            *(_QWORD *)(a2 + 33400) += v38;
            v39 = *(_BYTE *)(v29 + 2);
            if ( (v39 & 0x20) != 0 )
            {
              v40 = sub_140342694(a2, (unsigned __int64)HIDWORD(v36) << 32, v31, v38);
              if ( dword_140D068FC )
                v42 = *(_BYTE *)(a2 + 34056);
              else
                v42 = *(_BYTE *)(a2 + 34059);
              *(_QWORD *)(a2 + 8 * (v42 + 2LL * v40) + 33408) += v41;
              v39 = *(_BYTE *)(v29 + 2);
            }
            if ( (v39 & 0x40) != 0 )
            {
              v43 = *(_QWORD *)(v29 + 968);
              if ( v43 )
                *(_BYTE *)(v43 + 64) = 1;
            }
            *(_QWORD *)(a2 + 33152) = v37;
            if ( (*(_BYTE *)(v29 + 2) & 2) != 0 )
              sub_140571770(v29, 0);
            *(_BYTE *)(a2 + 32) = 0;
            if ( *(_BYTE *)(a2 + 6) )
            {
              *(_BYTE *)(a2 + 6) = 0;
              HalRequestSoftwareInterrupt(2);
            }
            _enable();
          }
          v44 = *(_DWORD *)(v29 + 80);
          v45 = *(_DWORD *)(v29 + 84);
          if ( v44 >= v45 || v45 - v44 < dword_140D06B94 )
            v51 = v28;
        }
      }
    }
    goto LABEL_49;
  }
  return v8;
}
