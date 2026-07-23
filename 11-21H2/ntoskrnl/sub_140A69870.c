/*
 * XREFs of sub_140A69870 @ 0x140A69870
 * Callers:
 *     sub_140A697F0 @ 0x140A697F0 (sub_140A697F0.c)
 * Callees:
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 sub_140A69870()
{
  unsigned int v0; // ebp
  unsigned __int64 v1; // rax
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rdi
  __int64 v4; // rsi
  unsigned int v5; // r13d
  _QWORD *v6; // r14
  PVOID v7; // rax
  PVOID *v8; // r14
  __int128 Context; // [rsp+20h] [rbp-38h] BYREF

  v0 = dword_140D06884;
  Context = 0LL;
  v1 = 8LL * (unsigned int)dword_140D06884;
  if ( v1 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v1, 0x65687358u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v4 = 0LL;
  v5 = MEMORY[0xFFFFF78000000600] - MEMORY[0xFFFFF780000003E8] + dword_140D06A10 + 127;
  if ( !v0 )
  {
LABEL_11:
    *(_QWORD *)&Context = PoolWithTag;
    DWORD2(Context) = v0;
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)sub_1405700E0, (ULONG_PTR)&Context);
    goto LABEL_12;
  }
  v6 = PoolWithTag;
  while ( *(_QWORD *)(*(_QWORD *)((char *)v6 + (char *)qword_140D088C0 - (char *)PoolWithTag) + 1728LL) )
  {
    *v6 = 0LL;
LABEL_10:
    v4 = (unsigned int)(v4 + 1);
    ++v6;
    if ( (unsigned int)v4 >= v0 )
      goto LABEL_11;
  }
  v7 = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x65707553u);
  *v6 = v7;
  if ( v7 )
  {
    memset(v7, 0, v5);
    goto LABEL_10;
  }
  if ( (_DWORD)v4 )
  {
    v8 = (PVOID *)PoolWithTag;
    do
    {
      if ( *v8 )
        ExFreePoolWithTag(*v8, 0);
      ++v8;
      --v4;
    }
    while ( v4 );
  }
  v2 = -1073741670;
LABEL_12:
  ExFreePoolWithTag(PoolWithTag, 0);
  return v2;
}
