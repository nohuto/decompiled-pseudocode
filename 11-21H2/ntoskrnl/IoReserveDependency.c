/*
 * XREFs of IoReserveDependency @ 0x1409425A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_140942DE4 @ 0x140942DE4 (sub_140942DE4.c)
 */

__int64 __fastcall IoReserveDependency(__int64 a1, _WORD *a2, int a3)
{
  unsigned int v3; // ebx
  _DWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+34h] [rbp-24h]
  _WORD *v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]

  v5[1] = 0;
  v8 = 0;
  if ( a1 && a2 && *a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    v7 = 1;
    v9 = a2;
    v10 = a3;
    v5[0] = 0;
    v6 = a1;
    sub_1407756F4(1);
    v3 = sub_140942DE4(v5);
    ExReleaseResourceLite(&stru_140C46AC0);
    sub_140775698(0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
