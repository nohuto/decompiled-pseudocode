/*
 * XREFs of sub_14078CB04 @ 0x14078CB04
 * Callers:
 *     sub_14078CD70 @ 0x14078CD70 (sub_14078CD70.c)
 *     sub_1409DD3C4 @ 0x1409DD3C4 (sub_1409DD3C4.c)
 * Callees:
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_1402E09E0 @ 0x1402E09E0 (sub_1402E09E0.c)
 *     sub_1402E0A04 @ 0x1402E0A04 (sub_1402E0A04.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14078CCE4 @ 0x14078CCE4 (sub_14078CCE4.c)
 */

char __fastcall sub_14078CB04(int *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned int v9; // esi
  _DWORD *v10; // r14
  int v11; // eax
  _WORD *v12; // r15
  __int64 v13; // r13
  unsigned int i; // r13d
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // esi
  unsigned int v21; // r11d
  unsigned int v23; // [rsp+20h] [rbp-58h] BYREF
  wchar_t v24[8]; // [rsp+28h] [rbp-50h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  if ( (v3 & 3) != 0 )
  {
    v7 = *(unsigned int *)(a3 + 72);
    v23 = *a1;
    LOBYTE(v3) = sub_1402E09E0(4, (int *)&v23);
    if ( (_BYTE)v3 )
    {
      v8 = v23;
      v3 = sub_14078CCE4(a3);
      v9 = v3;
      if ( v3 <= ~(_DWORD)v8 )
      {
        v3 += v8;
        v23 = v3;
        if ( v3 > a2 )
        {
          *a1 = 56;
          a1[11] = 32;
          a1[12] = v3;
        }
        else
        {
          a1[14] = v8;
          v10 = (int *)((char *)a1 + v8);
          v11 = *(_DWORD *)(a3 + 16);
          v12 = (_WORD *)((char *)&a1[v7] + v8);
          v13 = (unsigned int)v7;
          if ( (v11 & 1) != 0 )
          {
            if ( (v11 & 0x20000) != 0 )
              a1[11] |= 0x10000u;
            for ( i = 0; i < (unsigned int)v7; v12 += ((unsigned __int64)(unsigned int)(2 * v16 + 2) >> 1) + 1 )
            {
              v15 = v9 - 2;
              *v10++ = (_DWORD)v12 - (_DWORD)a1;
              sub_1402E0978(v12 + 1, v15, *(_QWORD *)(a3 + 88) + 4LL);
              sub_1402E1280(v24, 0xEuLL, L"%d", i + **(_DWORD **)(a3 + 88));
              sub_1402E0A04(v12 + 1, v15, (__int64)v24);
              v16 = -1LL;
              do
                ++v16;
              while ( v12[v16 + 1] );
              ++i;
              *v12 = 2 * v16 + 2;
              v9 = v15 - (2 * v16 + 2);
            }
          }
          else if ( (v11 & 2) != 0 && (_DWORD)v7 )
          {
            v17 = 0LL;
            do
            {
              *v10++ = (_DWORD)v12 - (_DWORD)a1;
              v18 = *(_QWORD *)(v17 + *(_QWORD *)(a3 + 88));
              v19 = -1LL;
              do
                ++v19;
              while ( *(_WORD *)(v18 + 2 * v19) );
              v20 = v9 - 2;
              *v12 = 2 * v19 + 2;
              sub_1402E0978(v12 + 1, v20, v18);
              v9 = v20 - v21;
              v17 += 8LL;
              v12 += ((unsigned __int64)v21 >> 1) + 1;
              --v13;
            }
            while ( v13 );
          }
          LOBYTE(v3) = v23;
          *a1 = v23;
        }
      }
    }
  }
  return v3;
}
