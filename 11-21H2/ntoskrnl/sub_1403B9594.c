/*
 * XREFs of sub_1403B9594 @ 0x1403B9594
 * Callers:
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1404198CC @ 0x1404198CC (sub_1404198CC.c)
 *     sub_1404199A4 @ 0x1404199A4 (sub_1404199A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403B9594(__int64 a1)
{
  KSPIN_LOCK *v1; // r14
  unsigned __int64 v3; // rbp
  char *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char v8; // di
  _QWORD *v9; // rax
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  char *v13; // rbx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  char v21; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  bool v25; // zf
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v1 = (KSPIN_LOCK *)(a1 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  while ( (unsigned __int8)sub_1404198CC(a1, 0LL, &P) )
  {
    v4 = (char *)P;
    *((_DWORD *)P + 4) &= ~4u;
    v5 = v4 + 32;
    *((_QWORD *)v4 + 3) = 0LL;
    v6 = *((_QWORD *)v4 + 4);
    v7 = (_QWORD *)*((_QWORD *)v4 + 5);
    if ( *(char **)(v6 + 8) != v4 + 32 || (_QWORD *)*v7 != v5 )
LABEL_30:
      __fastfail(3u);
    *v7 = v6;
    v8 = 0;
    *(_QWORD *)(v6 + 8) = v7;
    *((_QWORD *)v4 + 5) = v4 + 32;
    *v5 = v5;
    if ( sub_1402DA448(*((volatile signed __int32 **)v4 + 6)) )
    {
      *((_DWORD *)v4 + 4) &= ~8u;
      v9 = v4 + 56;
      v10 = (KSPIN_LOCK *)*((_QWORD *)v4 + 6);
      *((_QWORD *)v4 + 6) = 0LL;
      v11 = *((_QWORD *)v4 + 7);
      v12 = (_QWORD *)*((_QWORD *)v4 + 8);
      if ( *(char **)(v11 + 8) != v4 + 56 || (_QWORD *)*v12 != v9 )
        goto LABEL_30;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *((_QWORD *)v4 + 8) = v4 + 56;
      *v9 = v9;
      KeReleaseSpinLockFromDpcLevel(v10);
      v8 = 1;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4 + 1);
    if ( v8 )
      ExFreePoolWithTag(v4, 0x4D584650u);
  }
  while ( (unsigned __int8)sub_1404199A4(a1, 0LL, &P) )
  {
    v13 = (char *)P;
    v14 = *((_QWORD *)P + 3);
    sub_140355830(*(_QWORD *)(v14 + 80), *(unsigned int *)(v14 + 16), 2);
    *((_DWORD *)v13 + 4) &= 0xFFFFFFF5;
    v15 = v13 + 56;
    *((_QWORD *)v13 + 6) = 0LL;
    v16 = *((_QWORD *)v13 + 7);
    v17 = (_QWORD *)*((_QWORD *)v13 + 8);
    if ( *(char **)(v16 + 8) != v13 + 56 || (_QWORD *)*v17 != v15 )
      goto LABEL_30;
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    *((_QWORD *)v13 + 8) = v13 + 56;
    *v15 = v15;
    if ( sub_1402DA448((volatile signed __int32 *)(v14 + 128)) )
    {
      *((_DWORD *)v13 + 4) &= ~4u;
      v18 = v13 + 32;
      *((_QWORD *)v13 + 3) = 0LL;
      v19 = *((_QWORD *)v13 + 4);
      v20 = (_QWORD *)*((_QWORD *)v13 + 5);
      if ( *(char **)(v19 + 8) != v13 + 32 || (_QWORD *)*v20 != v18 )
        goto LABEL_30;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      *((_QWORD *)v13 + 5) = v13 + 32;
      *v18 = v18;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v14 + 128));
      v21 = 1;
    }
    else
    {
      v21 = 0;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v13 + 1);
    if ( v21 )
      ExFreePoolWithTag(v13, 0x4D584650u);
  }
  KeReleaseSpinLockFromDpcLevel(v1);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v24 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v25 = ((unsigned int)result & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= result;
        if ( v25 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
