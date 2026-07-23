/*
 * XREFs of sub_1402662A0 @ 0x1402662A0
 * Callers:
 *     sub_140266158 @ 0x140266158 (sub_140266158.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_1403D6C20 @ 0x1403D6C20 (sub_1403D6C20.c)
 *     sub_1405C2478 @ 0x1405C2478 (sub_1405C2478.c)
 * Callees:
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 */

__int64 __fastcall sub_1402662A0(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // r10d
  __int64 v10; // r15
  int v11; // ebx
  unsigned int v12; // ebp
  __int64 v13; // rsi
  int v14; // ebx
  int v15; // r12d
  __int64 *v16; // r13
  unsigned int v17; // r14d
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned __int64 v21; // rax
  __int64 result; // rax
  int v23; // [rsp+90h] [rbp+8h]
  unsigned __int64 v24; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v25; // [rsp+A8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v23 = a1;
  v9 = a1;
  v10 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  if ( !*(_QWORD *)(v10 + 22608) && (_DWORD)dword_140C4E560 )
    return 0LL;
  v11 = a7;
  v12 = 0;
  v13 = 0LL;
  if ( (a7 & 1) == 0 )
    v11 = a7 | 1;
  v14 = v11 | 2;
  v15 = !(a7 & 1) + 1;
  while ( 1 )
  {
    v16 = qword_14001C780;
    v17 = 0;
    v18 = (_QWORD *)(v10 + 16 * (v13 + 1));
    do
    {
      v19 = *v16;
      v20 = v12;
      if ( a3 >= *v16 )
      {
        if ( v19 < a4 )
          break;
        v12 = v17;
        if ( v20 )
          v12 = v20;
        if ( v18[1] || *v18 )
        {
          if ( a6 )
            v21 = a3 / v19;
          else
            LODWORD(v21) = 1;
          result = sub_1402CA5E0(v9, a5, v17, v21, a2, 4, a8, v14, 0LL);
          if ( result )
            return result;
          v9 = v23;
          a3 = v24;
          a4 = v25;
        }
      }
      ++v17;
      ++v16;
      v18 += 134;
    }
    while ( v17 < 3 );
    if ( v12 )
    {
      result = sub_140267060(v9, a5, v12, a2, a8, v14, 0LL);
      if ( result )
        return result;
    }
    if ( !--v15 )
      return 0LL;
    v9 = v23;
    v14 &= ~1u;
    a3 = v24;
    v13 = 1LL;
    a4 = v25;
  }
}
