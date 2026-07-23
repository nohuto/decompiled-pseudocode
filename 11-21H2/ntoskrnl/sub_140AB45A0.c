/*
 * XREFs of sub_140AB45A0 @ 0x140AB45A0
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1406B3C34 @ 0x1406B3C34 (sub_1406B3C34.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140718E30 @ 0x140718E30 (sub_140718E30.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407C83F0 @ 0x1407C83F0 (sub_1407C83F0.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_1407E5F70 @ 0x1407E5F70 (sub_1407E5F70.c)
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 *     sub_1407F7AD0 @ 0x1407F7AD0 (sub_1407F7AD0.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_1409147B4 @ 0x1409147B4 (sub_1409147B4.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 *     sub_140915854 @ 0x140915854 (sub_140915854.c)
 *     sub_140915D20 @ 0x140915D20 (sub_140915D20.c)
 * Callees:
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

char __fastcall sub_140AB45A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  char *v5; // rax
  __int64 v6; // r9
  _QWORD **v7; // r10
  int v8; // ecx
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( (v2 & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_3;
  v5 = sub_140AB4218((_QWORD **)(v4 + 208), &v10, 32);
  if ( !v5 )
    goto LABEL_3;
  do
  {
    v8 = *((_DWORD *)v5 + 17);
    if ( v8 == 2 || v8 == 11 )
      break;
    v5 = sub_140AB4218(v7, &v10, 32);
  }
  while ( v5 );
  if ( sub_140721FD0(*((_QWORD *)v5 + 7), v6) )
LABEL_9:
    LOBYTE(v5) = 1;
  else
LABEL_3:
    LOBYTE(v5) = 0;
  return (char)v5;
}
