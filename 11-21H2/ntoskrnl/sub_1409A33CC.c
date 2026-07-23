/*
 * XREFs of sub_1409A33CC @ 0x1409A33CC
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1409A1A20 (TtmNotifyDeviceInput.c)
 *     sub_1409A447C @ 0x1409A447C (sub_1409A447C.c)
 *     sub_1409A4584 @ 0x1409A4584 (sub_1409A4584.c)
 *     sub_1409A4A48 @ 0x1409A4A48 (sub_1409A4A48.c)
 * Callees:
 *     sub_1409A332C @ 0x1409A332C (sub_1409A332C.c)
 *     sub_1409A3648 @ 0x1409A3648 (sub_1409A3648.c)
 */

char __fastcall sub_1409A33CC(int a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  int v9; // r8d
  int v10; // eax

  *(_QWORD *)(a2 + 80) = MEMORY[0xFFFFF78000000008];
  sub_1409A332C(a3);
  v10 = *(_DWORD *)(a2 + 40);
  if ( v10 == 3 || !a5 && v10 != 2 )
    return 0;
  LOBYTE(v9) = 1;
  sub_1409A3648(a1, a2, v9, a3, a4);
  return 1;
}
