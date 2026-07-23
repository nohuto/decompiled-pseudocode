/*
 * XREFs of sub_14057A0A0 @ 0x14057A0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057A2A0 @ 0x14057A2A0 (sub_14057A2A0.c)
 *     sub_14057A5A8 @ 0x14057A5A8 (sub_14057A5A8.c)
 */

void __fastcall sub_14057A0A0(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        __int64 SystemArgument1,
        __int64 SystemArgument2)
{
  char v4; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  struct _KPRCB *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  _DWORD v13[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v13[0] = 0;
  while ( 1 )
  {
    v6 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v6 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v7 = *(_DWORD *)(v6 + 24);
        *(_DWORD *)(v6 + 24) = v7 + 1;
        if ( v7 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&qword_140C2BC60, 0LL) )
      break;
    v8 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v8 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v9 = *(_DWORD *)(v8 + 24) - 1;
        *(_DWORD *)(v8 + 24) = v9;
        if ( !v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(v13, DeferredContext, SystemArgument1, SystemArgument2);
    while ( qword_140C2BC60 );
  }
  if ( dword_140C2B994 == 1 )
  {
    sub_14057A5A8(4LL);
    qword_140C2B988 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    v4 = 1;
  }
  _InterlockedAnd64(&qword_140C2BC60, 0LL);
  v10 = KeGetCurrentPrcb();
  v11 = *((_QWORD *)v10 + 4375);
  if ( v11 )
  {
    if ( *((_BYTE *)v10 + 32) <= 1u )
    {
      v12 = *(_DWORD *)(v11 + 24) - 1;
      *(_DWORD *)(v11 + 24) = v12;
      if ( !v12 )
        sub_140418E4C((__int64)v10);
    }
  }
  _enable();
  if ( !v4 )
  {
    LOBYTE(v10) = 1;
    sub_14057A2A0(v10, v11, SystemArgument1, SystemArgument2, v13[0]);
  }
}
