/*
 * XREFs of sub_1409504C0 @ 0x1409504C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140560D94 @ 0x140560D94 (sub_140560D94.c)
 *     sub_1409502DC @ 0x1409502DC (sub_1409502DC.c)
 */

__int64 __fastcall sub_1409504C0(const void *a1, __int64 a2, const void *a3, int a4, __int64 a5)
{
  if ( *(_BYTE *)(a5 + 36) )
    sub_140560D94(
      0x14u,
      "  DeviceObject:%p ProcessID:%dT FileObject:%p Handle:%dT\n",
      a1,
      *(_QWORD *)(a2 + 1088),
      a3,
      a4);
  if ( *(_BYTE *)(a5 + 37) )
    sub_1409502DC(*(PVOID *)a5, (_QWORD *)(a5 + 16), *(_DWORD *)(a2 + 1088));
  ++*(_DWORD *)(a5 + 32);
  return 0LL;
}
