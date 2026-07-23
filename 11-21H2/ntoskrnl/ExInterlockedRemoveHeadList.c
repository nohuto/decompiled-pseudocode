/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x140220FB0
 * Callers:
 *     sub_14022EBF8 @ 0x14022EBF8 (sub_14022EBF8.c)
 *     sub_14057C370 @ 0x14057C370 (sub_14057C370.c)
 *     sub_1406462F0 @ 0x1406462F0 (sub_1406462F0.c)
 *     sub_14069A660 @ 0x14069A660 (sub_14069A660.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  __int16 v2; // si
  _LIST_ENTRY *Flink; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  bool v7; // si
  __int64 v8; // rcx
  struct _KPRCB *v9; // rcx
  __int64 v10; // rax
  struct _LIST_ENTRY *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  __int16 v19; // [rsp+30h] [rbp-8h]
  int v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = v19;
  Flink = 0LL;
  v20 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (v2 & 0x200) != 0;
  v8 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v8 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v15 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 24) = v15 + 1;
      if ( v15 == -1 )
LABEL_20:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    v13 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v13 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v16 = *(_DWORD *)(v13 + 24) - 1;
        *(_DWORD *)(v13 + 24) = v16;
        if ( !v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( v7 )
      _enable();
    do
      sub_1402F32E0(&v20);
    while ( *Lock );
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v14 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v17 = *(_DWORD *)(v14 + 24);
        *(_DWORD *)(v14 + 24) = v17 + 1;
        if ( v17 == -1 )
          goto LABEL_20;
      }
    }
  }
  if ( ListHead->Flink != ListHead )
  {
    Flink = ListHead->Flink;
    v12 = ListHead->Flink->Flink;
    if ( ListHead->Flink->Blink != ListHead || v12->Blink != Flink )
      __fastfail(3u);
    ListHead->Flink = v12;
    v12->Blink = ListHead;
  }
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  v9 = KeGetCurrentPrcb();
  v10 = *((_QWORD *)v9 + 4375);
  if ( v10 )
  {
    if ( *((_BYTE *)v9 + 32) <= 1u )
    {
      v18 = *(_DWORD *)(v10 + 24) - 1;
      *(_DWORD *)(v10 + 24) = v18;
      if ( !v18 )
        sub_140418E4C(v9);
    }
  }
  if ( v7 )
    _enable();
  return Flink;
}
