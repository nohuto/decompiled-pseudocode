/*
 * XREFs of sub_14097A120 @ 0x14097A120
 * Callers:
 *     sub_14097B220 @ 0x14097B220 (sub_14097B220.c)
 * Callees:
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_140961734 @ 0x140961734 (sub_140961734.c)
 *     sub_14097A228 @ 0x14097A228 (sub_14097A228.c)
 *     sub_140A6A948 @ 0x140A6A948 (sub_140A6A948.c)
 */

__int64 __fastcall sub_14097A120(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  int v12; // ebx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0;
  v8 = sub_14030E7C0(a2, 0, (int *)v15);
  v10 = v8;
  if ( !v8 )
    return v15[0];
  if ( (*(_DWORD *)(v8 + 48) & 0x6200000) == 0x4200000 )
  {
    v13 = *(_DWORD *)(v8 + 64);
    if ( (v13 & 2) != 0 )
    {
      v12 = -1073740528;
    }
    else if ( (v13 & 1) != 0 )
    {
      if ( a4 == 4096 )
      {
        v12 = sub_140961734((__int64)(*(_QWORD *)(v10 + 80) << 25) >> 16, a3, v9, a3 + 2048, v14, a5);
        if ( v12 >= 0 )
        {
          sub_140A6A948(v10, -1LL);
          *(_DWORD *)(v10 + 64) |= 2u;
          v12 = 0;
        }
      }
      else
      {
        v12 = -1073741820;
      }
    }
    else
    {
      v12 = sub_14097A228(a1, v10, a3, a4);
    }
  }
  else
  {
    v12 = -1073741800;
  }
  sub_14032E700((char *)v10);
  return (unsigned int)v12;
}
