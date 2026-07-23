/*
 * XREFs of sub_140973D6C @ 0x140973D6C
 * Callers:
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_1409743A4 @ 0x1409743A4 (sub_1409743A4.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140972C58 @ 0x140972C58 (sub_140972C58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140973D6C(unsigned __int64 *a1, _QWORD *a2, int a3)
{
  unsigned __int64 *v3; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  bool v8; // r14
  unsigned __int64 *v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // rax
  bool v12; // zf

  v3 = 0LL;
  if ( a3 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C533C0, 0LL);
  }
  v8 = 0;
LABEL_5:
  v9 = (unsigned __int64 *)*a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v10 = sub_140972C58((__int64)a2, (__int64)v9);
      if ( v10 <= 0 )
      {
        if ( v10 >= 0 )
        {
          v3 = v9;
          RtlAvlRemoveNode(a1, v9);
          goto LABEL_5;
        }
        v11 = *v9;
        if ( !*v9 )
          break;
      }
      else
      {
        v11 = v9[1];
        if ( !v11 )
        {
          v8 = 1;
          break;
        }
      }
      v9 = (unsigned __int64 *)v11;
    }
  }
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v9, v8, a2);
  if ( !a3 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C533C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C533C0);
    sub_1402AFC00((ULONG_PTR)&qword_140C533C0);
    v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v12 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
