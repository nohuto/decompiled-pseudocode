/*
 * XREFs of sub_1405FEB18 @ 0x1405FEB18
 * Callers:
 *     sub_1406DE800 @ 0x1406DE800 (sub_1406DE800.c)
 * Callees:
 *     sub_1405FEBA0 @ 0x1405FEBA0 (sub_1405FEBA0.c)
 */

__int64 __fastcall sub_1405FEB18(__int64 a1)
{
  __int64 result; // rax

  if ( dword_140D5750C )
  {
    result = qword_140C1AD20;
    if ( *(_QWORD *)(a1 + 24) == qword_140C1AD20 )
    {
      if ( byte_140C1AD98 || (dword_140C1AA7C & 0x800) != 0 )
        result = sub_1405FEBA0();
      qword_140D575D0 = 0LL;
      qword_140D57668 = 0LL;
      qword_140D57628 = 0LL;
      qword_140D57778 = 0LL;
      qword_140D576D0 = 0LL;
      qword_140D57510 = 0LL;
      qword_140C1AD20 = 0LL;
      dword_140C1AD18 = 0;
      dword_140D5750C = 0;
    }
  }
  return result;
}
