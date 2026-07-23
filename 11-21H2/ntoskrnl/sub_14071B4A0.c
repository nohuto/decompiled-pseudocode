/*
 * XREFs of sub_14071B4A0 @ 0x14071B4A0
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071B3F0 @ 0x14071B3F0 (sub_14071B3F0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_140922400 @ 0x140922400 (sub_140922400.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 *     sub_140922B20 @ 0x140922B20 (sub_140922B20.c)
 * Callees:
 *     sub_14071B5A0 @ 0x14071B5A0 (sub_14071B5A0.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_14071EE7C @ 0x14071EE7C (sub_14071EE7C.c)
 */

__int64 __fastcall sub_14071B4A0(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // al
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  __int64 result; // rax
  ULONG_PTR v13; // rdx

  v4 = a2;
  v5 = *(_BYTE *)(a2 + 13) & 3;
  LOBYTE(a2) = 1;
  *(_BYTE *)(BugCheckParameter3 + 65) = v5;
  sub_14071B5A0(BugCheckParameter3, a2);
  v9 = *(_DWORD *)(BugCheckParameter3 + 184);
  if ( (v9 & 0x400000) == 0 )
  {
    if ( a4 )
    {
      sub_14071EE7C(BugCheckParameter3, a3);
      v9 = *(_DWORD *)(BugCheckParameter3 + 184);
    }
    v10 = *(_DWORD *)(v4 + 40);
    *(_DWORD *)(BugCheckParameter3 + 96) = *(_DWORD *)(v4 + 36);
    *(_DWORD *)(BugCheckParameter3 + 100) = v10;
  }
  *(_QWORD *)(BugCheckParameter3 + 168) = *(_QWORD *)(v4 + 4);
  *(_WORD *)(BugCheckParameter3 + 176) = *(_WORD *)(v4 + 52);
  *(_WORD *)(BugCheckParameter3 + 178) = *(_WORD *)(v4 + 60);
  *(_DWORD *)(BugCheckParameter3 + 180) = *(_DWORD *)(v4 + 64);
  v11 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)*(_WORD *)(v4 + 54)) & 0xF;
  *(_DWORD *)(BugCheckParameter3 + 184) = v11;
  *(_DWORD *)(BugCheckParameter3 + 184) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)*(_WORD *)(v4 + 54)) & 0xF0;
  *(_BYTE *)(BugCheckParameter3 + 185) = *(_BYTE *)(v4 + 55);
  result = *(unsigned __int16 *)(v4 + 2);
  *(_WORD *)(BugCheckParameter3 + 186) = result;
  v13 = *(unsigned int *)(v4 + 44);
  if ( (_DWORD)v13 != -1 )
    return sub_14071B640(BugCheckParameter3, v13, 0);
  *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  return result;
}
