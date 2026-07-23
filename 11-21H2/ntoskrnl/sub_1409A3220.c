/*
 * XREFs of sub_1409A3220 @ 0x1409A3220
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1409A1A20 (TtmNotifyDeviceInput.c)
 *     sub_1409A2BAC @ 0x1409A2BAC (sub_1409A2BAC.c)
 *     sub_1409A4E68 @ 0x1409A4E68 (sub_1409A4E68.c)
 *     sub_1409A5E3C @ 0x1409A5E3C (sub_1409A5E3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409A3220(_QWORD *a1, __int64 a2, int a3)
{
  __int64 *v3; // r9
  __int64 **v4; // rdx
  __int64 *v5; // rax

  v3 = 0LL;
  v4 = (__int64 **)(a2 + 40);
  v5 = *v4;
  while ( v5 != (__int64 *)v4 )
  {
    v3 = v5;
    if ( *((_DWORD *)v5 + 7) == a3 )
      break;
    v5 = (__int64 *)*v5;
    v3 = 0LL;
  }
  *a1 = v3;
  return v3 == 0LL ? 0xC0000225 : 0;
}
