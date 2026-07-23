/*
 * XREFs of sub_1402EB71C @ 0x1402EB71C
 * Callers:
 *     sub_1402EB59C @ 0x1402EB59C (sub_1402EB59C.c)
 * Callees:
 *     RtlInterlockedSetClearRun @ 0x1402E28A0 (RtlInterlockedSetClearRun.c)
 */

__int64 __fastcall sub_1402EB71C(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned int v6; // r13d
  unsigned int v7; // esi
  unsigned int v8; // r8d
  unsigned int v9; // edx
  int v10; // r9d
  __int64 v11; // r11
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  __int64 *v14; // rbx
  __int64 i; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // ebx
  unsigned int v18; // edx

  if ( !*(_DWORD *)(a1 + 132) )
    return -1LL;
  v4 = *(_DWORD *)(a1 + 128) & (unsigned int)-(*(_DWORD *)(a1 + 128) < 0x200u);
  if ( !_bittest64(*(const signed __int64 **)(a1 + 56), v4) && (unsigned int)RtlInterlockedSetClearRun(a1 + 48, v4, 1u) )
    goto LABEL_4;
  while ( 2 )
  {
    v6 = v4 + 1;
    v7 = *(_DWORD *)(a1 + 48);
    v8 = v6 < v7 ? v6 : 0;
    v9 = v7 - 1;
    v10 = (*(_DWORD *)(a1 + 56) & 4) != 0LL ? 0x20 : 0;
    v11 = *(_QWORD *)(a1 + 56) - ((*(_QWORD *)(a1 + 56) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v12 = v10 + v9;
      v13 = v10 + v8;
      if ( v9 - v8 != -1 )
      {
        v14 = (__int64 *)(v11 + 8 * ((unsigned __int64)v13 >> 6));
        for ( i = *v14 | ((1LL << (v13 & 0x3F)) - 1); i == -1; i = *v14 )
        {
          if ( (unsigned __int64)++v14 > v11 + 8 * ((unsigned __int64)v12 >> 6) )
            goto LABEL_18;
        }
        _BitScanForward64(&v16, ~i);
        v17 = v16 + ((unsigned int)(((__int64)v14 - v11) >> 3) << 6);
        if ( v17 <= v12 )
          break;
      }
LABEL_18:
      v17 = -1;
LABEL_19:
      if ( !v8 )
        goto LABEL_14;
      v18 = v6 + 1;
      if ( v6 + 1 > v7 )
        v18 = *(_DWORD *)(a1 + 48);
      v9 = v18 - 1;
      v8 = 0;
    }
    if ( v17 == -1 )
      goto LABEL_19;
    v17 -= v10;
LABEL_14:
    LODWORD(v4) = v17;
    if ( v17 == -1 )
      return -1LL;
    if ( !(unsigned int)RtlInterlockedSetClearRun(a1 + 48, v17, 1u) )
      continue;
    break;
  }
LABEL_4:
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 32));
  *(_DWORD *)(a1 + 128) = v4 + 1;
  return *(_QWORD *)(a1 + 24) + (unsigned int)v4;
}
