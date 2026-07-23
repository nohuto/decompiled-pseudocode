/*
 * XREFs of sub_140A9B6E0 @ 0x140A9B6E0
 * Callers:
 *     sub_140A91824 @ 0x140A91824 (sub_140A91824.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A9BEE8 @ 0x140A9BEE8 (sub_140A9BEE8.c)
 */

__int64 __fastcall sub_140A9B6E0(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf
  _DWORD *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C1AFB0);
  v3 = sub_140A9BEE8(a1, &v11);
  v4 = (_QWORD *)v3;
  if ( v3 )
  {
    if ( *v11 )
    {
      *(_DWORD *)(v3 + 24) |= 4u;
    }
    else
    {
      ObfDereferenceObject(*(PVOID *)v3);
      v5 = v4[1];
      v6 = (_QWORD *)v4[2];
      if ( *(_QWORD **)(v5 + 8) != v4 + 1 || (_QWORD *)*v6 != v4 + 1 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      ExFreePoolWithTag(v4, 0);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1AFB0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v10 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
