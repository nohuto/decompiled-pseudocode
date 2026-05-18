/*
 * XREFs of sub_180054B70 @ 0x180054B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180054B70(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  _BYTE v14[16]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  unsigned int v17; // [rsp+98h] [rbp+28h] BYREF

  v4 = sub_180029630(a1);
  sub_18003655C(v4, &v15);
  v5 = 0;
  v6 = v15;
  if ( (v16 - v15) >> 4 )
  {
    v7 = 0LL;
    do
    {
      sub_18001246C(&v12, (_QWORD *)(v6 + 16 * v7));
      v17 = sub_180026650(v12);
      v8 = sub_180054270((__int64 *)(a1 + 128), (__int64)v14, &v17);
      sub_18001246C(&v10, (_QWORD *)(*(_QWORD *)v8 + 40LL));
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, a2);
      if ( v11 )
        sub_180010530(v11);
      if ( v13 )
        sub_180010530(v13);
      ++v5;
      v6 = v15;
      v7 = v5;
    }
    while ( v5 < (unsigned __int64)((v16 - v15) >> 4) );
  }
  return sub_180013300((__int64)&v15);
}
