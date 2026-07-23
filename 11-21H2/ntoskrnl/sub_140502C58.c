/*
 * XREFs of sub_140502C58 @ 0x140502C58
 * Callers:
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140502D50 @ 0x140502D50 (sub_140502D50.c)
 */

__int64 __fastcall sub_140502C58(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  signed __int32 v5; // edi
  unsigned __int16 v7; // bx
  signed __int32 v8; // esi
  signed __int32 v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v11 = 0;
  v12 = a2;
  v5 = a2;
  if ( qword_140D010D8 )
    v3 = sub_14042A5E0(a1, a2);
  v7 = sub_140502D50(a3, &v11);
  if ( !*(_BYTE *)(a3 + 20) )
    v11 = v3 != 0 ? v11 : 0;
  while ( 1 )
  {
    v8 = v5;
    LODWORD(v12) = v5;
    if ( v11 && (v5 & 1) == 0 )
    {
      v8 = v5 ^ (v7 ^ (unsigned __int16)v5) & 0x278 | 1;
      LODWORD(v12) = v8;
    }
    if ( (v5 & 2) == 0 )
    {
      v8 = ((unsigned __int16)v8 ^ v7) & 0x100 ^ v8 | 2;
      LODWORD(v12) = v8;
    }
    v9 = _InterlockedCompareExchange(a1, v8, v5);
    if ( v5 == v9 )
      break;
    v5 = v9;
  }
  if ( (v5 & 2) == 0 && qword_140D010C8 )
    sub_14042A5E0(a1, *(unsigned __int8 *)(a3 + 20));
  if ( !v11 )
    LODWORD(v12) = ((unsigned __int16)v8 ^ v7) & 0x278 ^ v8;
  return v12;
}
