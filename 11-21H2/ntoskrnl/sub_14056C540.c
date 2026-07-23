/*
 * XREFs of sub_14056C540 @ 0x14056C540
 * Callers:
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 *     sub_140581748 @ 0x140581748 (sub_140581748.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

int __fastcall sub_14056C540(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  int v6; // ebx
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  signed __int64 v12; // rax
  signed __int64 *v13; // rdi
  signed __int64 v14; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  sub_1402F3290(a1, a2, a3, a4);
  v6 = a1[210] & 7;
  if ( v6 == 1 )
    _InterlockedXor(a1 + 210, 7u);
  _InterlockedAnd(a1, 0xFFFFFF7F);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  LODWORD(v12) = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v6 == 1 )
  {
    v13 = (signed __int64 *)(a1 + 90);
    _m_prefetchw(&qword_140C2BB68);
    v12 = qword_140C2BB68;
    do
    {
      *v13 = v12;
      v14 = v12;
      v12 = _InterlockedCompareExchange64(&qword_140C2BB68, (signed __int64)v13, v12);
    }
    while ( v12 != v14 );
    if ( !v12 )
      LODWORD(v12) = KeSetEvent(&Event, 10, 0);
  }
  return v12;
}
