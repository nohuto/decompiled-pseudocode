/*
 * XREFs of sub_1800462CC @ 0x1800462CC
 * Callers:
 *     sub_180045178 @ 0x180045178 (sub_180045178.c)
 *     sub_1800463EC @ 0x1800463EC (sub_1800463EC.c)
 *     sub_180046704 @ 0x180046704 (sub_180046704.c)
 *     sub_180046DF4 @ 0x180046DF4 (sub_180046DF4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_180040E84 @ 0x180040E84 (sub_180040E84.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800462CC(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  bool v8; // di
  __int64 **v9; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v15[24]; // [rsp+30h] [rbp-18h] BYREF

  sub_18002C73C(a1 + 16);
  sub_180040E84(*a3, v14);
  v6 = **(__int64 ***)(a1 + 88);
  while ( 1 )
  {
    if ( *((_BYTE *)v6 + 25) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_17;
    }
    v7 = (_QWORD *)sub_1800465B0(v6[8], v15);
    v8 = sub_180016240(v7, v14);
    sub_180010910((__int64)v15);
    if ( v8 )
      break;
    v9 = (__int64 **)v6[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v12 = v6[9];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = v6[9];
  }
  *a2 = v6[8];
  a2[1] = v12;
LABEL_17:
  sub_180010910((__int64)v14);
  sub_180010910((__int64)a3);
  return a2;
}
