/*
 * XREFs of sub_14057D5E0 @ 0x14057D5E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14057D9D4 @ 0x14057D9D4 (sub_14057D9D4.c)
 */

__int64 __fastcall sub_14057D5E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 result; // rax
  __int64 v11; // rcx

  v8 = sub_14057D9D4(0x30uLL);
  v9 = v8;
  if ( !v8 )
    return 3221225626LL;
  v11 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)v8 = a1;
  *(_QWORD *)(v8 + 8) = a3;
  *(_QWORD *)(v8 + 16) = a4;
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v11 + 56);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(v11 + 64);
  *(_DWORD *)(v8 + 40) = *(unsigned __int8 *)(v11 + 3);
  *(_QWORD *)(v11 + 56) = &sub_14057D680;
  result = 0LL;
  *(_QWORD *)(v11 + 64) = v9;
  *(_BYTE *)(v11 + 3) = -32;
  return result;
}
