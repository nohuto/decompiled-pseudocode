/*
 * XREFs of sub_1800227A0 @ 0x1800227A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 */

__int64 __fastcall sub_1800227A0(__int64 a1, void *a2, __int64 a3, __int64 a4, void *a5, void *a6, int a7)
{
  __int64 result; // rax
  int v8; // [rsp+50h] [rbp-30h] BYREF
  void *v9; // [rsp+58h] [rbp-28h] BYREF
  void *v10; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  void *v13; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801EA188 > 5 )
  {
    v8 = a7;
    v9 = a6;
    v10 = a5;
    v13 = a2;
    v11 = a4;
    v12 = a3;
    return sub_180001008(a1, (int)&unk_1801CC57B, a3, a4, &v13, (__int64)&v12, (__int64)&v11, &v10, &v9, (__int64)&v8);
  }
  return result;
}
