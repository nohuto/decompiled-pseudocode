/*
 * XREFs of sub_140639DA4 @ 0x140639DA4
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406DEF50 (RtlQueryRegistryValuesEx.c)
 *     sub_14082D3F8 @ 0x14082D3F8 (sub_14082D3F8.c)
 *     sub_140863E64 @ 0x140863E64 (sub_140863E64.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140639DA4(__int64 a1)
{
  _QWORD *v1; // rbx
  _DWORD *Pool2; // r14
  NTSTATUS v4; // edi
  _DWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+38h] [rbp-19h] BYREF
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  __int64 v13; // [rsp+88h] [rbp+37h]
  int v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+47h]
  int v16; // [rsp+A0h] [rbp+4Fh]

  v1 = &unk_140D32580;
  if ( a1 )
    v1 = *(_QWORD **)(a1 + 1464);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 81928LL, 1767066707LL);
  if ( Pool2 )
  {
    v5 = (_DWORD *)ExAllocatePool2(256LL, 47040LL, 1767066707LL);
    if ( v5 )
    {
      memset(Pool2, 0, 0x14000uLL);
      memset(v5 + 2, 0, 0xB7B4uLL);
      Pool2[20481] = 0;
      QueryTable.DefaultData = 0LL;
      v10 = 0LL;
      v11 = 0;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0;
      v15 = 0LL;
      v16 = 0;
      Pool2[20480] = 81920;
      v5[11759] = -1;
      QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&sub_140639F60;
      *(_QWORD *)v5 = Pool2;
      QueryTable.Name = L"ProductPolicy";
      v1[113] = v5;
      QueryTable.Flags = 256;
      QueryTable.DefaultType = 50331651;
      QueryTable.DefaultLength = 81920;
      QueryTable.EntryContext = v5;
      sub_140863E64(v1);
      CurrentThread = KeGetCurrentThread();
      v7 = *((_QWORD *)CurrentThread + 203);
      *((_QWORD *)CurrentThread + 203) = a1;
      v4 = RtlQueryRegistryValuesEx(2u, L"ProductOptions", &QueryTable, 0LL, 0LL);
      sub_14082D3F8();
      *((_QWORD *)KeGetCurrentThread() + 203) = v7;
      if ( v4 >= 0 )
        return (unsigned int)v4;
    }
    else
    {
      v4 = -1073741801;
    }
    ExFreePoolWithTag(Pool2, 0x69534C53u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x69534C53u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
