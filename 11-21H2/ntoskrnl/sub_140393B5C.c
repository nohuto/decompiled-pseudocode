/*
 * XREFs of sub_140393B5C @ 0x140393B5C
 * Callers:
 *     sub_140393AA0 @ 0x140393AA0 (sub_140393AA0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140393C58 @ 0x140393C58 (sub_140393C58.c)
 */

__int64 __fastcall sub_140393B5C(__int64 a1, __int64 a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r15d
  signed __int64 *v11; // rdi
  _DWORD *v12; // rbp
  unsigned int v13; // ebx
  int v14; // ecx
  int v15; // eax
  struct _KTHREAD *v16; // rax
  bool v17; // zf
  int v19; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = *a3;
  v19 = *a3;
  --*((_WORD *)CurrentThread + 243);
  v11 = (signed __int64 *)(a1 + 440);
  ExAcquirePushLockSharedEx(a1 + 440, 0LL);
  v12 = a5;
  v13 = sub_140393C58(a1, a2, &v19, a5);
  if ( v13 != 1024 )
  {
    v14 = *(_DWORD *)(a1 + 1840);
    if ( ((v14 & 4) != 0 || !*v12) && ((v15 = v19, v19 == v7) || (v14 & 8) != 0) )
    {
      *a4 = 0LL;
      *a3 = v15;
    }
    else
    {
      v13 = 1024;
    }
  }
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  sub_1402AFC00((ULONG_PTR)v11);
  v16 = KeGetCurrentThread();
  v17 = (*((_WORD *)v16 + 243))++ == 0xFFFF;
  if ( v17 && *((struct _KTHREAD **)v16 + 19) != (struct _KTHREAD *)((char *)v16 + 152) )
    KiCheckForKernelApcDelivery();
  return v13;
}
