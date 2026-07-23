/*
 * XREFs of sub_1409CCCB0 @ 0x1409CCCB0
 * Callers:
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 * Callees:
 *     sub_14066B730 @ 0x14066B730 (sub_14066B730.c)
 */

__int64 __fastcall sub_1409CCCB0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // ebx
  unsigned int v6; // r8d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 208);
  v3 = 0;
  v11 = 0LL;
  v6 = 0;
  if ( v2 != -1 )
  {
    result = sub_14066B730(*(unsigned __int8 **)(*(_QWORD *)(a1 + 152) + 16LL * v2), &v11);
    v6 = result;
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a2 + 1120) = v11;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1128) + 8LL)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a2 + 1128) = *(_QWORD *)(a1 + 1128);
  v8 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a2 + 124) = v8;
  if ( v8 )
  {
    do
    {
      v9 = 2LL * v3;
      if ( v3 == v2 )
        v10 = *(_QWORD *)(a2 + 1120);
      else
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v3);
      *(_QWORD *)(*(_QWORD *)(a2 + 152) + 16LL * v3++) = v10;
      *(_DWORD *)(*(_QWORD *)(a2 + 152) + 8 * v9 + 8) = *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v9 + 8);
    }
    while ( v3 < *(_DWORD *)(a2 + 124) );
  }
  return v6;
}
