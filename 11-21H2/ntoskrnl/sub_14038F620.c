/*
 * XREFs of sub_14038F620 @ 0x14038F620
 * Callers:
 *     sub_14038A168 @ 0x14038A168 (sub_14038A168.c)
 * Callees:
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 *     sub_14038F3B8 @ 0x14038F3B8 (sub_14038F3B8.c)
 *     sub_14038F830 @ 0x14038F830 (sub_14038F830.c)
 */

volatile LONG *__fastcall sub_14038F620(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r13
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rdi
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  __int64 v9; // r14
  ULONG_PTR v10; // r14
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+88h] [rbp+10h]
  int v18; // [rsp+90h] [rbp+18h]
  int v19; // [rsp+98h] [rbp+20h]

  v2 = *(_DWORD *)(a2 + 8);
  v3 = a1;
  v4 = *(_QWORD *)a2;
  v5 = *(_DWORD *)(a2 + 12);
  v15 = v4;
  v19 = v5;
  if ( (v2 & 8) != 0 )
  {
    v6 = 1LL;
  }
  else
  {
    v6 = 2LL;
    if ( (v2 & 0x400) != 0 )
      v6 = 1LL;
  }
  v7 = 0;
  v8 = 0;
  v18 = 0;
  v17 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v6 > 1 )
        v9 = 88LL * v7 + v3 + 2880;
      else
        v9 = *(_QWORD *)(v3 + 8 * v6 + 2432) + 88LL * v8;
      v10 = *(_QWORD *)(v9 + 16);
      if ( v10 != 0x3FFFFFFFFFLL )
      {
        while ( 1 )
        {
          if ( v6 == 2 && sub_1402C1520(v10) )
          {
            v12 = *(_QWORD *)(v11 + 48 * v10 + 16);
            if ( qword_140C50780 && (v12 & 0x10) == 0 )
              v12 &= ~qword_140C50780;
            v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
            if ( v13 == v10 )
              goto LABEL_12;
            do
            {
              sub_14038F830(v15, v13, 1LL);
              v13 = *(_QWORD *)(48 * v13 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
            }
            while ( v13 != v10 );
          }
          else
          {
            sub_14038F830(v15, v10, 1LL);
          }
          v11 = 0xFFFFDE0000000000uLL;
LABEL_12:
          v10 = *(_QWORD *)(v11 + 48 * v10) & 0xFFFFFFFFFFLL;
          if ( v10 == 0x3FFFFFFFFFLL )
          {
            v8 = v17;
            v7 = v18;
            v3 = a1;
            v5 = v19;
            break;
          }
        }
      }
      if ( v6 > 1 )
        break;
      v17 = ++v8;
      if ( v8 >= dword_140C5073C )
      {
        v8 = 0;
        v17 = 0;
        break;
      }
    }
    if ( !v6 )
      return sub_14038F3B8(v15, v3, 1);
    if ( v6 == 2 )
    {
      v18 = ++v7;
      if ( v7 != v5 )
        continue;
    }
    --v6;
  }
}
