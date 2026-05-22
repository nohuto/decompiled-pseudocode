/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1801439D0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_22c970e794a7091f3c6f1fbdcdf59db3_@@QEBAJXZ @ 0x180141608 (--R_lambda_22c970e794a7091f3c6f1fbdcdf59db3_@@QEBAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Composition::Scenes::SceneComponent *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  int v2; // ebx
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v5; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  *a2 = 0;
  v2 = *(_DWORD *)(a1 + 48);
  v5 = &v6;
  v4[1] = (__int64)&v6;
  v4[2] = (__int64)&v5;
  v4[0] = a1;
  if ( v2 >= 0 )
    return (unsigned int)_lambda_22c970e794a7091f3c6f1fbdcdf59db3_::operator()(v4);
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}
