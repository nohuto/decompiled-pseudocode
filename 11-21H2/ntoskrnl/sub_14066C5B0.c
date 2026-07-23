/*
 * XREFs of sub_14066C5B0 @ 0x14066C5B0
 * Callers:
 *     sub_14066C1DC @ 0x14066C1DC (sub_14066C1DC.c)
 *     sub_14066C3C0 @ 0x14066C3C0 (sub_14066C3C0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14066C6AC @ 0x14066C6AC (sub_14066C6AC.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

__int64 __fastcall sub_14066C5B0(
        ULONG_PTR BugCheckParameter2,
        signed __int64 *Object,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  int v7; // ebx
  int v8; // esi

  *a5 = 0LL;
  sub_1407A6A34(BugCheckParameter2);
  v7 = sub_14066C6AC(BugCheckParameter2);
  sub_1407B0F40(BugCheckParameter2);
  if ( v7 < 0 )
    return (unsigned int)v7;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  sub_1407A6A34(0LL);
  v8 = sub_1407A66CC(0LL, Object);
  sub_1407B0F40(0LL);
  if ( _InterlockedCompareExchange64(Object + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(Object + 44);
  sub_1402AFC00((ULONG_PTR)(Object + 44));
  sub_1407A5A54(0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  *a5 = 0LL;
  return 0LL;
}
