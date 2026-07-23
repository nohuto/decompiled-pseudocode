/*
 * XREFs of sub_14099C7F4 @ 0x14099C7F4
 * Callers:
 *     sub_14099C9CC @ 0x14099C9CC (sub_14099C9CC.c)
 * Callees:
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14099C7F4(__int64 a1, __int128 *a2)
{
  GUID *Pool2; // rdi
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  __int128 v7; // xmm0
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v10 = -1LL;
  Pool2 = 0LL;
  v4 = sub_140812B74(a1, (unsigned int *)qword_14000F1A8, &v10);
  if ( v4 >= 0 )
  {
    v4 = sub_140812D44(v10, 0x24000002u, v5, 0LL, &v9);
    if ( v4 == -1073741789 )
    {
      Pool2 = (GUID *)ExAllocatePool2(256LL, v9, 1734960208LL);
      if ( !Pool2 )
      {
        v4 = -1073741670;
        goto LABEL_12;
      }
      v4 = sub_140812D44(v10, 0x24000002u, v6, Pool2, &v9);
    }
    if ( v4 == -1073741275 )
      goto LABEL_10;
    if ( v4 < 0 )
      goto LABEL_12;
    if ( !v9 )
LABEL_10:
      v7 = xmmword_14000F198;
    else
      v7 = (__int128)*Pool2;
    *a2 = v7;
    v4 = 0;
  }
LABEL_12:
  if ( v10 != -1 )
    sub_140812D00(v10);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x67696450u);
  return (unsigned int)v4;
}
