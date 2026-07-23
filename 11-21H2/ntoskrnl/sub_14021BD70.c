/*
 * XREFs of sub_14021BD70 @ 0x14021BD70
 * Callers:
 *     sub_14021BC70 @ 0x14021BC70 (sub_14021BC70.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_1403031F0 @ 0x1403031F0 (sub_1403031F0.c)
 *     sub_1403B402C @ 0x1403B402C (sub_1403B402C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14021BD70(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int8 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // r10
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r11
  int v12; // r15d
  int v13; // r8d
  int v14; // r13d
  int v15; // r14d
  char v16; // cl
  int v17; // r13d
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r12
  const EVENT_DESCRIPTOR *v20; // r11
  REGHANDLE v21; // r10
  __int64 v22; // rcx
  ULONGLONG Keyword; // r8
  UCHAR v24; // al
  unsigned __int8 *v25; // rdx
  int v26; // r11d
  int v27; // r8d
  int v28; // eax
  int v29; // r9d
  unsigned int v30; // ecx
  unsigned int v31; // r8d
  char v32; // cl
  unsigned __int64 v33; // rax
  __int64 v34; // r9
  unsigned int v35; // r10d
  unsigned __int8 *v36; // r8
  int v37; // eax
  int v38; // eax
  int v39; // edx
  unsigned __int8 *v40; // r14
  int v41; // eax
  unsigned __int8 *v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // r9d
  char v45; // [rsp+40h] [rbp-C0h] BYREF
  char v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v48; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v49; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v50; // [rsp+68h] [rbp-98h] BYREF
  int v51; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v53; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  int *v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  int *v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  unsigned __int8 **v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  __int16 *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  __int16 *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  char *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  __int64 v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  char *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]

  v1 = *(__int64 **)(a1 + 16);
  v3 = *(unsigned __int8 **)(a1 + 24);
  result = (unsigned int)dword_140C20488;
  v5 = *(_QWORD *)(a1 + 8);
  v50 = v3;
  if ( v1 )
  {
    v6 = *v1;
    v7 = v1[5] - *v1;
    v8 = v1[2];
    v9 = v1[1];
    v10 = v1[4] - v9;
    v11 = v1[6] - v8;
    v12 = *((_DWORD *)v1 + 20) - *((_DWORD *)v1 + 6);
    if ( dword_140C20488 )
    {
      v33 = v10 / (unsigned int)(dword_140C20488 + 1);
      v3 = v50;
      v10 = v33;
      if ( v7 < v33 )
        v33 = v1[5] - *v1;
      v7 = v33;
      if ( v11 >= v10 )
        v11 = v10;
    }
    v1[1] = v9 + v10;
    *v1 = v6 + v7;
    v1[2] = v11 + v8;
    *((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 20);
    if ( v7 > v10 )
      v7 = v10;
    if ( v11 > v10 )
      v11 = v10;
    if ( v10 <= 1 )
      v10 = 1LL;
    if ( v3 )
    {
      result = *v3;
      *(_DWORD *)(a1 + 40) = *v3 * v3[1];
    }
    else
    {
      v13 = *(unsigned __int16 *)(a1 + 56);
      if ( v5 )
      {
        v14 = *(_DWORD *)(v5 + 116);
        v15 = *(_DWORD *)(v5 + 120);
      }
      else
      {
        v14 = 100;
        v15 = 100;
      }
      v16 = *((_BYTE *)v1 + 236);
      v51 = v14;
      v17 = 0;
      v45 = 100;
      v46 = v16;
      LODWORD(v50) = v15;
      v54 = v11;
      v53 = v7;
      v18 = v7 * (unsigned int)(100 * v15) / v10;
      v47 = 0;
      v48 = v18;
      v19 = v7 * (unsigned int)(v13 * v15) / v10;
      v52 = v10 - v7;
      v49 = v19;
      if ( *(_BYTE *)(a1 + 64) )
      {
        v20 = &stru_14000E6E0;
        LOWORD(v47) = *(unsigned __int8 *)(a1 - 33760);
        BYTE2(v47) = *(_BYTE *)(a1 - 33759);
        v63 = 3LL;
      }
      else
      {
        v20 = (const EVENT_DESCRIPTOR *)qword_140014948;
        v47 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
        v63 = 4LL;
      }
      v62 = &v47;
      if ( byte_140C5AE30 )
      {
        v21 = qword_140C1F580;
        if ( qword_140C1F580 )
        {
          if ( (v22 = *(_QWORD *)(qword_140C1F580 + 32), Keyword = v20->Keyword, *(_DWORD *)(v22 + 96))
            && ((v24 = *(_BYTE *)(v22 + 100), v20->Level <= v24) || !v24)
            && ((*(_DWORD *)(v22 + 104) & 0x40) != 0 && !Keyword
             || (Keyword & *(_QWORD *)(v22 + 112)) != 0 && (Keyword & *(_QWORD *)(v22 + 120)) == *(_QWORD *)(v22 + 120))
            || *(_BYTE *)(qword_140C1F580 + 101)
            && (unsigned __int8)sub_1403031F0(*(_QWORD *)(qword_140C1F580 + 40) + 96LL, v20->Level, Keyword) )
          {
            *(_QWORD *)&UserData.Size = 8LL;
            UserData.Ptr = (ULONGLONG)&qword_140C204B8;
            v57 = 8LL;
            v56 = &v52;
            v59 = 8LL;
            v58 = &v53;
            v61 = 4LL;
            v60 = &v51;
            v65 = 4LL;
            v64 = &v50;
            v66 = &v48;
            v68 = &v49;
            v70 = &v45;
            v72 = (__int64)v1 + 233;
            v74 = &v54;
            v76 = &v46;
            v67 = 2LL;
            v69 = 2LL;
            v71 = 1LL;
            v73 = 1LL;
            v75 = 8LL;
            v77 = 1LL;
            EtwWriteEx(v21, v20, 0LL, 0, 0LL, 0LL, 0xCu, &UserData);
          }
        }
      }
      v25 = *(unsigned __int8 **)(a1 + 32);
      v26 = *((unsigned __int8 *)v1 + 236);
      v50 = v25;
      if ( v25 )
      {
        v34 = *((unsigned int *)v25 + 1);
        v35 = *(_DWORD *)v25;
        v36 = &v25[12 * v34];
        *((_DWORD *)v25 + 2) += (unsigned __int16)v18 - *((unsigned __int16 *)v36 + 20);
        v37 = *((unsigned __int16 *)v36 + 21);
        *((_WORD *)v36 + 20) = v18;
        *((_DWORD *)v25 + 3) += (unsigned __int16)v19 - v37;
        v38 = *((unsigned __int16 *)v36 + 22);
        *((_WORD *)v36 + 21) = v19;
        v39 = (unsigned __int16)v15;
        v40 = v50;
        *((_DWORD *)v50 + 4) += v39 - v38;
        v41 = v36[46];
        *((_WORD *)v36 + 22) = v39;
        *((_DWORD *)v40 + 5) += v26 - v41;
        v36[46] = v26;
        *((_DWORD *)v40 + 6) -= v36[47];
        *((_DWORD *)v40 + 6) += *((unsigned __int8 *)v1 + 232);
        v36[47] = *((_BYTE *)v1 + 232);
        *((_DWORD *)v40 + 7) -= v36[48];
        *((_DWORD *)v40 + 7) += *((unsigned __int8 *)v1 + 233);
        v42 = v50;
        v36[48] = *((_BYTE *)v1 + 233);
        *((_DWORD *)v40 + 8) -= v36[49];
        *((_DWORD *)v40 + 8) += *((unsigned __int8 *)v1 + 234);
        v36[49] = *((_BYTE *)v1 + 234);
        *((_DWORD *)v40 + 9) -= v36[50];
        *((_DWORD *)v40 + 9) += *((unsigned __int8 *)v1 + 235);
        v36[50] = *((_BYTE *)v1 + 235);
        if ( (_DWORD)v34 + 1 != v35 )
          v17 = v34 + 1;
        v43 = *((_DWORD *)v40 + 2);
        *((_DWORD *)v40 + 1) = v17;
        LODWORD(v18) = v43 / v35;
        LODWORD(v19) = *((_DWORD *)v40 + 3) / v35;
        v15 = *((_DWORD *)v40 + 4) / v35;
        v26 = *((_DWORD *)v42 + 5) / v35;
        v28 = *((_DWORD *)v42 + 7) / v35;
        LOBYTE(v27) = v28;
      }
      else
      {
        v27 = *((_DWORD *)v1 + 58) >> 8;
        LOBYTE(v28) = v27;
      }
      if ( (unsigned __int8)v26 >= 0x64u )
      {
        LOBYTE(v26) = 100;
        LOBYTE(v27) = v28;
      }
      *(_DWORD *)(a1 + 52) = (unsigned int)v18 * (unsigned __int8)v26 / 0x64;
      if ( (unsigned __int8)v27 >= 0x64u )
        LOBYTE(v27) = 100;
      v29 = (unsigned __int8)v27;
      v30 = v18 * (unsigned __int8)v27;
      result = 1374389535 * v30;
      v31 = v30 / 0x64;
      if ( dword_140C204A8 == 5 )
      {
        v44 = v19 * v29;
        LODWORD(v18) = v18 - v31;
        v32 = 1;
        result = 1374389535 * v44;
        LODWORD(v19) = v19 - v44 / 0x64;
      }
      else
      {
        v32 = 0;
      }
      *(_DWORD *)(a1 + 40) = v18;
      *(_DWORD *)(a1 + 44) = v19;
      *(_DWORD *)(a1 + 48) = v31;
      *(_WORD *)(a1 + 58) = v15;
      *((_DWORD *)v1 + 60) = v12;
      if ( v32 )
        return sub_1403B402C(a1);
    }
  }
  return result;
}
