/*
 * XREFs of sub_1402F6A70 @ 0x1402F6A70
 * Callers:
 *     sub_1402095F0 @ 0x1402095F0 (sub_1402095F0.c)
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     sub_140234888 @ 0x140234888 (sub_140234888.c)
 *     sub_140234B28 @ 0x140234B28 (sub_140234B28.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_1402EE238 @ 0x1402EE238 (sub_1402EE238.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_1402F0604 @ 0x1402F0604 (sub_1402F0604.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_1402F6750 @ 0x1402F6750 (sub_1402F6750.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     sub_140311A50 @ 0x140311A50 (sub_140311A50.c)
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 *     sub_14035A850 @ 0x14035A850 (sub_14035A850.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_14035B608 @ 0x14035B608 (sub_14035B608.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     KeInsertHeadQueue @ 0x140570CF0 (KeInsertHeadQueue.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6ED0 @ 0x1402F6ED0 (sub_1402F6ED0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402F6A70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  char v10; // bp
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v12; // rsi
  __int64 v13; // rcx
  struct _KPRCB *v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD **)(a2 + 8);
  v5 = (_QWORD *)(a2 + 8);
  do
  {
    v8 = v4;
    v4 = (_QWORD *)*v4;
    if ( *((_BYTE *)v8 + 16) != 3 )
      break;
    v9 = (_QWORD *)v8[1];
    if ( (_QWORD *)v4[1] != v8 || (_QWORD *)*v9 != v8 )
      __fastfail(3u);
    *v9 = v4;
    v10 = 0;
    v4[1] = v9;
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = v8[3];
    v22 = 0;
    v13 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v13 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v13 + 24);
        *(_DWORD *)(v13 + 24) = v18 + 1;
        if ( v18 == -1 )
LABEL_20:
          sub_140418E4C(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 64), 0LL) )
    {
      v16 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v16 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v19 = *(_DWORD *)(v16 + 24) - 1;
          *(_DWORD *)(v16 + 24) = v19;
          if ( !v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v22, a2, a3, a4);
      while ( *(_QWORD *)(v12 + 64) );
      v17 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v17 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v20 = *(_DWORD *)(v17 + 24);
          *(_DWORD *)(v17 + 24) = v20 + 1;
          if ( v20 == -1 )
            goto LABEL_20;
        }
      }
    }
    if ( *(_BYTE *)(v12 + 388) == 5 )
      v10 = sub_1402F6ED0(a1, v12, a3, v8);
    *(_QWORD *)(v12 + 64) = 0LL;
    v14 = KeGetCurrentPrcb();
    a2 = *((_QWORD *)v14 + 4375);
    if ( a2 && *((_BYTE *)v14 + 32) <= 1u )
    {
      v21 = *(_DWORD *)(a2 + 24) - 1;
      *(_DWORD *)(a2 + 24) = v21;
      if ( !v21 )
        sub_140418E4C(v14);
    }
    ++*((_BYTE *)v8 + 17);
    if ( v10 )
      return 1;
  }
  while ( v4 != v5 );
  return 0;
}
