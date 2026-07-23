/*
 * XREFs of sub_14050EE34 @ 0x14050EE34
 * Callers:
 *     sub_140507040 @ 0x140507040 (sub_140507040.c)
 *     sub_14050E73C @ 0x14050E73C (sub_14050E73C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050EE34(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  if ( !qword_140C4C4F8 )
    return 3221225473LL;
  result = sub_14042A5E0(a1, &v4);
  *(_DWORD *)a2 = v4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = v5;
  return result;
}
