/*
 * XREFs of sub_140B533E0 @ 0x140B533E0
 * Callers:
 *     sub_140B313B8 @ 0x140B313B8 (sub_140B313B8.c)
 * Callees:
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140757130 @ 0x140757130 (sub_140757130.c)
 *     sub_14097F148 @ 0x14097F148 (sub_14097F148.c)
 */

__int64 __fastcall sub_140B533E0(signed __int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx

  v4 = (void *)sub_140757130(a1);
  v5 = (unsigned __int64)v4;
  if ( !v4 )
    return 3221225480LL;
  v7 = sub_14097F148(0LL, 0, v4, a2);
  sub_1402F89B0(a1, v5, 0x64537350u);
  return v7;
}
