/*
 * XREFs of sub_180006BA0 @ 0x180006BA0
 * Callers:
 *     sub_1800175E0 @ 0x1800175E0 (sub_1800175E0.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_180017620 @ 0x180017620 (sub_180017620.c)
 * Callees:
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001B174 @ 0x18001B174 (sub_18001B174.c)
 */

__int64 __fastcall sub_180006BA0(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  _DWORD *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r10

  v3 = 0;
  *a3 = 0LL;
  v5 = *a2;
  if ( !__PAIR64__(a2[1], v5) && a2[2] == 192 && a2[3] == 1174405120 )
    goto LABEL_16;
  if ( v5 == -1350114592 )
  {
    if ( a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915 )
      goto LABEL_17;
LABEL_16:
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  if ( v5 == 1835348891 && a2[1] == 1169968495 && a2[2] == -1679532388 && a2[3] == -1921650113 )
  {
    *a3 = a1;
LABEL_8:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return v3;
  }
LABEL_17:
  if ( sub_180004900(a2, &xmmword_180026150) )
  {
    *a3 = v8;
    goto LABEL_8;
  }
  if ( sub_180004900(v7, &xmmword_18002AAF8) )
    *a3 = v10;
  else
    v3 = sub_18001B174(v10 + 8, v9);
  if ( (v3 & 0x80000000) == 0 )
    goto LABEL_8;
  return v3;
}
