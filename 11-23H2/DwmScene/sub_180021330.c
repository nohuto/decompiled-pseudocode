/*
 * XREFs of sub_180021330 @ 0x180021330
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800012B8 @ 0x1800012B8 (sub_1800012B8.c)
 */

__int64 __fastcall sub_180021330(__int64 a1, void *a2, __int64 a3, __int64 a4, void *a5, void *a6, int a7)
{
  __int64 result; // rax
  int v8; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+54h] [rbp-2Ch] BYREF
  void *v10; // [rsp+58h] [rbp-28h] BYREF
  void *v11; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h] BYREF
  void *v13; // [rsp+70h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1801C8188 > 5 )
  {
    v8 = a7;
    v10 = a6;
    v11 = a5;
    v13 = a2;
    v9 = a4;
    v12 = a3;
    return sub_1800012B8(a1, (int)&unk_1801AADEE, a3, a4, &v13, (__int64)&v12, (__int64)&v9, &v11, &v10, (__int64)&v8);
  }
  return result;
}
