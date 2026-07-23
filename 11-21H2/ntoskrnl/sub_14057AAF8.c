/*
 * XREFs of sub_14057AAF8 @ 0x14057AAF8
 * Callers:
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 *     sub_1403AD6AC @ 0x1403AD6AC (sub_1403AD6AC.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14057AAF8(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ecx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 v10; // [rsp+40h] [rbp-30h]
  char v11; // [rsp+42h] [rbp-2Eh]
  char v12; // [rsp+43h] [rbp-2Dh]
  int v13; // [rsp+44h] [rbp-2Ch]
  char v14; // [rsp+48h] [rbp-28h]
  char v15; // [rsp+49h] [rbp-27h]
  __int16 v16; // [rsp+4Ah] [rbp-26h]
  int v17; // [rsp+4Ch] [rbp-24h]
  _QWORD *v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]

  v17 = 0;
  v4 = *(unsigned __int16 *)(a1 + 56);
  v12 = 0;
  v9[0] = *(_QWORD *)(a1 + 24);
  v13 = *(_DWORD *)(a1 + 60);
  v14 = *(_BYTE *)(a1 + 1) >> 2;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  v7 = sub_140348800(v4);
  v9[1] = a1;
  v10 = *(unsigned __int8 *)(v7 + 208);
  v11 = *(_BYTE *)(v7 + 209);
  v12 = 0;
  v15 = 0;
  v16 = *(_WORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
  v12 = v14 != 0;
  if ( a2 )
    v12 = (v14 != 0) | 2;
  if ( *(_DWORD *)(a1 + 60) )
  {
    v8 = 3922;
  }
  else
  {
    v8 = 3924;
    if ( !a3 )
      v8 = 3923;
  }
  v20 = 0;
  v18 = v9;
  v19 = 32;
  sub_14035EDE4((__int64)&v18, 1u, 0x40020000u, v8, a3 != 0 ? 1538 : 6298370);
}
