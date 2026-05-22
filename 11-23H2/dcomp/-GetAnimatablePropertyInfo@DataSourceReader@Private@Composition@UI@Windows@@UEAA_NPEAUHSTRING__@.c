/*
 * XREFs of ?GetAnimatablePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180184970
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareAnimationNames@@YAHPEAUHSTRING__@@0@Z @ 0x18006F204 (-CompareAnimationNames@@YAHPEAUHSTRING__@@0@Z.c)
 */

bool __fastcall Windows::UI::Composition::Private::DataSourceReader::GetAnimatablePropertyInfo(
        Windows::UI::Composition::Private::DataSourceReader *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rbp
  bool result; // al

  *(_DWORD *)a3 = 0;
  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  *(_DWORD *)a5 = 0;
  v9 = *((_QWORD *)this + 19);
  v10 = *((_QWORD *)this + 20);
  while ( 1 )
  {
    if ( v9 == v10 )
      return 0;
    if ( !(unsigned int)CompareAnimationNames(a2, *(HSTRING *)v9) )
      break;
    v9 += 16LL;
  }
  *(_DWORD *)a4 = *((_DWORD *)this + 32);
  *((_DWORD *)a4 + 1) = *(_DWORD *)(v9 + 8);
  *(_DWORD *)a5 = *(_DWORD *)(v9 + 12);
  result = 1;
  *(_DWORD *)a3 = 1;
  return result;
}
