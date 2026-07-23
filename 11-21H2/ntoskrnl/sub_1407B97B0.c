/*
 * XREFs of sub_1407B97B0 @ 0x1407B97B0
 * Callers:
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1407BC750 @ 0x1407BC750 (sub_1407BC750.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_14025E274 @ 0x14025E274 (sub_14025E274.c)
 *     sub_14030E280 @ 0x14030E280 (sub_14030E280.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_1406D804C @ 0x1406D804C (sub_1406D804C.c)
 *     sub_1406EB238 @ 0x1406EB238 (sub_1406EB238.c)
 *     sub_14097CA4C @ 0x14097CA4C (sub_14097CA4C.c)
 *     sub_14097EFF0 @ 0x14097EFF0 (sub_14097EFF0.c)
 *     sub_140983198 @ 0x140983198 (sub_140983198.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407B97B0(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  __int64 v5; // r15
  int v6; // r14d
  _DWORD *v7; // rsi
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // r12
  _QWORD *v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r8

  v3 = 0;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  v6 = 0;
  v7 = (_DWORD *)sub_14030E280(a1, -546);
  if ( v7 )
  {
    do
    {
      v9 = v7[16];
      v10 = *(_DWORD **)v7;
      if ( (v9 & 0x10) != 0 )
      {
        v6 = 1;
        sub_140983198(v5, a1, v7, a2 != 0);
        v9 = v7[16];
      }
      if ( (v9 & 8) != 0 )
      {
        sub_1406EB238((__int64)v7);
        v9 = v7[16];
      }
      if ( (v9 & 4) != 0 )
      {
        sub_1406D804C(v5, (__int64)v7);
        v9 = v7[16];
      }
      if ( (v9 & 0x40) != 0 )
      {
        sub_1406D804C(v5, (__int64)v7);
        v9 = v7[16];
      }
      if ( (v9 & 0x100) != 0 )
      {
        v11 = (_QWORD *)*((_QWORD *)v7 + 4);
        v12 = *((_QWORD *)v7 + 5);
        if ( (*v11 != -2LL || v11[1] != -2LL || v11[2] != -2LL) && sub_14097CA4C(v11, v7 + 2) )
        {
          v13 = sub_14032A72C(*((_QWORD *)KeGetCurrentThread() + 23));
          sub_140216E18(v13, v14);
        }
        if ( (*(_DWORD *)(v12 + 8) & 1) == 0 )
          sub_14025E274(*(_QWORD *)(v12 + 40));
      }
      if ( (v7[16] & 0x80u) != 0 )
        sub_14097EFF0(v7);
      ExFreePoolWithTag(v7, 0);
      v7 = v10;
    }
    while ( v10 );
  }
  v8 = *(_DWORD *)(a1 + 48);
  if ( (v8 & 0x200000) != 0 && ((v8 & 0x180000u) >= 0x100000 || (v8 & 0x800000) != 0) && (v8 & 0x70) == 0 && !v6 )
  {
    LOBYTE(v3) = a2 != 0;
    sub_140983198(v5, a1, 0LL, v3);
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
      --*(_QWORD *)(*(_QWORD *)(v5 + 1680) + 296LL);
  }
}
