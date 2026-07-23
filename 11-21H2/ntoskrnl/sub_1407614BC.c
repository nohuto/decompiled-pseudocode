/*
 * XREFs of sub_1407614BC @ 0x1407614BC
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_14029C6DC @ 0x14029C6DC (sub_14029C6DC.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402D9A04 @ 0x1402D9A04 (sub_1402D9A04.c)
 *     sub_1402DAC64 @ 0x1402DAC64 (sub_1402DAC64.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14075C060 @ 0x14075C060 (sub_14075C060.c)
 *     sub_14093334C @ 0x14093334C (sub_14093334C.c)
 */

__int64 __fastcall sub_1407614BC(__int64 a1, ULONG_PTR a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8
  void *v8; // rbx
  int v9; // ebx
  PVOID v11; // rax
  ULONG Size; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !sub_14029C6DC() )
    return 0;
  if ( !sub_1402D9A04(v5) )
    return 0;
  v8 = *(void **)(a1 + 48);
  if ( *(void **)(*(_QWORD *)v6 + 32LL) != v8 || (v7 & 1) != 0 )
    return 0;
  if ( (dword_140D06880 & 0x8000) != 0 )
  {
    Size = 0;
    v11 = RtlImageDirectoryEntryToData(v8, 1u, 0xCu, &Size);
    if ( v11 )
    {
      v9 = sub_14093334C(v8, v11, Size);
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
  }
  else
  {
    v4 = (_QWORD *)sub_1403095B0((__int64)&qword_140C534C0, 1u);
    if ( !v4 )
      return (unsigned int)-1073741670;
    v9 = sub_14075C060(a1, a2);
    if ( v9 < 0 )
      goto LABEL_11;
  }
  sub_140336B30(a2, (unsigned __int64)v4, 0x10u, 0xFFFFFFFF);
  if ( (dword_140D06880 & 0x8000) == 0 )
    sub_1402DAC64(a1, a2, (__int64)v4);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v9 = 0;
  if ( v4 )
LABEL_11:
    sub_1402BB6D0((__int64)&qword_140C534C0, v4, 1u);
  return (unsigned int)v9;
}
