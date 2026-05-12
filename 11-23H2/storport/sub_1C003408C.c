/*
 * XREFs of sub_1C003408C @ 0x1C003408C
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00343D8 @ 0x1C00343D8 (sub_1C00343D8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C0057F14 @ 0x1C0057F14 (sub_1C0057F14.c)
 */

__int64 __fastcall sub_1C003408C(_QWORD *a1, IRP *a2)
{
  bool v2; // zf
  signed int v5; // eax
  __int64 v6; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1[71] == 0LL;
  v8 = 0;
  v9 = 0;
  if ( v2 || !a1[72] )
  {
    v5 = -1073741823;
LABEL_8:
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, v5);
  }
  v5 = sub_1C0057F14();
  if ( v5 < 0 )
    goto LABEL_8;
  v5 = sub_1C00343D8(a1[1], a2, &v8, &v9);
  if ( v5 < 0 )
    goto LABEL_8;
  LOBYTE(v6) = v8;
  v5 = sub_1C0038FB0(a1, a2, v6);
  if ( v5 < 0 )
    goto LABEL_8;
  return sub_1C0003440(a2, 0, v5);
}
