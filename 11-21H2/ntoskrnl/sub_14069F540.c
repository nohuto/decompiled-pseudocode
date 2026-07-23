/*
 * XREFs of sub_14069F540 @ 0x14069F540
 * Callers:
 *     sub_140225E68 @ 0x140225E68 (sub_140225E68.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14069F540(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int16 v8; // r10
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned __int8 *v18; // rdx
  __int64 v19; // r8
  _WORD *v20; // rax
  __int16 v21; // cx
  unsigned int v22; // eax
  __int64 result; // rax

  v8 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    v8 *= 2;
  v11 = v8;
  v12 = v8 + 24;
  if ( a4 )
  {
    v13 = (v8 + 31) & 0xFFFFFFF8;
    v12 = a4 + v13;
  }
  else
  {
    v13 = v8 + 24;
  }
  *a7 = v12;
  if ( a6 < 0x18 )
    return 3221225507LL;
  v14 = a6 - 24;
  *(_QWORD *)a5 = *(_QWORD *)a1;
  *(_DWORD *)(a5 + 8) = *(_DWORD *)(a1 + 8);
  v15 = -1;
  if ( a4 )
    v15 = v13;
  *(_DWORD *)(a5 + 16) = a4;
  *(_DWORD *)(a5 + 20) = v8;
  *(_DWORD *)(a5 + 12) = v15;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    v16 = *(unsigned __int16 *)(a2 + 72);
    v17 = v14 >> 1;
    if ( v17 < v16 )
      v16 = v17;
    if ( v16 )
    {
      v18 = (unsigned __int8 *)(a2 + 76);
      v19 = v16;
      v20 = (_WORD *)(a5 + 24);
      do
      {
        v21 = *v18++;
        *v20++ = v21;
        --v19;
      }
      while ( v19 );
    }
  }
  else
  {
    if ( v14 <= v8 )
      v11 = a6 - 24;
    memmove((void *)(a5 + 24), (const void *)(a2 + 76), v11);
  }
  if ( a6 < v13 )
    return 2147483653LL;
  v22 = a6 - v13;
  if ( a4 )
  {
    if ( v22 > a4 )
      v22 = a4;
    memmove((void *)(a5 + v13), a3, v22);
  }
  result = 0LL;
  if ( v12 > a6 )
    return 2147483653LL;
  return result;
}
