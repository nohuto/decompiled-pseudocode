/*
 * XREFs of sub_14098C0DC @ 0x14098C0DC
 * Callers:
 *     sub_1405C9C94 @ 0x1405C9C94 (sub_1405C9C94.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     sub_1407FE7DC @ 0x1407FE7DC (sub_1407FE7DC.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 *     sub_14098C390 @ 0x14098C390 (sub_14098C390.c)
 *     sub_140991ED8 @ 0x140991ED8 (sub_140991ED8.c)
 */

__int64 __fastcall sub_14098C0DC(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v6; // r14
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+18h] BYREF

  _InterlockedOr((volatile signed __int32 *)a1, 0);
  v6 = MEMORY[0xFFFFF78000000008];
  if ( a3 )
  {
    sub_1402FD820((ULONG_PTR)ImageSectionHandle, 1uLL);
    a2[12] = *a2;
    a2[10] = 2;
    a2[11] = 5;
    a2[14] = 21;
    v7 = sub_1407FE7DC((__int64)(a2 + 9));
    LOBYTE(v8) = 1;
    a2[8] = v7;
    LOBYTE(v9) = 1;
    sub_14098C390(v9, v8);
    LOBYTE(v10) = 1;
    sub_14098C390(0LL, v10);
    _InterlockedOr((volatile signed __int32 *)a1, 8u);
    *(_DWORD *)(a1 + 116) = 0;
  }
  else
  {
    sub_14098C390(0LL, 0LL);
    LOBYTE(v11) = 1;
    sub_14098C390(v11, 0LL);
    v14 = a2[8];
    a2[13] = 7;
    sub_1407FE82C(a2 + 9, (__int64)&v14);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFF7);
  }
  v12 = MEMORY[0xFFFFF78000000008] - v6;
  LOBYTE(v12) = a3;
  return sub_140991ED8(
           v12,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL);
}
