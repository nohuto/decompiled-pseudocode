/*
 * XREFs of ?MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18002293C
 * Callers:
 *     ?MarshalCompositorComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEBG@Z @ 0x18001D674 (-MarshalCompositorComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEBG@Z.c)
 *     ?MarshalComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIPEBG@Z @ 0x1800220BC (-MarshalComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIPEBG@Z.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180022B9C (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     StringLengthWorkerW @ 0x180022D20 (StringLengthWorkerW.c)
 *     ?HashData@CommentHasher@Composition@UI@Windows@@AEAA?AU_GUID@@PEBE_K@Z @ 0x180024414 (-HashData@CommentHasher@Composition@UI@Windows@@AEAA-AU_GUID@@PEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

void **__fastcall Windows::UI::Composition::AnimationLoggingManager::MaybeHashComment(
        __int64 a1,
        void **a2,
        const wchar_t *a3)
{
  const wchar_t *v3; // r10
  size_t v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  bool v11; // cf
  void **v12; // r9
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  const unsigned __int8 *v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  void *v19; // rcx
  void *v20; // rdx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v24; // rbx
  size_t pcchLength; // [rsp+20h] [rbp-79h] BYREF
  void *v26; // [rsp+28h] [rbp-71h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-69h] BYREF
  __int128 v28; // [rsp+40h] [rbp-59h]
  GUID rguid; // [rsp+50h] [rbp-49h] BYREF
  OLECHAR sz[40]; // [rsp+60h] [rbp-39h] BYREF

  v3 = word_1801E5750;
  pcchLength = 0LL;
  if ( a3 )
    v3 = a3;
  v6 = 1000LL;
  if ( v3 && StringLengthWorkerW(v3, 0x3E8uLL, &pcchLength) >= 0 )
    v6 = pcchLength;
  v7 = 7LL;
  Src[0] = 0LL;
  v8 = -1LL;
  *((_QWORD *)&v28 + 1) = 7LL;
  v9 = -1LL;
  *(_QWORD *)&v28 = 0LL;
  do
    ++v9;
  while ( v3[v9] );
  if ( v9 <= 7 )
  {
    v24 = 2 * v9;
    *(_QWORD *)&v28 = v9;
    memmove_0(Src, v3, 2 * v9);
    *(_WORD *)((char *)Src + v24) = 0;
  }
  else
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(Src, v9, a3, v3);
  }
  v11 = (unsigned __int64)v28 < v6;
  v12 = Src;
  *a2 = 0LL;
  if ( v11 )
    v6 = v28;
  v11 = *((_QWORD *)&v28 + 1) < 8uLL;
  a2[2] = 0LL;
  if ( !v11 )
    v12 = (void **)Src[0];
  a2[3] = (void *)7;
  if ( v6 <= 7 )
  {
    a2[2] = (void *)v6;
    memmove_0(a2, v12, 2 * v6);
    *((_WORD *)a2 + v6) = 0;
  }
  else
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(a2, v6, v10, v12);
  }
  if ( *((_QWORD *)&v28 + 1) >= 8uLL )
  {
    v13 = Src[0];
    v14 = 2LL * *((_QWORD *)&v28 + 1) + 2;
    pcchLength = v14;
    v26 = Src[0];
    if ( v14 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v26, &pcchLength);
      v14 = pcchLength;
      v13 = v26;
    }
    operator delete(v13, v14);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 452LL) & 0x10) != 0 )
  {
    v15 = (const unsigned __int8 *)a2;
    if ( (unsigned __int64)a2[3] >= 8 )
      v15 = (const unsigned __int8 *)*a2;
    Windows::UI::Composition::CommentHasher::HashData(
      (Windows::UI::Composition::CommentHasher *)(a1 + 168),
      &rguid,
      v15,
      2LL * (_QWORD)a2[2]);
    if ( !StringFromGUID2(&rguid, sz, 39) )
      Microsoft::WRL2::FailFast::OutOfMemory(v16);
    Src[0] = 0LL;
    *(_QWORD *)&v28 = 0LL;
    *((_QWORD *)&v28 + 1) = 7LL;
    do
      ++v8;
    while ( sz[v8] );
    if ( v8 <= 7 )
    {
      *(_QWORD *)&v28 = v8;
      memmove_0(Src, sz, 2 * v8);
      *((_WORD *)Src + v8) = 0;
    }
    else
    {
      std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(Src, v8, v17, sz);
    }
    if ( a2 == Src )
    {
      v7 = *((_QWORD *)&v28 + 1);
    }
    else
    {
      v18 = (unsigned __int64)a2[3];
      if ( v18 >= 8 )
      {
        v19 = *a2;
        v20 = (void *)(2 * v18 + 2);
        v26 = v20;
        pcchLength = (size_t)v19;
        if ( (unsigned __int64)v20 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned((void **)&pcchLength, (unsigned __int64 *)&v26);
          v20 = v26;
          v19 = (void *)pcchLength;
        }
        operator delete(v19, (unsigned __int64)v20);
      }
      v21 = v28;
      *(_QWORD *)&v28 = 0LL;
      v22 = *(_OWORD *)Src;
      *((_QWORD *)&v28 + 1) = 7LL;
      LOWORD(Src[0]) = 0;
      *(_OWORD *)a2 = v22;
      *((_OWORD *)a2 + 1) = v21;
    }
    if ( v7 >= 8 )
      std::_Deallocate<16,0>(Src[0], 2 * v7 + 2);
  }
  return a2;
}
