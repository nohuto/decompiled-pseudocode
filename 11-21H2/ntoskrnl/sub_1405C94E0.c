/*
 * XREFs of sub_1405C94E0 @ 0x1405C94E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14056C170 (KeFindFirstSetLeftAffinityEx.c)
 *     sub_1405C92A0 @ 0x1405C92A0 (sub_1405C92A0.c)
 *     sub_1405DA5B4 @ 0x1405DA5B4 (sub_1405DA5B4.c)
 */

__int64 __fastcall sub_1405C94E0(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  int FirstSetLeftAffinity; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r8
  int v16; // eax
  _BYTE v18[16]; // [rsp+20h] [rbp-148h] BYREF
  _DWORD v19[68]; // [rsp+30h] [rbp-138h] BYREF

  v18[0] = 0;
  memset(&v19[2], 0, 0x100uLL);
  if ( !qword_140D068A8 )
    return (unsigned int)-1073741637;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v3 >= *(_DWORD *)qword_140D068A8 )
    return (unsigned int)-1073741811;
  v4 = qword_140D068A8 + 448 * v3;
  v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C23008);
  v2 = sub_1405C92A0(*(_BYTE *)(a1 + 12), *(_DWORD *)(a1 + 8), v4 + 80, v18);
  if ( v2 < 0 )
    goto LABEL_21;
  LOBYTE(v6) = *(_BYTE *)(a1 + 12);
  sub_1405DA5B4(*(unsigned int *)(a1 + 4), *(unsigned int *)(a1 + 8), v6);
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)qword_140D068A8 - 1 )
  {
    if ( !v18[0] )
      goto LABEL_21;
    if ( *(_BYTE *)(a1 + 12) )
      sub_1402D5F7C(9u);
    else
      sub_1402D6004(9u);
  }
  if ( v18[0]
    && !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v4 + 128), *((_DWORD *)KeGetCurrentPrcb() + 9)) )
  {
    KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    v19[0] = 2097153;
    memset(&v19[1], 0, 0x104uLL);
    FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((unsigned __int16 *)(v4 + 128));
    KeAddProcessorAffinityEx((unsigned __int16 *)v19, FirstSetLeftAffinity);
    sub_140293A88((__int64)v19, (__int64)PsGetHostSilo, 0LL, 0LL);
    return (unsigned int)v2;
  }
LABEL_21:
  KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = *((_QWORD *)v14 + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v11 )
          sub_140418E4C((__int64)v14);
      }
    }
  }
  __writecr8(v5);
  return (unsigned int)v2;
}
