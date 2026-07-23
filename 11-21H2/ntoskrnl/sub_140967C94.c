/*
 * XREFs of sub_140967C94 @ 0x140967C94
 * Callers:
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140966EA8 @ 0x140966EA8 (sub_140966EA8.c)
 *     sub_140967908 @ 0x140967908 (sub_140967908.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140967C94(__int64 a1)
{
  const void **v1; // rbx
  unsigned int v3; // esi
  _DWORD *Pool2; // rax
  _DWORD *v5; // rdi
  __int128 v6; // xmm0
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  const void **v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v8 = 0LL;
  v3 = 30;
  if ( a1 )
  {
    v7 = -1;
    if ( (int)sub_140966EA8((char *)a1, &v8, &v7) < 0 )
      return;
    v1 = v8;
    v3 = *(unsigned __int16 *)v8 + 30;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v3, 1699507265LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v3);
    v1 = v8;
    v6 = *(_OWORD *)((char *)KeGetCurrentThread() + 1224);
    v5[4] = 4;
    *(_OWORD *)v5 = v6;
    if ( a1 )
    {
      v5[6] = (*(_DWORD *)(a1 + 416) & 6) == 2;
      memmove(v5 + 7, v1[1], *(unsigned __int16 *)v1);
    }
    else
    {
      v5[6] = 0;
    }
    sub_140967908((__int64)v5, v3);
    ExFreePoolWithTag(v5, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
