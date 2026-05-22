/*
 * XREFs of ?Split@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A54B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x1800A3DFC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800DDA6C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 */

__int64 __fastcall PointerMetadata::Split(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  unsigned int v6; // eax
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // r15
  _OWORD *v11; // rax
  _OWORD *v12; // rdx
  _OWORD *v13; // rdx
  _OWORD *v14; // rax
  int v15; // edx
  int v16; // ecx
  __int64 result; // rax
  int v18; // ecx
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a3 + 316) = 0;
  v6 = *(_DWORD *)(a1 + 316);
  v8 = 0;
  if ( !v6 )
    goto LABEL_9;
  do
  {
    v9 = *(unsigned int *)(a3 + 316);
    v10 = 144LL * v8;
    v19 = *(_DWORD *)(v10 + a1 + 324);
    if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
           a2,
           (const unsigned __int8 *)&v19) )
    {
      v11 = (_OWORD *)(v10 + a1 + 320);
      v12 = (_OWORD *)(144 * v9 + a3 + 320);
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12[7] = v11[7];
      v12[8] = v11[8];
      ++*(_DWORD *)(a3 + 316);
    }
    else
    {
      if ( !(_DWORD)v9 )
        goto LABEL_7;
      v13 = (_OWORD *)(144LL * (v8 - (unsigned int)v9) + a1 + 320);
      v14 = (_OWORD *)(v10 + a1 + 320);
      *v13 = *v14;
      v13[1] = v14[1];
      v13[2] = v14[2];
      v13[3] = v14[3];
      v13[4] = v14[4];
      v13[5] = v14[5];
      v13[6] = v14[6];
      v13[7] = v14[7];
      v13[8] = v14[8];
    }
    LODWORD(v9) = *(_DWORD *)(a3 + 316);
LABEL_7:
    v6 = *(_DWORD *)(a1 + 316);
    ++v8;
  }
  while ( v8 < v6 );
  v3 = v9;
LABEL_9:
  v15 = 464;
  *(_DWORD *)(a1 + 316) = v6 - v3;
  v16 = *(_DWORD *)(a3 + 316);
  if ( v16 )
    result = PointerInputInfo::GetSizeForPointerCount(v16);
  else
    result = 464LL;
  *(_DWORD *)(a3 + 24) = result;
  v18 = *(_DWORD *)(a1 + 316);
  if ( v18 )
  {
    result = PointerInputInfo::GetSizeForPointerCount(v18);
    v15 = result;
  }
  *(_DWORD *)(a1 + 24) = v15;
  return result;
}
