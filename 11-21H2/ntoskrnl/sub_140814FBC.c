/*
 * XREFs of sub_140814FBC @ 0x140814FBC
 * Callers:
 *     sub_1406E6B08 @ 0x1406E6B08 (sub_1406E6B08.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_140815088 @ 0x140815088 (sub_140815088.c)
 *     sub_140815F88 @ 0x140815F88 (sub_140815F88.c)
 *     sub_1409DA90C @ 0x1409DA90C (sub_1409DA90C.c)
 */

_QWORD *__fastcall sub_140814FBC(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16818, 0LL);
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140C16810 >= 0x80 )
    {
      sub_1409DA90C(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !sub_140815F88(a2) )
    {
      v3 = (_QWORD *)sub_140815088(a1, a2);
      if ( v3 )
      {
        v6 = (_QWORD *)qword_140C16808;
        if ( *(__int64 **)qword_140C16808 != &qword_140C16800 )
          __fastfail(3u);
        *v3 = &qword_140C16800;
        v3[1] = v6;
        *v6 = v3;
        ++dword_140C16810;
        qword_140C16808 = (__int64)v3;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16818, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
