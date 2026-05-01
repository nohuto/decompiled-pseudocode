/*
 * XREFs of sub_180015548 @ 0x180015548
 * Callers:
 *     sub_180015484 @ 0x180015484 (sub_180015484.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180015548(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  char v8; // r8
  int v9; // edx
  int v10; // eax
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, __int64))qword_1800329D8;
  if ( qword_1800329D8 || (v2 = (__int64 (__fastcall *)(__int64, __int64))qword_180032DA0) != 0LL )
    v4 = v2(39841886LL, 3LL);
  else
    v4 = 0;
  *a2 = 0LL;
  v5 = 8 * (v4 & 0x80 | (4 * (v4 & 0x40 | (4 * (v4 & 3)))));
  *(_DWORD *)a2 = v5;
  if ( (v4 & 0xFFFFFF3F) != 0 )
  {
    v6 = 0;
    if ( (v4 & 0xFFFFFF3F) == 2 )
      v6 = 64;
  }
  else
  {
    v6 = 64;
  }
  v7 = v5 | v6;
  v8 = 0;
  v9 = 1;
  if ( (v7 & 0xC00) == 0xC00 )
  {
    v10 = v7 & 0x40;
LABEL_12:
    v8 = 1;
    goto LABEL_13;
  }
  v10 = v7 & 0x40;
  if ( (v7 & 0x40) != 0 )
    goto LABEL_12;
LABEL_13:
  if ( !v10 || !v8 )
    v9 = 0;
  result = a2;
  *(_DWORD *)a2 = v9 | v7;
  return result;
}
