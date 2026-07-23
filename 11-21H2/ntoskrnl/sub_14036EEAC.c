/*
 * XREFs of sub_14036EEAC @ 0x14036EEAC
 * Callers:
 *     sub_1407F3718 @ 0x1407F3718 (sub_1407F3718.c)
 * Callees:
 *     sub_14036DBE4 @ 0x14036DBE4 (sub_14036DBE4.c)
 *     sub_14036EDD4 @ 0x14036EDD4 (sub_14036EDD4.c)
 *     sub_14036F5D4 @ 0x14036F5D4 (sub_14036F5D4.c)
 *     sub_14036FB38 @ 0x14036FB38 (sub_14036FB38.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140864DB8 @ 0x140864DB8 (sub_140864DB8.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14036EEAC(_RTL_RUN_ONCE a1, __int64 a2)
{
  _RTL_RUN_ONCE *PoolWithTag; // rax
  _RTL_RUN_ONCE *v5; // rdi
  __int128 v6; // xmm0
  int v7; // ebx
  _RTL_RUN_ONCE v8; // rax
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF

  PoolWithTag = (_RTL_RUN_ONCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3900uLL, 0x65537048u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x3900uLL);
    v11 = 0x500010200LL;
    sub_14036FB38(v5, &v11);
    v10 = 0LL;
    LOBYTE(v10) = 4;
    v6 = v10;
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 608LL) = v5;
    *(_OWORD *)&v5[1820].Ptr = v6;
    v7 = sub_14036EDD4(v5, 2, 2LL, a1, a2 - (unsigned __int64)a1.Ptr, 0);
    if ( v7 < 0
      || (v10 = *(_OWORD *)&v5[1820].Ptr, v7 = sub_14036F5D4(&v10, 0LL, &v5[1822]), v7 < 0)
      || (v10 = *(_OWORD *)&v5[1820].Ptr, v7 = sub_14036F5D4(&v10, 0LL, &v5[1823]), v7 < 0) )
    {
      sub_14036DBE4();
    }
    else
    {
      v8.Ptr = v5[1823].Ptr;
      *((_DWORD *)v8.Ptr + 220) |= 2u;
      *((_BYTE *)v8.Ptr + 333) |= 8u;
      *((_BYTE *)v8.Ptr + 525) |= 8u;
      if ( !qword_140C11768 )
      {
        qword_140C11768 = sub_140864DB8();
        qword_140C11760 = qword_140C11768 - 1;
      }
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
