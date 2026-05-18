/*
 * XREFs of sub_180032B0C @ 0x180032B0C
 * Callers:
 *     sub_180034000 @ 0x180034000 (sub_180034000.c)
 *     sub_180034420 @ 0x180034420 (sub_180034420.c)
 *     sub_18003445C @ 0x18003445C (sub_18003445C.c)
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180032B0C(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(a1 + 112) & 1) == 0;
  *(_QWORD *)a1 = &std::wstringbuf::`vftable';
  if ( !v1 )
  {
    v3 = **(_QWORD **)(a1 + 64);
    if ( v3 )
      v4 = v3 + 2LL * **(int **)(a1 + 88);
    else
      v4 = **(_QWORD **)(a1 + 56) + 2LL * **(int **)(a1 + 80);
    sub_180010884(**(char ***)(a1 + 24), 2 * ((v4 - **(_QWORD **)(a1 + 24)) >> 1));
  }
  **(_QWORD **)(a1 + 24) = 0LL;
  **(_QWORD **)(a1 + 56) = 0LL;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = 0LL;
  **(_DWORD **)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(a1);
}
