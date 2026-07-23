/*
 * XREFs of sub_140506410 @ 0x140506410
 * Callers:
 *     sub_1405063D0 @ 0x1405063D0 (sub_1405063D0.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140506578 @ 0x140506578 (sub_140506578.c)
 *     sub_140506860 @ 0x140506860 (sub_140506860.c)
 *     sub_140509CE4 @ 0x140509CE4 (sub_140509CE4.c)
 */

__int64 __fastcall sub_140506410(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // bx
  char v9; // r14
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-68h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_WORD *)(a2 + 120);
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v9 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    v10 = dword_140D0E5E0[*(unsigned int *)(a2 + 96)];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
    Affinity.Mask = 1LL << (v10 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v9 = 1;
  }
  v11 = *(_DWORD *)(a2 + 84);
  if ( v11 != 1 )
  {
    if ( v11 != 2 || !(unsigned __int8)sub_140509CE4(a2 + 80, v4) )
      goto LABEL_9;
LABEL_19:
    v12 = sub_140506578(a1, a2, a3, a4);
    goto LABEL_10;
  }
  if ( v4 == 336 || v4 == 308 || (unsigned __int16)(v4 - 192) <= 0xFu || v4 == 378 || (v4 & 0xEF80) == 0x80 )
    goto LABEL_19;
LABEL_9:
  v12 = sub_140506860(a1, a2, a3, a4);
LABEL_10:
  v13 = v12;
  if ( v12 >= 0 && _bittest64((const signed __int64 *)(a2 + 120), 0x3Du) && *(_DWORD *)(a3 + 12) == 2 )
    *(_DWORD *)(a3 + 104) |= 1u;
  if ( v9 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v13;
}
