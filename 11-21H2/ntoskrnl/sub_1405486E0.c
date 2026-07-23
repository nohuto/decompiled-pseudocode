/*
 * XREFs of sub_1405486E0 @ 0x1405486E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14054934C @ 0x14054934C (sub_14054934C.c)
 *     sub_140549558 @ 0x140549558 (sub_140549558.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_1405486E0(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0;
  v6 = 0LL;
  v7 = a1;
  if ( a1 )
  {
    while ( v7 < 0x55 )
    {
      v8 = v7;
      if ( v7 > 2 )
        goto LABEL_4;
      v9 = sub_14054934C(v7, a2, &v11, v6);
LABEL_5:
      v7 -= v11;
      v6 = v9;
      if ( !v9 )
      {
        a2 += 48LL * v11;
        if ( v7 )
          continue;
      }
      goto LABEL_7;
    }
    v8 = 85LL;
LABEL_4:
    v9 = sub_140549558(v8, a2, &v11, v6);
    goto LABEL_5;
  }
LABEL_7:
  if ( a3 )
    *a3 = a1 - v7;
  return sub_14054CA70((unsigned __int16)v6);
}
