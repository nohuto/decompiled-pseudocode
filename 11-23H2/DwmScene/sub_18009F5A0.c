/*
 * XREFs of sub_18009F5A0 @ 0x18009F5A0
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     sub_180059D64 @ 0x180059D64 (sub_180059D64.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_18009F5A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  char result; // al
  unsigned int *v5; // rdx
  _OWORD *v6; // rcx

  v2 = a2;
  if ( *(_BYTE *)(a1 + 56) )
  {
    v6 = (_OWORD *)(a1 + 8);
    v5 = (unsigned int *)(a1 + 24);
LABEL_5:
    *(_OWORD *)v5 = *v6;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v2 + 192LL))(
               v2,
               *v5,
               *(unsigned int *)(a1 + 28),
               *(unsigned int *)(a1 + 32),
               *(_DWORD *)(a1 + 36));
    goto LABEL_6;
  }
  result = sub_180059D64((_DWORD *)(a1 + 8), (_DWORD *)(a1 + 24));
  if ( !result )
    goto LABEL_5;
LABEL_6:
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
