/*
 * XREFs of sub_140200750 @ 0x140200750
 * Callers:
 *     sub_140200710 @ 0x140200710 (sub_140200710.c)
 *     sub_140512054 @ 0x140512054 (sub_140512054.c)
 * Callees:
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 */

__int64 __fastcall sub_140200750(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rsi
  __int64 *v8; // r10
  int v10; // edi
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // r11d
  __int64 v14; // r9
  int v15; // r13d
  __int64 v16; // rbx
  char v17; // si
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // r14d
  char v22; // di
  unsigned __int64 v23; // r12
  __int64 *v24; // r13
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r8
  unsigned int v29; // eax
  int v30; // edi
  int v32; // eax
  int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+24h] [rbp-54h]
  unsigned int v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h]
  __int64 v37; // [rsp+38h] [rbp-40h]
  __int64 v38; // [rsp+40h] [rbp-38h]
  __int64 v39; // [rsp+48h] [rbp-30h]
  unsigned int v40; // [rsp+98h] [rbp+20h]

  v6 = a6;
  v8 = a2;
  v10 = *a6;
  v34 = *a6;
  if ( *a6 <= 2u )
  {
    if ( !a2 )
      return 3221225485LL;
    while ( 1 )
    {
      v11 = *((unsigned int *)v8 + 10);
      if ( a3 < v11 )
        break;
      v8 = (__int64 *)*v8;
      a3 -= v11;
      if ( !v8 )
        return 3221225485LL;
    }
    v12 = *(_DWORD *)(a1 + 440);
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    v16 = 0LL;
    if ( v12 < 0x40 )
      v16 = ~((1LL << v12) - 1);
    if ( a4 )
    {
      do
      {
        if ( !v8 )
          break;
        v17 = 0;
        v18 = 0LL;
        v19 = a4;
        if ( *((_DWORD *)v8 + 10) - (int)a3 <= a4 )
          v19 = *((_DWORD *)v8 + 10) - a3;
        v20 = v19;
        v35 = v19;
        v21 = ((_WORD)a3 + *((_WORD *)v8 + 22)) & 0xFFF;
        a4 -= v19;
        v40 = a4;
        v15 += (v19 + (unsigned __int64)(((_WORD)a3 + *((_WORD *)v8 + 22)) & 0xFFF) + 4095) >> 12;
        v33 = v15;
        if ( v19 )
        {
          v22 = *(_BYTE *)(a1 + 434);
          v23 = *(_QWORD *)(a1 + 136);
          v24 = &v8[((unsigned __int64)(unsigned int)(a3 + *((_DWORD *)v8 + 11)) >> 12) + 6];
          do
          {
            v25 = v20;
            if ( 4096 - v21 <= (unsigned int)v20 )
              v25 = 4096 - v21;
            v26 = v25;
            v27 = v13 + 1;
            if ( v22 )
              v27 = v13;
            v37 = v26;
            v13 = v27;
            v28 = *v24 << 12;
            v39 = v21;
            v38 = v28 + v21;
            v36 = v28;
            if ( (v23 >= v26 + v38 - 1 || *(_DWORD *)(a1 + 512) == 3)
              && (*(_BYTE *)(a1 + 437)
               || (v32 = sub_14045693C(a1, v20, v28, v14),
                   LODWORD(v20) = v35,
                   v28 = v36,
                   ((v32 - 1) & (unsigned int)v38) == 0)
               && ((v32 - 1) & (unsigned int)v37) == 0) )
            {
              if ( v21 || v28 != v18 + 1 || ((v28 ^ v18) & v16) != 0 || ((v28 ^ v18) & 0x100000000LL) != 0 || v17 )
              {
                v14 = (unsigned int)(v14 + 1);
                v17 = 0;
              }
            }
            else
            {
              if ( v22 )
                ++v13;
              v14 = (unsigned int)(v14 + 1);
              v17 = 1;
            }
            ++v24;
            v21 = 0;
            v18 = v28 + v37 + v39 - 1;
            v20 = (unsigned int)(v20 - v37);
            v35 = v20;
          }
          while ( (_DWORD)v20 );
          a4 = v40;
          v15 = v33;
        }
        v8 = (__int64 *)*v8;
        LODWORD(a3) = 0;
      }
      while ( a4 );
      v10 = v34;
      v6 = a6;
    }
    if ( *(_BYTE *)(a1 + 434) || (_DWORD)v14 == 1 && !v13 )
    {
      v29 = 24 * v14 + 208;
      if ( v29 < 0xA8 )
        v29 = 168;
    }
    else
    {
      LODWORD(v14) = 1;
      v13 = v15;
      v29 = 232;
    }
    v30 = v10 - 1;
    if ( !v30 )
      goto LABEL_28;
    if ( v30 == 1 )
    {
      v6[4] = v15;
LABEL_28:
      v6[1] = v13;
      v6[2] = v14;
      v6[3] = v29;
      return 0LL;
    }
  }
  return 3221225659LL;
}
