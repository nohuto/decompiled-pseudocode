/*
 * XREFs of sub_14024319C @ 0x14024319C
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedAddUlong @ 0x140386240 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14063F230 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14063F290 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14063F2E0 (ExInterlockedPushEntryList.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

bool __fastcall sub_14024319C(volatile signed __int32 *a1)
{
  __int16 v2; // di
  bool v3; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int16 v10; // [rsp+20h] [rbp-8h]
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  v2 = v10;
  _disable();
  v3 = (v2 & 0x200) != 0;
  while ( 1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v7 = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(v5 + 24) = v7 + 1;
        if ( v7 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    v8 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v8 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v9 = *(_DWORD *)(v8 + 24) - 1;
        *(_DWORD *)(v8 + 24) = v9;
        if ( !v9 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( v3 )
      _enable();
    do
      sub_1402F32E0(&v11);
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return v3;
}
