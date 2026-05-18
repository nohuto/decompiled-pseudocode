/*
 * XREFs of sub_180022670 @ 0x180022670
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 */

__int64 __fastcall sub_180022670(__int64 a1, void *a2, __int64 a3, __int64 a4, void *a5, void *a6, int a7)
{
  __int64 v7; // xmm3_8
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp-30h] BYREF
  void *v10; // [rsp+58h] [rbp-28h] BYREF
  void *v11; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  void *v14; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801EA188 > 5 )
  {
    v9 = a7;
    v10 = a6;
    v11 = a5;
    v12 = v7;
    v14 = a2;
    v13 = a3;
    return sub_180001008(a1, (int)&unk_1801CC5E5, a3, a4, &v14, (__int64)&v13, (__int64)&v12, &v11, &v10, (__int64)&v9);
  }
  return result;
}
