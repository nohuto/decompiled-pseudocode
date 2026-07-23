/*
 * XREFs of sub_140A73078 @ 0x140A73078
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140A731C8 @ 0x140A731C8 (sub_140A731C8.c)
 * Callees:
 *     sub_14028F978 @ 0x14028F978 (sub_14028F978.c)
 *     sub_140565928 @ 0x140565928 (sub_140565928.c)
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 */

__int64 __fastcall sub_140A73078(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  v4 = *(unsigned int *)(a1 + 24);
  v16[0] = 56LL;
  v16[1] = a1;
  if ( v4 > (unsigned __int64)(unsigned int)dword_140C097F8 - 56 )
    LODWORD(v4) = dword_140C097F8 - 56;
  v8 = *(unsigned __int16 *)(a2 + 2);
  v9 = 6;
  v10 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)v4 > v8 )
    LODWORD(v4) = v8;
  LODWORD(v17) = v4;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        v9 = 38;
    }
    else
    {
      v9 = 22;
    }
  }
  else
  {
    v9 = 14;
  }
  if ( *(_DWORD *)a1 == 12642 )
  {
    if ( (unsigned int)v4 > 4096 - (*(_DWORD *)(a1 + 16) & 0xFFFu) )
      LODWORD(v4) = 4096 - (*(_DWORD *)(a1 + 16) & 0xFFF);
    v13 = sub_14028F978(*(char **)(a1 + 16), *(_QWORD *)(a2 + 8), v4, 0, v9);
    *(_DWORD *)(a1 + 8) = v13;
    if ( v13 < 0 )
      LODWORD(v4) = 0;
  }
  else
  {
    v14 = sub_140A6F124(*(char **)(a1 + 16), *(_QWORD *)(a2 + 8), v4, 0, v9, &v17);
    LODWORD(v4) = v17;
    *(_DWORD *)(a1 + 8) = v14;
  }
  *(_DWORD *)(a1 + 28) = v4;
  if ( *(_DWORD *)a1 == 12642 && (unsigned int)v4 >= 4 && sub_140565928(*(int **)(a2 + 8), v4) )
  {
    *(_DWORD *)(a1 + 28) = ((unsigned int)v4 >> 2) | 0x40000000;
    LOWORD(v4) = 4;
  }
  *(_WORD *)a2 = v4;
  return KdSendPacket(2LL, v16, a2, a4);
}
