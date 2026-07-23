/*
 * XREFs of sub_1402885A0 @ 0x1402885A0
 * Callers:
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     sub_14028D3BC @ 0x14028D3BC (sub_14028D3BC.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     sub_1406FE4F0 @ 0x1406FE4F0 (sub_1406FE4F0.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     sub_1407F730C @ 0x1407F730C (sub_1407F730C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140459984 @ 0x140459984 (sub_140459984.c)
 */

__int64 __fastcall sub_1402885A0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v6; // edi
  unsigned __int16 v8; // ax
  void *v9; // rcx
  __int64 result; // rax

  v6 = 0;
  *(_QWORD *)(a1 + 16) = a5;
  *(_DWORD *)a1 = 64;
  *(_BYTE *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v8 = *(char *)(a3 + 76);
  *(_WORD *)(a1 + 72) = v8;
  *(_WORD *)(a1 + 74) = 0;
  if ( v8 <= 0xFu )
  {
    v9 = (void *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = v9;
    memset(v9, 0, 0x1E0uLL);
    *(_WORD *)(a1 + 72) = 15;
    return v6;
  }
  result = sub_140459984(a1, a6);
  v6 = result;
  if ( (int)result >= 0 )
    return v6;
  return result;
}
