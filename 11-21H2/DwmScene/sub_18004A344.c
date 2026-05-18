/*
 * XREFs of sub_18004A344 @ 0x18004A344
 * Callers:
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18004B9DC @ 0x18004B9DC (sub_18004B9DC.c)
 *     sub_18004C088 @ 0x18004C088 (sub_18004C088.c)
 *     sub_18004C658 @ 0x18004C658 (sub_18004C658.c)
 *     sub_180058180 @ 0x180058180 (sub_180058180.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     sub_1800AB310 @ 0x1800AB310 (sub_1800AB310.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18004A344(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 32) = a3;
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 >= 0x10 )
    sub_180010884(*(char **)a2, v5 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  result = a1;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
