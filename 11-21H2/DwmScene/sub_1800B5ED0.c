/*
 * XREFs of sub_1800B5ED0 @ 0x1800B5ED0
 * Callers:
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 * Callees:
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B5388 @ 0x1800B5388 (sub_1800B5388.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800B5ED0(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  double v7; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rax

  v5 = a1 + 8;
  sub_18002C84C(a1 + 8);
  sub_1800B5388(a1);
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 208);
  if ( v6 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 208) & 1LL | ((unsigned __int64)v6 >> 1);
    v7 = (double)(int)v8 + (double)(int)v8;
  }
  else
  {
    v7 = (double)(int)v6;
  }
  *(double *)(a2 + 8) = v7 / a3 * 1000.0;
  v9 = *(_QWORD *)(a1 + 392);
  if ( v9 < 0 )
  {
    v11 = *(_QWORD *)(a1 + 392) & 1LL | ((unsigned __int64)v9 >> 1);
    v10 = (double)(int)v11 + (double)(int)v11;
  }
  else
  {
    v10 = (double)(int)v9;
  }
  *(double *)(a2 + 16) = v10 / a3 * 1000.0;
  j_LanguageEnumProc(v5);
  return a2;
}
