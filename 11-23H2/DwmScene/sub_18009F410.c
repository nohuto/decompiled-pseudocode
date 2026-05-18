/*
 * XREFs of sub_18009F410 @ 0x18009F410
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     sub_18009F354 @ 0x18009F354 (sub_18009F354.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_18009F410(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // xmm1_8

  v2 = a2;
  v3 = a1 + 8;
  if ( *(_BYTE *)(a1 + 80) )
  {
    v6 = a1 + 32;
LABEL_5:
    v7 = *(_QWORD *)(v3 + 16);
    *(_OWORD *)v6 = *(_OWORD *)v3;
    *(_QWORD *)(v6 + 16) = v7;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2);
    goto LABEL_6;
  }
  result = sub_18009F354((float *)(a1 + 32), (float *)v3);
  if ( result )
    goto LABEL_5;
LABEL_6:
  *(_BYTE *)(a1 + 80) = 0;
  return result;
}
