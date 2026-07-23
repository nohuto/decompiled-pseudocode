/*
 * XREFs of sub_1407928B0 @ 0x1407928B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14079240C @ 0x14079240C (sub_14079240C.c)
 *     sub_14079296C @ 0x14079296C (sub_14079296C.c)
 *     sub_14079474C @ 0x14079474C (sub_14079474C.c)
 */

__int64 __fastcall sub_1407928B0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v7; // [rsp+24h] [rbp-14h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  LOBYTE(a3) = *((_BYTE *)KeGetCurrentThread() + 562);
  v7 = sub_14079474C(a1, &v8, a3);
  if ( v7 >= 0 )
  {
    v4 = *((_QWORD *)KeGetCurrentThread() + 23);
    v5 = *(_QWORD *)(v4 + 2152);
    if ( v5 )
    {
      v7 = sub_14079296C(v8, v5, &P);
      if ( v7 >= 0 )
      {
        sub_14079240C((struct _EX_RUNDOWN_REF *)P, (PEPROCESS)v4);
        v7 = 0;
      }
    }
    else
    {
      v7 = -1073741772;
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
