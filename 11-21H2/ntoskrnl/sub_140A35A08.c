/*
 * XREFs of sub_140A35A08 @ 0x140A35A08
 * Callers:
 *     sub_140A34F34 @ 0x140A34F34 (sub_140A34F34.c)
 * Callees:
 *     sub_140655178 @ 0x140655178 (sub_140655178.c)
 */

_QWORD *__fastcall sub_140A35A08(__int64 a1, int a2)
{
  signed int v2; // ebx
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v8) = 0;
  v2 = 4;
  if ( a2 >= 1 )
    v2 = a2;
  v3 = 0LL;
  if ( a1 )
  {
    if ( v2 >= *(unsigned __int16 *)(a1 + 4) )
    {
      v4 = sub_140655178((unsigned int *)a1, 0x10u, v2, 0xCu, v6, v7, (unsigned int *)&v8);
      v3 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v8;
        v4[1] = v4 + 2;
        *((_WORD *)v4 + 3) = v2;
      }
    }
  }
  return v3;
}
