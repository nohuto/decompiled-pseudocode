/*
 * XREFs of sub_14065D4F8 @ 0x14065D4F8
 * Callers:
 *     sub_14065CE0C @ 0x14065CE0C (sub_14065CE0C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14065CF84 @ 0x14065CF84 (sub_14065CF84.c)
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_14065D4F8(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 1LL) )
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_1400297AF, 0LL, 0LL, 2u, v11);
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireFastMutexUnsafe(&stru_140C49100);
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
    v10 = 0LL;
    while ( 1 )
    {
      v5 = sub_140AB4218(a1 + 16, &v10, 0LL);
      if ( !v5 )
        break;
      v8 = sub_14065D5C8(v5, 0LL, v6, a2);
      if ( v8 < 0 )
      {
        sub_14065CF84(a1, v7, a2);
        goto LABEL_8;
      }
    }
  }
  v8 = 0;
LABEL_8:
  if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 1LL) )
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&qword_1400297E0, 0LL, 0LL, 2u, v11);
  return (unsigned int)v8;
}
