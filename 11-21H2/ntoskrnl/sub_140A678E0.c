/*
 * XREFs of sub_140A678E0 @ 0x140A678E0
 * Callers:
 *     sub_140A67608 @ 0x140A67608 (sub_140A67608.c)
 * Callees:
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14059368C @ 0x14059368C (sub_14059368C.c)
 */

__int64 __fastcall sub_140A678E0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h]

  v7[3] = 0LL;
  v3 = 0LL;
  v8 = 0LL;
  *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    v3 = sub_14055A628(0);
  v7[4] = 0LL;
  v7[0] = 0LL;
  LODWORD(v8) = v8 | 1;
  v7[2] = a1 + 600;
  v7[1] = sub_140552800;
  result = sub_14059368C((__int64)v7);
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    result = sub_14055A628(0) - v3;
    *a3 = result;
  }
  return result;
}
