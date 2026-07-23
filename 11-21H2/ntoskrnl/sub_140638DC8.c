/*
 * XREFs of sub_140638DC8 @ 0x140638DC8
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140638DC8(int a1)
{
  int v2; // r13d
  unsigned int v3; // edi
  int v4; // r8d
  signed __int32 *i; // rdx
  signed __int32 v6; // ett
  __int32 v7; // esi
  int v9; // ebx
  int v10; // r12d
  int v11; // r14d
  int v12; // ecx
  unsigned int v13; // r15d
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned __int64 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v20[5]; // [rsp+60h] [rbp-A8h]
  int v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+8Ch] [rbp-7Ch]
  __int64 (__fastcall *v23)(int, int); // [rsp+90h] [rbp-78h]
  int v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+9Ch] [rbp-6Ch]
  __int64 (__fastcall *v26)(int, int); // [rsp+A0h] [rbp-68h]
  __int64 v27; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall *v28)(int, int); // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+BCh] [rbp-4Ch]
  __int64 (__fastcall *v31)(int, int); // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+CCh] [rbp-3Ch]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int64 v35; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall *v36)(int, int); // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E8h] [rbp-20h]
  int v38; // [rsp+ECh] [rbp-1Ch]
  __int64 (__fastcall *v39)(int, __int64); // [rsp+F0h] [rbp-18h]
  int v40; // [rsp+F8h] [rbp-10h]
  int v41; // [rsp+FCh] [rbp-Ch]
  __int64 v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+108h] [rbp+0h]
  int v44; // [rsp+10Ch] [rbp+4h]
  __int64 (__fastcall *v45)(int, int); // [rsp+110h] [rbp+8h]
  int v46; // [rsp+118h] [rbp+10h]
  int v47; // [rsp+11Ch] [rbp+14h]
  __int64 (__fastcall *v48)(int, int); // [rsp+120h] [rbp+18h]
  int v49; // [rsp+128h] [rbp+20h]
  int v50; // [rsp+12Ch] [rbp+24h]
  __int64 (__fastcall *v51)(unsigned int, int); // [rsp+130h] [rbp+28h]
  int v52; // [rsp+138h] [rbp+30h]
  int v53; // [rsp+13Ch] [rbp+34h]
  __int64 v54; // [rsp+140h] [rbp+38h]
  int v55; // [rsp+148h] [rbp+40h]
  int v56; // [rsp+14Ch] [rbp+44h]
  __int64 (__fastcall *v57)(int, int); // [rsp+150h] [rbp+48h]
  int v58; // [rsp+158h] [rbp+50h]
  int v59; // [rsp+15Ch] [rbp+54h]
  __int64 (__fastcall *v60)(int, int); // [rsp+160h] [rbp+58h]
  __int64 v61; // [rsp+168h] [rbp+60h]
  __int64 v62; // [rsp+170h] [rbp+68h]
  int v63; // [rsp+178h] [rbp+70h]
  int v64; // [rsp+17Ch] [rbp+74h]
  __int64 v65; // [rsp+180h] [rbp+78h]

  Buffer = 0LL;
  v19 = 0LL;
  v20[0] = 0LL;
  v26 = sub_1406388D0;
  v22 = 8;
  v24 = 8;
  v27 = 8LL;
  v44 = 8;
  v28 = sub_1406387F0;
  v36 = sub_1406387F0;
  v56 = 8;
  v39 = sub_140638890;
  v2 = a1 & 0x20000000;
  v20[1] = 0x2000000000LL;
  v51 = sub_140638840;
  v20[2] = 0LL;
  v20[3] = 32LL;
  v20[4] = 0LL;
  v21 = 0;
  v23 = sub_140638910;
  v25 = 16;
  v29 = 0;
  v30 = 16;
  v31 = sub_140638960;
  v32 = 16;
  v33 = 16;
  v34 = 0LL;
  v35 = 16LL;
  v37 = 16;
  v38 = 2;
  v40 = 0;
  v41 = 1;
  v42 = 0LL;
  v43 = 2;
  v45 = sub_140638910;
  v46 = 2;
  v47 = 16;
  v48 = sub_140638960;
  v49 = 2;
  v50 = 1;
  v52 = 1;
  v53 = 1;
  v54 = 0LL;
  v55 = 1;
  v57 = sub_140638910;
  v58 = 1;
  v59 = 16;
  v60 = sub_140638960;
  v61 = 1LL;
  v62 = 0LL;
  v63 = 1;
  v64 = 32;
  v65 = 0LL;
  v3 = a1 & 0xC000003B;
  if ( a1 >= 0 && (a1 & 0x40000000) == 0 )
  {
    v4 = 0;
    for ( i = (signed __int32 *)&v19; ; i += 4 )
    {
      if ( v3 == i[1] )
      {
        v6 = *i;
        v7 = _InterlockedCompareExchange(&dword_140C5B120, a1 & 0x4000003B | 0x80000000, *i);
        if ( v6 == v7 )
          break;
      }
      if ( (unsigned int)++v4 >= 0x13 )
        return 3221266435LL;
    }
    _m_prefetchw(&dword_140C5B11C);
    v9 = dword_140C5B11C;
    v10 = dword_140C5B11C & 0x40000000;
    if ( v20[2 * v4] )
      v11 = sub_14042A5E0((unsigned int)dword_140C5B11C, (unsigned int)a1);
    else
      v11 = 0;
    v12 = dword_140C5B11C & 0x3CFFFFC4;
    v13 = a1 & 0xC300003B;
    v14 = v9 & 0xC300003B;
    if ( v11 < 0 )
    {
      dword_140C5B11C = v12 | v14;
      _InterlockedExchange(&dword_140C5B120, v7);
      return (unsigned int)v11;
    }
    v15 = v13 | 0x40000000;
    if ( !v10 )
      v15 = v13;
    v16 = v12 | v15;
    dword_140C5B11C = v16;
    if ( v3 == 32 )
    {
      v17 = v16 | 0x40000000;
    }
    else
    {
      if ( v7 != 32 || !v2 )
        goto LABEL_20;
      v17 = v16 & 0xBFFFFFFF;
    }
    dword_140C5B11C = v17;
LABEL_20:
    _InterlockedExchange(&dword_140C5B120, v3);
    Buffer = __PAIR64__(v3, v7);
    ZwUpdateWnfStateData(&stru_14003BEA8, &Buffer, 8u, 0LL, 0LL, 0, 0);
    return (unsigned int)v11;
  }
  return 3221225485LL;
}
