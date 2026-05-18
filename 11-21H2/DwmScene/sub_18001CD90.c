/*
 * XREFs of sub_18001CD90 @ 0x18001CD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180017678 @ 0x180017678 (sub_180017678.c)
 */

char __fastcall sub_18001CD90(__int64 a1, __int64 *a2)
{
  char v3; // bl
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_180017678(*a2, &v8);
  v3 = 0;
  if ( sub_1800122C0(&v8) )
  {
    v4 = v9;
    v5 = *(_QWORD **)(a1 + 8);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v4 = v9;
    }
    v10[0] = *v5;
    *v5 = v8;
    v6 = v5[1];
    v5[1] = v4;
    v10[1] = v6;
    sub_180010910((__int64)v10);
  }
  else
  {
    v3 = 1;
  }
  sub_180010910((__int64)&v8);
  return v3;
}
