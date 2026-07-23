/*
 * XREFs of sub_1407963F8 @ 0x1407963F8
 * Callers:
 *     sub_1406D2684 @ 0x1406D2684 (sub_1406D2684.c)
 *     sub_140796F10 @ 0x140796F10 (sub_140796F10.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     sub_140796BF4 @ 0x140796BF4 (sub_140796BF4.c)
 */

__int64 __fastcall sub_1407963F8(ULONG_PTR a1, int a2, int a3, __int64 a4, __int64 a5, __int16 a6, __int64 a7)
{
  void *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax

  sub_140796BF4(a1);
  if ( a3 == 2 )
    _InterlockedOr16((volatile signed __int16 *)(a7 + 98), 8u);
  *(_QWORD *)(a7 + 88) = a4;
  if ( a2 )
  {
    _InterlockedOr16((volatile signed __int16 *)(a7 + 98), 2u);
    v11 = (void *)*((_QWORD *)KeGetCurrentThread() + 23);
    ObfReferenceObjectWithTag(v11, 0x52777445u);
    *(_WORD *)(a7 + 96) = a6;
    *(_QWORD *)(a7 + 80) = v11;
    *(_QWORD *)(a7 + 88) = a4;
  }
  else
  {
    _InterlockedOr16((volatile signed __int16 *)(a7 + 98), 1u);
    if ( a4 )
    {
      *(_QWORD *)(a7 + 80) = a5;
      if ( sub_140359DE0(a4) )
      {
        *(_WORD *)(a7 + 98) |= 0x10u;
        *(_DWORD *)(a7 + 56) = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
      }
    }
  }
  v12 = (_QWORD *)(a1 + 56);
  *(_QWORD *)(a7 + 32) = a1;
  v13 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(v13 + 8) != a1 + 56 )
    __fastfail(3u);
  *(_QWORD *)(a7 + 8) = v12;
  *(_QWORD *)a7 = v13;
  *(_QWORD *)(v13 + 8) = a7;
  *v12 = a7;
  *(_QWORD *)(a7 + 24) = a7 + 16;
  *(_QWORD *)(a7 + 16) = a7 + 16;
  result = 128LL;
  _InterlockedOr16((volatile signed __int16 *)(a7 + 98), 0x80u);
  return result;
}
