/*
 * XREFs of sub_140400EB4 @ 0x140400EB4
 * Callers:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 *     sub_140407280 @ 0x140407280 (sub_140407280.c)
 *     sub_1404076A0 @ 0x1404076A0 (sub_1404076A0.c)
 *     sub_140407ED0 @ 0x140407ED0 (sub_140407ED0.c)
 *     sub_14040818C @ 0x14040818C (sub_14040818C.c)
 *     sub_140408D00 @ 0x140408D00 (sub_140408D00.c)
 *     sub_1404091C8 @ 0x1404091C8 (sub_1404091C8.c)
 *     sub_140409980 @ 0x140409980 (sub_140409980.c)
 *     sub_14040A2A0 @ 0x14040A2A0 (sub_14040A2A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140400EB4(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)off_140006930 + (*a1 & 0x380)))(a1, a2);
}
