/*
 * XREFs of sub_140A69EB4 @ 0x140A69EB4
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057A7C8 @ 0x14057A7C8 (sub_14057A7C8.c)
 *     sub_14057A864 @ 0x14057A864 (sub_14057A864.c)
 */

void __fastcall sub_140A69EB4(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
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
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+50h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  sub_14057A864(a1);
  v3 = *(_DWORD *)(v2 + 36);
  KeAcquireInStackQueuedSpinLock(&qword_140D31200, &LockHandle);
  if ( byte_140D068BE )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = 0;
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
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
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
        sub_1402F32E0(&v16, v4, v5, v6);
      while ( *(_QWORD *)(a1 + 48) );
    }
    sub_14057A7C8(a1, (_QWORD **)&qword_140C2B880, v3);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
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
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
