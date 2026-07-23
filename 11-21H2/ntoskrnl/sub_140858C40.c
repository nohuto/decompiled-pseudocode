/*
 * XREFs of sub_140858C40 @ 0x140858C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_14081CE58 @ 0x14081CE58 (sub_14081CE58.c)
 *     sub_14081CF98 @ 0x14081CF98 (sub_14081CF98.c)
 *     sub_140858D04 @ 0x140858D04 (sub_140858D04.c)
 *     sub_1409895EC @ 0x1409895EC (sub_1409895EC.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140858C40(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  bool v5; // bp
  char v6; // di
  int v7; // ecx
  bool v8; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned int)Context;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - 0x11D046F0CB3A4005LL;
  if ( *(_QWORD *)((char *)NotificationStructure + 4) == 0x11D046F0CB3A4005LL )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - 0x3F05139760008FB0LL;
  v5 = v3 == 0;
  v6 = 1;
  v17 = 1;
  EmClientQueryRuleState(qword_140012FE8, &v17);
  v8 = v17 == 2;
  if ( v2 == 8 )
  {
    sub_140A48330(v7);
    if ( v8 || v5 )
      v6 = 0;
    LOBYTE(v10) = v6;
    sub_1409895EC(&byte_140C23413, v10);
    sub_140A47CF8(v12, v11);
  }
  else if ( v2 == 3 )
  {
    sub_14081CE58(4);
    sub_140A48330(v13);
    v14 = byte_140D069CD;
    sub_140818E88(0);
    if ( v14 )
      sub_140818E88(1);
    sub_140A47CF8(v16, v15);
    sub_14081CF98(4);
  }
  else if ( !v5 )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C222D0);
    sub_140858D04(v2, NotificationStructure[5]);
    sub_1402935D0((ULONG_PTR)&qword_140C222D0);
  }
  return 0LL;
}
