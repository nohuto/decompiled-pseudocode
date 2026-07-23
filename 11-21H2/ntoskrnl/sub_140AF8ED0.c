/*
 * XREFs of sub_140AF8ED0 @ 0x140AF8ED0
 * Callers:
 *     sub_140AF8BF8 @ 0x140AF8BF8 (sub_140AF8BF8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AF8F6C @ 0x140AF8F6C (sub_140AF8F6C.c)
 *     sub_140AF910C @ 0x140AF910C (sub_140AF910C.c)
 *     sub_140AF917C @ 0x140AF917C (sub_140AF917C.c)
 */

__int64 __fastcall sub_140AF8ED0(__int64 a1, PVOID *a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // r8
  unsigned int v7; // [rsp+40h] [rbp+20h] BYREF
  int v8; // [rsp+44h] [rbp+24h]
  PVOID P; // [rsp+50h] [rbp+30h] BYREF
  __int64 v10; // [rsp+58h] [rbp+38h] BYREF

  v8 = HIDWORD(a1);
  v10 = 0LL;
  v7 = 0;
  P = 0LL;
  v4 = sub_140AF917C(&P);
  if ( v4 < 0
    || (int)sub_140AF910C(v3, &v10, &v7) >= 0 && (LOBYTE(v5) = 1, v4 = sub_140AF8F6C(v10, v7, v5, &P), v4 < 0)
    || (v4 = sub_140AF8F6C(917504LL, 0x20000LL, 0LL, &P), v4 < 0) )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    *a2 = P;
  }
  return (unsigned int)v4;
}
