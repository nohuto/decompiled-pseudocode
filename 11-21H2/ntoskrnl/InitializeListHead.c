/*
 * XREFs of InitializeListHead @ 0x1402AD320
 * Callers:
 *     sub_14065CE0C @ 0x14065CE0C (sub_14065CE0C.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_14069F904 @ 0x14069F904 (sub_14069F904.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_140914CA4 @ 0x140914CA4 (sub_140914CA4.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_14091CF4C @ 0x14091CF4C (sub_14091CF4C.c)
 *     sub_14091D070 @ 0x14091D070 (sub_14091D070.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     <none>
 */

void __cdecl InitializeListHead(PLIST_ENTRY ListHead)
{
  ListHead->Blink = ListHead;
  ListHead->Flink = ListHead;
}
