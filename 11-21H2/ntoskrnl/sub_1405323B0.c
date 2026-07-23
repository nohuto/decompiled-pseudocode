/*
 * XREFs of sub_1405323B0 @ 0x1405323B0
 * Callers:
 *     sub_1405330B8 @ 0x1405330B8 (sub_1405330B8.c)
 *     sub_140A64A00 @ 0x140A64A00 (sub_140A64A00.c)
 * Callees:
 *     sub_140530418 @ 0x140530418 (sub_140530418.c)
 */

__int64 __fastcall sub_1405323B0(__int64 a1, int *a2, unsigned __int64 *a3)
{
  unsigned int *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  if ( a2 && (v5 = (unsigned int *)sub_140530418(a1, *a2)) != 0LL )
  {
    v6 = *((_QWORD *)v5 + 1);
    result = *v5;
    v8 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v8 = qword_140C49C98;
    result = *(unsigned int *)(a1 + 200);
  }
  *a3 = v8 >> 12;
  return result;
}
