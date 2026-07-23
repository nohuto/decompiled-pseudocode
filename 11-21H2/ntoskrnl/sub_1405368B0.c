/*
 * XREFs of sub_1405368B0 @ 0x1405368B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403D75CC @ 0x1403D75CC (sub_1403D75CC.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_1405368B0(__int64 a1)
{
  unsigned int v1; // edi
  int *v3; // rax
  int v4; // ebx
  __int64 v5; // rcx
  int *v6; // rax
  int v7; // ecx
  __int16 *v8; // rax
  __int64 result; // rax
  bool v10; // cc
  int v11; // r8d

  v1 = *(_DWORD *)(a1 + 108);
  v3 = sub_1403D75CC(a1, v1);
  sub_1403A2FA8(a1, (unsigned __int16 *)v3);
  v4 = *(_DWORD *)(a1 + 108);
  v6 = sub_1403D75CC(v5, v1 + *(_DWORD *)(a1 + 120) + 1);
  sub_1403A2FA8(a1, (unsigned __int16 *)v6);
  v7 = *(_DWORD *)(a1 + 108);
  v8 = *(__int16 **)(a1 + 88);
  if ( *(_DWORD *)(a1 + 120) == 3 )
  {
    result = *(unsigned int *)v8;
    if ( (int)result < v4 )
      goto LABEL_7;
    v10 = (int)result <= v7 + 4;
  }
  else
  {
    v11 = *v8;
    if ( *v8 < (__int16)v4 )
      goto LABEL_7;
    result = (unsigned int)(__int16)v7;
    v10 = v11 <= (int)result + (__int16)(*(_WORD *)(a1 + 120) + 1);
  }
  if ( !v10 )
LABEL_7:
    longjmp((_JBTYPE *)(a1 + 160), 13);
  return result;
}
