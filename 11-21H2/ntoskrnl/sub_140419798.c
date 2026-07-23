/*
 * XREFs of sub_140419798 @ 0x140419798
 * Callers:
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x14022B430 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_1404199DC @ 0x1404199DC (sub_1404199DC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140419798(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  __int64 v2; // rbp
  KIRQL v3; // r14
  char *v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rdx
  char v12; // di
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v1 = (KSPIN_LOCK *)(a1 + 1240);
  v2 = a1 + 1264;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
  while ( (unsigned __int8)sub_1404199DC(v2, 0LL, &P) )
  {
    v4 = (char *)P;
    v5 = *((_QWORD *)P + 3);
    sub_140355830(*(_QWORD *)(v5 + 80), *(unsigned int *)(v5 + 16), 2);
    *((_DWORD *)v4 + 4) &= 0xFFFFFFF5;
    v6 = v4 + 56;
    *((_QWORD *)v4 + 6) = 0LL;
    v7 = *((_QWORD *)v4 + 7);
    if ( *(char **)(v7 + 8) != v4 + 56 || (v8 = (_QWORD *)*((_QWORD *)v4 + 8), (_QWORD *)*v8 != v6) )
LABEL_13:
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_QWORD *)v4 + 8) = v4 + 56;
    *v6 = v6;
    if ( KeTryToAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 128)) )
    {
      *((_DWORD *)v4 + 4) &= ~4u;
      v9 = v4 + 32;
      v10 = *((_QWORD *)v4 + 4);
      if ( *(char **)(v10 + 8) != v4 + 32 )
        goto LABEL_13;
      v11 = (_QWORD *)*((_QWORD *)v4 + 5);
      if ( (_QWORD *)*v11 != v9 )
        goto LABEL_13;
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *((_QWORD *)v4 + 5) = v4 + 32;
      *v9 = v9;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 128));
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4 + 1);
    if ( v12 )
      ExFreePoolWithTag(v4, 0x4D584650u);
  }
  KeReleaseSpinLock(v1, v3);
}
