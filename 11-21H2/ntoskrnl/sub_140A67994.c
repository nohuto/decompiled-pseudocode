/*
 * XREFs of sub_140A67994 @ 0x140A67994
 * Callers:
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 * Callees:
 *     sub_14055A870 @ 0x14055A870 (sub_14055A870.c)
 *     sub_14055ABF4 @ 0x14055ABF4 (sub_14055ABF4.c)
 *     sub_140564FF8 @ 0x140564FF8 (sub_140564FF8.c)
 *     sub_140A66DB4 @ 0x140A66DB4 (sub_140A66DB4.c)
 */

char __fastcall sub_140A67994(const GUID *a1)
{
  __int64 v2; // r9
  __int64 v3; // r9
  __int64 *v4; // rdx
  int v5; // r8d
  unsigned int Data1; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  sub_140564FF8();
  sub_14055A870();
  sub_140A66DB4((volatile __int32 *)&a1[19], 4LL, &v8, v2);
  sub_14055A870();
  if ( byte_140C097FC )
  {
    v3 = qword_140D06CC8;
    v4 = (__int64 *)&xmmword_140C02190;
    byte_140D01928 = 1;
    v5 = 112;
    do
    {
      *v4 = v3 ^ __ROR8__((unsigned __int64)&byte_140D01928 ^ _byteswap_uint64(qword_140D06E28 ^ *v4), v3);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  Data1 = a1[5].Data1;
  if ( (Data1 & 0x80u) != 0 )
  {
    *(_QWORD *)a1[33].Data4 = v8;
    LOBYTE(Data1) = sub_14055ABF4(a1);
  }
  return Data1;
}
