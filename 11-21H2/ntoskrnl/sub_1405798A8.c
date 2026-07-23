/*
 * XREFs of sub_1405798A8 @ 0x1405798A8
 * Callers:
 *     sub_140579780 @ 0x140579780 (sub_140579780.c)
 * Callees:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void sub_1405798A8()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CurrentIrql; // si
  char v2; // al
  struct _KPRCB *v3; // rcx
  __int64 v4; // rdx
  bool v5; // zf
  struct _KPRCB *v6; // rax
  char v7; // cl
  struct _KPRCB *v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 v10; // cl
  __int64 v11; // r9
  unsigned __int8 v12; // cl
  struct _KPRCB *v13; // rax
  struct _KPRCB *v14; // rcx
  __int64 v15; // rdx
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v2 = *((_BYTE *)CurrentPrcb + 32);
  if ( v2 )
  {
    if ( v2 == 1 && *((_BYTE *)CurrentPrcb + 13242) )
    {
      if ( CurrentIrql > 2u )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v14 = KeGetCurrentPrcb();
            v15 = *((_QWORD *)v14 + 4375);
            v5 = (*(_DWORD *)(v15 + 20) & 0xFFFF0007) == 0;
            *(_DWORD *)(v15 + 20) &= 0xFFFF0007;
            if ( v5 )
              sub_140418E4C((__int64)v14);
          }
        }
        __writecr8(2uLL);
      }
      byte_140C2AA17 |= 4u;
      RtlRaiseException(&stru_140C0CF50);
      __debugbreak();
    }
    __fastfail(4u);
  }
  if ( CurrentIrql > 2u )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v3 = KeGetCurrentPrcb();
        v4 = *((_QWORD *)v3 + 4375);
        v5 = (*(_DWORD *)(v4 + 20) & 0xFFFF0007) == 0;
        *(_DWORD *)(v4 + 20) &= 0xFFFF0007;
        if ( v5 )
          sub_140418E4C((__int64)v3);
      }
    }
    __writecr8(2uLL);
  }
  v6 = KeGetCurrentPrcb();
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  v7 = dword_140D0E5E0[*((unsigned int *)v6 + 9)] & 0x3F;
  Affinity.Group = dword_140D0E5E0[*((unsigned int *)v6 + 9)] >> 6;
  Affinity.Mask = 1LL << v7;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v8 = KeGetCurrentPrcb();
      v9 = *((_QWORD *)v8 + 4375);
      v5 = (*(_DWORD *)(v9 + 20) & 0xFFFF0001) == 0;
      *(_DWORD *)(v9 + 20) &= 0xFFFF0001;
      if ( v5 )
        sub_140418E4C((__int64)v8);
    }
  }
  __writecr8(0LL);
  byte_140C2AA17 |= 2u;
  KeWaitForSingleObject(&stru_140C2A9E0, Executive, 0, 0, 0LL);
  v10 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v10 <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (v10 + 1)) & 4;
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( CurrentIrql > 2u )
  {
    v12 = KeGetCurrentIrql();
    __writecr8(CurrentIrql);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu )
      {
        v13 = KeGetCurrentPrcb();
        *(_DWORD *)(*((_QWORD *)v13 + 4375) + 20LL) |= ((1LL << (CurrentIrql + 1)) - 1) & ~((1LL << (v12 + 1)) - 1) & 0xFFFFFFFC;
      }
    }
  }
}
