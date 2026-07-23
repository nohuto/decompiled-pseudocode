/*
 * XREFs of sub_140227DF0 @ 0x140227DF0
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 * Callees:
 *     sub_14026B1C0 @ 0x14026B1C0 (sub_14026B1C0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1403137B0 @ 0x1403137B0 (sub_1403137B0.c)
 */

_BOOL8 __fastcall sub_140227DF0(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  int v6; // eax
  int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax

  v6 = sub_1403137B0();
  v7 = v6;
  if ( !v6 )
    return 0LL;
  if ( v6 == 2 )
  {
    v11 = sub_14026DFC0(2LL);
  }
  else
  {
    v8 = sub_14026B1C0(a3);
    v9 = (*(_QWORD *)v8 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    v10 = (*(_QWORD *)(v8 + 24) >> 62) & 1LL;
    if ( v8 != a3 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v7 != 1 )
      return !(_DWORD)v10 && a4 == v9 + 192;
    v11 = v9 + 1664;
  }
  return a4 == v11;
}
