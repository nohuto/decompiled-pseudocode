/*
 * XREFs of sub_140A57C10 @ 0x140A57C10
 * Callers:
 *     sub_1403C03EC @ 0x1403C03EC (sub_1403C03EC.c)
 *     sub_140825358 @ 0x140825358 (sub_140825358.c)
 *     sub_140825414 @ 0x140825414 (sub_140825414.c)
 *     sub_14082552C @ 0x14082552C (sub_14082552C.c)
 *     sub_140A57AD4 @ 0x140A57AD4 (sub_140A57AD4.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 */

__int64 __fastcall sub_140A57C10(__int64 a1, int a2, int a3, int a4, __int16 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v11; // rbp
  _QWORD *v12; // rcx

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_DWORD *)(a1 + 36) = a2;
  *(_QWORD *)(a1 + 48) = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 56) = ExFreePoolWithTag;
  *(_WORD *)(a1 + 16) = 2;
  *(_WORD *)(a1 + 18) = a5;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  result = a6;
  *(_DWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 44) = a3;
  v11 = (_QWORD *)(a1 + 64);
  v12 = *(_QWORD **)(a6 + 8);
  if ( *v12 != a6 )
    __fastfail(3u);
  *v11 = a6;
  v11[1] = v12;
  *v12 = v11;
  *(_QWORD *)(a6 + 8) = v11;
  return result;
}
