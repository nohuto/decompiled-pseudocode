/*
 * XREFs of sub_14059519C @ 0x14059519C
 * Callers:
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

int __fastcall sub_14059519C(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // r15
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  bool v15; // cc

  v2 = sub_1402EE0E0(a2, 8);
  v4 = (_QWORD *)(v3 + 48);
  v5 = (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
  v6 = 0;
  for ( i = *(_QWORD *)(v2 + 8); v6 < v5; LODWORD(v2) = v6 )
  {
    v8 = 48LL * *v4 - 0x220000000000LL;
    v9 = (unsigned __int8)sub_1402F2700(v8);
    *(_BYTE *)(v8 + 34) |= 0x10u;
    *(_BYTE *)(v8 + 34) &= ~0x20u;
    *(_QWORD *)v8 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    ++v6;
    ++v4;
  }
  *(_QWORD *)(i + 88) = 0LL;
  v15 = *(_DWORD *)(i + 176) <= 1;
  *(_DWORD *)(i + 80) = -1073741670;
  if ( !v15 )
    LODWORD(v2) = KeSetEvent((PRKEVENT)(i + 56), 0, 0);
  return v2;
}
