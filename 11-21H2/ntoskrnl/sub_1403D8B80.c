/*
 * XREFs of sub_1403D8B80 @ 0x1403D8B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402523CC @ 0x1402523CC (sub_1402523CC.c)
 */

__int64 __fastcall sub_1403D8B80(unsigned int a1)
{
  _DWORD *v1; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h]

  v1 = sub_1402523CC(a1, a1 + 1);
  if ( v1 )
  {
    LOWORD(v3) = 17;
    HIBYTE(v3) = *((_BYTE *)v1 + 24) - *((_BYTE *)v1 + 20);
    BYTE2(v3) = HIBYTE(v3) - 1;
  }
  else
  {
    return (unsigned int)-268435456;
  }
  return v3;
}
