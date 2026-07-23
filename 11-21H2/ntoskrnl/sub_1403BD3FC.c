/*
 * XREFs of sub_1403BD3FC @ 0x1403BD3FC
 * Callers:
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 * Callees:
 *     sub_1403BD66C @ 0x1403BD66C (sub_1403BD66C.c)
 *     sub_1403BDD00 @ 0x1403BDD00 (sub_1403BDD00.c)
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BD3FC()
{
  __int64 v0; // rax
  __int64 result; // rax
  int v2; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v3; // [rsp+2Ch] [rbp-DCh]
  __int64 v4; // [rsp+34h] [rbp-D4h]
  _QWORD v5[3]; // [rsp+3Ch] [rbp-CCh]
  int v6; // [rsp+54h] [rbp-B4h]
  _QWORD v7[30]; // [rsp+58h] [rbp-B0h] BYREF
  int v8; // [rsp+168h] [rbp+60h] BYREF

  v0 = sub_1403BE664(1128878145LL);
  if ( v0 && (*(_BYTE *)(v0 + 40) & 1) == 0 )
    return 0LL;
  memset(v7, 0, sizeof(v7));
  v7[0] = 0xF000000001LL;
  v7[25] = &v8;
  v7[9] = sub_14052AC00;
  v7[26] = 0x100000004LL;
  v7[11] = sub_14052AB00;
  v7[12] = SkIsSecureKernel;
  v7[27] = 45056LL;
  *(_QWORD *)((char *)&v7[28] + 4) = 0LL;
  v7[1] = 0LL;
  v7[2] = sub_1403B6870;
  v7[7] = 0LL;
  memset(&v7[3], 0, 24);
  v7[13] = 0LL;
  LODWORD(v7[28]) = 0;
  v8 = 45056;
  result = sub_1403BDD00(v7);
  if ( (int)result >= 0 )
  {
    memset(v7, 0, sizeof(v7));
    v7[0] = 0xF000000001LL;
    v7[25] = &v8;
    v7[9] = sub_14052AC00;
    v7[11] = sub_14052AB00;
    v7[12] = SkIsSecureKernel;
    v7[26] = 0x100000004LL;
    v7[27] = 45057LL;
    *(_QWORD *)((char *)&v7[28] + 4) = 0LL;
    v7[1] = 0LL;
    v7[2] = sub_1403B6870;
    v7[7] = 0LL;
    memset(&v7[3], 0, 24);
    v7[13] = 0LL;
    LODWORD(v7[28]) = 0;
    v8 = 45057;
    result = sub_1403BDD00(v7);
    if ( (int)result >= 0 )
    {
      v3 = 0x200000001LL;
      v4 = 6LL;
      v6 = 0;
      v5[0] = -1LL;
      *(_OWORD *)&v5[1] = 0LL;
      v2 = 45056;
      result = sub_1403BD66C(&v2);
      if ( (int)result >= 0 )
      {
        LODWORD(v4) = 2;
        v3 = 0x800000000LL;
        HIDWORD(v5[0]) = -1;
        v2 = 45056;
        result = sub_1403BD66C(&v2);
        if ( (int)result >= 0 )
        {
          v4 = 6LL;
          v6 = 0;
          *(_OWORD *)&v5[1] = 0LL;
          v5[0] = -4294922240LL;
          v3 = 0x300000002LL;
          v2 = 45057;
          result = sub_1403BD66C(&v2);
          if ( (int)result >= 0 )
          {
            LODWORD(v4) = 2;
            v3 = 0x800000000LL;
            HIDWORD(v5[0]) = -1;
            v2 = 45057;
            return sub_1403BD66C(&v2);
          }
        }
      }
    }
  }
  return result;
}
