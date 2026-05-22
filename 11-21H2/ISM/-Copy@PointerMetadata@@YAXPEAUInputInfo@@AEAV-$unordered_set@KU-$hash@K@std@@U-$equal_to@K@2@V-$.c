/*
 * XREFs of ?Copy@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A5250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x1800A3DFC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800DDA6C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 */

__int64 __fastcall PointerMetadata::Copy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _OWORD *v7; // rax
  _OWORD *v8; // rdx
  int v9; // ecx
  __int64 result; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)(a3 + 316) = 0;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 316) )
    goto LABEL_7;
  do
  {
    v11 = *(_DWORD *)(a1 + 144 * v3 + 324);
    if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
           a2,
           (const unsigned __int8 *)&v11) )
    {
      v7 = (_OWORD *)(144 * v3 + a1 + 320);
      v8 = (_OWORD *)(144LL * *(unsigned int *)(a3 + 316) + a3 + 320);
      *v8 = *v7;
      v8[1] = v7[1];
      v8[2] = v7[2];
      v8[3] = v7[3];
      v8[4] = v7[4];
      v8[5] = v7[5];
      v8[6] = v7[6];
      v8[7] = v7[7];
      v8[8] = v7[8];
      ++*(_DWORD *)(a3 + 316);
    }
    v9 = *(_DWORD *)(a3 + 316);
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < *(_DWORD *)(a1 + 316) );
  if ( v9 )
    result = PointerInputInfo::GetSizeForPointerCount(v9);
  else
LABEL_7:
    result = 464LL;
  *(_DWORD *)(a3 + 24) = result;
  return result;
}
