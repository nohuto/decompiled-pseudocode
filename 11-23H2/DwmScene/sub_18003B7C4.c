/*
 * XREFs of sub_18003B7C4 @ 0x18003B7C4
 * Callers:
 *     sub_180011E04 @ 0x180011E04 (sub_180011E04.c)
 *     sub_180013C74 @ 0x180013C74 (sub_180013C74.c)
 *     sub_180013D44 @ 0x180013D44 (sub_180013D44.c)
 *     sub_18002DB6C @ 0x18002DB6C (sub_18002DB6C.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_1800618F8 @ 0x1800618F8 (sub_1800618F8.c)
 *     sub_1800619C8 @ 0x1800619C8 (sub_1800619C8.c)
 *     sub_180061AE8 @ 0x180061AE8 (sub_180061AE8.c)
 *     sub_180061C08 @ 0x180061C08 (sub_180061C08.c)
 *     sub_180061D28 @ 0x180061D28 (sub_180061D28.c)
 *     sub_180071014 @ 0x180071014 (sub_180071014.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_18003A3A4 @ 0x18003A3A4 (sub_18003A3A4.c)
 *     sub_18003C040 @ 0x18003C040 (sub_18003C040.c)
 *     sub_18003DD48 @ 0x18003DD48 (sub_18003DD48.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18003B7C4(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r15
  _QWORD *v6; // rax
  bool v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  void (__fastcall *v16)(__int64, _QWORD *); // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h]
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+58h] [rbp-18h]

  sub_18003E370();
  sub_18001246C(&v19, a2);
  v4 = *(_QWORD **)(a1 + 376);
  v5 = *(_QWORD **)(a1 + 384);
  while ( v4 != v5 )
  {
    v6 = sub_18001246C(v22, v4);
    v7 = sub_180015678(&v19, v6);
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
      sub_180010530(v9);
    if ( v7 )
      break;
    v4 += 2;
  }
  if ( v20 )
    sub_180010530(v20);
  v10 = *(_QWORD **)(a1 + 384);
  if ( v4 != v10 )
    return 0;
  if ( v10 == *(_QWORD **)(a1 + 392) )
  {
    sub_18003A3A4((_QWORD *)(a1 + 376), *(char **)(a1 + 384), a2);
  }
  else
  {
    sub_18001246C(v10, a2);
    *(_QWORD *)(a1 + 384) += 16LL;
  }
  sub_18003DD48(a1);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 104LL))(*a2);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2);
  v11 = sub_18003C040(a1);
  if ( v11 )
  {
    sub_18003655C(v11, &v23);
    v12 = 0;
    v13 = v23;
    if ( (v24 - v23) >> 4 )
    {
      v14 = 0LL;
      do
      {
        sub_18001246C(&v19, (_QWORD *)(v13 + 16 * v14));
        sub_18002A0C4(v19 + 24, (__int64)v22);
        v15 = sub_18001246C(&v21, &v19);
        v16(v17, v15);
        sub_180010F54((__int64)v22);
        if ( v20 )
          sub_180010530(v20);
        ++v12;
        v13 = v23;
        v14 = v12;
      }
      while ( v12 < (unsigned __int64)((v24 - v23) >> 4) );
    }
    sub_180013300((__int64)&v23);
  }
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 120LL))(*a2);
  return 1;
}
