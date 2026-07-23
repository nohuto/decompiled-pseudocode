/*
 * XREFs of sub_1409B8C20 @ 0x1409B8C20
 * Callers:
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409B8C20(__int64 a1)
{
  unsigned __int64 v1; // r8
  int v2; // edx
  unsigned int v3; // r10d
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( !a1 )
    return 0;
  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v1 || (unsigned __int16)v1 < 0xCu )
    return 0;
  v2 = *(_DWORD *)(a1 + 8);
  v3 = v2 & 1;
  v4 = v2 & 2;
  v5 = 16 * v3 + 16;
  if ( !v4 )
    v5 = 16 * v3;
  if ( v1 >= v5 + 24
    && (v6 = a1 + (v4 != 0 ? 28LL : 12LL), *(_BYTE *)(v6 + 16LL * v3) == 1)
    && (v7 = *(unsigned __int8 *)(v6 + 16LL * v3 + 1), (unsigned __int8)v7 <= 0xFu)
    && v1 >= (unsigned __int64)(unsigned int)v5 + 4 * (v7 + 5) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
