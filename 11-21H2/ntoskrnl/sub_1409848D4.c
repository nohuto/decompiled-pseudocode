/*
 * XREFs of sub_1409848D4 @ 0x1409848D4
 * Callers:
 *     sub_140A80940 @ 0x140A80940 (sub_140A80940.c)
 * Callees:
 *     sub_14098501C @ 0x14098501C (sub_14098501C.c)
 *     sub_140985120 @ 0x140985120 (sub_140985120.c)
 *     sub_140A80A58 @ 0x140A80A58 (sub_140A80A58.c)
 */

__int64 sub_1409848D4()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rax
  _DWORD *v2; // rsi
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  v0 = 0;
  v1 = (_DWORD *)sub_14098501C(IoDriverObjectType);
  v2 = v1;
  if ( v1 )
  {
    v3 = 0;
    if ( *v1 )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)&v2[2 * v3 + 2];
        if ( v4 )
        {
          if ( (*(_BYTE *)(v4 + 58) & 2) == 0 || (v5 = byte_140C25440[*(_BYTE *)(v4 + 58) & 3], v4 + 32 == v5) )
            v7 = 0LL;
          else
            v7 = *(_OWORD *)(v4 + 32 - v5 + 8);
          if ( !(unsigned __int8)sub_140A80A58(v4 + 80, &v7, *(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 32), 0LL) )
            break;
        }
        if ( (unsigned int)++v3 >= *v2 )
          goto LABEL_12;
      }
      v0 = -2147483622;
    }
LABEL_12:
    sub_140985120(v2);
  }
  return v0;
}
