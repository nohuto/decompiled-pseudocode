/*
 * XREFs of sub_1402595B0 @ 0x1402595B0
 * Callers:
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 *     sub_1402F27B0 @ 0x1402F27B0 (sub_1402F27B0.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057A5A8 @ 0x14057A5A8 (sub_14057A5A8.c)
 */

void sub_1402595B0()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rcx
  struct _KPRCB *v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( dword_140D06A38 )
    return;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  while ( 1 )
  {
    v1 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v1 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v4 = *(_DWORD *)(v1 + 24);
        *(_DWORD *)(v1 + 24) = v4 + 1;
        if ( v4 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&qword_140C2BC60, 0LL) )
      break;
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v6 = *(_DWORD *)(v5 + 24) - 1;
        *(_DWORD *)(v5 + 24) = v6;
        if ( !v6 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v8);
    while ( qword_140C2BC60 );
  }
  if ( dword_140C2B994 == 1 )
  {
    KeRemoveQueueDpcEx((__int64)&stru_140C2BC80, 0);
    sub_14057A5A8(2LL);
  }
  else if ( dword_140C2B994 != 2 )
  {
    goto LABEL_7;
  }
  qword_140C2BC58 = 10000000LL * (unsigned int)dword_140D05174 + KeQueryInterruptTimePrecise(&v9);
LABEL_7:
  _InterlockedAnd64(&qword_140C2BC60, 0LL);
  v2 = KeGetCurrentPrcb();
  v3 = *((_QWORD *)v2 + 4375);
  if ( v3 && *((_BYTE *)v2 + 32) <= 1u )
  {
    v7 = *(_DWORD *)(v3 + 24) - 1;
    *(_DWORD *)(v3 + 24) = v7;
    if ( !v7 )
      sub_140418E4C(v2);
  }
  _enable();
}
