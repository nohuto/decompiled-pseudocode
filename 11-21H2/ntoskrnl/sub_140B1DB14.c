/*
 * XREFs of sub_140B1DB14 @ 0x140B1DB14
 * Callers:
 *     sub_140B1D9DC @ 0x140B1D9DC (sub_140B1D9DC.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140B1DB14(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rcx
  void *v7; // rdi
  __int64 result; // rax

  v4 = sub_1403B1F04(a1, 24LL);
  if ( v4 )
  {
    v5 = (void *)sub_1403B1F04(v3, 0x4000LL);
    v7 = v5;
    if ( v5 )
    {
      *(_QWORD *)v4 = 0LL;
      *(_DWORD *)(v4 + 12) = 0;
      memset(v5, 0, 0x4000uLL);
      *(_DWORD *)(v4 + 8) = 227;
      result = v4;
      *(_QWORD *)(v4 + 16) = v7;
      *(_DWORD *)(a2 + 8) = 0;
      *(_QWORD *)a2 = v4;
      return result;
    }
    sub_1403B1B5C(v6, v4);
  }
  return 0LL;
}
