/*
 * XREFs of sub_14033A030 @ 0x14033A030
 * Callers:
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14032E130 @ 0x14032E130 (sub_14032E130.c)
 *     sub_14032E970 @ 0x14032E970 (sub_14032E970.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033A4C0 @ 0x14033A4C0 (sub_14033A4C0.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405A6A34 @ 0x1405A6A34 (sub_1405A6A34.c)
 */

__int64 __fastcall sub_14033A030(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v8; // ebp
  int v9; // r14d
  unsigned __int64 v10; // r12
  ULONG_PTR v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  unsigned __int8 v14; // di
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int8 v20; // al
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r8d
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  int v32; // r8d
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  int v35; // eax
  unsigned __int8 v36; // [rsp+30h] [rbp-148h]
  unsigned int v37; // [rsp+34h] [rbp-144h]
  unsigned int v38; // [rsp+38h] [rbp-140h]
  unsigned __int64 v39; // [rsp+40h] [rbp-138h] BYREF
  __int64 v40; // [rsp+48h] [rbp-130h]
  unsigned __int64 v41; // [rsp+50h] [rbp-128h]
  __int64 v42; // [rsp+58h] [rbp-120h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-118h]
  int v44; // [rsp+70h] [rbp-108h] BYREF
  __int16 v45; // [rsp+74h] [rbp-104h]
  __int16 v46; // [rsp+76h] [rbp-102h]
  __int64 v47; // [rsp+78h] [rbp-100h]
  __int64 v48; // [rsp+80h] [rbp-F8h]
  __int64 v49; // [rsp+88h] [rbp-F0h]
  _BYTE v50[152]; // [rsp+90h] [rbp-E8h] BYREF

  v43 = a3;
  v46 = 0;
  v42 = 0LL;
  memset(v50, 0, sizeof(v50));
  if ( (unsigned int)sub_140319990(a2) )
    return 3221225541LL;
  v8 = 1;
  v9 = 4;
  v37 = 4;
  v10 = 0LL;
  v38 = 0;
  v47 = 20LL;
  v44 = 1;
  v45 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v41 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v41;
  v12 = a1 + 1664;
  v13 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = v12;
  v36 = sub_1402CF4F0(v12);
  v14 = v36;
  if ( v41 > v13 )
    goto LABEL_17;
  do
  {
    if ( (v11 & 0xFFF) != 0 )
    {
      if ( v10 )
        goto LABEL_5;
    }
    else if ( v10 )
    {
      sub_14032F1B0((__int64)&v44);
      sub_14020D8D0(v12, v10);
    }
    sub_14032CE60(v11, (__int64)&v44, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v36, 0);
    v10 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_5:
    v15 = *(_QWORD *)v11;
    if ( sub_140317A80(v11)
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v24 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 8 * ((v11 >> 3) & 0x1FF));
        v26 = v15 | 0x20;
        if ( (v25 & 0x20) == 0 )
          v26 = v15;
        v15 = v26;
        if ( (v25 & 0x42) != 0 )
          v15 = v26 | 0x42;
      }
    }
    v39 = v15;
    if ( !v15 )
      goto LABEL_25;
    if ( (v15 & 1) != 0 )
    {
      v16 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v39) >> 12) & 0xFFFFFFFFFFLL;
      v17 = 48 * v16 - 0x220000000000LL;
      if ( *(_WORD *)(v17 + 32) <= 1u || (v8 & 7) == 4 )
      {
        if ( *(__int64 *)(v17 + 40) >= 0 )
        {
          if ( ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F) == (unsigned __int64)v37 )
          {
            v8 = sub_1405A6A34(a2, 48 * v16 - 0x220000000000LL, v8);
LABEL_13:
            sub_14032E130(a2, v11, v8, v16, (__int64)&v44);
            v9 = v37;
            goto LABEL_14;
          }
        }
        else
        {
          v18 = sub_140319600(a2, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 0, &v42);
          v19 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
          if ( v19 == v18 )
          {
            v20 = sub_14033A410(v19, (__int64)(v11 << 25) >> 16);
            v21 = sub_14033A4C0((__int64)(v11 << 25) >> 16, v20);
            if ( v21 == v37 || !v21 && ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F) == v37 )
            {
              sub_14033A410(v22, (__int64)(v11 << 25) >> 16);
              sub_14033A510(
                (((unsigned __int64)((__int64)(v11 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                0x80000000LL);
              goto LABEL_13;
            }
          }
        }
      }
      goto LABEL_25;
    }
    if ( (v15 & 0x400) != 0 )
    {
      if ( (v8 & 7) != 4 )
        goto LABEL_25;
      if ( sub_1402806A0(v15) )
      {
        v28 = v15 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v8 & 0x1F));
        v39 = v28;
        v29 = v28;
        if ( !v27 )
          goto LABEL_73;
        if ( (unsigned int)sub_140229550() )
        {
          v30 = v15 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v8 & 0x1F));
          if ( !HIBYTE(word_140C51864) && (v28 & 1) != 0 )
            v30 = v28 | 0x8000000000000000uLL;
          *(_QWORD *)v11 = v30;
          sub_1402294F0(v11, v30);
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          v29 = v15 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v8 & 0x1F));
          if ( (v15 & 1) != 0 )
            v29 = v28 | 0x8000000000000000uLL;
LABEL_73:
          *(_QWORD *)v11 = v29;
        }
        else
        {
          *(_QWORD *)v11 = v28;
        }
LABEL_14:
        v11 += 8LL;
        goto LABEL_15;
      }
      v31 = sub_1402CCC50(32 * (v8 & 0x1F | 0xFFFFFFFFF8000020uLL));
      v39 = v31;
      if ( v32 )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v34 = v33;
          if ( !HIBYTE(word_140C51864) && (v33 & 1) != 0 )
            v34 = v33 | 0x8000000000000000uLL;
          *(_QWORD *)v11 = v34;
          sub_1402294F0(v11, v34);
          goto LABEL_25;
        }
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        {
          *(_QWORD *)v11 = v33;
LABEL_25:
          if ( v10 != ((v43 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
          {
            sub_14032F1B0((__int64)&v44);
            if ( v10 )
            {
              sub_14020D8D0(v40, v10);
              v10 = 0LL;
            }
          }
          v9 = 1;
          v38 = -1073741755;
          v13 = v11 - 8;
          v37 = 1;
          v11 = v41;
          v8 = 4;
          goto LABEL_15;
        }
        v31 = v33;
        if ( (v33 & 1) != 0 )
          v31 = v33 | 0x8000000000000000uLL;
      }
      *(_QWORD *)v11 = v31;
      goto LABEL_25;
    }
    if ( (v15 & 0x800) == 0 )
    {
      if ( ((v15 >> 5) & 0x1F) == v9 )
      {
        v29 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)(32 * v8)) & 0x3E0;
        v39 = v29;
        goto LABEL_73;
      }
      goto LABEL_25;
    }
    v35 = sub_14032E970(a2, v11, v8, (v8 & 7) == 4);
    if ( !v35 )
      goto LABEL_14;
    if ( v35 != 2 )
      goto LABEL_25;
LABEL_15:
    v12 = v40;
  }
  while ( v11 <= v13 );
  v14 = v36;
LABEL_17:
  sub_14032F1B0((__int64)&v44);
  if ( v10 )
    sub_14020D8D0(v12, v10);
  sub_1402B0CE0(v12, v14);
  return v38;
}
