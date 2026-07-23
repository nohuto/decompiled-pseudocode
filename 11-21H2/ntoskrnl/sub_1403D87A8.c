/*
 * XREFs of sub_1403D87A8 @ 0x1403D87A8
 * Callers:
 *     sub_140203B8C @ 0x140203B8C (sub_140203B8C.c)
 *     sub_140774EC0 @ 0x140774EC0 (sub_140774EC0.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 * Callees:
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403D87A8(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi
  PVOID *v6; // rbx
  PVOID v7; // rcx
  PVOID *v8; // rcx
  PVOID **v9; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C474D0, 0LL);
  v5 = (PVOID *)qword_140C474C0;
  while ( v5 != &qword_140C474C0 )
  {
    v6 = v5;
    v5 = (PVOID *)*v5;
    v7 = v6[2];
    if ( v7 == a1 && (!a2 || v6[5] == a2) )
    {
      ObfDereferenceObject(v7);
      ExUnregisterCallback(v6[4]);
      v8 = (PVOID *)*v6;
      if ( *((PVOID **)*v6 + 1) != v6 || (v9 = (PVOID **)v6[1], *v9 != v6) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      ExFreePoolWithTag(v6, 0);
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C474D0, 0LL);
  KeLeaveCriticalRegion();
}
