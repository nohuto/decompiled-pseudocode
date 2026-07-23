/*
 * XREFs of sub_14036044C @ 0x14036044C
 * Callers:
 *     sub_14027B250 @ 0x14027B250 (sub_14027B250.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     sub_14035FF68 @ 0x14035FF68 (sub_14035FF68.c)
 *     sub_140360350 @ 0x140360350 (sub_140360350.c)
 *     sub_1403603D0 @ 0x1403603D0 (sub_1403603D0.c)
 *     sub_1405C629C @ 0x1405C629C (sub_1405C629C.c)
 *     sub_140986E88 @ 0x140986E88 (sub_140986E88.c)
 *     sub_140986F94 @ 0x140986F94 (sub_140986F94.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 *     sub_140A6AA08 @ 0x140A6AA08 (sub_140A6AA08.c)
 * Callees:
 *     sub_14036053C @ 0x14036053C (sub_14036053C.c)
 *     sub_140360618 @ 0x140360618 (sub_140360618.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14036044C(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi
  unsigned __int64 *v10; // rdx
  PSLIST_ENTRY ListEntry; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 *v13; // [rsp+28h] [rbp-20h] BYREF

  ListEntry = 0LL;
  v13 = 0LL;
  v8 = (a4 + 31) & 0xFFF0;
  v9 = sub_14036053C(&unk_140C4EAC0, &ListEntry, &v13, (a4 + 31) & 0xFFFFFFF0);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4EC70 + 1, 1u);
    if ( ListEntry )
      sub_140360618(ListEntry);
  }
  else
  {
    v10 = v13;
    *v13 = *v13 & 0xFFFFFFFFFFFFF003uLL | ((v8 & 0x3FF0 | 0x8000CuLL) >> 2);
    *((_DWORD *)v10 + 2) = a2;
    *v10 ^= (*(_DWORD *)v10 ^ (a1 << 12)) & 0x1F000;
    memmove(v10 + 2, a3, a4);
    sub_140360618(ListEntry);
    return 0;
  }
  return (unsigned int)v9;
}
