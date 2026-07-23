/*
 * XREFs of sub_1409DC140 @ 0x1409DC140
 * Callers:
 *     IoWMIExecuteMethod @ 0x1409DB8B0 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1409DBC20 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1409DBD50 (IoWMISetSingleItem.c)
 * Callees:
 *     sub_1402E09E0 @ 0x1402E09E0 (sub_1402E09E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409DC140(int a1, __int64 a2, __int64 a3, int *a4, int *a5, _DWORD *a6, _QWORD *a7)
{
  unsigned int v8; // esi
  unsigned __int16 *v9; // r11
  int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  int v13; // ebx
  int v14; // r14d
  unsigned int v15; // r15d
  PVOID PoolWithTag; // rax
  PVOID v17; // rbp
  int *v18; // rax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = a1;
  v8 = -1073741670;
  if ( sub_1402E09E0(2, &v20) )
  {
    v10 = v20;
    v11 = *v9 + 2;
    if ( v11 <= ~v20 )
    {
      v20 += v11;
      if ( sub_1402E09E0(8, &v20) )
      {
        v13 = v20;
        if ( v12 <= ~v20 )
        {
          v14 = v12 + v20;
          v15 = v12 + v20;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12 + v20, 0x70696D57u);
          v17 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v15);
            v18 = a5;
            v8 = 0;
            *a4 = v10;
            *v18 = v13;
            *a6 = v14;
            *a7 = v17;
          }
        }
      }
    }
  }
  return v8;
}
