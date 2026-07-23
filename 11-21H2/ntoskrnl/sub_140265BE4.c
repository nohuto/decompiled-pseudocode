/*
 * XREFs of sub_140265BE4 @ 0x140265BE4
 * Callers:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 * Callees:
 *     sub_140266074 @ 0x140266074 (sub_140266074.c)
 *     sub_1402680C0 @ 0x1402680C0 (sub_1402680C0.c)
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     sub_140268A70 @ 0x140268A70 (sub_140268A70.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 */

__int64 __fastcall sub_140265BE4(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // rdi
  unsigned __int64 *v10; // rsi
  int v11; // r15d
  int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  v4 = a3;
  v5 = 1;
  sub_1402E89B0(&v20, a2, a3);
  v9 = 0LL;
  v10 = &a1[6 * v8];
  if ( a1 != v10 )
  {
    do
    {
      v11 = sub_140268620(a1, v6, v7, v8);
      v12 = sub_140268A70(a1, v4);
      v13 = 0;
      if ( !v12 )
        v13 = v5;
      v5 = v13;
      if ( (unsigned int)sub_140266074(a1) )
      {
        v16 = *a1 & 0xFFFFFF0000000000uLL;
        *a1 = v16;
        if ( v11 )
        {
          v16 |= 2uLL;
          *a1 = v16;
        }
        a1[2] = (unsigned __int64)v9;
        v9 = a1;
        if ( v12 )
          *a1 = v16 | 1;
      }
      else
      {
        v14 = v20 & -(__int64)(v12 != 0);
        a1[2] = v14;
        if ( v11 )
          a1[2] = sub_14033B6A0(v14, 4294967293LL);
      }
      a1 += 6;
    }
    while ( a1 != v10 );
    if ( v9 )
    {
      sub_1402680C0(v9, v4, -1LL);
      do
      {
        v17 = *v9;
        v18 = (unsigned __int64 *)v9[2];
        v19 = v20 & -(__int64)((*v9 & 1) != 0);
        v9[2] = v19;
        if ( (v17 & 2) != 0 )
          v9[2] = sub_14033B6A0(v19, 4294967293LL);
        *v9 = v17 & 0xFFFFFF0000000000uLL;
        v9 = v18;
      }
      while ( v18 );
    }
  }
  return v5;
}
