/*
 * XREFs of sub_1800CCB34 @ 0x1800CCB34
 * Callers:
 *     sub_1800CF1C0 @ 0x1800CF1C0 (sub_1800CF1C0.c)
 * Callees:
 *     sub_180020470 @ 0x180020470 (sub_180020470.c)
 */

__int64 __fastcall sub_1800CCB34(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = sub_180020470(a1, (__int64)"{");
  v5 = sub_180020470(v4, (__int64)"pSysMem");
  v6 = sub_180020470(v5, (__int64)"=");
  v7 = std::ostream::operator<<(v6, *(_QWORD *)a2);
  v8 = sub_180020470(v7, (__int64)",SysMemPitch");
  v9 = sub_180020470(v8, (__int64)"=");
  v10 = std::ostream::operator<<(v9, *(unsigned int *)(a2 + 8));
  v11 = sub_180020470(v10, (__int64)",SysMemSlicePitch");
  v12 = sub_180020470(v11, (__int64)"=");
  v13 = std::ostream::operator<<(v12, *(unsigned int *)(a2 + 12));
  v14 = sub_180020470(v13, (__int64)",");
  sub_180020470(v14, (__int64)"}");
  return a1;
}
