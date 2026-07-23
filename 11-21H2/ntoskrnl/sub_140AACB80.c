/*
 * XREFs of sub_140AACB80 @ 0x140AACB80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403A7F70 @ 0x1403A7F70 (sub_1403A7F70.c)
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 *     sub_140AACFEC @ 0x140AACFEC (sub_140AACFEC.c)
 */

void __fastcall sub_140AACB80(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  int v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // rdi
  char v7; // r12
  char v8; // r15
  char v9; // bp
  unsigned int v10; // r14d
  __int64 v11; // r9
  __int64 v12; // r11
  int v13; // esi
  __int64 v14; // r10
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 m; // rbx
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // edi
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 n; // rbx
  int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 i; // r10
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 j; // r10
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 k; // r9
  int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 ii; // r10
  int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  _BYTE *v54; // [rsp+20h] [rbp-48h]
  __int64 v55; // [rsp+28h] [rbp-40h]
  __int64 v56; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v57; // [rsp+38h] [rbp-30h] BYREF

  v56 = 0LL;
  sub_1403A7C40();
  if ( byte_140CE1AE1 )
  {
    sub_140AACFEC(1LL, 6LL, 0LL);
    sub_140AACFEC(1LL, 4LL, 0LL);
    v4 = dword_140C0B244;
    v5 = qword_140C0B288;
    v6 = qword_140C0B298;
    v7 = byte_140C0B250;
    v8 = byte_140C0B251;
    v9 = byte_140C0B252;
    v56 = qword_140C0B248;
    v55 = qword_140C0B2D0;
    v54 = (_BYTE *)qword_140C0B288;
    v57 = (_BYTE *)qword_140C0B298;
    v10 = 10 * (dword_140C0B240 - dword_140C0B240 / (unsigned int)(dword_140C0DF94 - dword_140C0B244));
    v13 = 0;
    if ( (unsigned int)sub_1403A8368() == 24 )
    {
      if ( !v9 )
      {
        v31 = qword_140C0B290;
        v32 = 0LL;
        v33 = *(_QWORD *)(v6 + 24);
        for ( i = *(_QWORD *)(qword_140C0B290 + 24);
              (unsigned int)v32 < *(_DWORD *)(v31 + 12);
              v32 = (unsigned int)(v32 + 1) )
        {
          v35 = *(unsigned __int8 *)(v32 + i);
          if ( (_BYTE)v35 )
          {
            v36 = (v10 * v35) >> 10;
            *(_BYTE *)(v32 + v33) = v36;
            if ( v36 )
              ++v13;
          }
        }
        v5 = (__int64)v54;
      }
      v22 = 0;
      if ( !v7 )
      {
        v37 = *(_QWORD *)(v11 + 24);
        v38 = 0LL;
        for ( j = *(_QWORD *)(v5 + 24); (unsigned int)v38 < *(_DWORD *)(v11 + 12); v38 = (unsigned int)(v38 + 1) )
        {
          v40 = *(unsigned __int8 *)(v38 + v37);
          if ( (_BYTE)v40 )
          {
            v41 = (v10 * v40) >> 10;
            *(_BYTE *)(v38 + j) = v41;
            if ( v41 )
              ++v22;
          }
        }
      }
      v30 = 0;
      if ( !v8 )
      {
        v42 = 0LL;
        v43 = *(_QWORD *)(v12 + 24);
        for ( k = *(_QWORD *)(v55 + 24); (unsigned int)v42 < *(_DWORD *)(v12 + 12); v42 = (unsigned int)(v42 + 1) )
        {
          v45 = *(unsigned __int8 *)(v42 + v43);
          if ( (_BYTE)v45 )
          {
            v46 = (v10 * v45) >> 10;
            *(_BYTE *)(v42 + k) = v46;
            if ( v46 )
              ++v30;
          }
        }
      }
    }
    else
    {
      if ( !v9 )
      {
        v14 = qword_140C0B290;
        v15 = 0LL;
        v16 = *(_QWORD *)(v6 + 24);
        for ( m = *(_QWORD *)(qword_140C0B290 + 24);
              (unsigned int)v15 < *(_DWORD *)(v14 + 12);
              v15 = (unsigned int)(v15 + 4) )
        {
          if ( *(_DWORD *)(v15 + m) )
          {
            v18 = v13 + 1;
            v19 = (v10 * *(unsigned __int8 *)(v15 + m)) >> 10;
            *(_BYTE *)(v15 + v16) = v19;
            if ( !v19 )
              v18 = v13;
            v13 = v18 + 1;
            v20 = (v10 * *(unsigned __int8 *)((unsigned int)(v15 + 1) + m)) >> 10;
            *(_BYTE *)((unsigned int)(v15 + 1) + v16) = v20;
            if ( !v20 )
              v13 = v18;
            v21 = (v10 * *(unsigned __int8 *)((unsigned int)(v15 + 2) + m)) >> 10;
            *(_BYTE *)((unsigned int)(v15 + 2) + v16) = v21;
            if ( v21 )
              ++v13;
          }
        }
        v5 = (__int64)v54;
      }
      v22 = 0;
      if ( !v7 )
      {
        v23 = *(_QWORD *)(v11 + 24);
        v24 = 0LL;
        for ( n = *(_QWORD *)(v5 + 24); (unsigned int)v24 < *(_DWORD *)(v11 + 12); v24 = (unsigned int)(v24 + 4) )
        {
          if ( *(_DWORD *)(v24 + v23) )
          {
            v26 = v22 + 1;
            v27 = (v10 * *(unsigned __int8 *)(v24 + v23)) >> 10;
            *(_BYTE *)(v24 + n) = v27;
            if ( !v27 )
              v26 = v22;
            v22 = v26 + 1;
            v28 = (v10 * *(unsigned __int8 *)((unsigned int)(v24 + 1) + v23)) >> 10;
            *(_BYTE *)((unsigned int)(v24 + 1) + n) = v28;
            if ( !v28 )
              v22 = v26;
            v29 = (v10 * *(unsigned __int8 *)((unsigned int)(v24 + 2) + v23)) >> 10;
            *(_BYTE *)((unsigned int)(v24 + 2) + n) = v29;
            if ( v29 )
              ++v22;
          }
        }
      }
      v30 = 0;
      if ( !v8 )
      {
        v47 = 0LL;
        v48 = *(_QWORD *)(v12 + 24);
        for ( ii = *(_QWORD *)(v55 + 24); (unsigned int)v47 < *(_DWORD *)(v12 + 12); v47 = (unsigned int)(v47 + 4) )
        {
          if ( *(_DWORD *)(v47 + v48) )
          {
            v50 = v30 + 1;
            v51 = (v10 * *(unsigned __int8 *)(v47 + v48)) >> 10;
            *(_BYTE *)(v47 + ii) = v51;
            if ( !v51 )
              v50 = v30;
            v30 = v50 + 1;
            v52 = (v10 * *(unsigned __int8 *)((unsigned int)(v47 + 1) + v48)) >> 10;
            *(_BYTE *)((unsigned int)(v47 + 1) + ii) = v52;
            if ( !v52 )
              v30 = v50;
            v53 = (v10 * *(unsigned __int8 *)((unsigned int)(v47 + 2) + v48)) >> 10;
            *(_BYTE *)((unsigned int)(v47 + 2) + ii) = v53;
            if ( v53 )
              ++v30;
          }
        }
      }
    }
    sub_140AACFEC(0LL, 4LL, 0LL);
    sub_140AACFEC(1LL, 3LL, 0LL);
    if ( !v9 )
    {
      sub_1403A7F70(v57, (__int64)&v56);
      v9 = v13 == 0;
    }
    if ( !v7 )
    {
      if ( !v4 && !v22 || (sub_1403A7F70(v54, (__int64)&xmmword_140C0B260), !v22) )
        v7 = 1;
    }
    if ( !v8 )
    {
      if ( !v4 && !v30 || (sub_1403A7F70((_BYTE *)v55, (__int64)&xmmword_140C0B2A0), !v30) )
        v8 = 1;
    }
    sub_140AACFEC(0LL, 3LL, 0LL);
    sub_140AACFEC(0LL, 6LL, &v57);
    if ( v13 || v30 || v22 )
    {
      byte_140C0B250 = v7;
      byte_140C0B251 = v8;
      dword_140C0B240 = v10 / 0xA;
      dword_140C0B244 = v4 + 1;
      byte_140C0B252 = v9;
    }
    else
    {
      byte_140CE1AE1 = 0;
      KeCancelTimer(&stru_140D00980);
      KeSetEvent(&stru_140D009C0, 0, 0);
    }
  }
  sub_1403A7BF0();
}
