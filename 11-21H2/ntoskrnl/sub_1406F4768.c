/*
 * XREFs of sub_1406F4768 @ 0x1406F4768
 * Callers:
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 * Callees:
 *     sub_14023FBE4 @ 0x14023FBE4 (sub_14023FBE4.c)
 *     sub_14026E548 @ 0x14026E548 (sub_14026E548.c)
 *     sub_14026EA48 @ 0x14026EA48 (sub_14026EA48.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045BA26 @ 0x14045BA26 (sub_14045BA26.c)
 */

__int64 __fastcall sub_1406F4768(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int16 *a3, int a4)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned int v11; // r10d
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  ULONG_PTR v16; // r10
  _QWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v18[24]; // [rsp+30h] [rbp-68h] BYREF

  v4 = 8 * a2;
  result = (__int64)memset(v18, 0, sizeof(v18));
  v9 = *(_QWORD *)a3;
  v10 = 4096LL;
  LOBYTE(v11) = 2;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    result = sub_14026EA48((__int64)a3, 4096LL);
    v12 = v11;
LABEL_3:
    v13 = result;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v9 + 56) & 0x1000) == 0 )
  {
    result = sub_14026E548((a3[16] >> 1) & 0x1F, 4096LL);
    v12 = 1026LL;
    goto LABEL_3;
  }
  v13 = 0LL;
  v12 = 1026LL;
LABEL_4:
  if ( v4 >= v10 )
  {
    if ( !a4 )
    {
      v17[0] = BugCheckParameter1;
      v17[1] = v4;
      sub_14045BA26((__int64)v18, (__int64)v17, 1LL, v11);
      v18[10] = (*(_DWORD *)(v9 + 56) >> 20) & 0x7F;
      sub_14031C860(v16, BugCheckParameter1, 0, v15 | (unsigned __int64)v18);
      goto LABEL_6;
    }
    v14 = v13;
    if ( !v13 )
      v14 = sub_14026E548(4, v10) & 0xFFFFFFFFFFFFFC1FuLL;
    sub_14023FBE4(BugCheckParameter1, v4, v14 | v12);
    result = v4 & 0xFFFFFFFFFFFFF000uLL;
    BugCheckParameter1 += v4 & 0xFFFFFFFFFFFFF000uLL;
    v4 &= 0xFFFu;
  }
  if ( v4 )
  {
LABEL_6:
    result = v13;
    memset64((void *)BugCheckParameter1, v13, v4 >> 3);
  }
  return result;
}
