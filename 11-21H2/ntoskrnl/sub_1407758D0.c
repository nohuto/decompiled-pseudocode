/*
 * XREFs of sub_1407758D0 @ 0x1407758D0
 * Callers:
 *     sub_1406E5854 @ 0x1406E5854 (sub_1406E5854.c)
 *     sub_1407735A0 @ 0x1407735A0 (sub_1407735A0.c)
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407758D0(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ecx

  if ( !*(_QWORD *)(a1 + 184) && *(_QWORD *)(a1 + 192) == a1 + 192 && (*(_DWORD *)(a1 + 216) & 0x20) != 0 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( (*(_DWORD *)(result + 40) & 1) != 0 )
    {
      *a4 = 4653064;
      a4[1] = 16;
    }
    else
    {
      *(_QWORD *)a4 = 0LL;
    }
  }
  else
  {
    *a4 = 4653063;
    if ( (*(_DWORD *)(a1 + 216) & 0x20) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 208);
      if ( *(_QWORD *)(a1 + 184) )
        ++v5;
    }
    else
    {
      v5 = 4;
    }
    if ( a3 )
      v6 = a3 * v5 + 16;
    else
      v6 = v5 << 10;
    v7 = 0x10000;
    a4[1] = v6;
    if ( v6 > 0x10000 )
      a4[1] = 0x10000;
    else
      v7 = v6;
    if ( v7 < a3 )
    {
      a4[1] = a3;
      v7 = a3;
    }
    result = (unsigned int)a4[1];
    if ( v7 < a2 )
      result = a2;
    a4[1] = result;
  }
  return result;
}
