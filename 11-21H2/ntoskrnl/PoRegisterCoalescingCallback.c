/*
 * XREFs of PoRegisterCoalescingCallback @ 0x140832790
 * Callers:
 *     sub_140832270 @ 0x140832270 (sub_140832270.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 *     sub_140B15390 @ 0x140B15390 (sub_140B15390.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoRegisterCoalescingCallback(__int64 a1, char a2, __int64 *a3, __int64 a4)
{
  __int64 Pool2; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 result; // rax

  Pool2 = ExAllocatePool2(64LL, 72LL, 1648586576LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = Pool2;
  *(_QWORD *)(Pool2 + 8) = sub_14098F0C0;
  *(_QWORD *)(Pool2 + 40) = a4;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_BYTE *)(Pool2 + 32) = a2 != 0;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)Pool2);
  if ( !sub_1403C7678((signed __int64 *)(Pool2 + 64), (struct _EX_RUNDOWN_REF *)Pool2, 0LL) )
    return 3221225485LL;
  sub_1402D66A8((ULONG_PTR)&qword_140C23910);
  v9 = off_140C06778;
  v10 = (_QWORD *)(Pool2 + 48);
  if ( *(_UNKNOWN ***)off_140C06778 != &off_140C06770 )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 56) = off_140C06778;
  *v10 = &off_140C06770;
  *v9 = v10;
  off_140C06778 = (_UNKNOWN *)(Pool2 + 48);
  sub_1402935D0((ULONG_PTR)&qword_140C23910);
  result = 0LL;
  *a3 = Pool2;
  return result;
}
