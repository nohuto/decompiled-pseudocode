/*
 * XREFs of sub_14099CBC8 @ 0x14099CBC8
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_1407ED774 @ 0x1407ED774 (sub_1407ED774.c)
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 *     sub_1407F2A20 @ 0x1407F2A20 (sub_1407F2A20.c)
 */

ULONG __fastcall sub_14099CBC8(unsigned int a1, __int64 a2)
{
  char v2; // si
  char v3; // di
  const EVENT_DESCRIPTOR *v5; // rcx
  const char *v6; // rax
  const char *v7; // r8
  ULONG result; // eax
  bool v9; // bl
  BOOL v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v3 = *(_BYTE *)(a2 + 4);
  v5 = (const EVENT_DESCRIPTOR *)qword_140039558;
  if ( !v2 )
    v5 = &stru_140038950;
  sub_1407ED774(v5, a1, *(unsigned __int8 *)(a2 + 4));
  v6 = "Locked";
  if ( !v2 )
    v6 = "Unlocked";
  v7 = "Console";
  if ( !v3 )
    v7 = "Remote";
  result = sub_140369B48(3LL, (__int64)"PopAdaptive:>>>>> %s session %u is %s\n", v7, a1, v6);
  v9 = 0;
  if ( v3 )
  {
    sub_1407EF098(0);
    if ( v2 )
    {
      byte_140C1F3A1 = 1;
    }
    else
    {
      byte_140C1F3A1 = 0;
      v9 = byte_140C1F3A2 == 0;
    }
    sub_1407EF120();
    v10 = v2 != 0;
    result = sub_1407525EC(&stru_14003AEE8, 4u, &v10);
    if ( v9 )
      return sub_1407F2A20(0, 0xAu);
  }
  return result;
}
