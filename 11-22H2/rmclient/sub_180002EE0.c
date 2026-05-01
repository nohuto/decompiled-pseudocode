/*
 * XREFs of sub_180002EE0 @ 0x180002EE0
 * Callers:
 *     sub_180002E34 @ 0x180002E34 (sub_180002E34.c)
 * Callees:
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 *     sub_18000BAB0 @ 0x18000BAB0 (sub_18000BAB0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 sub_180002EE0()
{
  _QWORD *v0; // rax
  void (__fastcall ***v1)(_QWORD, __int64); // rcx
  int v2; // eax
  int v3; // ebx

  v0 = (_QWORD *)sub_18000BAB0(0x10uLL);
  v1 = (void (__fastcall ***)(_QWORD, __int64))v0;
  if ( v0 )
  {
    v0[1] = 0LL;
    *v0 = &off_180020000;
  }
  else
  {
    v1 = 0LL;
  }
  qword_180032A18 = (__int64)v1;
  if ( v1 )
  {
    v2 = sub_180005FC0(&unk_1800206F0) | 0x10000000;
    v3 = 0;
    if ( v2 < 0 )
      v3 = v2;
    if ( v3 >= 0 )
      return 0;
    v1 = (void (__fastcall ***)(_QWORD, __int64))qword_180032A18;
  }
  else
  {
    v3 = -2147024882;
  }
  if ( v1 )
  {
    (**v1)(v1, 1LL);
    qword_180032A18 = 0LL;
  }
  return (unsigned int)v3;
}
