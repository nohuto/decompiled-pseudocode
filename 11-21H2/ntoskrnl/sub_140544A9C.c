/*
 * XREFs of sub_140544A9C @ 0x140544A9C
 * Callers:
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 * Callees:
 *     HalEnumerateProcessors @ 0x1403DD110 (HalEnumerateProcessors.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405440C4 @ 0x1405440C4 (sub_1405440C4.c)
 *     sub_140544868 @ 0x140544868 (sub_140544868.c)
 *     sub_1405449CC @ 0x1405449CC (sub_1405449CC.c)
 *     sub_140647C04 @ 0x140647C04 (sub_140647C04.c)
 */

__int64 __fastcall sub_140544A9C(unsigned int a1, __int64 a2)
{
  unsigned int v4; // r15d
  int v5; // r13d
  int v6; // edx
  unsigned int v7; // esi
  _WORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rbx
  int v15; // r12d
  int v16; // r11d
  unsigned int v17; // r10d
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // edx
  _BYTE *v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  _BYTE *v26; // rsi
  _BYTE *v27; // rax
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rcx
  _BYTE *v31; // rbx
  unsigned int v32; // ecx
  int v33; // r8d
  _DWORD *v34; // rdx
  __int64 v35; // rcx
  unsigned __int16 v37[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v38; // [rsp+24h] [rbp-3Ch] BYREF
  int v39; // [rsp+28h] [rbp-38h]
  int v40; // [rsp+2Ch] [rbp-34h]
  int v41; // [rsp+30h] [rbp-30h]
  unsigned int v42; // [rsp+34h] [rbp-2Ch]
  unsigned int v43; // [rsp+38h] [rbp-28h]
  int v44; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v45; // [rsp+40h] [rbp-20h] BYREF

  v37[0] = 0;
  v43 = 0;
  v38 = 0;
  v44 = 0;
  v42 = 0;
  v45 = 0LL;
  if ( (dword_140D068B8 & 1) == 0 )
  {
    dword_140D06B88 = 0;
    dword_140D069A0 = 0;
    dword_140D06980 = 0;
    dword_140D06A98 = 0;
    dword_140D06A94 = 0;
    byte_140D068E4 = 0;
  }
  if ( (dword_140D068B8 & 0x800) != 0 )
  {
    dword_140D069A0 = 0;
    dword_140D06980 = 0;
    dword_140D06A98 = 0;
    dword_140D06A94 = 1;
    byte_140D068E4 = 0;
  }
  sub_140647C04(&v45);
  v4 = 64;
  v5 = ~(*((_DWORD *)KeGetCurrentPrcb() + 39) * *((_DWORD *)KeGetCurrentPrcb() + 38) - 1);
  if ( (unsigned int)v45 < 0x40 )
    v4 = v45;
  if ( dword_140D069A0 && dword_140D069A0 < v4 && !dword_140D06980 )
    v4 = dword_140D069A0;
  v39 = HalEnumerateProcessors(dword_140D06A14);
  v6 = v39;
  v7 = 0;
  if ( !a1 )
  {
LABEL_26:
    v13 = 1;
    v14 = a2 + 1;
    *(_BYTE *)(a2 + 1) = 1;
    v15 = 1;
    v40 = 1;
    v16 = 1;
LABEL_27:
    v41 = v16;
    while ( 1 )
    {
      v17 = 0;
      if ( a1 )
      {
        v18 = a2;
        do
        {
          if ( *(_BYTE *)v18 )
          {
            if ( *(_BYTE *)(v18 + 1)
              || (v19 = *(unsigned __int16 *)(v18 + 8), (unsigned __int16)v19 >= (unsigned __int16)word_140D05000)
              || (*(_BYTE *)(qword_140D31700[v19] + 10) & 2) == 0
              || v15 == 1024
              || v15 == v6
              || dword_140D068E8 && v15 == dword_140D068E8
              || dword_140D06ABC && v15 == dword_140D06ABC
              || dword_140D06A08 && v17 >= dword_140D06A08
              || dword_140D06B88 && v15 == dword_140D06B88 )
            {
LABEL_56:
              *(_BYTE *)v18 = 0;
            }
            else
            {
              if ( v16 == v4 )
              {
                v20 = 0LL;
                while ( *(_WORD *)(a2 + 40 * v20 + 8) != (_WORD)v19 || !*(_BYTE *)(a2 + 40 * v20 + 1) )
                {
                  v20 = (unsigned int)(v20 + 1);
                  if ( (unsigned int)v20 >= a1 )
                  {
                    if ( (_DWORD)v20 == a1 )
                      goto LABEL_56;
                    break;
                  }
                }
              }
              if ( v13 == dword_140D06A14 )
              {
                v21 = v14;
                v22 = 0;
                while ( (v5 & *(_DWORD *)(v18 + 4)) != (v5 & *(_DWORD *)(v21 + 3)) || !*(_BYTE *)v21 )
                {
                  ++v22;
                  v21 += 40LL;
                  if ( v22 >= a1 )
                  {
                    if ( v22 != a1 )
                      break;
                    goto LABEL_56;
                  }
                }
              }
            }
          }
          v6 = v39;
          ++v17;
          v18 += 40LL;
        }
        while ( v17 < a1 );
        v23 = (_BYTE *)a2;
        v24 = 0;
        while ( !*v23 )
        {
          ++v24;
          v23 += 40;
          if ( v24 >= a1 )
            goto LABEL_63;
        }
      }
      else
      {
        v24 = 0;
LABEL_63:
        if ( v24 == a1 )
          return v42;
      }
      v25 = 0;
      if ( a1 )
      {
        v26 = (_BYTE *)a2;
        do
        {
          if ( *v26 )
            sub_1405440C4(a1, a2, v25);
          ++v25;
          v26 += 40;
        }
        while ( v25 < a1 );
        v27 = (_BYTE *)a2;
        v28 = 0LL;
        while ( !*v27 )
        {
          v28 = (unsigned int)(v28 + 1);
          v27 += 40;
          if ( (unsigned int)v28 >= a1 )
          {
            v29 = 0LL;
            v28 = 0xFFFFFFFFLL;
            goto LABEL_74;
          }
        }
        v29 = (unsigned int)(v28 + 1);
        if ( (unsigned int)v29 >= a1 )
          goto LABEL_79;
LABEL_74:
        v30 = 5 * v29;
        v31 = (_BYTE *)(a2 + 40 * v29);
        do
        {
          if ( *v31 && (unsigned int)sub_140544868(v30, a2, v29, v28) == -1 )
            v28 = (unsigned int)v29;
          LODWORD(v29) = v29 + 1;
          v31 += 40;
        }
        while ( (unsigned int)v29 < a1 );
LABEL_79:
        v13 = v40;
        v16 = v41;
      }
      else
      {
        v28 = 0xFFFFFFFFLL;
      }
      ++v15;
      v32 = 0;
      v33 = v5 & *(_DWORD *)(a2 + 40 * v28 + 4);
      *(_BYTE *)(a2 + 40 * v28 + 1) = 1;
      if ( a1 )
      {
        v34 = (_DWORD *)(a2 + 4);
        while ( v32 == (_DWORD)v28 || !*((_BYTE *)v34 - 3) || (v5 & *v34) != v33 )
        {
          ++v32;
          v34 += 10;
          if ( v32 >= a1 )
            goto LABEL_86;
        }
      }
      else
      {
LABEL_86:
        if ( v32 == a1 )
          v40 = ++v13;
      }
      v35 = 0LL;
      if ( a1 )
      {
        while ( 1 )
        {
          if ( (_DWORD)v35 != (_DWORD)v28 )
          {
            if ( *(_BYTE *)(a2 + 40 * v35 + 1) )
            {
              v14 = a2 + 1;
              v6 = v39;
              if ( *(_WORD *)(a2 + 40 * v35 + 8) == *(_WORD *)(a2 + 40 * v28 + 8) )
                break;
            }
          }
          v35 = (unsigned int)(v35 + 1);
          if ( (unsigned int)v35 >= a1 )
            goto LABEL_93;
        }
      }
      else
      {
LABEL_93:
        v6 = v39;
        v14 = a2 + 1;
        if ( (_DWORD)v35 == a1 )
        {
          ++v16;
          v14 = a2 + 1;
          goto LABEL_27;
        }
      }
    }
  }
  v8 = (_WORD *)(a2 + 10);
  while ( 1 )
  {
    *((_BYTE *)v8 - 10) = 1;
    v9 = sub_1405449CC(v7, v8 - 3, v37);
    v42 = v9;
    v10 = v9;
    if ( v9 != -1073741275 )
      break;
    v42 = 0;
    *((_BYTE *)v8 - 10) = 0;
LABEL_24:
    ++v7;
    v8 += 20;
    if ( v7 >= a1 )
    {
      v6 = v39;
      goto LABEL_26;
    }
  }
  if ( v9 >= 0 )
  {
    v11 = qword_140D06DE0;
    v12 = v37[0];
    *(v8 - 1) = v37[0];
    if ( v11 )
    {
      if ( (int)sub_14042A5E0(v12, &v44) >= 0 && qword_140D06DD0 && (int)sub_14042A5E0(v43, &v38) >= 0 )
      {
        *v8 = v38;
LABEL_23:
        v8[1] = *v8;
        goto LABEL_24;
      }
      LOWORD(v12) = v37[0];
    }
    *v8 = v12;
    goto LABEL_23;
  }
  return v10;
}
