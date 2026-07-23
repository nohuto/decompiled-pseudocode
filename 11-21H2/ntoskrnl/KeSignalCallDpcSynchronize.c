/*
 * XREFs of KeSignalCallDpcSynchronize @ 0x14056F9F0
 * Callers:
 *     sub_140A69470 @ 0x140A69470 (sub_140A69470.c)
 *     sub_140A6A480 @ 0x140A6A480 (sub_140A6A480.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall KeSignalCallDpcSynchronize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = _InterlockedDecrement((volatile signed __int32 *)a1);
  v6 = ~v5 & 0x80000000;
  if ( (v5 & 0x7FFFFFFF) != 0 )
  {
    v7 = 0;
    v9 = 0;
    while ( (*(_DWORD *)a1 & 0x80000000) != v6 )
      sub_1402F32E0(&v9, a2, a3, a4);
  }
  else
  {
    v7 = 1;
    *(_DWORD *)a1 = v6 | *(_DWORD *)(a1 + 4);
  }
  return v7;
}
