/*
 * XREFs of PoNotifyVSyncChange @ 0x140224940
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  sub_140224E90(&unk_140C23EE0);
  byte_140C095A5 = a1;
  sub_140224C34();
  return sub_140224C00(&unk_140C23EE0);
}
