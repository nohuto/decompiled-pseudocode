/*
 * XREFs of RtlGenerateClass5Guid @ 0x14082E6E0
 * Callers:
 *     sub_140B1009C @ 0x140B1009C (sub_140B1009C.c)
 * Callees:
 *     sub_1403C55B0 @ 0x1403C55B0 (sub_1403C55B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407E21D4 @ 0x1407E21D4 (sub_1407E21D4.c)
 *     sub_1407E2260 @ 0x1407E2260 (sub_1407E2260.c)
 *     sub_1407E22B4 @ 0x1407E22B4 (sub_1407E22B4.c)
 *     sub_1407E2328 @ 0x1407E2328 (sub_1407E2328.c)
 *     sub_1407E23BC @ 0x1407E23BC (sub_1407E23BC.c)
 *     sub_14082E8D4 @ 0x14082E8D4 (sub_14082E8D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlGenerateClass5Guid(__int128 *a1, __int64 a2, int a3, __int64 a4)
{
  PVOID PoolWithTag; // rdi
  int v8; // ebx
  unsigned __int32 v9; // eax
  __int64 v11; // [rsp+48h] [rbp-21h] BYREF
  __int64 v12; // [rsp+50h] [rbp-19h] BYREF
  int v13; // [rsp+58h] [rbp-11h]
  __int128 v14; // [rsp+60h] [rbp-9h] BYREF
  __int128 v15; // [rsp+70h] [rbp+7h] BYREF

  v13 = 0;
  PoolWithTag = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v14 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a4 )
    return 3221225714LL;
  if ( !a2 && a3 )
    return 3221225713LL;
  v8 = sub_14082E8D4(&v12, L"SHA1", L"Microsoft Primitive Provider", 0LL);
  if ( v8 >= 0 )
  {
    v8 = sub_1407E21D4(v12, (__int64)L"ObjectLength");
    if ( v8 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0LL, 0x64697547u);
      if ( PoolWithTag )
      {
        v8 = sub_1407E2328(v12, (__int64)&v11);
        if ( v8 >= 0 )
        {
          v9 = _byteswap_ulong(*(_DWORD *)a1);
          v14 = *a1;
          LODWORD(v14) = v9;
          WORD2(v14) = __ROR2__(*((_WORD *)a1 + 2), 8);
          WORD3(v14) = __ROR2__(*((_WORD *)a1 + 3), 8);
          v8 = sub_1407E23BC(v11, (__int64)&v14);
          if ( v8 >= 0 )
          {
            v8 = sub_1407E23BC(v11, a2);
            if ( v8 >= 0 )
            {
              v8 = sub_1407E22B4(v11, (__int64)&v15);
              if ( v8 >= 0 )
              {
                *(_OWORD *)a4 = v15;
                *(_DWORD *)a4 = _byteswap_ulong(*(_DWORD *)a4);
                *(_WORD *)(a4 + 4) = __ROR2__(*(_WORD *)(a4 + 4), 8);
                *(_WORD *)(a4 + 6) = __ROR2__(*(_WORD *)(a4 + 6), 8) & 0xFFF | 0x5000;
                *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0x3F | 0x80;
              }
            }
          }
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  if ( v11 )
    sub_1407E2260(v11);
  if ( v12 )
    sub_1403C55B0(v12);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v8;
}
