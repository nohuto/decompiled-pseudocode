/*
 * XREFs of sub_1403633A0 @ 0x1403633A0
 * Callers:
 *     sub_140350070 @ 0x140350070 (sub_140350070.c)
 *     sub_14036FAB0 @ 0x14036FAB0 (sub_14036FAB0.c)
 * Callees:
 *     sub_140362540 @ 0x140362540 (sub_140362540.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140363490 @ 0x140363490 (sub_140363490.c)
 *     sub_14036808C @ 0x14036808C (sub_14036808C.c)
 */

__int64 __fastcall sub_1403633A0(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rax
  int v8; // edx
  _BOOL8 v9; // r12
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r13
  char *v14; // r15
  _OWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2 + 2;
  v5 = 0LL;
  v6 = sub_140362540(a1, a2 + 2, a3);
  if ( v6 )
  {
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1),
      (unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    v16[0] = *(_OWORD *)(a1 + 40);
    v7 = sub_140362B58(v16);
    v9 = v8 != 0x100000;
    v11 = v10 >> 20;
    v12 = 2 * ((unsigned __int64)(v6 - v7[1]) >> 20);
    v13 = v12 + 2 * v11;
    if ( v12 >= v13 )
    {
      return v6;
    }
    else
    {
      v14 = (char *)(v7 + 2);
      while ( (int)sub_140363490(v14, v12, v11, v9 + 1) >= 0 )
      {
        v12 += 2LL;
        if ( v12 >= v13 )
          return v6;
      }
      sub_14036808C(a1);
    }
  }
  return v5;
}
