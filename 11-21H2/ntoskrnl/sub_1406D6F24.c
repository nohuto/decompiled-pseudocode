/*
 * XREFs of sub_1406D6F24 @ 0x1406D6F24
 * Callers:
 *     sub_1406D6E10 @ 0x1406D6E10 (sub_1406D6E10.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_140689BB8 @ 0x140689BB8 (sub_140689BB8.c)
 */

char __fastcall sub_1406D6F24(unsigned int *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // r10d
  __int64 v3; // r11
  int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // r11

  if ( (a1[40] & 0x8001) != 0 || !a1[32] || dword_140C0B8C0 )
    return 0;
  if ( !byte_140C49040 )
    return 1;
  v1 = sub_140689BB8(a1);
  if ( *(_DWORD *)(v3 + 180) >= v1 )
    return 1;
  v4 = *(_DWORD *)(v3 + 168);
  v5 = v2;
  if ( v4 == 1 )
    return 1;
  v6 = v2;
  v7 = (_BYTE *)(v3 + 192);
  do
  {
    if ( v6 != v4 && *v7 == (_BYTE)v2 )
      ++v5;
    ++v6;
    ++v7;
  }
  while ( v6 < 2 );
  if ( v5
    && (v8 = sub_1402F5718(), v8 < *(_QWORD *)(v9 + 4144) + 10000000 * (unsigned __int64)(unsigned int)dword_140C01B10) )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
