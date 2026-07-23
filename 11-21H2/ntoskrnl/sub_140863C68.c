/*
 * XREFs of sub_140863C68 @ 0x140863C68
 * Callers:
 *     sub_14082552C @ 0x14082552C (sub_14082552C.c)
 *     sub_1409339DC @ 0x1409339DC (sub_1409339DC.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x14020C520 (MmIsThisAnNtAsSystem.c)
 */

__int64 __fastcall sub_140863C68(__int64 a1)
{
  BOOLEAN IsThisAnNtAsSystem; // al
  __int16 v3; // r10
  __int16 v4; // ax
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v3 = IsThisAnNtAsSystem != 0 ? 96 : 32;
  *(_WORD *)(a1 + 6) = v3;
  *(_WORD *)a1 = v3;
  *(_WORD *)(a1 + 4) = IsThisAnNtAsSystem != 0 ? 128 : 64;
  *(_WORD *)(a1 + 8) = IsThisAnNtAsSystem != 0 ? 256 : 128;
  *(_DWORD *)(a1 + 28) = IsThisAnNtAsSystem != 0 ? 0x10000 : 1536;
  v4 = *(_WORD *)(a1 + 4);
  *(_DWORD *)(a1 + 28) >>= 11;
  *(_WORD *)(a1 + 2) = v4;
  *(_DWORD *)(a1 + 12) = 280;
  *(_DWORD *)(a1 + 16) = 72 * dword_140C4741C + 208;
  result = (unsigned int)dword_140C47418;
  *(_DWORD *)(a1 + 24) = 184;
  *(_DWORD *)(a1 + 20) = 72 * result + 208;
  return result;
}
