/*
 * XREFs of sub_140797F3C @ 0x140797F3C
 * Callers:
 *     sub_140791084 @ 0x140791084 (sub_140791084.c)
 *     sub_140793480 @ 0x140793480 (sub_140793480.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 *     sub_1407ED0C8 @ 0x1407ED0C8 (sub_1407ED0C8.c)
 *     sub_140A108BC @ 0x140A108BC (sub_140A108BC.c)
 *     sub_140A14498 @ 0x140A14498 (sub_140A14498.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140797F3C(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 || *(_DWORD *)(a1 + 20) < a2 + a4 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpReadMappedData");
    return 0LL;
  }
  else
  {
    memmove(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
    return 1LL;
  }
}
