/*
 * XREFs of sub_140807354 @ 0x140807354
 * Callers:
 *     sub_1408072C0 @ 0x1408072C0 (sub_1408072C0.c)
 *     sub_140811EB0 @ 0x140811EB0 (sub_140811EB0.c)
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 * Callees:
 *     sub_1408073EC @ 0x1408073EC (sub_1408073EC.c)
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140807354(__int64 a1, char a2)
{
  int v4; // edi
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  P = 0LL;
  v4 = sub_140812F84(a1, L"KeyName", L"Description", 1LL, &P, &v8);
  sub_1408132F0(a1);
  if ( v4 < 0 )
    return (unsigned int)v4;
  LOBYTE(v5) = a2;
  v6 = sub_1408073EC(P, v8, v5);
  ExFreePoolWithTag(P, 0x4B444342u);
  return v6;
}
