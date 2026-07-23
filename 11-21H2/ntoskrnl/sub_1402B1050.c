/*
 * XREFs of sub_1402B1050 @ 0x1402B1050
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_1402447EC @ 0x1402447EC (sub_1402447EC.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 *     sub_140428BA0 @ 0x140428BA0 (sub_140428BA0.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402B1050(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 35000);
  if ( v2 && *(_BYTE *)(a1 + 32) <= 1u )
  {
    v4 = *(_DWORD *)(v2 + 24);
    v5 = v4 - 1;
    v6 = v4 + 1;
    if ( !a2 )
      v6 = v5;
    *(_DWORD *)(v2 + 24) = v6;
    if ( !v6 )
      sub_140418E4C(a1);
  }
}
