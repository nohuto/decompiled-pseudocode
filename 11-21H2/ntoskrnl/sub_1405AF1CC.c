/*
 * XREFs of sub_1405AF1CC @ 0x1405AF1CC
 * Callers:
 *     sub_140592AA4 @ 0x140592AA4 (sub_140592AA4.c)
 * Callees:
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_1405AF110 @ 0x1405AF110 (sub_1405AF110.c)
 */

unsigned __int64 __fastcall sub_1405AF1CC(__int64 a1, int *a2, int *a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  __int64 v12; // rdx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  v15 = 0;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( (dword_140C31E20 & 3) != 0 )
  {
    v7 = sub_1405AF110(a1);
    if ( v7 )
    {
      v8 = *(unsigned __int8 *)(v7 + 34);
      v9 = sub_140235E10(v7);
    }
    else
    {
      v8 = *(unsigned __int8 *)(a1 + 34);
      v9 = 3;
    }
    v10 = v8 >> 6;
    v11 = v8 & 7;
  }
  else
  {
    v9 = sub_140235D34(a1, &v14, &v15);
    v10 = v15;
    v11 = v14;
  }
  if ( v9 == 3 )
    v12 = 1LL;
  else
    v12 = qword_14001C780[v9];
  *a2 = v11;
  *a3 = v10;
  return v12 + (v6 & ~(v12 - 1)) - v6;
}
