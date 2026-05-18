/*
 * XREFs of sub_18004D458 @ 0x18004D458
 * Callers:
 *     sub_18004EB80 @ 0x18004EB80 (sub_18004EB80.c)
 *     sub_18004EBB8 @ 0x18004EBB8 (sub_18004EBB8.c)
 *     sub_18004EBF0 @ 0x18004EBF0 (sub_18004EBF0.c)
 *     sub_18004EC38 @ 0x18004EC38 (sub_18004EC38.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001872C @ 0x18001872C (sub_18001872C.c)
 *     sub_180097030 @ 0x180097030 (sub_180097030.c)
 */

_QWORD *__fastcall sub_18004D458(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // r9
  __int64 *v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // r9d
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a1;
  if ( !a3 || sub_1800122C0((_QWORD *)(a1 + 136)) )
  {
    v7 = *(_QWORD *)(v4 + 144);
    if ( v7 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      v7 = *(_QWORD *)(v4 + 144);
    }
    v6 = 0;
    v10[0] = *(_QWORD *)(v4 + 136);
    v5 = v10;
    v10[1] = v7;
  }
  else
  {
    v5 = (__int64 *)sub_180097030(v4, v11);
    v6 = 1;
  }
  sub_18001872C(a2, v5);
  if ( v8 )
    sub_180010910((__int64)v10);
  if ( v6 )
    sub_180010910((__int64)v11);
  return a2;
}
