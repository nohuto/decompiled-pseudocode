/*
 * XREFs of sub_1409F6770 @ 0x1409F6770
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_140A6C8B4 @ 0x140A6C8B4 (sub_140A6C8B4.c)
 */

__int64 __fastcall sub_1409F6770(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v7 = 0LL;
  P = 0LL;
  result = sub_1406A904C(a1, a2, *((_BYTE *)KeGetCurrentThread() + 562), IoWriteAccess, &v7, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    v6 = sub_140A6C8B4(v7, a2, a3);
    sub_140231450((struct _MDL *)P);
    return v6;
  }
  return result;
}
