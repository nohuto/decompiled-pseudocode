/*
 * XREFs of ExGetSystemFirmwareTable @ 0x140860C10
 * Callers:
 *     sub_140652A5C @ 0x140652A5C (sub_140652A5C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406C9754 @ 0x1406C9754 (sub_1406C9754.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExGetSystemFirmwareTable(int a1, int a2, void *a3, int a4, _DWORD *a5)
{
  unsigned int v9; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  int v12; // edi
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0;
  if ( !a3 && a4 )
    return 3221225485LL;
  v9 = a4 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(a4 + 16), 0x54465241u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = a4;
    *PoolWithTag = a1;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = a2;
    v12 = sub_1406C9754((char *)PoolWithTag, 0, v9, &v14);
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
    {
      if ( a5 )
        *a5 = v11[3];
      if ( v12 >= 0 )
      {
        if ( a3 )
          memmove(a3, v11 + 4, (unsigned int)(v14 - 16));
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
