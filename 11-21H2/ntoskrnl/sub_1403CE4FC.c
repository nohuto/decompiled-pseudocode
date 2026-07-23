/*
 * XREFs of sub_1403CE4FC @ 0x1403CE4FC
 * Callers:
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140293988 @ 0x140293988 (sub_140293988.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403CE694 @ 0x1403CE694 (sub_1403CE694.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1403CE4FC(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r12
  __int64 v9; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // r8
  __int16 v12; // bp
  bool v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+20h] [rbp-68h] BYREF
  _GROUP_AFFINITY v24; // [rsp+28h] [rbp-60h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-50h] BYREF
  int v26; // [rsp+80h] [rbp-8h]

  v23 = 0;
  v5 = *(unsigned int *)(a1 + 36);
  v24 = 0LL;
  *(_DWORD *)v24.Reserved = 0;
  LODWORD(v5) = dword_140D0E5E0[v5];
  v24.Reserved[2] = 0;
  *(_DWORD *)&v24.Group = (unsigned __int16)((unsigned int)v5 >> 6);
  v24.Mask = 1LL << (v5 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&v24, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 2LL;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v9 = a1 + 33680;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  sub_140293988(a1, PerformanceCounter.QuadPart, v11);
  v12 = v26;
  _disable();
  v13 = (v12 & 0x200) != 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v9);
  v15 = v9 - (_QWORD)a2;
  do
  {
    v16 = *a2;
    if ( *a2 )
    {
      if ( *(_BYTE *)(v16 + 34) )
      {
        *(_BYTE *)(v9 + 137) = 1;
        v16 = *a2;
      }
      *(_QWORD *)((char *)a2 + v15 + 24) = v16;
      LOBYTE(v14) = 1;
      *(_QWORD *)((char *)a2 + v15 + 64) = 100LL * *(_QWORD *)(v9 + 48);
      sub_1403CE694(*a2, v14, &v23);
    }
    ++a2;
    --v8;
  }
  while ( v8 );
  if ( *(_QWORD *)(v9 + 32) )
  {
    *(_BYTE *)(v9 + 136) = 1;
  }
  else if ( *(_QWORD *)(v9 + 24) )
  {
    *(_BYTE *)(v9 + 136) = 0;
  }
  *(_BYTE *)(v9 + 138) = a3;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v9);
  if ( v13 )
    _enable();
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
