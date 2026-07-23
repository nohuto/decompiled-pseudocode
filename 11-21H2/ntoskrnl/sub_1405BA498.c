/*
 * XREFs of sub_1405BA498 @ 0x1405BA498
 * Callers:
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 * Callees:
 *     sub_140239C2C @ 0x140239C2C (sub_140239C2C.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405BA624 @ 0x1405BA624 (sub_1405BA624.c)
 *     sub_1405BBC9C @ 0x1405BBC9C (sub_1405BBC9C.c)
 */

__int64 __fastcall sub_1405BA498(ULONG_PTR BugCheckParameter2, volatile signed __int64 *BugCheckParameter3, __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  signed __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned int v10; // ebx

  v5 = *(struct _KTHREAD **)(a3 + 1248);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  v7 = 1LL;
  v8 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL);
  v9 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  if ( v9 != v8 )
    v7 = _InterlockedDecrement64(BugCheckParameter3 + 1);
  if ( _InterlockedExchangeAdd64(BugCheckParameter3 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    v10 = sub_140239C2C(v8, (ULONG_PTR)BugCheckParameter3);
  else
    v10 = 4;
  if ( *(_QWORD *)(*(_QWORD *)(a3 + 1680) + 344LL) > *(_QWORD *)(BugCheckParameter2 + 96) )
  {
    if ( (_InterlockedDecrement64(BugCheckParameter3 + 2) & 0x7FFFFFFFFFFFFFFLL) == 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 17528), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 != 3 )
        sub_14028CE10(v8, 1LL);
    }
    v10 = 5;
  }
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter2 + 48)) )
    sub_1405BA624(a3, BugCheckParameter2);
  if ( v10 == 3 && v9 != v8 )
    v10 = 4;
  if ( !v7 )
    sub_1405BBC9C(v8);
  return v10;
}
