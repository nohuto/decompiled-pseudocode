/*
 * XREFs of sub_1405A02B8 @ 0x1405A02B8
 * Callers:
 *     sub_14059F908 @ 0x14059F908 (sub_14059F908.c)
 *     sub_1405A0774 @ 0x1405A0774 (sub_1405A0774.c)
 * Callees:
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_140424FC0 @ 0x140424FC0 (sub_140424FC0.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall sub_1405A02B8(__int64 a1)
{
  void *v1; // rax
  unsigned __int64 v2; // rbx
  unsigned __int8 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !byte_140C5072C )
  {
    v1 = (void *)sub_1402CC7C0(a1, &v3, 0x80000000);
    v2 = (unsigned __int64)v1;
    if ( !byte_140C5072C )
    {
      if ( _bittest64(&qword_140D068D8, 0x24u) )
        sub_140424FC0((__int64)v1, 4096LL);
      else
        KeInvalidateRangeAllCaches(v1, 0x1000u);
    }
    sub_1402BEDD0(v2, v3);
  }
}
