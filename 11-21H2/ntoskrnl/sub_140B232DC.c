/*
 * XREFs of sub_140B232DC @ 0x140B232DC
 * Callers:
 *     sub_140B23270 @ 0x140B23270 (sub_140B23270.c)
 * Callees:
 *     sub_1403D2D2C @ 0x1403D2D2C (sub_1403D2D2C.c)
 */

__int64 __fastcall sub_140B232DC(void *a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( (int)sub_1403D2D2C(a1, (__int64)L"WatchdogFirstChanceInMs", &v3) < 0
    || (dword_140C44940 = v3, v3 - 1 > 0xFFFFFFFD) )
  {
    dword_140C44940 = 10000;
  }
  result = sub_1403D2D2C(a1, (__int64)L"WatchdogSecondChanceInMs", &v3);
  if ( (int)result < 0 || (result = v3, dword_140C4493C = v3, dword_140C44940 >= v3) )
    dword_140C4493C = 360000;
  return result;
}
