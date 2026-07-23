/*
 * XREFs of sub_14099D66C @ 0x14099D66C
 * Callers:
 *     sub_1408310F0 @ 0x1408310F0 (sub_1408310F0.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1403D6EC0 @ 0x1403D6EC0 (sub_1403D6EC0.c)
 *     sub_14083120C @ 0x14083120C (sub_14083120C.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 */

void __fastcall sub_14099D66C(__int64 a1)
{
  char v2; // si
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  v2 = *(_BYTE *)(a1 + 8);
  *(_DWORD *)(a1 + 28) &= ~1u;
  v3 = 1;
  sub_1403D6EC0(a1);
  v4 = *(_QWORD *)(a1 + 12) - 0x4869272E4569E601LL;
  if ( *(_QWORD *)(a1 + 12) == 0x4869272E4569E601LL )
    v4 = *(_QWORD *)(a1 + 20) - 0x6F96D7036C1CABBCLL;
  if ( !v4 )
  {
    qword_140C1D028 = 0LL;
    goto LABEL_22;
  }
  v5 = *(_QWORD *)(a1 + 12) - 0x49102205C04A802DLL;
  if ( *(_QWORD *)(a1 + 12) == 0x49102205C04A802DLL )
    v5 = *(_QWORD *)(a1 + 20) + 0xD8D441CAEC46752LL;
  if ( !v5 )
  {
    qword_140C1D040 = 0LL;
LABEL_21:
    sub_140848BE8(1);
    v3 = 0;
    goto LABEL_22;
  }
  v6 = *(_QWORD *)(a1 + 12) - 0x4D23F42CA4A61B5FLL;
  if ( *(_QWORD *)(a1 + 12) == 0x4D23F42CA4A61B5FLL )
    v6 = *(_QWORD *)(a1 + 20) - 0x180F9FDF275CABB3LL;
  if ( !v6 )
  {
    qword_140C1D030 = 0LL;
    goto LABEL_21;
  }
  v7 = *(_QWORD *)(a1 + 12) - 0x4AAB944B0C3D5326LL;
  if ( *(_QWORD *)(a1 + 12) == 0x4AAB944B0C3D5326LL )
    v7 = *(_QWORD *)(a1 + 20) + 0x1FAFF1D5BD012776LL;
  if ( !v7 )
  {
    qword_140C1D038 = 0LL;
    goto LABEL_21;
  }
  v8 = *(_QWORD *)(a1 + 12) - 0x4172F109336C7511LL;
  if ( *(_QWORD *)(a1 + 12) == 0x4172F109336C7511LL )
    v8 = *(_QWORD *)(a1 + 20) + 0x25A57EE05AC1C545LL;
  if ( !v8 )
  {
    qword_140C1D048 = 0LL;
    goto LABEL_21;
  }
LABEL_22:
  sub_14083120C(v2, 0);
  if ( v3 )
    sub_140224C00(&qword_140C22FE0);
}
