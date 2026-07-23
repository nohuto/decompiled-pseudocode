/*
 * XREFs of sub_1403B54DC @ 0x1403B54DC
 * Callers:
 *     sub_1403B53D4 @ 0x1403B53D4 (sub_1403B53D4.c)
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 * Callees:
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1403B54DC(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // r11

  if ( a1 == qword_140C4E390 )
  {
    if ( !qword_140C4C5D8 )
    {
      v3 = *(_QWORD *)(a1 + 208);
      if ( qword_140C4C5D0 )
        sub_14042A5E0(v3, a2);
    }
    v4 = *(_DWORD *)(a1 + 228);
    if ( v4 == 5 )
    {
      if ( !*(_QWORD *)(a1 + 192) )
        return;
      v5 = sub_1403A572C(abs64(*(_QWORD *)(a1 + 208)), *(_QWORD *)(a1 + 192), 10000000LL);
      if ( v6 < 0 )
        v5 = -(__int64)v5;
      MEMORY[0xFFFFF780000003B8] = v5;
      v4 = *(_DWORD *)(a1 + 228);
    }
    if ( v4 == 11 || v4 == 8 )
      MEMORY[0xFFFFF780000003B8] = *(_QWORD *)(a1 + 208);
  }
}
