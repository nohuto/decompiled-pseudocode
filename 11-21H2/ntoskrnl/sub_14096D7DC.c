/*
 * XREFs of sub_14096D7DC @ 0x14096D7DC
 * Callers:
 *     sub_1409DA634 @ 0x1409DA634 (sub_1409DA634.c)
 * Callees:
 *     sub_140281620 @ 0x140281620 (sub_140281620.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 */

__int64 __fastcall sub_14096D7DC(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  ULONG_PTR v6; // rdi
  char *v7; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v11 = 0;
  v6 = a1 ^ qword_140C50680 ^ *((_QWORD *)KeGetCurrentThread() + 23);
  v7 = (char *)sub_140281620(v6, (int *)&v11);
  if ( !v7 )
    return v11;
  v9 = *(_QWORD *)(v6 + 8);
  if ( a2 < (v9 & 0xFFFFFFFFFFFFF000uLL)
    || (v10 = (((a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) + a2 - 1, v10 > *(_QWORD *)(v6 + 16)) )
  {
    v4 = -1073741637;
  }
  else
  {
    *(_QWORD *)(v6 + 16) = v10;
    *(_QWORD *)(v6 + 8) = a2 | v9 & 0xFFF;
  }
  sub_14032E700(v7);
  return v4;
}
