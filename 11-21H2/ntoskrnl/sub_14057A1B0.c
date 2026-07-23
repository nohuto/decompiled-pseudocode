/*
 * XREFs of sub_14057A1B0 @ 0x14057A1B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057A2A0 @ 0x14057A2A0 (sub_14057A2A0.c)
 *     sub_14057A5A8 @ 0x14057A5A8 (sub_14057A5A8.c)
 */

void __fastcall sub_14057A1B0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  struct _KPRCB *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  _DWORD v15[6]; // [rsp+20h] [rbp-18h] BYREF

  sub_14057A2A0(0LL, DeferredContext, SystemArgument1, SystemArgument2, v15[0]);
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v15[0] = 0;
  while ( 1 )
  {
    v8 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v8 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v9 = *(_DWORD *)(v8 + 24);
        *(_DWORD *)(v8 + 24) = v9 + 1;
        if ( v9 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&qword_140C2BC60, 0LL) )
      break;
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = v11;
        if ( !v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(v15, v4, v5, v6);
    while ( qword_140C2BC60 );
  }
  dword_140C2B99C = 0;
  qword_140C2B988 = 0LL;
  sub_14057A5A8(qword_140C2BC58 != 0 ? 2 : 0);
  _InterlockedAnd64(&qword_140C2BC60, 0LL);
  v12 = KeGetCurrentPrcb();
  v13 = *((_QWORD *)v12 + 4375);
  if ( v13 )
  {
    if ( *((_BYTE *)v12 + 32) <= 1u )
    {
      v14 = *(_DWORD *)(v13 + 24) - 1;
      *(_DWORD *)(v13 + 24) = v14;
      if ( !v14 )
        sub_140418E4C((__int64)v12);
    }
  }
  _enable();
}
