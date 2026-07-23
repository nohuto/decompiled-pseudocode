/*
 * XREFs of sub_14078EE18 @ 0x14078EE18
 * Callers:
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_140791640 @ 0x140791640 (sub_140791640.c)
 *     sub_1407ED53C @ 0x1407ED53C (sub_1407ED53C.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792D40 @ 0x140792D40 (sub_140792D40.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_14078EE18(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  __int16 v7; // r14
  unsigned int v8; // eax

  v4 = a3;
  v6 = 0;
  v7 = sub_14079499C(a1, a3);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = sub_140792D40(a1, a2, v4);
      v4 = v8;
      if ( !v8 )
        break;
      if ( (unsigned __int16)sub_14079499C(a1, v8) == v7 )
        return v4;
    }
    return v6;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbFindNextTag");
    return 0LL;
  }
}
