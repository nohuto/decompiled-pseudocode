/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionPathGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18016F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z @ 0x1800403B8 (-SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ?CreateCompositionPathFromData@CompositionPath@Composition@UI@Windows@@SAJV?$span@$$CBE$0?0@gsl@@PEAPEAV1234@@Z @ 0x18012FAD0 (-CreateCompositionPathFromData@CompositionPath@Composition@UI@Windows@@SAJV-$span@$$CBE$0-0@gsl@.c)
 *     ?OnAnimatedPropertyChanged@CompositionGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1801893C4 (-OnAnimatedPropertyChanged@CompositionGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXP.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPathGeometry::OnAnimatedPropertyChanged(
        struct Windows::UI::Composition::CompositionPath **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  gsl::details *v8; // rax
  gsl::details *v9; // rcx
  __int128 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v15; // eax
  struct Windows::UI::Composition::CompositionPath *v16; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-20h] BYREF
  __int128 v18; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( (_DWORD)a3 == 4 )
  {
    v16 = 0LL;
    v8 = gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v17, *a7);
    *((_QWORD *)&v10 + 1) = a7[1];
    *(_QWORD *)&v10 = *(_QWORD *)v8;
    v18 = v10;
    if ( (_QWORD)v10 == -1LL || !*((_QWORD *)&v10 + 1) && (_QWORD)v10 )
    {
      gsl::details::terminate(v9);
      __debugbreak();
    }
    v11 = Windows::UI::Composition::CompositionPath::CreateCompositionPathFromData(&v18, &v16);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 168LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpathgeometry.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
      return v12;
    }
    v11 = Windows::UI::Composition::CompositionPathGeometry::SetPath(a1, v16);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 170LL;
      goto LABEL_9;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
  }
  else
  {
    v15 = Windows::UI::Composition::CompositionGeometry::OnAnimatedPropertyChanged(a1, a2, a3, a4);
    v12 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpathgeometry.cpp",
        (const char *)(unsigned int)v15);
      return v12;
    }
  }
  return 0LL;
}
