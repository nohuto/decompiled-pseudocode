/*
 * XREFs of sub_180096660 @ 0x180096660
 * Callers:
 *     sub_180049BBC @ 0x180049BBC (sub_180049BBC.c)
 *     sub_180061C80 @ 0x180061C80 (sub_180061C80.c)
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 *     sub_180095FA0 @ 0x180095FA0 (sub_180095FA0.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_180048D74 @ 0x180048D74 (sub_180048D74.c)
 *     sub_18005C3E0 @ 0x18005C3E0 (sub_18005C3E0.c)
 *     sub_180096358 @ 0x180096358 (sub_180096358.c)
 *     sub_180096500 @ 0x180096500 (sub_180096500.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180096660(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r8
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  __int128 v20; // xmm4
  __int64 v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  int v28; // r8d
  __int64 v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // r8
  char *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int128 v37; // [rsp+28h] [rbp-29h] BYREF
  char *v38; // [rsp+38h] [rbp-19h] BYREF
  __int64 v39; // [rsp+40h] [rbp-11h]
  __int64 v40; // [rsp+48h] [rbp-9h]
  char *v41; // [rsp+50h] [rbp-1h] BYREF
  __int64 v42; // [rsp+58h] [rbp+7h]
  __int64 v43; // [rsp+60h] [rbp+Fh]
  __int64 v44[2]; // [rsp+68h] [rbp+17h] BYREF
  __int64 v45[2]; // [rsp+78h] [rbp+27h] BYREF
  _QWORD v46[2]; // [rsp+88h] [rbp+37h] BYREF
  __int128 v47; // [rsp+98h] [rbp+47h] BYREF

  v6 = a1[14];
  if ( v6 )
  {
    LOBYTE(v7) = sub_180048D74(v6, a2);
    if ( (_BYTE)v7 )
      return v7;
    v8 = sub_18002B9E0((__int64)a1);
    sub_180039EBC(v8, &v38);
    v9 = 0;
    v10 = v39;
    v11 = v38;
    if ( (v39 - (__int64)v38) >> 4 )
    {
      v12 = 0LL;
      do
      {
        v13 = 2 * v12;
        v14 = *(_QWORD *)&v11[8 * v13 + 8];
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
          v14 = *(_QWORD *)&v11[8 * v13 + 8];
        }
        v45[0] = *(_QWORD *)&v11[8 * v13];
        v45[1] = v14;
        v15 = sub_180028544(v45[0]);
        sub_18005C3E0((__int64)a1, v15);
        sub_180010910((__int64)v45);
        ++v9;
        v10 = v39;
        v11 = v38;
        v12 = v9;
      }
      while ( v9 < (unsigned __int64)((v39 - (__int64)v38) >> 4) );
    }
    if ( v11 )
    {
      sub_1800126E8((__int64)v11, v10);
      sub_180010884(v38, (v40 - (_QWORD)v38) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  else
  {
    v16 = sub_18001D684();
    if ( v16 )
    {
      *(_DWORD *)(v16 + 8) = 1;
      *(_DWORD *)(v16 + 12) = 1;
      *(_QWORD *)v16 = &std::_Ref_count_obj2<Spectre::Engine::RenderStateDesc>::`vftable';
      sub_180096358(v16 + 16);
    }
    else
    {
      v17 = 0LL;
    }
    v47 = 0LL;
    v46[0] = a1[14];
    a1[14] = v17 + 16;
    v46[1] = a1[15];
    a1[15] = v17;
    sub_180010910((__int64)v46);
    sub_180010910((__int64)&v47);
  }
  v18 = *(_OWORD *)(a2 + 16);
  v19 = *(_OWORD *)(a2 + 32);
  v20 = *(_OWORD *)(a2 + 48);
  v21 = *(_QWORD *)(a2 + 64);
  v22 = a1[14];
  *(_OWORD *)v22 = *(_OWORD *)a2;
  *(_OWORD *)(v22 + 16) = v18;
  *(_OWORD *)(v22 + 32) = v19;
  *(_OWORD *)(v22 + 48) = v20;
  *(_QWORD *)(v22 + 64) = v21;
  if ( a3 )
    sub_18002BCC0((__int64)a1, 1, 1);
  LOBYTE(v7) = sub_18002BA14((__int64)a1, 1);
  if ( (_BYTE)v7 )
  {
    v24 = sub_18002B9E0(v23);
    if ( a3 )
    {
      v37 = 0LL;
      v25 = *(_QWORD *)(a3 + 16);
      if ( !v25 )
LABEL_32:
        sub_1800120F4();
      v26 = *(_DWORD *)(v25 + 8);
      do
      {
        if ( !v26 )
          goto LABEL_32;
        v27 = v26;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26);
      }
      while ( v27 != v26 );
      v37 = *(_OWORD *)(a3 + 8);
      sub_180096500(a1, (__int64 *)&v37);
      sub_180010910((__int64)&v37);
      sub_18002BCC0((__int64)a1, 2, 0);
      LOBYTE(v7) = sub_18002BCC0(v29, v28 + 4, v28);
    }
    else
    {
      sub_180039EBC(v24, &v41);
      v30 = 0;
      v31 = v42;
      v32 = v41;
      v7 = (v42 - (__int64)v41) >> 4;
      if ( v7 )
      {
        v33 = 0LL;
        do
        {
          v34 = 2 * v33;
          v35 = *(_QWORD *)&v32[8 * v34 + 8];
          if ( v35 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
            v35 = *(_QWORD *)&v32[8 * v34 + 8];
          }
          v44[0] = *(_QWORD *)&v32[8 * v34];
          v44[1] = v35;
          sub_180096500(a1, v44);
          sub_180010910((__int64)v44);
          ++v30;
          v31 = v42;
          v32 = v41;
          v7 = (v42 - (__int64)v41) >> 4;
          v33 = v30;
        }
        while ( v30 < v7 );
      }
      if ( v32 )
      {
        sub_1800126E8((__int64)v32, v31);
        LOBYTE(v7) = sub_180010884(v41, (v43 - (_QWORD)v41) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  return v7;
}
