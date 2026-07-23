/*
 * XREFs of sub_1405FE678 @ 0x1405FE678
 * Callers:
 *     sub_140A868E0 @ 0x140A868E0 (sub_140A868E0.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 */

__int64 __fastcall sub_1405FE678(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned __int64 v3; // rdi
  _SLIST_ENTRY *v4; // rdx
  _SLIST_ENTRY *v5; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf
  _SLIST_ENTRY *Next; // rcx
  __int64 v11; // r8

  v1 = (KSPIN_LOCK *)(a1 + 144);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v4 = *(_SLIST_ENTRY **)(a1 + 128);
  while ( v4 != (_SLIST_ENTRY *)(a1 + 128) )
  {
    v5 = (_SLIST_ENTRY *)((char *)v4 - 72);
    v4 = v4->Next;
    if ( !*((_QWORD *)&v5[5].Next + 1) && !v5[6].Next && HIDWORD(v5[3].Next) == 3 )
    {
      Next = v5[5].Next;
      if ( *(&v4->Next + 1) != (_SLIST_ENTRY *)(&v5[4].Next + 1) || Next->Next != (_SLIST_ENTRY *)(&v5[4].Next + 1) )
        __fastfail(3u);
      Next->Next = v4;
      *((_QWORD *)&v4->Next + 1) = Next;
      sub_140A83B84(a1, LODWORD(v5[3].Next));
      sub_140203D88((__int64)&unk_140D58A80, v5, v11);
      break;
    }
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
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
