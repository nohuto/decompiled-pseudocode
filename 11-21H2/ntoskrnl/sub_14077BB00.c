/*
 * XREFs of sub_14077BB00 @ 0x14077BB00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 */

__int64 __fastcall sub_14077BB00(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF
  __int16 *v14; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  BugCheckParameter2 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  WORD1(v13) = v4;
  LOWORD(v13) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = sub_14077C610((char *)&v13 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    v8 = sub_140779CA0(&v14, 0LL, (unsigned __int16 *)&v13);
    if ( v8 >= 0 )
    {
      v8 = sub_14077B0A4(3LL, (__int64)v14, (__int64 *)&BugCheckParameter2);
      if ( v8 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        v10 = BugCheckParameter2;
        ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
        *((_BYTE *)a2 + 20) = *(_QWORD *)(v10 + 40) != 0LL;
        ExReleasePushLockEx(v10, 0LL);
        KeLeaveCriticalRegion();
        sub_14077B394((unsigned int *)v10);
      }
    }
    sub_14077BAB8(v14, (__int64)&v13);
    sub_1402DF554(a4, *((void **)&v13 + 1));
    return (unsigned int)v8;
  }
  return result;
}
