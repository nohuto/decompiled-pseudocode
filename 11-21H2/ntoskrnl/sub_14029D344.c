/*
 * XREFs of sub_14029D344 @ 0x14029D344
 * Callers:
 *     sub_14029E260 @ 0x14029E260 (sub_14029E260.c)
 * Callees:
 *     sub_14025A794 @ 0x14025A794 (sub_14025A794.c)
 *     sub_14029E3A0 @ 0x14029E3A0 (sub_14029E3A0.c)
 */

void __fastcall sub_14029D344(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  char v3; // r9

  if ( (unsigned int)dword_140C097B4 <= 1 && byte_140C54C58 != 1 )
  {
    v1 = sub_14029E3A0(a1, 0LL);
    if ( v3 )
    {
      *(_DWORD *)(v2 + 1224) = 1;
      if ( *(_BYTE *)(v1 + 224) )
        *(_BYTE *)(v1 + 224) = 0;
    }
    else
    {
      *(_DWORD *)(v2 + 1224) = -1;
      if ( *(_QWORD *)(v1 + 104) != v1 + 104 && !*(_BYTE *)(v1 + 196) )
        sub_14025A794(v2, v1, *(_DWORD *)(v2 + 776), 0);
    }
  }
}
