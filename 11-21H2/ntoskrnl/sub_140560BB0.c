/*
 * XREFs of sub_140560BB0 @ 0x140560BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140459EC8 @ 0x140459EC8 (sub_140459EC8.c)
 *     sub_140560880 @ 0x140560880 (sub_140560880.c)
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 *     sub_140881870 @ 0x140881870 (sub_140881870.c)
 */

void __fastcall sub_140560BB0(char *P, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v4; // di
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf
  KSPIN_LOCK *v9; // rcx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // di
  struct _KPRCB *v12; // r9
  __int64 v13; // r8
  int v14; // eax
  unsigned __int8 v15[8]; // [rsp+30h] [rbp-30h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-18h] BYREF

  v15[0] = 0;
  LOBYTE(a2) = 1;
  PreviousAffinity = 0LL;
  sub_140881870(P, a2);
  if ( !P[28] )
  {
    Affinity = *(_GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  sub_140459EC8((__int64)P, v15);
  while ( 1 )
  {
    v9 = (KSPIN_LOCK *)(P + 56);
    if ( !P[65] )
      break;
    P[65] = 0;
    KeReleaseSpinLockFromDpcLevel(v9);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v4 = v15[0];
      if ( v15[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v4 = v15[0];
        v7 = ~(unsigned __int16)(-1LL << (v15[0] + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    else
    {
      v4 = v15[0];
    }
    __writecr8(v4);
    sub_140575CD8(P[28] != 0, *((_DWORD *)P + 5), 1, 0, 0LL);
    sub_140459EC8((__int64)P, v15);
  }
  P[64] = 0;
  KeReleaseSpinLockFromDpcLevel(v9);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v10 = KeGetCurrentIrql(), v10 <= 0xFu) )
  {
    v11 = v15[0];
    if ( v15[0] <= 0xFu && v10 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = *((_QWORD *)v12 + 4375);
      v11 = v15[0];
      v14 = ~(unsigned __int16)(-1LL << (v15[0] + 1));
      v8 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
      *(_DWORD *)(v13 + 20) &= v14;
      if ( v8 )
        sub_140418E4C((__int64)v12);
    }
  }
  else
  {
    v11 = v15[0];
  }
  __writecr8(v11);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  sub_140881870(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    sub_14042A5E0(*((unsigned int *)P + 6), 2LL);
  sub_140560880(P);
}
