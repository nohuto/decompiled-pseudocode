/*
 * XREFs of sub_180042568 @ 0x180042568
 * Callers:
 *     sub_1800422EC @ 0x1800422EC (sub_1800422EC.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 *     sub_1800426D4 @ 0x1800426D4 (sub_1800426D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180042568(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  volatile __int32 *v4; // rax
  __int32 v5; // r8d
  __int64 v6; // r9
  _DWORD *v7; // rax
  int v8; // edx
  __int64 v9; // [rsp+20h] [rbp-18h]
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  result = **(_QWORD **)(a1 + 88);
  v12 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    v9 = *(_QWORD *)(result + 64) + 76LL;
    v10 = 1;
    sub_18002E120(&v10);
    v4 = (volatile __int32 *)sub_18001C7FC(v3);
    while ( _InterlockedExchange(v4, v5) )
      ;
    sub_1800426D4(a1, v6);
    v11 = 0;
    sub_18002E114(&v11);
    v7 = (_DWORD *)sub_18002E108(v9);
    *v7 = v8;
    sub_18001D3F8(&v12);
    result = v12;
  }
  return result;
}
