/*
 * XREFs of sub_1403CC174 @ 0x1403CC174
 * Callers:
 *     sub_1403A8000 @ 0x1403A8000 (sub_1403A8000.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 */

void __fastcall sub_1403CC174(unsigned int *a1, int *a2, unsigned int a3)
{
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax

  KeAcquireSpinLockAtDpcLevel(*((PKSPIN_LOCK *)&xmmword_140C0E100 + 1));
  v6 = *(_DWORD *)xmmword_140C0E100;
  if ( *(_DWORD *)xmmword_140C0E100 > (unsigned int)*a2 )
    v6 = *a2;
  v7 = *a1;
  *(_DWORD *)xmmword_140C0E100 = v6;
  v8 = v7 / a3 + *a2;
  v9 = *(_DWORD *)(xmmword_140C0E100 + 4);
  if ( v9 < v8 )
    v9 = v8;
  *(_DWORD *)(xmmword_140C0E100 + 4) = v9;
  v10 = *(_DWORD *)(xmmword_140C0E100 + 8);
  if ( v10 > a2[1] )
    v10 = a2[1];
  *(_DWORD *)(xmmword_140C0E100 + 8) = v10;
  v11 = *(_DWORD *)(xmmword_140C0E100 + 12);
  if ( v11 < a2[1] + a1[1] )
    v11 = a2[1] + a1[1];
  *(_DWORD *)(xmmword_140C0E100 + 12) = v11;
  ++*(_DWORD *)qword_140C0E0F0;
  KeReleaseSpinLockFromDpcLevel(*((PKSPIN_LOCK *)&xmmword_140C0E100 + 1));
}
