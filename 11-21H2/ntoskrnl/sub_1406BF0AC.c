/*
 * XREFs of sub_1406BF0AC @ 0x1406BF0AC
 * Callers:
 *     sub_1406A7BF4 @ 0x1406A7BF4 (sub_1406A7BF4.c)
 *     sub_140795400 @ 0x140795400 (sub_140795400.c)
 *     sub_14081454C @ 0x14081454C (sub_14081454C.c)
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 *     sub_140857300 @ 0x140857300 (sub_140857300.c)
 *     sub_1409884F4 @ 0x1409884F4 (sub_1409884F4.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 *     sub_1409EB374 @ 0x1409EB374 (sub_1409EB374.c)
 *     sub_1409F36F4 @ 0x1409F36F4 (sub_1409F36F4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 */

__int64 __fastcall sub_1406BF0AC(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rax
  void *v5; // rbx
  int v6; // edi

  v3 = 0LL;
  while ( 1 )
  {
    v4 = sub_1407B6B90(v3);
    v5 = (void *)v4;
    if ( !v4 )
      break;
    v6 = sub_14042A5E0(v4, a2);
    v3 = v5;
    if ( v6 < 0 )
    {
      ObfDereferenceObjectWithTag(v5, 0x6E457350u);
      return (unsigned int)v6;
    }
  }
  return 0LL;
}
