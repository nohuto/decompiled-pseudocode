/*
 * XREFs of sub_1409483EC @ 0x1409483EC
 * Callers:
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077A750 @ 0x14077A750 (sub_14077A750.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 */

__int64 __fastcall sub_1409483EC(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v6; // rbx
  struct _KTHREAD *v7; // rax
  int v8; // ebx
  char *v10; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v3 = sub_14077B0A4(1LL, a2, (__int64 *)&BugCheckParameter2);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
    {
      v4 = sub_14076A3C4(1u, a2, (volatile signed __int32 **)&BugCheckParameter2);
      if ( v4 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        v6 = (unsigned int *)BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        v6[8] |= 1u;
        ExReleasePushLockEx((ULONG_PTR)v6, 0LL);
        KeLeaveCriticalRegion();
        if ( (int)sub_140779DC4((__int64 **)&P) < 0 )
          goto LABEL_11;
        v7 = KeGetCurrentThread();
        --*((_WORD *)v7 + 242);
        ExAcquireResourceSharedLite(&stru_140C45620, 1u);
        v8 = sub_14077A750(a2, 1u, (__int64)P, &v10);
        ExReleaseResourceLite(&stru_140C45620);
        KeLeaveCriticalRegion();
        if ( v8 >= 0 && v10 )
          *((_DWORD *)v10 + 1) |= 1u;
        sub_140779A50((PVOID **)P);
      }
    }
  }
  else
  {
    v4 = 0;
  }
  v6 = (unsigned int *)BugCheckParameter2;
LABEL_11:
  if ( v6 )
    sub_14077B394(v6);
  return (unsigned int)v4;
}
