/*
 * XREFs of sub_140633018 @ 0x140633018
 * Callers:
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 * Callees:
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 */

__int64 __fastcall sub_140633018(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  bool v4; // zf
  int v6; // edx
  __int64 result; // rax
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0;
  v4 = *(_DWORD *)(a1 + 200) == 2;
  v10 = 0LL;
  v6 = 7;
  v11 = 0LL;
  if ( !v4 )
    v6 = 3;
  result = RtlGetMultiTimePrecise((LARGE_INTEGER *)&v10, v6, &v12);
  if ( (_DWORD)result )
    goto LABEL_10;
  if ( (v12 & 2) == 0 || (v12 & 1) == 0 )
  {
    result = 3221225473LL;
LABEL_10:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 816), 0xF7FFFFFF);
    return result;
  }
  v4 = *(_DWORD *)(a1 + 200) == 2;
  *a3 = *((_QWORD *)&v10 + 1) - v10;
  v9 = v11;
  if ( !v4 )
    v9 = v10;
  *a2 = v9;
  return 0LL;
}
