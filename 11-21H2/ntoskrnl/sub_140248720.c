/*
 * XREFs of sub_140248720 @ 0x140248720
 * Callers:
 *     sub_1402485E0 @ 0x1402485E0 (sub_1402485E0.c)
 *     sub_1405D7320 @ 0x1405D7320 (sub_1405D7320.c)
 *     sub_1406C800C @ 0x1406C800C (sub_1406C800C.c)
 *     sub_1409980BC @ 0x1409980BC (sub_1409980BC.c)
 * Callees:
 *     sub_1403426C8 @ 0x1403426C8 (sub_1403426C8.c)
 */

__int64 __fastcall sub_140248720(
        __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3,
        unsigned __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // r10
  __int64 result; // rax
  unsigned int v11; // ecx

  v6 = *(_DWORD **)(a1 + 33968);
  v7 = (_DWORD *)a4;
  v8 = *(_DWORD **)(a1 + 33976);
  if ( v6 && v8 )
  {
    a4 = (unsigned int)v8[18];
    result = (unsigned int)v6[128];
    if ( (unsigned int)a4 >= (unsigned int)result )
      a4 = (unsigned int)result;
    if ( a2 )
    {
      result = (unsigned int)v8[19];
      *(_DWORD *)a2 = result;
    }
    if ( a3 )
    {
      v11 = v6[128] * v6[110];
      result = 1374389535 * v11;
      a2 = v11 / 0x64;
      *a3 = a2;
    }
    if ( a5 )
    {
      result = (unsigned int)((unsigned int)a4 < v6[112]) + 1;
      *a5 = result;
    }
    if ( a6 )
    {
      result = (unsigned int)v8[8];
      *a6 = result;
      if ( v8[7] < 0x64u )
      {
        result = (unsigned int)result | 4;
        *a6 = result;
      }
    }
  }
  else
  {
    if ( a2 )
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 68);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 68);
    if ( a5 )
      *a5 = 0;
    result = (__int64)a6;
    if ( a6 )
      *a6 = 0;
  }
  if ( v7 )
  {
    LOBYTE(a2) = 1;
    result = sub_1403426C8(a1, a2, a3, a4);
    *v7 = result;
  }
  return result;
}
