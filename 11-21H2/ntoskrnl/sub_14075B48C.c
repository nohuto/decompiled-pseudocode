/*
 * XREFs of sub_14075B48C @ 0x14075B48C
 * Callers:
 *     sub_14075B6A4 @ 0x14075B6A4 (sub_14075B6A4.c)
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406AD17C @ 0x1406AD17C (sub_1406AD17C.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B0E4 @ 0x14075B0E4 (sub_14075B0E4.c)
 *     sub_14075B608 @ 0x14075B608 (sub_14075B608.c)
 *     sub_14075B638 @ 0x14075B638 (sub_14075B638.c)
 *     sub_14075BCC0 @ 0x14075BCC0 (sub_14075BCC0.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140851068 @ 0x140851068 (sub_140851068.c)
 */

__int64 __fastcall sub_14075B48C(void *a1, __int64 a2, __int64 a3, const WCHAR *a4, unsigned int *a5)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rdi
  unsigned int v13; // esi
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v18; // [rsp+40h] [rbp-C0h]
  char v19[272]; // [rsp+50h] [rbp-B0h] BYREF

  v16 = 0;
  v7 = sub_14075BCC0(a1);
  *a5 = v7;
  if ( !v7 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpFindFirstIndexedWildCardTag");
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = 24587;
  *((_QWORD *)a5 + 4) = a4;
  memset(v19, 0, 0x104uLL);
  v17 = 0LL;
  v18 = 0;
  if ( (int)sub_14075B0E4(v19, v8, a4) < 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpFindFirstIndexedWildCardTag");
    return 0LL;
  }
  v9 = sub_14075B638(a1, *a5, &v16);
  if ( !v9 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpFindFirstIndexedWildCardTag");
    return 0LL;
  }
  v10 = v16;
  v11 = 0LL;
  if ( !v16 )
    return 0LL;
  while ( 1 )
  {
    sub_14075B608(*(_QWORD *)(v9 + 12 * v11), &v17);
    LOBYTE(v18) = 42;
    if ( (unsigned int)sub_1406AD17C((char *)&v17, v19) )
    {
      v13 = *(_DWORD *)(v9 + 12 * v11 + 8);
      v14 = sub_140792CCC(a1, v13, *((unsigned __int16 *)a5 + 6));
      if ( v14 )
      {
        v15 = sub_140842A24(a1, v14);
        if ( v15 )
        {
          if ( (unsigned int)sub_140851068(v15, *((_QWORD *)a5 + 4)) )
            break;
        }
      }
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v10 )
      return 0LL;
  }
  a5[4] = v11;
  return v13;
}
