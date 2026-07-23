/*
 * XREFs of sub_140266CA8 @ 0x140266CA8
 * Callers:
 *     sub_1402452D4 @ 0x1402452D4 (sub_1402452D4.c)
 *     sub_140267B58 @ 0x140267B58 (sub_140267B58.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140266CA8(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  unsigned int v5; // r13d
  __int64 v7; // r10
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __int128 v11; // xmm0
  int FirstSetRightGroupAffinity; // eax
  int v13; // r9d
  int v14; // r10d
  unsigned int i; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  char v18; // cl
  int v19; // esi
  unsigned int v21; // r14d
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  int v24; // r8d
  unsigned int v25; // eax
  __int64 v26; // r11
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  unsigned int v29; // esi
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // r10
  unsigned __int64 v33; // rax
  int v34; // r9d
  int *v35; // r10
  int v36; // r11d
  unsigned int v37; // esi
  __int64 v38; // r14
  __int64 v39; // rcx
  bool v40; // zf
  int v41; // [rsp+20h] [rbp-40h]
  __int64 v42; // [rsp+28h] [rbp-38h]
  __int128 v43; // [rsp+30h] [rbp-30h] BYREF
  __int128 v44; // [rsp+40h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 156);
  v4 = 0;
  v5 = dword_140C50728;
  v44 = 0LL;
  v41 = a3;
  v7 = *(_QWORD *)(120LL * a2 + qword_140C506E0 + 112);
  v42 = v7;
  if ( v3 )
  {
    v8 = 0LL;
    v9 = v3;
    do
    {
      v10 = *(_QWORD *)(v8 + *(_QWORD *)(a1 + 144) + 8);
      v11 = *(_OWORD *)(v10 + 280);
      *(_DWORD *)(v10 + 296) = 0;
      v43 = v11;
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(&v43);
      v13 = 0;
      v14 = 0;
      for ( i = 0; i < v5; ++i )
      {
        v16 = qword_140D088C0[FirstSetRightGroupAffinity];
        if ( !v16 )
          break;
        v17 = *(_QWORD *)(v16 + 8);
        if ( v17 == *(_QWORD *)(v16 + 24) )
        {
          ++v13;
        }
        else if ( v17 == *(_QWORD *)(v10 + 272) )
        {
          v14 = 1;
        }
        ++FirstSetRightGroupAffinity;
      }
      v18 = *(_BYTE *)(v8 + *(_QWORD *)(a1 + 144) + 4) & 2;
      if ( v13 == i )
      {
        if ( v18 )
        {
          ++*(_DWORD *)(a1 + 240);
          ++HIDWORD(v44);
          *(_DWORD *)(v10 + 296) = 3;
        }
        else
        {
          ++*(_DWORD *)(a1 + 244);
        }
      }
      else if ( !v18 )
      {
        if ( v14 && (v13 == i - 1 || i == 1) )
        {
          ++*(_DWORD *)(a1 + 252);
          ++DWORD2(v44);
          *(_DWORD *)(v10 + 296) = 2;
        }
        else
        {
          ++*(_DWORD *)(a1 + 248);
          ++DWORD1(v44);
          *(_DWORD *)(v10 + 296) = 1;
        }
      }
      v8 += 40LL;
      --v9;
    }
    while ( v9 );
    v7 = v42;
    a3 = v41;
  }
  v19 = DWORD1(v44);
  if ( DWORD1(v44) && HIDWORD(v44) )
  {
    v21 = 0;
    if ( DWORD1(v44) > HIDWORD(v44) )
      v19 = HIDWORD(v44);
    if ( v3 )
    {
      do
      {
        v22 = *(_QWORD *)(a1 + 144);
        if ( *(_DWORD *)(*(_QWORD *)(v22 + 40LL * v21 + 8) + 296LL) == 1 )
        {
          while ( *(_DWORD *)(*(_QWORD *)(v22 + 40LL * v4 + 8) + 296LL) != 3 )
          {
            if ( ++v4 >= v3 )
              goto LABEL_32;
          }
          ++*(_DWORD *)(a1 + 256);
          *(_BYTE *)(*(_QWORD *)(a1 + 144) + 40LL * v21 + 4) = *(_BYTE *)(v22 + 40LL * v21 + 4) | 2;
          *(_BYTE *)(*(_QWORD *)(a1 + 144) + 40LL * v4 + 4) &= ~2u;
          KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 144) + 16LL + 40LL * v4), 0, 0);
          if ( !--v19 )
            return 7LL;
          ++v4;
        }
LABEL_32:
        ++v21;
      }
      while ( v21 < v3 );
    }
    return 7LL;
  }
  else
  {
    if ( a3 )
      return 8LL;
    v23 = *(unsigned int *)(a1 + 164);
    v24 = 1;
    if ( (unsigned int)v23 <= 1 )
    {
      ++*(_DWORD *)(a1 + 260);
      return 8LL;
    }
    v25 = *(_DWORD *)(a1 + 160);
    if ( (unsigned int)v23 > v25 )
    {
      ++*(_DWORD *)(a1 + 272);
      v24 = v23 - v25;
    }
    else
    {
      v26 = *(_QWORD *)(v7 + 40);
      if ( v26 )
      {
        v27 = *(_DWORD *)(a1 + 176);
        v28 = 0LL;
        v29 = 0;
        if ( v27 )
        {
          v30 = v27;
          v31 = (_QWORD *)(a1 + 184);
          v29 = *(_DWORD *)(a1 + 176);
          do
          {
            v28 += *v31++;
            --v30;
          }
          while ( v30 );
        }
        v32 = (unsigned int)(v23 - 1);
        v33 = *(_QWORD *)(v26 + 8 * v32) / (v28 / v29 / v23);
        if ( (unsigned int)v33 < (unsigned int)v23 )
        {
          LODWORD(v32) = *(_QWORD *)(v26 + 8 * v32) / (v28 / v29 / v23);
          if ( !(_DWORD)v33 )
            LODWORD(v32) = 1;
        }
        v24 = v23 - v32;
        if ( (_DWORD)v23 == (_DWORD)v32 )
          return 8LL;
      }
    }
    v34 = 1;
    v35 = (int *)&v44 + 1;
    do
    {
      v36 = *v35;
      if ( *v35 )
      {
        v37 = 0;
        if ( v3 )
        {
          v38 = 0LL;
          do
          {
            v39 = *(_QWORD *)(a1 + 144);
            if ( *(_DWORD *)(*(_QWORD *)(v39 + v38 + 8) + 296LL) == v34 )
            {
              if ( v34 == 1 )
                ++*(_DWORD *)(a1 + 264);
              else
                ++*(_DWORD *)(a1 + 268);
              *(_BYTE *)(*(_QWORD *)(a1 + 144) + 40LL * v37 + 4) = *(_BYTE *)(v39 + v38 + 4) | 2;
              --*(_DWORD *)(a1 + 164);
              if ( !--v24 )
                return 5LL;
              v40 = v36-- == 1;
              *v35 = v36;
              if ( v40 )
                break;
            }
            ++v37;
            v38 += 40LL;
          }
          while ( v37 < v3 );
        }
      }
      ++v34;
      ++v35;
    }
    while ( v34 <= 2 );
    return 5LL;
  }
}
