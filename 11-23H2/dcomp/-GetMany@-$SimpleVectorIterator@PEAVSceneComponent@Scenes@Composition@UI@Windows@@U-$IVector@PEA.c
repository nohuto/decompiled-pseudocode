/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUISceneComponent@Scenes@Composition@UI@5@PEAI@Z @ 0x180142BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_516515674a4a78cbf1c7fccdaa57f958_@@QEBAJIPEAI@Z @ 0x180141660 (--R_lambda_516515674a4a78cbf1c7fccdaa57f958_@@QEBAJIPEAI@Z.c)
 *     ??R_lambda_7047ec3c05151097eb61dd9ef9625469_@@QEBA@XZ @ 0x180141738 (--R_lambda_7047ec3c05151097eb61dd9ef9625469_@@QEBA@XZ.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Composition::Scenes::SceneComponent *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  __int64 i; // r8
  int v3; // ebx
  bool v5; // zf
  volatile signed __int32 *v6; // rdi
  unsigned __int32 v7; // esi
  signed __int32 v8; // eax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v10[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-30h] BYREF
  signed __int32 v12; // [rsp+90h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+30h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  _DWORD *v16; // [rsp+A8h] [rbp+40h] BYREF
  va_list va1; // [rsp+A8h] [rbp+40h]
  va_list va2; // [rsp+B0h] [rbp+48h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _DWORD *);
  v13 = a2;
  *v16 = 0;
  for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(i + 1) )
    *(_QWORD *)(v14 + 8 * i) = 0LL;
  v3 = *(_DWORD *)(a1 + 48);
  va_copy((va_list)v10, va1);
  va_copy((va_list)&v10[1], va);
  if ( v3 >= 0 )
  {
    v5 = *(_BYTE *)(a1 + 56) == 0;
    v11[0] = &v9;
    v6 = (volatile signed __int32 *)(a1 + 40);
    v7 = *(_DWORD *)(a1 + 40);
    v11[1] = &v13;
    va_copy((va_list)&v11[2], va);
    va_copy((va_list)&v11[3], va1);
    v9 = a1;
    if ( v5 )
    {
      while ( 1 )
      {
        v3 = _lambda_516515674a4a78cbf1c7fccdaa57f958_::operator()((__int64)v11, v7, &v12);
        if ( v3 < 0 )
          break;
        v8 = _InterlockedCompareExchange(v6, v12, v7);
        v5 = v7 == v8;
        v7 = v8;
        if ( v5 )
          break;
        _lambda_7047ec3c05151097eb61dd9ef9625469_::operator()(v10);
      }
    }
    else
    {
      return (unsigned int)_lambda_516515674a4a78cbf1c7fccdaa57f958_::operator()((__int64)v11, v7, (_DWORD *)(a1 + 40));
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
