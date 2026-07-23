/*
 * XREFs of sub_140363EF0 @ 0x140363EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A0EF8 @ 0x1402A0EF8 (sub_1402A0EF8.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140366C48 @ 0x140366C48 (sub_140366C48.c)
 *     sub_14036DC90 @ 0x14036DC90 (sub_14036DC90.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 */

__int64 __fastcall sub_140363EF0(int a1)
{
  unsigned int v1; // r12d
  int v2; // esi
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  _QWORD *v8; // r13
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  _QWORD *p_Next; // rcx
  unsigned __int64 v18; // rax
  PSLIST_ENTRY v19; // rax
  ULONG_PTR v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  _OWORD v25[4]; // [rsp+40h] [rbp-48h]
  int v27; // [rsp+A8h] [rbp+20h]

  v1 = 0;
  v2 = a1;
  v25[0] = _mm_load_si128((const __m128i *)&xmmword_140015B30);
  v3 = *((int *)v25 + 2 * a1 + 1);
  v4 = *((int *)v25 + 2 * a1);
  v5 = v3;
  v27 = v4;
  if ( dword_140C5EA20 )
  {
    v24 = v4;
    do
    {
      v6 = v4;
      if ( v4 <= v5 )
      {
        do
        {
          v7 = qword_140C5EA40[1048 * v1 + v6];
          v8 = *(_QWORD **)(v7 + 40);
          if ( v8 )
          {
            v9 = 0LL;
            v10 = ~*v8;
            while ( v10 )
            {
              _BitScanForward64(&v18, v10);
              v10 ^= 1LL << v18;
              v19 = ExpInterlockedFlushSList((PSLIST_HEADER)&v8[8 * (unsigned int)v18 + 8]);
              if ( v9 )
              {
                while ( 1 )
                {
                  p_Next = &v19->Next;
                  if ( !v19 )
                    break;
                  v19 = v19->Next;
                  *p_Next = v9;
                  v9 = p_Next;
                }
              }
              else
              {
                v9 = &v19->Next;
              }
            }
            while ( 1 )
            {
              v20 = (ULONG_PTR)v9;
              if ( !v9 )
                break;
              v9 = (_QWORD *)*v9;
              v21 = sub_140366C48(v20);
              sub_140364128(v21, v20, 0LL, v22, v23);
            }
            v5 = v3;
          }
          v11 = *(__int16 *)(v7 + 342);
          v12 = *(_QWORD *)(v11 + v7 + 328) >> *(_BYTE *)(v7 + 331);
          if ( v12 <= 8 )
            v12 = 8LL;
          if ( *(_QWORD *)(v11 + v7 + 336) + *(_QWORD *)(v11 + v7 + 344) > v12 )
            sub_14036DC90(v7);
          ++v6;
        }
        while ( v6 <= v5 );
        v4 = v24;
      }
      ++v1;
    }
    while ( v1 < dword_140C5EA20 );
    v2 = a1;
    LODWORD(v4) = v27;
  }
  result = 3LL;
  v14 = (int)v4;
  if ( (int)v3 >= 3 )
    LODWORD(v3) = 3;
  while ( v14 <= (int)v3 )
  {
    v15 = qword_140CE1A40[v14];
    result = *(__int16 *)(v15 + 342);
    v16 = *(_QWORD *)(result + v15 + 328) >> *(_BYTE *)(v15 + 331);
    if ( v16 <= 8 )
      v16 = 8LL;
    if ( *(_QWORD *)(result + v15 + 336) + *(_QWORD *)(result + v15 + 344) > v16 )
      result = sub_14036DC90(qword_140CE1A40[v14]);
    ++v14;
  }
  if ( !v2 )
  {
    result = sub_1402A0EF8();
LABEL_33:
    dword_140C10DC0 = 0;
    return result;
  }
  if ( v2 != 1 )
    goto LABEL_33;
  dword_140C10DC4 = 0;
  return result;
}
