/*
 * XREFs of sub_140978EDC @ 0x140978EDC
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 * Callees:
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 */

__int64 __fastcall sub_140978EDC(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = sub_14030E7C0(a1, 2, &v4);
  if ( !v1 )
    return 3221225477LL;
  v3 = -1073741819;
  if ( (*(_DWORD *)(v1 + 48) & 0x6200000) == 0x4200000
    && (*(_DWORD *)(v1 + 64) & 1) != 0
    && (*(_BYTE *)(v1 + 72) & 1) != 0 )
  {
    v3 = -1073740638;
  }
  sub_14030EA70((char *)v1);
  return v3;
}
