/*
 * XREFs of sub_1405B7574 @ 0x1405B7574
 * Callers:
 *     sub_140266158 @ 0x140266158 (sub_140266158.c)
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_1402CA210 @ 0x1402CA210 (sub_1402CA210.c)
 *     sub_140316E90 @ 0x140316E90 (sub_140316E90.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1403C4E98 @ 0x1403C4E98 (sub_1403C4E98.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405B766C @ 0x1405B766C (sub_1405B766C.c)
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405B7574(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // r11d
  __int64 *v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx

  v3 = *(unsigned int *)(a1 + 4);
  v4 = 0;
  if ( (_DWORD)v3 )
    v7 = (__int64 *)(a1 + 8 * ((unsigned int)(v3 - 1) + 2LL));
  else
    v7 = 0LL;
  if ( a3 == 3 )
  {
    if ( v7 )
    {
      v8 = *v7;
      if ( (*v7 & 0xC00) == 0 && (*v7 & 0x3FF) != 0x3FF )
      {
        v9 = (*v7 & 0x3FF) + 1;
        if ( a2 == v9 + (v8 >> 12) )
        {
          *v7 = v8 ^ (v9 ^ v8) & 0x3FF;
          return 0LL;
        }
        if ( a2 == (v8 >> 12) - 1 )
        {
          *v7 = v9 & 0x3FF | (a2 << 12);
          return 0LL;
        }
      }
    }
  }
  v11 = a2 << 12;
  *(_QWORD *)(a1 + 8 * v3 + 16) = v11;
  if ( a3 != 3 )
  {
    if ( a3 == 2 )
    {
      v12 = v11 | 0xF;
    }
    else if ( a3 == 1 )
    {
      v12 = v11 | 0x400;
    }
    else
    {
      v12 = v11 | 0x800;
    }
    *(_QWORD *)(a1 + 8 * v3 + 16) = v12;
  }
  LOBYTE(v4) = ++*(_DWORD *)(a1 + 4) == *(_DWORD *)(a1 + 8);
  return v4;
}
