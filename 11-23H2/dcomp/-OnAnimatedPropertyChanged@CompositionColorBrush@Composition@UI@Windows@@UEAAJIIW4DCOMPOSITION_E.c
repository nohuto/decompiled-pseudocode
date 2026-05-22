/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionColorBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180070C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     _invalid_parameter_noinfo @ 0x18009690A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionColorBrush::OnAnimatedPropertyChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        char a6,
        float *Src,
        unsigned __int16 a8)
{
  unsigned int v8; // ebp
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *v10; // rax
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *v11; // r10
  __int64 v12; // r8
  unsigned int v13; // ebx
  size_t v14; // rdi
  _DWORD *v15; // r14
  char v16; // al
  int v18; // eax
  unsigned int v19; // edi
  float v20; // eax
  unsigned __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = *(_DWORD *)(a1 + 128);
  if ( (_DWORD)a2 == v8 )
  {
    v10 = &Windows::UI::Composition::CompositionColorBrush::k_rgAnimDef;
    while ( 1 )
    {
      v11 = *v10;
      v12 = *((unsigned int *)*v10 + 2);
      if ( a3 == (_DWORD)v12 )
        break;
      if ( ++v10 == &Windows::UI::Composition::ComponentTransform2D::k_rgAnimDef )
        goto LABEL_18;
    }
    v13 = 0;
    v14 = *((_QWORD *)v11 + 4);
    v15 = (_DWORD *)(a1 + *((_QWORD *)v11 + 3));
    if ( a6 )
    {
      if ( *((_BYTE *)v11 + 21) )
        LODWORD(v12) = *((_DWORD *)v11 + 3);
      v16 = *((_BYTE *)v11 + 20);
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          DirectComposition::CDevice::ResourceSetBufferProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            v8,
            v12,
            Src,
            *((_QWORD *)v11 + 4));
        }
        else
        {
          switch ( v14 )
          {
            case 1uLL:
              LODWORD(v20) = *(unsigned __int8 *)Src;
              break;
            case 2uLL:
              LODWORD(v20) = *(unsigned __int16 *)Src;
              break;
            case 4uLL:
              v20 = *Src;
              break;
            default:
              Microsoft::WRL2::FailFast::Unexpected(0LL);
          }
          DirectComposition::CDevice::ResourceSetIntegerProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            v8,
            v12,
            SLODWORD(v20));
        }
      }
      else
      {
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          v8,
          v12,
          *Src);
      }
    }
    if ( !a5 )
      return 0LL;
    if ( a8 != 0xFFFF )
    {
      v21 = v14 >> 2;
      if ( v21 )
      {
        v22 = a8;
        v23 = 0LL;
        do
        {
          if ( _bittest(&v22, v13) )
            v15[v23] = LODWORD(Src[v23]);
          v23 = ++v13;
        }
        while ( v13 < v21 );
      }
      return 0LL;
    }
    if ( v14 )
    {
      if ( v15 )
      {
        if ( Src )
        {
          memcpy_0(v15, Src, v14);
          return 0LL;
        }
        memset_0(v15, 0, v14);
      }
      *(_DWORD *)_o__errno(a1, a2, v12, a4) = 22;
      invalid_parameter_noinfo();
    }
    return 0LL;
  }
LABEL_18:
  v18 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(a1, a2, a3, a4, a5, a6, (__int64)Src, a8);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x73,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncolorbrush.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
