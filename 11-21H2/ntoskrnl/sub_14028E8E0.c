/*
 * XREFs of sub_14028E8E0 @ 0x14028E8E0
 * Callers:
 *     sub_1405A2D90 @ 0x1405A2D90 (sub_1405A2D90.c)
 *     sub_140700F70 @ 0x140700F70 (sub_140700F70.c)
 *     sub_140753B20 @ 0x140753B20 (sub_140753B20.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14028ECC8 @ 0x14028ECC8 (sub_14028ECC8.c)
 *     sub_14028ECFC @ 0x14028ECFC (sub_14028ECFC.c)
 *     sub_14028F080 @ 0x14028F080 (sub_14028F080.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     sub_1403106A4 @ 0x1403106A4 (sub_1403106A4.c)
 *     sub_1403106E0 @ 0x1403106E0 (sub_1403106E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14028E8E0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r12d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int8 v14; // r14
  int v15; // ebp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // r10
  __int64 v29; // r11
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  int v32; // r14d
  int v33; // r12d
  __int64 v34; // rbx
  bool v35; // zf
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v39; // r12
  __int64 v40; // rcx
  unsigned __int64 i; // rbp
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int8 v45; // [rsp+30h] [rbp-138h]
  int v46; // [rsp+34h] [rbp-134h]
  unsigned int v47; // [rsp+38h] [rbp-130h] BYREF
  int v48; // [rsp+3Ch] [rbp-12Ch]
  int v49; // [rsp+40h] [rbp-128h]
  unsigned __int64 *v50; // [rsp+48h] [rbp-120h]
  __int64 v51; // [rsp+50h] [rbp-118h]
  __int64 v52; // [rsp+58h] [rbp-110h]
  int v53; // [rsp+60h] [rbp-108h] BYREF
  __int16 v54; // [rsp+64h] [rbp-104h]
  __int16 v55; // [rsp+66h] [rbp-102h]
  __int64 v56; // [rsp+68h] [rbp-100h]
  __int64 v57; // [rsp+70h] [rbp-F8h]
  __int64 v58; // [rsp+78h] [rbp-F0h]
  _BYTE v59[152]; // [rsp+80h] [rbp-E8h] BYREF

  v4 = a3;
  v51 = a3;
  v55 = 0;
  v47 = 0;
  memset(v59, 0, sizeof(v59));
  v46 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *((_QWORD *)KeGetCurrentThread() + 23);
  v13 = v12 + 1664;
  v52 = *(_QWORD *)(v12 + 1680);
  v48 = a4 & 1;
  if ( (a4 & 1) != 0 )
    v50 = (unsigned __int64 *)(sub_1402EE0E0(v4, 4LL) + 8);
  else
    v50 = 0LL;
  v56 = 20LL;
  v53 = 1;
  v54 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v45 = sub_1402CF4F0(v13);
  v14 = v45;
  if ( v10 <= v11 )
  {
    v15 = a4 & 2;
    v49 = v15;
    while ( 1 )
    {
      if ( v8 )
      {
        sub_14032F1B0(&v53);
        sub_14020D8D0(v13, v8);
        v8 = 0LL;
        if ( (unsigned int)sub_1403531F0(v13) || KeShouldYieldProcessor() )
        {
          sub_1402B0CE0(v13, v14);
          sub_1402CF4F0(v13);
        }
      }
      if ( v15 )
        _InterlockedIncrement64((volatile signed __int64 *)(v52 + 600));
      v16 = sub_14028F080(v10, v11, 0, v14, 1, (__int64)&v47);
      v19 = v16;
      v20 = v16;
      if ( v16 )
      {
        v17 = 0xFFFFF68000000000uLL;
        v18 = 0x7FFFFFFFF8LL;
        v8 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v47 )
        {
          v20 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v39 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v47 > 1 )
          {
            v40 = v47 - 1;
            do
            {
              v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v39 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v40;
            }
            while ( v40 );
          }
          v8 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          for ( i = v20 + 8; (i & 0xFFF) != 0; i += 8LL )
          {
            if ( i > v39 )
              break;
            if ( (sub_140317A10(i) & 0x81) != 0x81 )
              break;
          }
          v9 = v46;
          v21 = i - 8;
        }
        else
        {
          v21 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v21 > v11 )
            v21 = v11;
        }
      }
      else
      {
        v21 = v11;
      }
      if ( v48 )
      {
        v46 = 1;
        sub_14028ECC8(
          v51,
          v17,
          v18,
          *(unsigned int *)(v51 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v51 + 32) << 32));
        v22 = sub_1402CFEB0(v10);
        v25 = ((v22 >> 12) - v23) / v24;
        v26 = sub_1402CFEB0(v21 + 8);
        v30 = ((*(unsigned int *)(v29 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 32)) << 12) | 0xFFF;
        if ( v26 > v30 )
        {
          v31 = *v50;
        }
        else
        {
          v30 = ((v26 >> 12) - v27) % v28;
          v31 = ((v26 >> 12) - v27) / v28;
        }
        sub_1403106E0(v29, v30);
        RtlClearBitsEx(v50, v25, v31 - v25);
        v9 = 1;
      }
      if ( !v19 )
        goto LABEL_29;
      if ( v20 > v21 )
        goto LABEL_26;
      v32 = v49;
      v33 = v48;
      do
      {
        v34 = *(_QWORD *)v20;
        if ( (unsigned int)sub_140317A80(v20)
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v34 & 1) != 0 )
        {
          if ( (v34 & 0x20) != 0 )
          {
            v35 = (v34 & 0x42) == 0;
            if ( (v34 & 0x42) != 0 )
              goto LABEL_21;
          }
          v17 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v17 )
          {
            v42 = *(_QWORD *)(v17 + 8 * ((v20 >> 3) & 0x1FF));
            v17 = v34 | 0x20;
            if ( (v42 & 0x20) == 0 )
              v17 = v34;
            v34 = v17;
            if ( (v42 & 0x42) != 0 )
              v34 = v17 | 0x42;
          }
        }
        v35 = (v34 & 0x42) == 0;
LABEL_21:
        if ( !v35 && (v34 & 1) != 0 )
        {
          if ( v33 || (!v32 || v34 >= 0) && (v43 = sub_1402CFEB0(v20), (sub_14033A410(v44, v43) & 0xF) != 9) )
            sub_14028ECFC(v20, &v53);
        }
        v20 += 8LL;
      }
      while ( v20 <= v21 );
      v9 = v46;
LABEL_26:
      if ( v9 )
      {
        LOBYTE(v17) = 2;
        sub_1403106A4(v51, v17);
        v9 = 0;
        v46 = 0;
      }
      v36 = sub_1402CFEB0(v20);
      v15 = v49;
      v10 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = v45;
      if ( v10 > v11 )
      {
LABEL_29:
        v4 = v51;
        v14 = v45;
        break;
      }
    }
  }
  sub_14032F1B0(&v53);
  if ( v9 )
  {
    LOBYTE(v37) = 2;
    sub_1403106A4(v4, v37);
  }
  if ( v8 )
    sub_14020D8D0(v13, v8);
  return sub_1402B0CE0(v13, v14);
}
