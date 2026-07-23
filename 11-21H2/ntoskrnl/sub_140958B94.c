/*
 * XREFs of sub_140958B94 @ 0x140958B94
 * Callers:
 *     sub_140958B00 @ 0x140958B00 (sub_140958B00.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14078D340 @ 0x14078D340 (sub_14078D340.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 */

__int64 __fastcall sub_140958B94(_QWORD *a1)
{
  unsigned int v2; // esi
  PVOID *v3; // rdi
  PVOID **v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[20]; // [rsp+28h] [rbp-40h] BYREF

  memset(v16, 0, sizeof(v16));
  v2 = 0;
  ExAcquireFastMutex(&stru_140C445E0);
  v3 = (PVOID *)qword_140C445C0;
  if ( qword_140C445C0 != &qword_140C445C0 )
  {
    do
    {
      ++*((_WORD *)v3 + 28);
      v4 = (PVOID **)v3;
      KeReleaseGuardedMutex(&stru_140C445E0);
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceExclusiveLite((PERESOURCE)v3[9], 1u);
      if ( *((_BYTE *)v3 + 58) )
        goto LABEL_21;
      v6 = *a1 - 0x468A8C0B31D737E7LL;
      if ( *a1 == 0x468A8C0B31D737E7LL )
        v6 = a1[1] + 0x4A73CC1BC60916BLL;
      if ( !v6 && !*((_BYTE *)v3 + 80) )
        goto LABEL_21;
      v7 = *a1 - 0x4F76A85CDE373DEFLL;
      if ( *a1 == 0x4F76A85CDE373DEFLL )
        v7 = a1[1] - 0xFD18BEA6BF9BF8CLL;
      if ( v7 || !*((_BYTE *)v3 + 80) )
      {
        v8 = *(_OWORD *)a1;
        v15 = 0;
        *(_DWORD *)v16 = 1310721;
        *(_OWORD *)&v16[4] = v8;
        v9 = sub_14078D3DC((__int64)v3, (__int64)v16, &v15);
        if ( v9 < 0 )
        {
          v15 = v9;
        }
        else
        {
          v10 = *a1 - 0x4F76A85CDE373DEFLL;
          if ( *a1 == 0x4F76A85CDE373DEFLL )
            v10 = a1[1] - 0xFD18BEA6BF9BF8CLL;
          if ( v10 )
          {
            v11 = *a1 - 0x468A8C0B31D737E7LL;
            if ( *a1 == 0x468A8C0B31D737E7LL )
              v11 = a1[1] + 0x4A73CC1BC60916BLL;
            if ( !v11 )
              *((_BYTE *)v3 + 80) = 0;
          }
          else
          {
            *((_BYTE *)v3 + 80) = 1;
          }
        }
      }
      else
      {
LABEL_21:
        v15 = 0;
      }
      ExReleaseResourceLite((PERESOURCE)v3[9]);
      sub_1402F9540((__int64)KeGetCurrentThread());
      ExAcquireFastMutex(&stru_140C445E0);
      v3 = (PVOID *)*v3;
      sub_14078D340(v4);
      v2 = v15;
      if ( v15 < 0 )
      {
        v12 = *a1 - 0x4F76A85CDE373DEFLL;
        if ( *a1 == 0x4F76A85CDE373DEFLL )
          v12 = a1[1] - 0xFD18BEA6BF9BF8CLL;
        if ( !v12 )
          break;
        v13 = *a1 - 0x4D4F350A20E91ABDLL;
        if ( *a1 == 0x4D4F350A20E91ABDLL )
          v13 = a1[1] - 0x3A470715C8997785LL;
        if ( !v13 )
          break;
      }
    }
    while ( v3 != &qword_140C445C0 );
  }
  KeReleaseGuardedMutex(&stru_140C445E0);
  return v2;
}
