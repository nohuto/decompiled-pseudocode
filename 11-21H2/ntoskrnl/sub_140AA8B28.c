/*
 * XREFs of sub_140AA8B28 @ 0x140AA8B28
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_140AA8B28(_WORD *Src)
{
  __int64 v2; // rax
  void *v3; // r12
  SIZE_T v4; // rbx
  PVOID PoolWithTag; // rax
  PVOID v6; // r14
  KIRQL v7; // di
  PKSPIN_LOCK v8; // rsi
  __int16 v9; // bp
  __int64 v10; // r15
  unsigned __int16 v11; // bp
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  KSPIN_LOCK v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  __int128 SystemInformation; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+40h] [rbp-48h]

  v2 = -1LL;
  v3 = 0LL;
  SystemInformation = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  do
    ++v2;
  while ( Src[v2] );
  v4 = 2 * v2 + 2;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( ZwQuerySystemInformation(SystemTimeOfDayInformation, &SystemInformation, 0x30u, 0LL) < 0 )
    {
      SystemInformation = 0LL;
      v22 = 0LL;
      v23 = 0LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x736C6448u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Src, v4);
    if ( (qword_140D01468[6] & 2) != 0 )
      v7 = -1;
    else
      v7 = KeAcquireSpinLockRaiseToDpc(qword_140D01468);
    v8 = qword_140D01468;
    v9 = *((_WORD *)qword_140D01468 + 48);
    *((_DWORD *)qword_140D01468 + 12) |= 4u;
    v10 = *((unsigned __int16 *)v8 + 49);
    v11 = (unsigned __int8)(v9 + 1);
    *((_WORD *)v8 + 48) = v11;
    if ( v11 == (_WORD)v10 )
    {
      v12 = *(const wchar_t **)(56 * v10 + v8[2] + 48);
      v13 = wcscmp(v12, L"Entry could not be recorded due to lack of memory.\n");
      *((_WORD *)v8 + 49) = (unsigned __int8)(v10 + 1);
      v3 = (void *)((unsigned __int64)v12 & -(__int64)(v13 != 0));
    }
    else if ( (_WORD)v10 == 0xFFFF )
    {
      *((_WORD *)v8 + 49) = 0;
    }
    v14 = 56LL * v11;
    v15 = v8[2];
    *(_OWORD *)(v14 + v15) = SystemInformation;
    *(_OWORD *)(v14 + v15 + 16) = v22;
    *(_OWORD *)(v14 + v15 + 32) = v23;
    if ( v6 )
      *(_QWORD *)(56LL * *((unsigned __int16 *)qword_140D01468 + 48) + qword_140D01468[2] + 48) = v6;
    else
      *(_QWORD *)(56LL * *((unsigned __int16 *)qword_140D01468 + 48) + qword_140D01468[2] + 48) = L"Entry could not be rec"
                                                                                                   "orded due to lack of memory.\n";
    if ( v7 != 0xFF )
    {
      KeReleaseSpinLockFromDpcLevel(qword_140D01468);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << (v7 + 1));
            v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v20 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
}
