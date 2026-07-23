/*
 * XREFs of sub_140232910 @ 0x140232910
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_1406B539C @ 0x1406B539C (sub_1406B539C.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1407B3CD0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1407B4BA0 (SeAdjustAccessStateForAccessConstraints.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_1409CA928 @ 0x1409CA928 (sub_1409CA928.c)
 * Callees:
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 */

__int64 __fastcall sub_140232910(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  v4 = 0;
  if ( v1 )
  {
    sub_1402F8A20(*(_QWORD *)(v2 + 1104), *(_QWORD *)(v1 + 1104), &v4);
    if ( v4 )
      v2 = v1;
  }
  return *(_QWORD *)(v2 + 1104);
}
