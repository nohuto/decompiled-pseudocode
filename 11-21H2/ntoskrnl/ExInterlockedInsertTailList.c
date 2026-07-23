/*
 * XREFs of ExInterlockedInsertTailList @ 0x140223920
 * Callers:
 *     IoWMIWriteEvent @ 0x140223810 (IoWMIWriteEvent.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_1403B19D4 @ 0x1403B19D4 (sub_1403B19D4.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     sub_14057C248 @ 0x14057C248 (sub_14057C248.c)
 *     sub_140646270 @ 0x140646270 (sub_140646270.c)
 *     IoInitializeTimer @ 0x140862800 (IoInitializeTimer.c)
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  __int16 v3; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  bool v8; // bp
  __int64 v9; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int16 v20; // [rsp+40h] [rbp-8h]
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = v20;
  v21 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = (v3 & 0x200) != 0;
  v9 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v9 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v16 = *(_DWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 24) = v16 + 1;
      if ( v16 == -1 )
LABEL_18:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    v14 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v14 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v17 = *(_DWORD *)(v14 + 24) - 1;
        *(_DWORD *)(v14 + 24) = v17;
        if ( !v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( v8 )
      _enable();
    do
      sub_1402F32E0(&v21);
    while ( *Lock );
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v15 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v15 + 24);
        *(_DWORD *)(v15 + 24) = v18 + 1;
        if ( v18 == -1 )
          goto LABEL_18;
      }
    }
  }
  Blink = ListHead->Blink;
  if ( Blink->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  ListEntry->Blink = Blink;
  Blink->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = *((_QWORD *)v11 + 4375);
  if ( v12 )
  {
    if ( *((_BYTE *)v11 + 32) <= 1u )
    {
      v19 = *(_DWORD *)(v12 + 24) - 1;
      *(_DWORD *)(v12 + 24) = v19;
      if ( !v19 )
        sub_140418E4C(v11);
    }
  }
  if ( v8 )
    _enable();
  if ( Blink == ListHead )
    return 0LL;
  return Blink;
}
