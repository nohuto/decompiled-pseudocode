/*
 * XREFs of sub_14083113C @ 0x14083113C
 * Callers:
 *     sub_1408310F0 @ 0x1408310F0 (sub_1408310F0.c)
 *     sub_14099DB50 @ 0x14099DB50 (sub_14099DB50.c)
 *     sub_140B151EC @ 0x140B151EC (sub_140B151EC.c)
 * Callees:
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_14083120C @ 0x14083120C (sub_14083120C.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 */

__int64 __fastcall sub_14083113C(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  *(_DWORD *)(a1 + 28) |= 1u;
  v2 = *(_QWORD *)(a1 + 12) - 0x4869272E4569E601LL;
  v3 = *(_BYTE *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 12) == 0x4869272E4569E601LL )
    v2 = *(_QWORD *)(a1 + 20) - 0x6F96D7036C1CABBCLL;
  if ( !v2 )
  {
    qword_140C1D028 = a1;
    goto LABEL_16;
  }
  v4 = *(_QWORD *)(a1 + 12) - 0x49102205C04A802DLL;
  if ( *(_QWORD *)(a1 + 12) == 0x49102205C04A802DLL )
    v4 = *(_QWORD *)(a1 + 20) + 0xD8D441CAEC46752LL;
  if ( !v4 )
  {
    qword_140C1D040 = a1;
LABEL_22:
    LOBYTE(a1) = 1;
    sub_140848BE8(a1);
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    goto LABEL_16;
  }
  v5 = *(_QWORD *)(a1 + 12) - 0x4D23F42CA4A61B5FLL;
  if ( *(_QWORD *)(a1 + 12) == 0x4D23F42CA4A61B5FLL )
    v5 = *(_QWORD *)(a1 + 20) - 0x180F9FDF275CABB3LL;
  if ( !v5 )
  {
    qword_140C1D030 = a1;
    goto LABEL_22;
  }
  v6 = *(_QWORD *)(a1 + 12) - 0x4AAB944B0C3D5326LL;
  if ( *(_QWORD *)(a1 + 12) == 0x4AAB944B0C3D5326LL )
    v6 = *(_QWORD *)(a1 + 20) + 0x1FAFF1D5BD012776LL;
  if ( !v6 )
  {
    qword_140C1D038 = a1;
    goto LABEL_16;
  }
  v7 = *(_QWORD *)(a1 + 12) - 0x4172F109336C7511LL;
  if ( *(_QWORD *)(a1 + 12) == 0x4172F109336C7511LL )
    v7 = *(_QWORD *)(a1 + 20) + 0x25A57EE05AC1C545LL;
  if ( !v7 )
  {
    qword_140C1D048 = a1;
    goto LABEL_22;
  }
LABEL_16:
  LOBYTE(a2) = 1;
  LOBYTE(a1) = v3;
  return sub_14083120C(a1, a2);
}
