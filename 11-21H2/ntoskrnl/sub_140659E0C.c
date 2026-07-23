/*
 * XREFs of sub_140659E0C @ 0x140659E0C
 * Callers:
 *     sub_14022B210 @ 0x14022B210 (sub_14022B210.c)
 *     sub_1406A2F6C @ 0x1406A2F6C (sub_1406A2F6C.c)
 * Callees:
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_140659E0C(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 **v4; // rsi

  v4 = *(unsigned __int64 ***)(a1 + 8);
  if ( a1 <= 0x7FFFFFFEFFFFLL )
    ProbeForWrite(*(volatile void **)(a1 + 8), 0x10uLL, 4u);
  *a2 = a1;
  a2[1] = (unsigned __int64)v4;
  *v4 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  return 0LL;
}
