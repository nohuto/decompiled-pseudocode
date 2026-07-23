/*
 * XREFs of sub_14065D410 @ 0x14065D410
 * Callers:
 *     sub_14065CE0C @ 0x14065CE0C (sub_14065CE0C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

void __fastcall sub_14065D410(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  if ( a1 )
  {
    v2 = 0;
    if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 1LL) )
      sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029811, 0LL, 0LL, 2u, v9);
    v8 = MEMORY[0xFFFFF78000000014];
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireFastMutexUnsafe(&stru_140C49100);
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
    v7 = 0LL;
    while ( 1 )
    {
      v6 = sub_140AB4218(a1 + 16, &v7, 0LL);
      if ( !v6 )
        break;
      sub_14065D5C8(v6, &v8, 1LL, a2);
      ++v2;
    }
    if ( (unsigned int)dword_140C03868 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03868, 1LL) )
      {
        v12 = 0;
        v10 = &v7;
        LODWORD(v7) = v2;
        v11 = 4;
        sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029849, 0LL, 0LL, 3u, v9);
      }
    }
  }
}
