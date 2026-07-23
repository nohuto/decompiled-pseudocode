/*
 * XREFs of sub_14099A000 @ 0x14099A000
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14099A030 @ 0x14099A030 (sub_14099A030.c)
 */

__int64 __fastcall sub_14099A000(LPCGUID SettingGuid, PVOID Value, ULONG ValueLength, PVOID Context)
{
  sub_1402D66A8((ULONG_PTR)&qword_140C1F5C0);
  sub_14099A030();
  sub_1402935D0((ULONG_PTR)&qword_140C1F5C0);
  return 0LL;
}
