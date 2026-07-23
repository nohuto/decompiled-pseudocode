/*
 * XREFs of sub_1406D8084 @ 0x1406D8084
 * Callers:
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1406D8084(int a1, _DWORD *a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  if ( a4 )
  {
    *(_DWORD *)(a4 + 4) = 0;
    if ( (a3 & 0x20000000) != 0 )
    {
      v4 = a3;
      v5 = a3 & 0x40000000;
      v6 = v4 >> 63;
      if ( a1 < 0 )
      {
        v9 = (v6 & 0xC) + 8;
        v10 = v9 + 16;
        if ( !v5 )
          v10 = v9;
        *(_DWORD *)(v10 + a4) = *a2;
        *(_DWORD *)(v10 + a4 + 4) = a2[2];
        *(_DWORD *)(v10 + a4 + 8) = a2[4];
        *(_DWORD *)(v10 + a4 + 12) = a2[5];
        *(_DWORD *)(v10 + a4 + 16) = a2[6];
      }
      else
      {
        v7 = (v6 & 0x18) + 8;
        v8 = v7 + 32;
        if ( !v5 )
          v8 = v7;
        *(_OWORD *)(v8 + a4) = *(_OWORD *)a2;
        *(_OWORD *)(v8 + a4 + 16) = *((_OWORD *)a2 + 1);
      }
      if ( *(_QWORD *)a2 )
        *(_DWORD *)(a4 + 4) |= 0x20000000u;
    }
  }
}
