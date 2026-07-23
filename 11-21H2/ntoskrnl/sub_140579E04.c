/*
 * XREFs of sub_140579E04 @ 0x140579E04
 * Callers:
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057A5A8 @ 0x14057A5A8 (sub_14057A5A8.c)
 */

void __fastcall sub_140579E04(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edi
  __int64 v10; // rbx
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER v15; // [rsp+38h] [rbp+10h] BYREF

  v15.QuadPart = 0LL;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v6 = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(v5 + 24) = v6 + 1;
        if ( v6 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&qword_140C2BC60, 0LL) )
      break;
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
    do
      sub_1402F32E0(&v14, a2, a3, a4);
    while ( qword_140C2BC60 );
  }
  if ( !dword_140D06A38 )
  {
    v9 = dword_140C2B994;
    v10 = KeQueryInterruptTimePrecise(&v15) + 10000000LL * (unsigned int)dword_140D05174;
    if ( !v9 )
    {
      sub_14057A5A8(2LL);
LABEL_18:
      qword_140C2BC58 = v10;
      goto LABEL_19;
    }
    if ( v9 == 3 )
      goto LABEL_18;
  }
LABEL_19:
  _InterlockedAnd64(&qword_140C2BC60, 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = *((_QWORD *)v11 + 4375);
  if ( v12 )
  {
    if ( *((_BYTE *)v11 + 32) <= 1u )
    {
      v13 = *(_DWORD *)(v12 + 24) - 1;
      *(_DWORD *)(v12 + 24) = v13;
      if ( !v13 )
        sub_140418E4C((__int64)v11);
    }
  }
  _enable();
}
