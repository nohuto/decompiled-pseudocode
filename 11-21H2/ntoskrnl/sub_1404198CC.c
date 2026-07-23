/*
 * XREFs of sub_1404198CC @ 0x1404198CC
 * Callers:
 *     sub_140355A50 @ 0x140355A50 (sub_140355A50.c)
 *     sub_1403B9594 @ 0x1403B9594 (sub_1403B9594.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CA8F0 (PoFxRemoveComponentRelation.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1404198CC(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // si
  _QWORD **v7; // r14
  _QWORD *v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx

  v3 = 0;
  if ( a2 )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a2 + 8));
    v7 = (_QWORD **)(a2 + 32);
  }
  else
  {
    v7 = (_QWORD **)(a1 + 440);
  }
  v8 = (_QWORD *)(a1 + 440);
  while ( 1 )
  {
    v12 = *v7;
    if ( *v7 == v8 )
      break;
    v9 = v12 - 4;
    KeAcquireSpinLockAtDpcLevel(v12 - 3);
    if ( (*(_DWORD *)(v12 - 2) & 8) != 0 )
    {
      *a3 = v9;
      return 1;
    }
    KeReleaseSpinLockFromDpcLevel(v9 + 1);
    *((_DWORD *)v9 + 4) &= ~4u;
    v9[3] = 0LL;
    v10 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v11 = (_QWORD *)v12[1], (_QWORD *)*v11 != v12) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    ExFreePoolWithTag(v12 - 4, 0x4D584650u);
  }
  return v3;
}
