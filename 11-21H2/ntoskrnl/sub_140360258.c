/*
 * XREFs of sub_140360258 @ 0x140360258
 * Callers:
 *     sub_1407DBC0C @ 0x1407DBC0C (sub_1407DBC0C.c)
 * Callees:
 *     sub_140220664 @ 0x140220664 (sub_140220664.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 */

__int64 __fastcall sub_140360258(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // eax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  v5 = *((unsigned __int8 *)v3 + 792);
  if ( *((_BYTE *)v3 + 792) || (v5 = sub_14029F6A8(BugCheckParameter2, (__int64)v3)) != 0 )
  {
    _BitScanForward((unsigned int *)&v6, v5);
    *((_BYTE *)v3 + 792) = v5 & ~(1 << v6);
    _enable();
    v4 = (unsigned __int64)v3 + 96 * v6 + 1696;
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      v7 = sub_140287F30(*((_QWORD *)v3 + 23));
    else
      v7 = -1;
    *(_DWORD *)(v4 + 8) = v7;
    *(_QWORD *)v4 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
    || sub_140220664((signed __int64 *)BugCheckParameter2, 0) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 18) = 1;
    return 1LL;
  }
  else
  {
    if ( v4 )
      sub_140353BB0(BugCheckParameter2, v4);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
