/*
 * XREFs of sub_1405206E4 @ 0x1405206E4
 * Callers:
 *     sub_14051FFF8 @ 0x14051FFF8 (sub_14051FFF8.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140505964 @ 0x140505964 (sub_140505964.c)
 */

__int64 __fastcall sub_1405206E4(unsigned int a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rdx
  unsigned __int64 v6; // r15
  __int64 v7; // r14
  int v8; // ecx
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // r10
  unsigned __int8 v13; // r11
  bool i; // zf
  __int64 v15; // rax
  char v16; // cl
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  char v19; // dl
  __int64 v20; // rax
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v23; // r8
  int v24; // eax
  _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  v4 = a1;
  v6 = a2;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( off_140C02520 == &off_1400032A0 )
    v7 = qword_140C4D0A8;
  else
    v7 = qword_140C4D0A8 + 8LL * dword_140C4D044 * a1;
  v8 = dword_140D0E5E0[a1];
  Affinity.Group = dword_140D0E5E0[v4] >> 6;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (v8 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v11 = sub_140505964();
  if ( v11 >= 0 )
  {
    for ( i = !_BitScanForward64((unsigned __int64 *)&v15, a2); !i; i = !_BitScanForward64((unsigned __int64 *)&v15, v6) )
    {
      v16 = v15;
      if ( (unsigned int)v15 >= 0x20 )
        v15 = (unsigned int)(v15 + dword_140C4A418 - 32);
      v17 = (unsigned int)v15;
      v15 = *(_QWORD *)(v7 + 8 * v15);
      if ( *(_DWORD *)(v15 + 24) != 3 )
      {
        v18 = v6 ^ a2;
        v11 = -1073741670;
        if ( v18 )
        {
          while ( 1 )
          {
            i = !_BitScanForward64((unsigned __int64 *)&v20, v18);
            if ( i )
              break;
            v19 = v20;
            if ( (unsigned int)v20 >= 0x20 )
              v20 = (unsigned int)(v20 + dword_140C4A418 - 32);
            v18 ^= 1LL << v19;
            *(_DWORD *)(*(_QWORD *)(v7 + 8 * v20) + 24LL) = 3;
          }
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)KeGetCurrentPrcb() + 22, 0xFFFFFFFE);
        break;
      }
      *(_DWORD *)(v15 + 24) = 2;
      v6 ^= 1LL << v16;
      *(_BYTE *)(*(_QWORD *)(v7 + 8 * v17) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v7 + 8 * v17) + 28LL) = a3;
    }
  }
  else
  {
    v11 = -1073741670;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= v13 && CurrentIrql <= v13 && v21 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = *((_QWORD *)CurrentPrcb + 4375);
        v24 = ~(unsigned __int16)(v12 << (CurrentIrql + 1));
        i = (v24 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v24;
        if ( i )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return (unsigned int)v11;
}
