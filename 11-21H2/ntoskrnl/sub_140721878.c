/*
 * XREFs of sub_140721878 @ 0x140721878
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_14069EF78 @ 0x14069EF78 (sub_14069EF78.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     sub_140721910 @ 0x140721910 (sub_140721910.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 */

__int64 __fastcall sub_140721878(__int64 a1, int a2, int a3, __int64 a4)
{
  int v7; // edi
  __int64 v8; // rbx
  int v9; // r8d
  __int64 v10; // r9
  __int64 result; // rax

  v7 = a1;
  v8 = sub_140721CE0(a1, *(unsigned __int16 *)(a1 + 2));
  result = sub_140721910(v7, *(_QWORD *)(v8 + 32), a2, v9, v10);
  if ( *(_QWORD *)(v8 + 32) != qword_140D3CA28 )
    return sub_140721910(v7, qword_140D3CA28, a2, a3, a4);
  return result;
}
