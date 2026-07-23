/*
 * XREFs of sub_140564F3C @ 0x140564F3C
 * Callers:
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 *     sub_140554988 @ 0x140554988 (sub_140554988.c)
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 *     sub_140564FF8 @ 0x140564FF8 (sub_140564FF8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140564F3C(_OWORD *a1)
{
  _OWORD *v1; // r8
  _OWORD *v2; // r9
  int v3; // r10d
  __int64 result; // rax
  __int128 v5; // xmm1

  v1 = &unk_140C02190;
  v2 = a1;
  if ( byte_140D01928 )
  {
    v3 = 112;
    do
    {
      result = (__int64)&byte_140D01928;
      *(_QWORD *)((char *)v1 + (char *)a1 - (char *)&unk_140C02190) = qword_140D06E28 ^ _byteswap_uint64((unsigned __int64)&byte_140D01928 ^ __ROL8__(qword_140D06CC8 ^ *(_QWORD *)v1, qword_140D06CC8));
      v1 = (_OWORD *)((char *)v1 + 8);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    result = 7LL;
    do
    {
      *v2 = *v1;
      v2[1] = v1[1];
      v2[2] = v1[2];
      v2[3] = v1[3];
      v2[4] = v1[4];
      v2[5] = v1[5];
      v2[6] = v1[6];
      v2 += 8;
      v5 = v1[7];
      v1 += 8;
      *(v2 - 1) = v5;
      --result;
    }
    while ( result );
  }
  return result;
}
