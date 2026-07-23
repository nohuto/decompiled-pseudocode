/*
 * XREFs of sub_1403B4F40 @ 0x1403B4F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403BD2A4 @ 0x1403BD2A4 (sub_1403BD2A4.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_140524B88 @ 0x140524B88 (sub_140524B88.c)
 *     sub_14052A80C @ 0x14052A80C (sub_14052A80C.c)
 */

__int64 __fastcall sub_1403B4F40(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v3; // rax
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // esi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0LL;
  v1 = *(_DWORD **)(a1 + 16);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !v1 )
  {
    v3 = sub_1403BE7F0(*(_QWORD *)a1, 4096LL, 0LL);
    *(_QWORD *)(a1 + 16) = v3;
    v1 = (_DWORD *)v3;
    if ( !v3 )
      return 3221225626LL;
  }
  *v1 = 1;
  v1[4] = 0;
  *v1 = 1;
  v4 = v1[4];
  *v1 = 1;
  v1[4] = 0;
  *v1 = 1;
  v5 = v1[4];
  if ( (unsigned int)(v4 - 1) > 0xFFFFFFFD || (_BYTE)v4 != (_BYTE)v5 || BYTE2(v4) != BYTE2(v5) )
  {
    *(_BYTE *)(a1 + 40) = 1;
    return 0LL;
  }
  *(_BYTE *)(a1 + 24) = v4;
  *(_BYTE *)(a1 + 25) = BYTE2(v4) + 1;
  *v1 = 0;
  v1[4] |= *(_DWORD *)(a1 + 8) << 24;
  if ( *(_BYTE *)(a1 + 26) || (result = sub_1403BD2A4(a1), (int)result >= 0) )
  {
    v6 = 0;
    if ( *(_BYTE *)(a1 + 25) )
    {
      v7 = 17;
      do
      {
        *v1 = v7 - 1;
        v8 = (unsigned int)v1[4];
        if ( *(_BYTE *)(a1 + 26)
          || (v1[4] & 0x700) != 0x200
          || (v8 & 0x10000) != 0
          || (*v1 = v7,
              v10 = (unsigned int)v1[4],
              LODWORD(v15) = *(_DWORD *)(a1 + 8),
              HIDWORD(v15) = v6,
              sub_14052A80C(v8, v10, &v11),
              DWORD2(v12) == 7) )
        {
          v1[4] = 65791;
          *v1 = v7;
          v1[4] = 0;
        }
        else
        {
          result = sub_140524B88(&v15, &v11);
          if ( (int)result < 0 )
            return result;
        }
        ++v6;
        v7 += 2;
      }
      while ( v6 < *(unsigned __int8 *)(a1 + 25) );
    }
    *(_BYTE *)(a1 + 26) = 1;
    return 0LL;
  }
  return result;
}
