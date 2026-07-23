/*
 * XREFs of sub_140579CD4 @ 0x140579CD4
 * Callers:
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057A428 @ 0x14057A428 (sub_14057A428.c)
 *     sub_14057A5A8 @ 0x14057A5A8 (sub_14057A5A8.c)
 */

char __fastcall sub_140579CD4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  int v14; // [rsp+30h] [rbp+8h] BYREF

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
        v7 = v6 == -1;
        v8 = v6 + 1;
        *(_DWORD *)(v5 + 24) = v8;
        if ( v7 )
          LOBYTE(v8) = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&qword_140C2BC60, 0LL) )
      break;
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v10 = *(_DWORD *)(v9 + 24) - 1;
        *(_DWORD *)(v9 + 24) = v10;
        if ( !v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
    {
      sub_1402F32E0(&v14, a2, a3, a4);
      LOBYTE(v8) = qword_140C2BC60;
    }
    while ( qword_140C2BC60 );
  }
  if ( !dword_140D06A38 )
  {
    if ( dword_140C2B994 == 1 )
    {
      sub_14057A5A8(0LL);
      LOBYTE(v8) = KeRemoveQueueDpcEx((__int64)&stru_140C2BC80, 0);
    }
    else if ( dword_140C2B994 == 2 )
    {
      LOBYTE(v8) = sub_14057A5A8(0LL);
    }
    else
    {
      if ( dword_140C2B994 != 3 )
      {
        if ( dword_140C2B994 == 4 )
        {
          LOBYTE(a2) = 1;
          LOBYTE(v8) = sub_14057A428(3LL, a2);
        }
        goto LABEL_24;
      }
      LOBYTE(v8) = qword_140C2BC58;
      if ( !qword_140C2BC58 )
        goto LABEL_24;
    }
    qword_140C2BC58 = 0LL;
  }
LABEL_24:
  _InterlockedAnd64(&qword_140C2BC60, 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = *((_QWORD *)v11 + 4375);
  if ( v12 )
  {
    if ( *((_BYTE *)v11 + 32) <= 1u )
    {
      v8 = *(_DWORD *)(v12 + 24) - 1;
      *(_DWORD *)(v12 + 24) = v8;
      if ( !v8 )
        LOBYTE(v8) = sub_140418E4C((__int64)v11);
    }
  }
  _enable();
  return v8;
}
