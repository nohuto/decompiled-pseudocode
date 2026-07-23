/*
 * XREFs of sub_1404010DC @ 0x1404010DC
 * Callers:
 *     sub_140400318 @ 0x140400318 (sub_140400318.c)
 *     sub_140401470 @ 0x140401470 (sub_140401470.c)
 *     sub_140405B20 @ 0x140405B20 (sub_140405B20.c)
 * Callees:
 *     sub_14040BD74 @ 0x14040BD74 (sub_14040BD74.c)
 */

__int64 __fastcall sub_1404010DC(_DWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  int v6; // edi
  int v8; // eax

  v5 = (int)a1;
  v6 = a4;
  v8 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_140006968 + (*a1 & 0x380)))(
         a1,
         a2,
         a4,
         a5);
  return sub_14040BD74(v5, v8, a3, v6, a5);
}
