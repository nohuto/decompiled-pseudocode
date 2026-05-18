/*
 * XREFs of sub_180088970 @ 0x180088970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029680 @ 0x180029680 (sub_180029680.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_180088AB8 @ 0x180088AB8 (sub_180088AB8.c)
 *     sub_180088F6C @ 0x180088F6C (sub_180088F6C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180088970(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)v4 && a1[17] )
  {
    v8 = sub_180026650(*a2);
    v5 = v8;
    if ( sub_1800435C8((__int64)(a1 + 15), (__int64)&v8) == a1[15] )
    {
      sub_180088AB8(a1, a2);
    }
    else if ( !sub_180029680((__int64)a1, v5) )
    {
      sub_180088F6C(a1, *a2);
    }
    LOBYTE(v4) = sub_180029664((__int64)a1, 8);
    if ( (_BYTE)v4 )
    {
      v4 = a1[14];
      if ( !v4 || *(_DWORD *)(v4 + 24) != 2 )
      {
        *(_OWORD *)v7 = 0LL;
        LOBYTE(v4) = (unsigned __int8)sub_180011020(a1 + 17, v7);
        if ( v7[1] )
          LOBYTE(v4) = sub_180010530(v7[1]);
      }
    }
  }
  return v4;
}
