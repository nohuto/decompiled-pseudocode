/*
 * XREFs of sub_140374F38 @ 0x140374F38
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     sub_140374FC8 @ 0x140374FC8 (sub_140374FC8.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407F6600 @ 0x1407F6600 (sub_1407F6600.c)
 *     sub_14092972C @ 0x14092972C (sub_14092972C.c)
 */

__int64 sub_140374F38()
{
  unsigned int v0; // ebx
  unsigned __int8 v1; // di
  _QWORD v3[19]; // [rsp+28h] [rbp-49h] BYREF
  unsigned int v4; // [rsp+D8h] [rbp+67h] BYREF

  v4 = 0;
  if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
    return 3221225659LL;
  sub_140374FC8(&v4);
  v0 = v4;
  v1 = v4 ^ BYTE2(v4) ^ ((unsigned __int16)(v4 ^ HIWORD(v4)) >> 8);
  sub_1407F6600(v4);
  if ( !dword_140D01478 )
    return 3221226326LL;
  if ( dword_140C0C82C )
  {
    if ( _interlockedbittestandset(&dword_140D04948[(unsigned __int64)v1 >> 5], v1 & 0x1F) )
      return 0LL;
    v0 = v4;
  }
  memset(v3, 0, sizeof(v3));
  v3[2] = 0LL;
  v3[5] = v0;
  v3[0] = 3221226505LL;
  LODWORD(v3[3]) = 2;
  v3[4] = 43LL;
  return sub_14092972C(KeGetCurrentThread());
}
