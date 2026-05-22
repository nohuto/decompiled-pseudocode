/*
 * XREFs of ?RemoveVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180001BB0
 * Callers:
 *     ?RemoveVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z @ 0x180001A90 (-RemoveVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl.c)
 *     ?RemoveVisualByLightBehavior@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisual@234@W4LightBehavior@234@@Z @ 0x180001B20 (-RemoveVisualByLightBehavior@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisual@234@W4Ligh.c)
 *     ?RemoveVisualByLightBehavior@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisual@345@W4LightBehavior@345@@Z @ 0x1801827A0 (-RemoveVisualByLightBehavior@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisual@345@W4L.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollectionImpl::RemoveVisual(
        Windows::UI::Composition::VisualUnorderedCollectionImpl *this,
        struct Windows::UI::Composition::Visual *a2)
{
  struct Windows::UI::Composition::Visual **v2; // r8
  unsigned int v4; // ecx
  __int64 v5; // rbx
  struct Windows::UI::Composition::Visual **v6; // rax
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // ecx
  struct Windows::UI::Composition::Visual **i; // r8
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-18h]
  const char *v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(struct Windows::UI::Composition::Visual ***)this;
  v4 = *((_DWORD *)this + 6);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = v2;
    do
    {
      if ( a2 == *v6 )
        break;
      v5 = (unsigned int)(v5 + 1);
      ++v6;
    }
    while ( (unsigned int)v5 < v4 );
  }
  if ( (_DWORD)v5 == v4 )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x3A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\visualunorderedcollectionimpl.cpp",
      (const char *)0x80070057LL,
      (int)"The visual must be in the collection.",
      v13);
    return 2147942487LL;
  }
  else
  {
    v7 = (volatile signed __int32 *)v2[v5];
    if ( v7 && _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, struct Windows::UI::Composition::Visual *))(*(_QWORD *)v7 + 64LL))(
        v7,
        a2);
    }
    v8 = *((_DWORD *)this + 6);
    if ( (unsigned int)v5 >= v8 )
    {
      DoStackCaptureDirect(-2147024809, 0x19Cu);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x42,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\visualunorderedcollectionimpl.cpp",
        (const char *)0x80070057LL,
        v12);
    }
    for ( i = *(struct Windows::UI::Composition::Visual ***)this; (unsigned int)v5 < v8 - 1; v8 = *((_DWORD *)this + 6) )
    {
      v10 = (unsigned int)v5;
      LODWORD(v5) = v5 + 1;
      i[v10] = i[(unsigned int)v5];
    }
    *((_DWORD *)this + 6) = v8 - 1;
    ++*((_DWORD *)this + 8);
    return 0LL;
  }
}
