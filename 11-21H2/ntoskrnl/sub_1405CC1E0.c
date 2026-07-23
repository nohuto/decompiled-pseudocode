/*
 * XREFs of sub_1405CC1E0 @ 0x1405CC1E0
 * Callers:
 *     sub_14098A28C @ 0x14098A28C (sub_14098A28C.c)
 * Callees:
 *     sub_1405C75AC @ 0x1405C75AC (sub_1405C75AC.c)
 *     sub_1405CDDF8 @ 0x1405CDDF8 (sub_1405CDDF8.c)
 *     sub_1405D5E24 @ 0x1405D5E24 (sub_1405D5E24.c)
 *     sub_14098D0C0 @ 0x14098D0C0 (sub_14098D0C0.c)
 */

void __fastcall sub_1405CC1E0(int a1)
{
  unsigned __int32 v1; // eax
  unsigned __int32 v2; // ebx

  if ( a1 )
  {
    sub_1405D5E24();
    v1 = sub_1405C75AC();
    v2 = v1;
    if ( v1 != -1 )
    {
      _InterlockedExchange(&dword_140C542C0, v1);
      sub_1405CDDF8(v1);
      sub_14098D0C0(v2);
    }
  }
}
