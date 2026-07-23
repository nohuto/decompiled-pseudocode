/*
 * XREFs of sub_140972E78 @ 0x140972E78
 * Callers:
 *     sub_140977B70 @ 0x140977B70 (sub_140977B70.c)
 *     sub_140977CBC @ 0x140977CBC (sub_140977CBC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140972C58 @ 0x140972C58 (sub_140972C58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140972E78(unsigned __int64 *a1, ULONG_PTR a2, int a3, int a4)
{
  unsigned __int64 *v4; // rbp
  int v5; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v8; // rdi
  int v9; // eax
  bool v10; // zf
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+3Ch] [rbp-2Ch]
  __int128 v16; // [rsp+40h] [rbp-28h]

  v4 = 0LL;
  v13 = 0LL;
  v14 = a3;
  v15 = a4;
  v5 = a2;
  v12 = 0LL;
  v16 = 0LL;
  if ( (_DWORD)a2 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C533C0, a2);
  }
  v8 = (unsigned __int64 *)*a1;
  if ( *a1 )
  {
    do
    {
      v9 = sub_140972C58((__int64)&v12, (__int64)v8);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        v8 = (unsigned __int64 *)v8[1];
      }
      else
      {
        v8 = (unsigned __int64 *)*v8;
      }
    }
    while ( v8 );
    if ( v8 )
    {
      v4 = v8;
      RtlAvlRemoveNode(a1, v8);
    }
  }
  if ( !v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C533C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C533C0);
    sub_1402AFC00((ULONG_PTR)&qword_140C533C0);
    v10 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v10 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( !v4 )
    return 0LL;
  ExFreePoolWithTag(v4, 0);
  return 1LL;
}
