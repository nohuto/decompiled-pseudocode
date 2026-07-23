/*
 * XREFs of sub_140B246C0 @ 0x140B246C0
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 *     sub_140829740 @ 0x140829740 (sub_140829740.c)
 *     sub_1408534E0 @ 0x1408534E0 (sub_1408534E0.c)
 */

__int64 sub_140B246C0()
{
  _BYTE *v0; // r8
  unsigned int i; // ecx
  unsigned int v2; // kr00_4
  __int64 v3; // r8
  __int64 result; // rax

  LOBYTE(word_140C22070) = 1;
  qword_140C22468 = 0LL;
  qword_140C22460 = 0LL;
  qword_140C222A8 = 0LL;
  qword_140C222A0 = 0LL;
  qword_140C22068 = 0LL;
  qword_140C22060 = 0LL;
  sub_1408534E0((__int64)&unk_140C220A0, (__int64)sub_1405D06C0, 0LL, (__int64)sub_1405D06F0, 0LL);
  if ( dword_140C22268 )
    byte_140C22328 = 1;
  v0 = byte_140C22340;
  for ( i = 0; i < 0x834; i += 100 )
  {
    v2 = i;
    *v0++ = v2 / 0x14;
  }
  word_140C22172 = 0;
  sub_1403588EC((__int64)&unk_140C22170, (__int64)sub_1405D05C0, 0LL, 0);
  dword_140C2216C = -1;
  byte_140C22168 = 1;
  result = sub_140829740((__int64)&unk_140C22220, (__int64)sub_1408647A0, v3);
  qword_140C22208 = 0LL;
  qword_140C22200 = 0LL;
  byte_140C22210 = 1;
  return result;
}
