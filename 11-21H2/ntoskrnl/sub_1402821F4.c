/*
 * XREFs of sub_1402821F4 @ 0x1402821F4
 * Callers:
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_140238AD8 @ 0x140238AD8 (sub_140238AD8.c)
 *     sub_14024E3F0 @ 0x14024E3F0 (sub_14024E3F0.c)
 *     sub_140262F20 @ 0x140262F20 (sub_140262F20.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_14027D190 @ 0x14027D190 (sub_14027D190.c)
 *     sub_140282160 @ 0x140282160 (sub_140282160.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 *     sub_1403B1A00 @ 0x1403B1A00 (sub_1403B1A00.c)
 *     sub_1405A5990 @ 0x1405A5990 (sub_1405A5990.c)
 *     sub_1405BAFB0 @ 0x1405BAFB0 (sub_1405BAFB0.c)
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 *     sub_1405C4980 @ 0x1405C4980 (sub_1405C4980.c)
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_14075F4A4 @ 0x14075F4A4 (sub_14075F4A4.c)
 *     sub_14079D7A8 @ 0x14079D7A8 (sub_14079D7A8.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 *     sub_1407F336C @ 0x1407F336C (sub_1407F336C.c)
 *     sub_1407F35F8 @ 0x1407F35F8 (sub_1407F35F8.c)
 *     MmObtainChargesToLockPagedPool @ 0x14081D080 (MmObtainChargesToLockPagedPool.c)
 *     sub_14096FE9C @ 0x14096FE9C (sub_14096FE9C.c)
 * Callees:
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 */

__int64 __fastcall sub_1402821F4(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 v4; // r10
  bool v5; // zf
  unsigned __int32 v6; // eax

  if ( a1 == &StartContext )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = *((unsigned int *)CurrentPrcb + 8615);
    while ( a2 <= v4 && (_DWORD)v4 != -1 )
    {
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v4 - a2, v4);
      v5 = (_DWORD)v4 == v6;
      v4 = v6;
      if ( v5 )
        return 1LL;
    }
  }
  return sub_14028DC40(a1, a2, a3);
}
