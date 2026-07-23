/*
 * XREFs of ExEnumerateSystemFirmwareTables @ 0x1409F5C90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406C9754 @ 0x1406C9754 (sub_1406C9754.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExEnumerateSystemFirmwareTables(int a1, void *a2, int a3, _DWORD *a4)
{
  unsigned int v9; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  int v12; // edi
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  if ( !a2 && a3 )
    return 3221225485LL;
  v9 = a3 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(a3 + 16), 0x54465241u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0;
    PoolWithTag[2] = 0;
    PoolWithTag[3] = a3;
    *PoolWithTag = a1;
    v12 = sub_1406C9754((char *)PoolWithTag, 0, v9, &v13);
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
    {
      if ( a4 )
        *a4 = v11[3];
      if ( v12 >= 0 )
      {
        if ( a2 )
          memmove(a2, v11 + 4, (unsigned int)(v13 - 16));
      }
    }
    ExFreePoolWithTag(v11, 0x54465241u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}
