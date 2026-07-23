/*
 * XREFs of RtlCompressBufferXp10 @ 0x18011BB70
 * Callers:
 *     <none>
 * Callees:
 *     Xp10CompressBuffer @ 0x18011D4E4 (Xp10CompressBuffer.c)
 */

__int64 __fastcall RtlCompressBufferXp10(__int16 a1)
{
  __int16 v2[2]; // [rsp+40h] [rbp-18h] BYREF
  int v3; // [rsp+44h] [rbp-14h]

  if ( a1 && a1 != 256 )
    return 3221225659LL;
  v3 = 0;
  v2[0] = 16504;
  return Xp10CompressBuffer(v2);
}
