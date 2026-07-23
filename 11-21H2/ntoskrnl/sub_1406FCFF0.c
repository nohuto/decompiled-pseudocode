/*
 * XREFs of sub_1406FCFF0 @ 0x1406FCFF0
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1406FCFF0(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  int v9; // r11d
  int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx

  result = 0xFFFFFFFFFFFFLL;
  v5 = (a1 >> 4) & 0xFFFFFFFFFFFFLL;
  v6 = 8 * (a3[1] - qword_140C51BE8);
  v7 = (a2 >> 4) & 0xFFFFFFFFFFFFLL;
  if ( v7 >= v6 )
  {
    v8 = v6 + *a3;
    if ( v5 < v8 )
    {
      v9 = 0;
      v10 = 0;
      if ( v5 < v6 )
      {
        v5 = v6;
        v10 = 1;
      }
      if ( v7 >= v8 )
      {
        v7 = v8 - 1;
        v10 = 1;
      }
      v11 = v7 - v6;
      v12 = v5 - v6;
      v13 = v11 - v12 + 1;
      if ( v11 == v12 && !v10 || v12 == a3[2] )
      {
        v14 = v11 + 1;
        a3[2] = v11 + 1;
      }
      else
      {
        v14 = v11 + 1;
      }
      v15 = a3[4];
      if ( v15 >= v14 || a3[3] + v15 <= v12 )
      {
        if ( v13 <= 1 || v10 )
          return result;
      }
      else
      {
        v9 = 1;
      }
      a3[4] = v14;
      if ( v13 > 1 && !v10 )
      {
        if ( v9 )
        {
          result = a3[3];
          if ( v13 >= result )
            v13 = a3[3];
        }
        a3[3] = v13;
      }
    }
  }
  return result;
}
