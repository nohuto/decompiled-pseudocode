/*
 * XREFs of sub_14099B8FC @ 0x14099B8FC
 * Callers:
 *     sub_14099BD28 @ 0x14099BD28 (sub_14099BD28.c)
 * Callees:
 *     sub_140208BA0 @ 0x140208BA0 (sub_140208BA0.c)
 *     sub_140208C24 @ 0x140208C24 (sub_140208C24.c)
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140814DC0 @ 0x140814DC0 (sub_140814DC0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14099B8FC(int *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int16 *v3; // rdi
  unsigned int v4; // ebx
  wchar_t *v7; // r8
  __int64 v8; // rdx
  wchar_t *v9; // rax
  unsigned __int16 v10; // si
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  wchar_t *v14; // r12
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  __int128 v18; // xmm0
  unsigned int *v19; // r12
  __int64 v20; // xmm1_8
  __int64 v21; // rsi
  unsigned int v22; // ecx
  unsigned __int16 *v23; // rdx
  unsigned __int64 v24; // rsi
  __int64 Pool2; // rax
  __int64 v26; // r8
  const wchar_t *v27; // rcx
  __int64 v28; // r9
  __int16 v29; // dx
  __int64 v30; // r10
  unsigned int i; // r14d
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  const wchar_t *v35; // r8
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int16 v39; // r10
  unsigned __int64 v40; // r11
  __int64 v41; // r9
  __int64 v42; // [rsp+30h] [rbp-50h] BYREF
  __int64 v43; // [rsp+38h] [rbp-48h] BYREF
  __int64 v44; // [rsp+40h] [rbp-40h] BYREF
  __int64 v45; // [rsp+48h] [rbp-38h] BYREF
  __int128 v46; // [rsp+50h] [rbp-30h] BYREF
  __int64 v47; // [rsp+60h] [rbp-20h]
  __int64 v48; // [rsp+68h] [rbp-18h]

  v2 = *a1;
  v3 = (unsigned __int16 *)(a2 + 392);
  v4 = 0;
  v42 = 0LL;
  v43 = 0LL;
  if ( (unsigned int)v2 <= 4 )
  {
    _mm_lfence();
    v7 = off_140A392A8[v2];
    *(_OWORD *)v3 = 0LL;
    if ( v7 )
    {
      v8 = 0x7FFFLL;
      v9 = v7;
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v8;
      }
      while ( v8 );
      if ( v8 )
      {
        if ( !v3 )
          return (unsigned int)-1073741811;
        v10 = 2 * (0x7FFF - v8);
        *((_QWORD *)v3 + 1) = v7;
        *v3 = v10;
        v3[1] = v10 + 2;
      }
      return v8 == 0 ? 0xC000000D : 0;
    }
    return v4;
  }
  if ( (_DWORD)v2 != 6 )
  {
    if ( (_DWORD)v2 != 5 )
      return 3221225485LL;
    v18 = *(_OWORD *)(a1 + 2);
    v19 = (unsigned int *)(a2 + 408);
    v20 = *((_QWORD *)a1 + 3);
    v48 = a2 + 408;
    v46 = v18;
    v47 = v20;
    result = sub_140814DC0((__int64)sub_14099BFB0, (__int64)&v46);
    if ( (int)result < 0 )
      return result;
    v21 = 0LL;
    v22 = 0;
    if ( *v19 )
    {
      v23 = (unsigned __int16 *)(v19 + 2);
      do
      {
        if ( v22 )
          v21 += 4LL;
        ++v22;
        v21 += *v23;
        v23 += 8;
      }
      while ( v22 < *v19 );
    }
    v24 = v21 + 24;
    if ( v24 <= 0xFFFF )
    {
      Pool2 = ExAllocatePool2(256LL, v24, 1734960208LL);
      *((_QWORD *)v3 + 1) = Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      *(_BYTE *)(a2 + 384) = 1;
      *v3 = 0;
      v3[1] = v24;
      v45 = 0LL;
      v44 = 0LL;
      result = sub_140208BA0((__int64)v3, &v45, &v44);
      if ( (int)result >= 0 )
      {
        v26 = v44;
        v27 = L"Interrupt: ";
        v28 = 0x7FFFLL;
        result = 0LL;
        v29 = 0;
        if ( v44 )
        {
          v30 = v45 - (_QWORD)L"Interrupt: ";
          while ( v28 )
          {
            if ( *v27 )
            {
              *(const wchar_t *)((char *)v27 + v30) = *v27;
              --v28;
              ++v27;
              ++v29;
              if ( --v26 )
                continue;
            }
            if ( v26 || !v28 || !*v27 )
              break;
            goto LABEL_46;
          }
        }
        else
        {
LABEL_46:
          result = 2147483653LL;
        }
        *v3 = 2 * v29;
      }
      for ( i = 0; i < *v19; ++i )
      {
        if ( i )
        {
          v32 = v3[1];
          v33 = *v3;
          if ( (((unsigned __int16)v33 | (unsigned __int16)v32) & 1) == 0
            && (unsigned __int16)v33 <= (unsigned __int16)v32
            && (_WORD)v32 != 0xFFFF )
          {
            v34 = *((_QWORD *)v3 + 1);
            if ( v34 || !__PAIR32__(v32, v33) )
            {
              v35 = L", ";
              v36 = v32 >> 1;
              v37 = v33 >> 1;
              v38 = 0x7FFFLL;
              v39 = 0;
              v40 = v36 - v37;
              if ( v40 )
              {
                v41 = 2 * v37 - (_QWORD)L", " + v34;
                do
                {
                  if ( !v38 )
                    break;
                  if ( !*v35 )
                    break;
                  *(const wchar_t *)((char *)v35 + v41) = *v35;
                  --v38;
                  ++v35;
                  ++v39;
                }
                while ( v38 + v40 - 0x7FFF );
              }
              *v3 = 2 * (v39 + v37);
            }
          }
        }
        result = sub_140208C24(v3, (unsigned __int16 *)&v19[4 * i + 2]);
      }
      return result;
    }
    return 2147483653LL;
  }
  v12 = *((unsigned __int8 *)a1 + 8);
  if ( (unsigned __int8)v12 < 0x10u )
  {
    v14 = off_140A3BB90[v12];
    result = sub_1402DCD64(v14, 0xFFFFuLL, &v42);
    if ( (int)result < 0 )
      return result;
    if ( *((_BYTE *)a1 + 8) == 3 )
    {
      result = sub_1402DCD64((_WORD *)a1 + 5, 0x80uLL, &v43);
      if ( (int)result < 0 )
        return result;
      v16 = v42 + v43 + 42;
    }
    else
    {
      v16 = v42 + 48;
    }
    if ( v16 <= v15 )
    {
      v17 = ExAllocatePool2(256LL, v16, 1734960208LL);
      *((_QWORD *)v3 + 1) = v17;
      if ( !v17 )
        return 3221225626LL;
      *(_BYTE *)(a2 + 384) = 1;
      *v3 = 0;
      v3[1] = v16;
      if ( *((_BYTE *)a1 + 8) == 3 )
        return sub_1402D17BC(v3, L"Timer(Name:Index): %s:%s", v14, (char *)a1 + 10);
      else
        return sub_1402D17BC(v3, L"Timer(Name:Index): %s:%d", v14, *((unsigned __int8 *)a1 + 10));
    }
    return 2147483653LL;
  }
  v13 = ExAllocatePool2(256LL, 64LL, 1734960208LL);
  *((_QWORD *)v3 + 1) = v13;
  if ( !v13 )
    return 3221225626LL;
  *(_BYTE *)(a2 + 384) = 1;
  *(_DWORD *)v3 = 0x400000;
  return sub_1402D17BC(
           v3,
           L"Timer(Component:Index): %d:%d",
           *((unsigned __int8 *)a1 + 8),
           *((unsigned __int8 *)a1 + 10));
}
