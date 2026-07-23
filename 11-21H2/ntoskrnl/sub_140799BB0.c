/*
 * XREFs of sub_140799BB0 @ 0x140799BB0
 * Callers:
 *     sub_14021F764 @ 0x14021F764 (sub_14021F764.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 * Callees:
 *     sub_1402493D4 @ 0x1402493D4 (sub_1402493D4.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     sub_140799CF0 @ 0x140799CF0 (sub_140799CF0.c)
 *     sub_140799DB0 @ 0x140799DB0 (sub_140799DB0.c)
 *     sub_1409B9218 @ 0x1409B9218 (sub_1409B9218.c)
 *     sub_1409CED4C @ 0x1409CED4C (sub_1409CED4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140799BB0(__int64 a1, void *a2, void *a3, ULONG a4)
{
  __int64 result; // rax
  unsigned int v8; // ebp
  __int64 Pool2; // rax
  _SID_AND_ATTRIBUTES *v10; // rsi
  int v11; // eax
  unsigned int v12; // ebp
  void *v13; // rcx
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v17) = 0;
  v16 = 0LL;
  if ( *(_QWORD *)(a1 + 792) )
  {
    if ( !a2 )
      return 3221225506LL;
    v13 = *(void **)(a1 + 784);
    if ( v13 )
    {
      if ( !(unsigned __int8)sub_1409B9218(v13, a2) )
        return 3221225506LL;
    }
  }
  if ( a4 )
  {
    if ( a4 > 0x1000 )
      return 3221225485LL;
    if ( byte_140C5AEB1 )
    {
      v8 = 32 * a4;
    }
    else
    {
      result = sub_140799CF0(a3);
      if ( (int)result < 0 )
        return result;
      v8 = v17;
    }
    Pool2 = ExAllocatePool2(256LL, v8, 1934845267LL);
    v10 = (_SID_AND_ATTRIBUTES *)Pool2;
    if ( Pool2 )
    {
      if ( byte_140C5AEB1 )
        v11 = sub_1409CED4C(a3, Pool2, a4);
      else
        v11 = sub_140799DB0(a3, v8, v14, v15, (__int64)&v16, (__int64)&v17);
      v12 = v11;
      if ( v11 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        if ( *(_QWORD *)(a1 + 792) )
          sub_1402493D4(a1);
        *(_QWORD *)(a1 + 792) = v10;
        *(_DWORD *)(a1 + 800) = a4;
        RtlSidHashInitialize(v10, a4, (PSID_AND_ATTRIBUTES_HASH)(a1 + 808));
      }
      return v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 792) )
      sub_1402493D4(a1);
    *(_QWORD *)(a1 + 792) = 0LL;
    *(_DWORD *)(a1 + 800) = 0;
    return 0LL;
  }
}
