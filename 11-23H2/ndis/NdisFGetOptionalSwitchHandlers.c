/*
 * XREFs of NdisFGetOptionalSwitchHandlers @ 0x1C0067B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisFGetOptionalSwitchHandlers(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  char v5; // r9
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  bool v8; // cf

  result = 3221225659LL;
  if ( *(_BYTE *)a3 != 0xB8 )
    return 3221225485LL;
  v5 = *(_BYTE *)(a3 + 1);
  if ( v5 == 2 && *(_WORD *)(a3 + 2) < 0xF0u )
    return 3221225485LL;
  if ( v5 == 1 && *(_WORD *)(a3 + 2) < 0x70u )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD **)(v6 + 3760);
  if ( v7[113] )
  {
    *a2 = *(_QWORD *)(v6 + 24);
    v8 = *(_BYTE *)(a3 + 1) < 2u;
    *(_QWORD *)(a3 + 8) = v7[113];
    *(_QWORD *)(a3 + 16) = v7[114];
    *(_QWORD *)(a3 + 24) = v7[116];
    *(_QWORD *)(a3 + 32) = v7[115];
    *(_QWORD *)(a3 + 40) = v7[117];
    *(_QWORD *)(a3 + 48) = v7[118];
    *(_QWORD *)(a3 + 56) = v7[119];
    *(_QWORD *)(a3 + 64) = v7[120];
    *(_QWORD *)(a3 + 72) = v7[121];
    *(_QWORD *)(a3 + 80) = v7[122];
    *(_QWORD *)(a3 + 88) = v7[123];
    *(_QWORD *)(a3 + 96) = v7[124];
    *(_QWORD *)(a3 + 104) = v7[125];
    *(_QWORD *)(a3 + 112) = v7[126];
    *(_QWORD *)(a3 + 120) = v7[127];
    if ( !v8 )
    {
      *(_QWORD *)(a3 + 128) = v7[128];
      *(_QWORD *)(a3 + 136) = v7[129];
      *(_QWORD *)(a3 + 144) = v7[130];
      *(_QWORD *)(a3 + 152) = v7[131];
      *(_QWORD *)(a3 + 160) = v7[132];
      *(_QWORD *)(a3 + 168) = v7[133];
      *(_QWORD *)(a3 + 176) = v7[134];
      *(_QWORD *)(a3 + 184) = v7[135];
      *(_QWORD *)(a3 + 192) = v7[136];
      *(_QWORD *)(a3 + 200) = v7[137];
      *(_QWORD *)(a3 + 208) = v7[138];
      *(_QWORD *)(a3 + 216) = v7[139];
      *(_QWORD *)(a3 + 224) = v7[140];
      *(_QWORD *)(a3 + 232) = v7[141];
    }
    return 0LL;
  }
  return result;
}
