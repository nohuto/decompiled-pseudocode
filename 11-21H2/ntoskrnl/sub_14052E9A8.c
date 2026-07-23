/*
 * XREFs of sub_14052E9A8 @ 0x14052E9A8
 * Callers:
 *     sub_14052DF88 @ 0x14052DF88 (sub_14052DF88.c)
 * Callees:
 *     sub_14052EA60 @ 0x14052EA60 (sub_14052EA60.c)
 */

__int64 __fastcall sub_14052E9A8(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx

  if ( !*(_BYTE *)(a1 + 320) )
    return (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32)
                                                    + 16 * ((unsigned __int64)(unsigned int)a2 >> 8))
                                        + 16LL * (unsigned __int8)a2
                                        + 8) >> 8);
  v2 = sub_14052EA60(a1, a2);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 32) )
    {
      v4 = *(_QWORD *)(v2 + 56);
      if ( (*(_QWORD *)v4 & 1) != 0 && (((*(_QWORD *)v4 & 0x1C0LL) - 128) & 0xFFFFFFFFFFFFFF7FuLL) == 0 )
        return (unsigned __int16)*(_DWORD *)(v4 + 8);
    }
  }
  return v3;
}
