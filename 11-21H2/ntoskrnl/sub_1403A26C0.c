/*
 * XREFs of sub_1403A26C0 @ 0x1403A26C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A5440 @ 0x1403A5440 (sub_1403A5440.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_1403A26C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // r9
  __int64 v4; // rcx

  if ( (unsigned int)(*(_DWORD *)(a1 + 120) + *(_DWORD *)(a1 + 108)) > 0xFFFF )
    longjmp((_JBTYPE *)(a1 + 160), 9);
  sub_1403A2FA8(a1, a1 + 24, a3, *(unsigned __int16 *)(a1 + 108));
  return sub_1403A5440(*(unsigned int *)(v4 + 120), v3, *(unsigned int *)(v4 + 108));
}
