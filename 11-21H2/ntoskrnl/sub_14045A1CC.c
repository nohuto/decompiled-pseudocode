/*
 * XREFs of sub_14045A1CC @ 0x14045A1CC
 * Callers:
 *     sub_1402EB110 @ 0x1402EB110 (sub_1402EB110.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140632C48 @ 0x140632C48 (sub_140632C48.c)
 */

__int64 __fastcall sub_14045A1CC(signed __int64 a1, _DWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // ebp
  int v4; // r14d
  char v7; // si
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v13; // rcx
  int v14; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = 0;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    v7 = 1;
    v8 = __rdtsc();
    v3 = *((_DWORD *)CurrentPrcb + 8272);
    v4 = v8;
  }
  else
  {
    v7 = 0;
  }
  v9 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v9 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v10 = *(_DWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 24) = v10 + 1;
      if ( v10 == -1 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  _m_prefetchw(a2);
  if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
  {
    v13 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v13 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v14 = *(_DWORD *)(v13 + 24) - 1;
        *(_DWORD *)(v13 + 24) = v14;
        if ( !v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    _mm_pause();
    return 0LL;
  }
  else
  {
    ++*((_DWORD *)CurrentPrcb + 8752);
    if ( v7 )
    {
      v11 = __rdtsc();
      sub_140632C48((_DWORD)a2, v11, v11 - v4, 0, v3, 1);
    }
    return 1LL;
  }
}
