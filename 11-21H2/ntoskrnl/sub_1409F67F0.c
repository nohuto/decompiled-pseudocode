/*
 * XREFs of sub_1409F67F0 @ 0x1409F67F0
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_140984994 @ 0x140984994 (sub_140984994.c)
 */

__int64 __fastcall sub_1409F67F0(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v8 = 0LL;
  P = 0LL;
  result = sub_1406A904C(a1, a2, *((_BYTE *)KeGetCurrentThread() + 562), IoWriteAccess, &v8, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    v7 = sub_140984994(a1, v8, a2, a3);
    sub_140231450((struct _MDL *)P);
    return v7;
  }
  return result;
}
