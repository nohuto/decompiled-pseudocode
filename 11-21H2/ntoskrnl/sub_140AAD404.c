/*
 * XREFs of sub_140AAD404 @ 0x140AAD404
 * Callers:
 *     sub_1403A89B4 @ 0x1403A89B4 (sub_1403A89B4.c)
 *     sub_140AABCD8 @ 0x140AABCD8 (sub_140AABCD8.c)
 *     sub_140AABE28 @ 0x140AABE28 (sub_140AABE28.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AAC700 @ 0x140AAC700 (sub_140AAC700.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 *     sub_140AB14B4 @ 0x140AB14B4 (sub_140AB14B4.c)
 *     sub_140AB1844 @ 0x140AB1844 (sub_140AB1844.c)
 * Callees:
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403AA754 @ 0x1403AA754 (sub_1403AA754.c)
 */

__int64 __fastcall sub_140AAD404(_DWORD *a1, int a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int v7; // ebp
  __int64 v8; // rax

  v4 = 0;
  v7 = sub_1403AA754(a1[1] * a2 * *a1);
  v8 = sub_1403AA2B8((unsigned int)(v7 + 72));
  if ( v8 )
  {
    *(_DWORD *)v8 = a1[1];
    *(_DWORD *)(v8 + 4) = *a1;
    *(_QWORD *)(v8 + 24) = v8 + 72;
    *(_DWORD *)(v8 + 8) = a2;
    *(_DWORD *)(v8 + 16) = 0;
    *(_DWORD *)(v8 + 12) = v7;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
