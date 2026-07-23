/*
 * XREFs of sub_1406D8B90 @ 0x1406D8B90
 * Callers:
 *     sub_1407DCF7C @ 0x1407DCF7C (sub_1407DCF7C.c)
 * Callees:
 *     sub_14036669C @ 0x14036669C (sub_14036669C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1406D8B90(__int64 a1, const void **a2)
{
  int v2; // edi
  unsigned int v4; // edi
  __int64 result; // rax
  _QWORD *v6; // rbx
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)a2;
  v7 = 0LL;
  v4 = (unsigned int)(v2 + 35) >> 4;
  result = sub_14036669C(a1, v4, &v7);
  if ( (int)result >= 0 )
  {
    v6 = v7;
    memset(v7, 0, 16LL * v4);
    *v6 = (8LL * (v4 - 1)) | 6;
    memmove(v6 + 2, a2[1], *(unsigned __int16 *)a2);
    return 0LL;
  }
  return result;
}
