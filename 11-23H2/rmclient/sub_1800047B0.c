/*
 * XREFs of sub_1800047B0 @ 0x1800047B0
 * Callers:
 *     sub_180016F80 @ 0x180016F80 (sub_180016F80.c)
 *     sub_180016FA0 @ 0x180016FA0 (sub_180016FA0.c)
 *     sub_180016FC0 @ 0x180016FC0 (sub_180016FC0.c)
 *     sub_180016FE0 @ 0x180016FE0 (sub_180016FE0.c)
 *     sub_180017000 @ 0x180017000 (sub_180017000.c)
 * Callees:
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     sub_180004930 @ 0x180004930 (sub_180004930.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800047B0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10

  v3 = 0;
  *a3 = 0LL;
  v4 = a1;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 || (unsigned int)sub_180004900(a2, &unk_1800261B0) )
  {
    *a3 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return v3;
  }
  if ( (unsigned int)sub_180004900(v5, &xmmword_1800261A0) )
  {
    *v7 = v8;
    goto LABEL_12;
  }
  if ( (unsigned int)sub_180004900(v6, &unk_1800261C0) || (unsigned int)sub_180004900(v9, &unk_1800261D0) )
  {
    *v7 = v10;
    goto LABEL_12;
  }
  if ( (unsigned int)sub_180004900(v11, &xmmword_1800261E0) )
  {
    *v7 = v13;
  }
  else
  {
    v3 = sub_180004930(v13 + 8, v12);
    if ( v3 == -2147467262 )
      v3 = -2147467262;
  }
  if ( v3 != -2147467262 )
  {
    if ( (v3 & 0x80000000) != 0 )
      return v3;
LABEL_12:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return v3;
  }
  return 2147500034LL;
}
