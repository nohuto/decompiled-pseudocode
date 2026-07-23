/*
 * XREFs of sub_14077B6F4 @ 0x14077B6F4
 * Callers:
 *     sub_14077A624 @ 0x14077A624 (sub_14077A624.c)
 *     sub_14077AA70 @ 0x14077AA70 (sub_14077AA70.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_1406D27C8 @ 0x1406D27C8 (sub_1406D27C8.c)
 *     sub_140774E80 @ 0x140774E80 (sub_140774E80.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077B4E4 @ 0x14077B4E4 (sub_14077B4E4.c)
 *     sub_14077B534 @ 0x14077B534 (sub_14077B534.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14077B6F4(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int128 *Buf2,
        unsigned int a8)
{
  bool v10; // r14
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // edx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *v16; // rdi
  __int64 v17; // rdx
  __int128 *v18; // rsi
  unsigned int v19; // eax
  int v20; // eax
  void *v21; // rbx
  unsigned int v22; // eax
  struct _KTHREAD *v23; // rax
  size_t Size; // [rsp+68h] [rbp-19h] BYREF
  void *Buf1; // [rsp+70h] [rbp-11h] BYREF
  __int64 **v26; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-1h] BYREF
  unsigned int *v28; // [rsp+88h] [rbp+7h]
  int v29; // [rsp+D8h] [rbp+57h] BYREF
  int v30; // [rsp+DCh] [rbp+5Bh]
  unsigned int v31; // [rsp+E0h] [rbp+5Fh] BYREF

  v30 = HIDWORD(a3);
  BugCheckParameter2 = 0LL;
  v26 = 0LL;
  v10 = 0;
  v31 = 0;
  v29 = 0;
  Buf1 = 0LL;
  LODWORD(Size) = 0;
  if ( !a4 )
  {
    sub_14077B4E4(a1, &v26, &v31);
    if ( v31 )
    {
      v11 = a5;
      v12 = sub_14077B534((__int64)v26, v31, a5);
      v13 = v12;
      if ( v12 < v14 && (int)sub_14077B0A4(a1, a2, (__int64 *)&BugCheckParameter2) >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        v16 = (unsigned int *)BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        v17 = 3 * v13;
        v18 = Buf2;
        v19 = v16[2 * v17 + 28];
        v28 = &v16[2 * v17 + 28];
        v31 = v19;
        if ( v19 <= 1 )
        {
          sub_1406D27C8(a6, Buf2, a8, (int)v26[v17 + 1], HIDWORD(v26[v17 + 1]), (__int64)&v16[2 * v17 + 28]);
          v10 = v31 == 0;
        }
        ExReleasePushLockEx((ULONG_PTR)v16, 0LL);
        KeLeaveCriticalRegion();
        if ( !v10 )
          goto LABEL_9;
        v20 = sub_14077D91C(0x5A706E50u, 0LL, 0LL, v11, (__int64)&v29, (__int64)&Buf1, (__int64)&Size, 0x10000);
        if ( v20 == -1073741275 )
        {
          v21 = Buf1;
          v29 = 0;
          if ( Buf1 )
          {
            ExFreePoolWithTag(Buf1, 0x5A706E50u);
            v21 = 0LL;
            Buf1 = 0LL;
          }
          v22 = 0;
        }
        else
        {
          if ( v20 < 0 )
            goto LABEL_26;
          v21 = Buf1;
          v22 = Size;
        }
        if ( v29 != a6 || v22 != a8 )
          goto LABEL_26;
        if ( v21 )
        {
          if ( !v18 )
            goto LABEL_26;
        }
        else if ( v18 )
        {
          goto LABEL_26;
        }
        if ( !v22 )
          goto LABEL_20;
        if ( !v21 )
        {
LABEL_9:
          sub_14077B394(v16);
          return;
        }
        if ( !memcmp(v21, v18, v22) )
        {
LABEL_20:
          if ( v21 )
            ExFreePoolWithTag(v21, 0x5A706E50u);
          goto LABEL_9;
        }
LABEL_26:
        v23 = KeGetCurrentThread();
        --*((_WORD *)v23 + 242);
        v16 = (unsigned int *)BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        sub_140774E80((__int64)v28);
        ExReleasePushLockEx((ULONG_PTR)v16, 0LL);
        KeLeaveCriticalRegion();
        v21 = Buf1;
        goto LABEL_20;
      }
    }
  }
}
