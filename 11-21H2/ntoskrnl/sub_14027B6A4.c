/*
 * XREFs of sub_14027B6A4 @ 0x14027B6A4
 * Callers:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14038D4F0 @ 0x14038D4F0 (sub_14038D4F0.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027C3BC @ 0x14027C3BC (sub_14027C3BC.c)
 *     sub_14027DD28 @ 0x14027DD28 (sub_14027DD28.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     sub_1403B8520 @ 0x1403B8520 (sub_1403B8520.c)
 */

__int64 __fastcall sub_14027B6A4(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // ebp
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  bool v16; // zf
  unsigned __int64 v17; // rbx
  __int64 result; // rax
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rax
  _QWORD v23[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  memset(v23, 0, 32);
  sub_140352E50(a1, v23);
  v6 = sub_1402FDD20(a1);
  v7 = v6;
  if ( v6 )
  {
    v15 = sub_1403B8520(a1);
    v16 = (sub_140317A10(v23[v7]) & 0x800) == 0;
  }
  else
  {
    v8 = 4LL;
    do
    {
      v9 = v23[--v8];
      v10 = *(_QWORD *)v9;
      if ( (unsigned int)sub_140317A80(v9)
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
      {
        if ( (v10 & 1) == 0 )
          return 0LL;
        if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
        {
          v19 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v19 )
          {
            v20 = v10 | 0x20;
            v21 = *(_QWORD *)(v19 + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v21 & 0x20) == 0 )
              v20 = v10;
            LOBYTE(v10) = v20;
            if ( (v21 & 0x42) != 0 )
              LOBYTE(v10) = v20 | 0x42;
          }
        }
      }
      if ( (v10 & 1) == 0 )
        return 0LL;
    }
    while ( v8 != 1 );
    v11 = v23[0];
    v24 = sub_140317A10(v23[0]);
    v12 = v24;
    v13 = sub_14027B080(a1);
    if ( v13 == 12 )
      sub_14027DD28(a1, v12, 0LL);
    if ( (v12 & 1) == 0 )
      return 0LL;
    if ( v13 == 5 )
    {
      sub_14027C3BC(v11);
      v14 = sub_140317A10(v11);
      LOWORD(v12) = v14;
      v24 = v14;
    }
    v15 = ((unsigned __int64)sub_140317A10(&v24) >> 12) & 0xFFFFFFFFFFLL;
    v16 = (v12 & 0x800) == 0;
  }
  if ( !v16 )
    *a3 = 1;
  v17 = v15 << 12;
  HIDWORD(v24) = HIDWORD(v17);
  result = 1LL;
  LODWORD(v24) = (a1 & 0xFFF) + v17;
  *a2 = v24;
  return result;
}
