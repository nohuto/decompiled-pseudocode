/*
 * XREFs of sub_140A6A73C @ 0x140A6A73C
 * Callers:
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_140A6A570 @ 0x140A6A570 (sub_140A6A570.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14056D650 @ 0x14056D650 (sub_14056D650.c)
 *     sub_1405A931C @ 0x1405A931C (sub_1405A931C.c)
 *     sub_1409B41CC @ 0x1409B41CC (sub_1409B41CC.c)
 *     sub_140A6A948 @ 0x140A6A948 (sub_140A6A948.c)
 *     sub_140A6A9A0 @ 0x140A6A9A0 (sub_140A6A9A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A6A73C(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  int v6; // eax
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v12; // rdx

  v2 = *(_DWORD *)(a2 + 64);
  if ( (v2 & 1) != 0 )
  {
    v4 = (_QWORD *)(a2 + 120);
    if ( *(_QWORD *)(a2 + 120) )
    {
      if ( (v2 & 8) == 0 )
        sub_140A6A9A0(a1, a2);
      v5 = *(_QWORD **)(a2 + 80);
      if ( (sub_140317A10((unsigned __int64)v5) & 1) != 0 )
      {
        v6 = sub_14056D650();
        if ( v6 < 0 )
          KeBugCheckEx(0x1Au, 0x18011544uLL, *(_QWORD *)(a2 + 80), v6, 0LL);
        sub_1405A931C(*(_QWORD *)(a2 + 80), 0);
        v5 = *(_QWORD **)(a2 + 80);
      }
      sub_1402BB6D0((__int64)&qword_140C534C0, v5, 1u);
      v7 = *(void **)(a2 + 88);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      sub_140A6A948(a2, -1LL);
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53420, 0LL);
      v9 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v10 = (_QWORD *)v4[1], (_QWORD *)*v10 != v4) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v4 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C53420);
      sub_1402AFC00((ULONG_PTR)&qword_140C53420);
      if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
        && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  else
  {
    v12 = *(_QWORD **)(a2 + 72);
    if ( v12 )
      sub_1409B41CC(a1, v12);
  }
}
