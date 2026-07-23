/*
 * XREFs of sub_1406E5F34 @ 0x1406E5F34
 * Callers:
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1407556D4 @ 0x1407556D4 (sub_1407556D4.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 */

__int64 __fastcall sub_1406E5F34(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  PVOID v4; // rcx
  _DWORD v5[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int128 v10; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+80h] [rbp+10h] BYREF

  v9 = 0;
  v5[1] = 0;
  result = *(_QWORD *)(a1 + 216);
  if ( !*(_QWORD *)(result + 48) )
  {
    result = *(unsigned int *)(a1 + 200);
    if ( (result & 0x10) == 0 && (result & 8) == 0 )
    {
      Object = 0LL;
      v6 = 0LL;
      v8 = 0;
      v7 = 0LL;
      v5[0] = 48;
      v10 = 0LL;
      result = sub_1407CDED0(a1, (unsigned int)v5, 0, 1, 0, 0, 0, (__int64)&Object);
      if ( (int)result >= 0 )
      {
        v3 = sub_1407556D4(Object);
        v4 = Object;
        if ( v3 < 0 )
          return ObfDereferenceObject(v4);
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(*(_QWORD *)(a1 + 216) + 48LL),
                   (signed __int64)Object,
                   0LL);
        if ( result )
        {
          v4 = Object;
          return ObfDereferenceObject(v4);
        }
      }
    }
  }
  return result;
}
