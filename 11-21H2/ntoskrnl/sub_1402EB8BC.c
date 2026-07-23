/*
 * XREFs of sub_1402EB8BC @ 0x1402EB8BC
 * Callers:
 *     sub_14023BE50 @ 0x14023BE50 (sub_14023BE50.c)
 *     sub_1402EB59C @ 0x1402EB59C (sub_1402EB59C.c)
 *     sub_1405B0B24 @ 0x1405B0B24 (sub_1405B0B24.c)
 *     sub_1405B0E30 @ 0x1405B0E30 (sub_1405B0E30.c)
 * Callees:
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_1403A1494 @ 0x1403A1494 (sub_1403A1494.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_1402EB8BC(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  BOOL v8; // ebx
  __int64 v9; // rbx
  unsigned int v10; // ebx
  unsigned int v11; // esi

  v4 = *(unsigned int *)(a1 + 48);
  if ( (unsigned int)v4 <= 3 )
  {
    v8 = 1;
    if ( a4 )
    {
      if ( a3 == 1 )
      {
        v9 = 48 * a2 - 0x220000000000LL;
        sub_14033C300(v9, 3LL);
        sub_140268998(v9);
        v4 = *(unsigned int *)(a1 + 48);
      }
      v10 = 0;
      if ( (unsigned int)v4 > 3 )
        v4 = (unsigned int)(v4 - 4);
      v11 = *((_DWORD *)qword_140018318 + v4);
    }
    else
    {
      if ( a3 == 1 )
      {
        sub_14033C300(48 * a2 - 0x220000000000LL, 0LL);
        v4 = *(unsigned int *)(a1 + 48);
        v8 = (unsigned int)v4 <= 3;
      }
      if ( !v8 )
        v4 = (unsigned int)(v4 - 4);
      v11 = 0;
      v10 = *((_DWORD *)qword_140018318 + v4);
    }
    if ( (dword_140D06880 & 0x4000) != 0 && (int)sub_1403A1494(a2, a3, v10, v11) < 0 )
      KeBugCheckEx(0x1Au, 0x5150FuLL, a2, (int)v10, (int)v11);
  }
}
