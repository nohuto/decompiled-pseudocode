/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1404619C0
 * Callers:
 *     sub_140591724 @ 0x140591724 (sub_140591724.c)
 *     sub_1405A6AE4 @ 0x1405A6AE4 (sub_1405A6AE4.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14063D914 @ 0x14063D914 (sub_14063D914.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // edi
  signed __int32 v6; // ett
  __int64 v7; // rcx
  int v8; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v3 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v4 = *(_DWORD *)(v3 + 24);
      *(_DWORD *)(v3 + 24) = v4 + 1;
      if ( v4 == -1 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    v5 = sub_14063D914(a1);
  }
  else
  {
    _m_prefetchw(a1);
    v6 = *a1 & 0x7FFFFFFF;
    v5 = v6 == _InterlockedCompareExchange(a1, v6 + 1, v6);
  }
  if ( !v5 )
  {
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v8 = *(_DWORD *)(v7 + 24) - 1;
        *(_DWORD *)(v7 + 24) = v8;
        if ( !v8 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  return v5;
}
