/*
 * XREFs of sub_14079885C @ 0x14079885C
 * Callers:
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 * Callees:
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 *     sub_1402E1CBC @ 0x1402E1CBC (sub_1402E1CBC.c)
 *     sub_1402E1D48 @ 0x1402E1D48 (sub_1402E1D48.c)
 *     sub_1402E29C8 @ 0x1402E29C8 (sub_1402E29C8.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EF9E0 @ 0x1406EF9E0 (sub_1406EF9E0.c)
 *     sub_1407987F0 @ 0x1407987F0 (sub_1407987F0.c)
 *     sub_140798BE4 @ 0x140798BE4 (sub_140798BE4.c)
 *     sub_140798C10 @ 0x140798C10 (sub_140798C10.c)
 *     sub_140798CFC @ 0x140798CFC (sub_140798CFC.c)
 */

__int64 __fastcall sub_14079885C(unsigned int *a1, int a2)
{
  int v2; // r13d
  __int64 *v4; // r14
  int v5; // ebp
  signed int v6; // edi
  unsigned __int64 *v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int32 v13; // eax
  signed __int64 i; // rcx
  signed __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD **v17; // rdi
  __int64 v18; // rbx
  __int64 *v19; // r15
  int v20; // r10d
  int v21; // r11d
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // eax
  unsigned __int16 v31; // r14
  unsigned int v32; // ebp
  _QWORD *v33; // rbx
  _QWORD **v34; // rdi
  __int64 v35; // r15
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // [rsp+20h] [rbp-148h]
  _BYTE v42[256]; // [rsp+30h] [rbp-138h] BYREF

  v2 = a2;
  memset(v42, 0, sizeof(v42));
  if ( *((_QWORD *)a1 + 100) || *((_QWORD *)a1 + 45) )
  {
    v4 = (__int64 *)v42;
    v40 = 0;
    v5 = 0;
    if ( *((_QWORD *)a1 + 132) )
      v4 = (__int64 *)*((_QWORD *)a1 + 132);
    if ( (a1[3] & 0x40000) != 0 )
    {
      v38 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
      if ( v38 )
      {
        *v4 = v38;
        v5 = 1;
      }
    }
    else
    {
      v6 = sub_1402E1C80((__int64)a1) - 1;
      if ( v6 >= 0 )
      {
        v7 = (unsigned __int64 *)v4;
        v8 = (__int64)v6 << 6;
        do
        {
          if ( (a1[3] & 0x10000000) != 0 )
          {
            v11 = a1 + 32;
          }
          else
          {
            v9 = *((_QWORD *)a1 + 137);
            if ( v9 == qword_140D05008 )
              v10 = *(_QWORD *)(*(_QWORD *)(sub_140348800(v6) + 34472) + 320LL);
            else
              v10 = *(_QWORD *)(*(_QWORD *)(v9 + 4144) + v8);
            v11 = (_QWORD *)(v10 + 8LL * *a1);
          }
          v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( !v12 )
            goto LABEL_23;
          if ( v2 )
          {
            v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), a1[1]);
            if ( v13 <= a1[1] )
              *(_DWORD *)(v12 + 4) = v13;
            _m_prefetchw(v11);
            for ( i = *v11; (v12 ^ i) <= 0xF; i = v15 )
            {
              v15 = _InterlockedCompareExchange64(v11, 0LL, i);
              if ( i == v15 )
                break;
            }
            v16 = i & 0xFFFFFFFFFFFFFFF0uLL;
            if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v12 )
            {
              _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), -(i & 0xF));
              sub_1402E1CBC((__int64)a1, v16);
            }
            else
            {
              if ( v16 )
              {
                do
                {
                  v39 = *(_QWORD *)(v16 + 32);
                  if ( v39 == v12 )
                    break;
                  v16 = *(_QWORD *)(v16 + 32);
                }
                while ( v39 );
              }
              *(_QWORD *)(v16 + 32) = 0LL;
              v40 = 1;
            }
            *v7 = v12;
          }
          else
          {
            v37 = *(_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
            if ( !v37 )
              goto LABEL_23;
            *v7 = v37;
            *(_QWORD *)(v12 + 32) = 0LL;
          }
          ++v5;
          ++v7;
LABEL_23:
          v8 -= 64LL;
          --v6;
        }
        while ( v6 >= 0 );
      }
      sub_1402E29C8((__int64)a1);
    }
    v17 = 0LL;
    if ( v5 > 0 )
    {
      v18 = v5;
      v19 = &v4[v5 - 1];
      do
      {
        v20 = 1;
        v21 = 0;
        v22 = 0LL;
        v23 = 1LL;
        if ( (unsigned __int64)v18 > 1 )
        {
          do
          {
            v24 = *(_QWORD *)(v4[v23] + 16);
            v25 = *(_QWORD *)(v4[v22] + 16);
            v26 = v23;
            if ( v24 <= v25 )
              v26 = v22;
            v22 = v26;
            v27 = v20;
            if ( v24 <= v25 )
              v27 = v21;
            ++v20;
            ++v23;
            v21 = v27;
          }
          while ( v23 < v18 );
        }
        v28 = v4[v22];
        v29 = *(_QWORD *)(v28 + 32);
        v4[v22] = v29;
        if ( !v29 )
        {
          --v18;
          v4[v22] = *v19--;
        }
        if ( *(int *)(v28 + 12) <= 0
          && (v30 = *(_DWORD *)(v28 + 4), v30 <= 0x48)
          && (v30 || *(_DWORD *)(v28 + 8) <= 0x48u) )
        {
          sub_140798BE4(a1, v28, 0LL);
        }
        else
        {
          *(_QWORD *)(v28 + 32) = v17;
          v17 = (_QWORD **)(v28 + 32);
        }
      }
      while ( v18 > 0 );
      v2 = a2;
    }
    v31 = 0;
    v32 = 0;
    if ( v17 )
    {
      v33 = *v17;
      do
      {
        if ( !v33 )
          v31 = v2 != 0;
        v34 = v17 - 4;
        sub_1407987F0((__int64)a1);
        sub_140798CFC(v34);
        v35 = (unsigned int)sub_140798C10(a1, v34, v31);
        sub_140798BE4(a1, v34, v35);
        v17 = (_QWORD **)v33;
        if ( v33 )
          v33 = (_QWORD *)*v33;
        if ( (_DWORD)v35 )
          v32 = v35;
      }
      while ( v17 );
      if ( a1[52] && a2 && ((a1[3] & 0x10000000) == 0 || v40) )
        sub_1402E1D48((__int64)a1, 0);
    }
    else if ( v2 && (a1[204] & 8) != 0 )
    {
      sub_1406EF9E0((__int64)a1);
    }
    return v32;
  }
  else
  {
    if ( a1[52] )
      sub_1402E1D48((__int64)a1, 0);
    return 259LL;
  }
}
