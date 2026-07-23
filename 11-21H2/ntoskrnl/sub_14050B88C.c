/*
 * XREFs of sub_14050B88C @ 0x14050B88C
 * Callers:
 *     sub_1407FCE14 @ 0x1407FCE14 (sub_1407FCE14.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14050B88C(unsigned int a1, __int64 a2, unsigned int *a3)
{
  int v3; // r15d
  unsigned int v4; // edi
  _DWORD *v5; // r12
  unsigned __int8 v8; // al
  __int64 v9; // rbx
  unsigned __int8 v10; // si
  unsigned int v11; // esi
  __int64 v12; // r8
  unsigned int v13; // r8d
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v20; // r9
  int v21; // edx
  bool v22; // zf
  unsigned __int8 v25; // [rsp+68h] [rbp+10h]

  v3 = dword_140C4D0A0;
  v4 = a1;
  *a3 = 0;
  v5 = 0LL;
  v8 = sub_140252344(&qword_140C4D048);
  v9 = qword_140C4D0C0;
  v10 = v8;
  v25 = v8;
  if ( (__int64 *)qword_140C4D0C0 != &qword_140C4D0C0 )
  {
    v11 = v4;
    do
    {
      if ( !v3 )
        break;
      if ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)(v9 + 24)) )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( *(_WORD *)(*(_QWORD *)(v9 + 288) + 2 * v12) );
        v13 = v12 + 1;
        v14 = (2 * v13 + 31) & 0xFFFFFFF8;
        if ( v14 <= v11 )
        {
          v15 = qword_140C4D050;
          *(_DWORD *)a2 = v14;
          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v9 - 8);
          v16 = *(unsigned __int8 *)(v9 + 20);
          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v15 + 8 * v16 + 4);
          *(_DWORD *)(a2 + 12) = *(_DWORD *)(v15 + 8 * v16);
          *(_QWORD *)(a2 + 16) = 0LL;
          wcscpy_s((wchar_t *)(a2 + 24), v13, *(const wchar_t **)(v9 + 288));
          v5 = (_DWORD *)a2;
          a2 += v14;
          v11 -= v14;
        }
        *a3 += v14;
        --v3;
      }
      v9 = *(_QWORD *)v9;
    }
    while ( (__int64 *)v9 != &qword_140C4D0C0 );
    v10 = v25;
    v4 = a1;
    if ( v5 )
      *v5 = 0;
  }
  v17 = v4 < *a3 ? 0xC0000004 : 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return v17;
}
