/*
 * XREFs of sub_140559E1C @ 0x140559E1C
 * Callers:
 *     sub_140559FA8 @ 0x140559FA8 (sub_140559FA8.c)
 *     sub_1409380B4 @ 0x1409380B4 (sub_1409380B4.c)
 *     sub_140938198 @ 0x140938198 (sub_140938198.c)
 *     sub_140938314 @ 0x140938314 (sub_140938314.c)
 *     sub_1409386B8 @ 0x1409386B8 (sub_1409386B8.c)
 *     sub_140938A9C @ 0x140938A9C (sub_140938A9C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG_PTR __fastcall sub_140559E1C(__int64 a1, __int64 a2, _OWORD *a3, KPRIORITY a4)
{
  int *v4; // r15
  int v6; // edi
  char v8; // r12
  struct _KEVENT *v9; // rbp
  int v10; // ebx
  unsigned __int64 v11; // r14
  unsigned int v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  LONG_PTR result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  bool v20; // zf
  signed __int32 v21[22]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(int **)(a1 + 80);
  v6 = *(_DWORD *)(a1 + 32);
  v8 = 0;
  v9 = 0LL;
  v10 = *v4;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
  v12 = v4[1];
  v13 = v12 + 1;
  v14 = v6 & v12;
  if ( v13 - v10 <= *(_DWORD *)(a1 + 28) )
  {
    v15 = 3 * v14;
    *(_QWORD *)&v4[2 * v15 + 2] = a2;
    *(_OWORD *)&v4[2 * v15 + 4] = *a3;
    v4[1] = v13;
    if ( *(_QWORD *)(a1 + 168) )
    {
      _InterlockedOr(v21, 0);
      if ( (v13 - *v4) % *(_DWORD *)(a1 + 28) == 1 )
      {
        v9 = *(struct _KEVENT **)(a1 + 168);
        ObfReferenceObjectWithTag(v9, 0x746C6644u);
      }
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) |= 1u;
  }
  v16 = *(_QWORD *)(a1 + 120) + 1LL;
  *(_QWORD *)(a1 + 120) = v16;
  if ( *(_BYTE *)(a1 + 160) && v16 == *(_QWORD *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 160) = 0;
    v8 = 1;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 104));
  if ( v8 )
    KeSetEvent((PRKEVENT)(a1 + 136), a4, 0);
  if ( v9 )
    KeSetEvent(v9, a4, 0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v20 = ((unsigned int)result & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= result;
        if ( v20 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( v9 )
    return ObfDereferenceObject(v9);
  return result;
}
