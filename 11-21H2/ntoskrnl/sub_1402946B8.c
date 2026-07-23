/*
 * XREFs of sub_1402946B8 @ 0x1402946B8
 * Callers:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     sub_140217B04 @ 0x140217B04 (sub_140217B04.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_14033D110 @ 0x14033D110 (sub_14033D110.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402947A0 @ 0x1402947A0 (sub_1402947A0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402946B8(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  *(_BYTE *)(a2 + 388) = 2;
  _InterlockedOr(v12, 0);
  if ( *(_QWORD *)(a2 + 64) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = 0;
    while ( 1 )
    {
      v8 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v8 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v10 = *(_DWORD *)(v8 + 24);
          *(_DWORD *)(v8 + 24) = v10 + 1;
          if ( v10 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
        break;
      v9 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v9 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v11 = *(_DWORD *)(v9 + 24) - 1;
          *(_DWORD *)(v9 + 24) = v11;
          if ( !v11 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v13);
      while ( *(_QWORD *)(a2 + 64) );
    }
    sub_140224100(a2);
  }
  LOBYTE(a3) = v3;
  return sub_1402947A0(a1, a2, a3);
}
