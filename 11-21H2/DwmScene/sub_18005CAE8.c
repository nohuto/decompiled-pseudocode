/*
 * XREFs of sub_18005CAE8 @ 0x18005CAE8
 * Callers:
 *     sub_18005C7A0 @ 0x18005C7A0 (sub_18005C7A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005CAE8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSetView::`vftable';
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  return a1;
}
