/*
 * XREFs of ?AddVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180001EE4
 * Callers:
 *     ?AddVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z @ 0x180001DB0 (-AddVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@34.c)
 *     ?AddVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@PEAVVisual@234@@Z @ 0x180001E50 (-AddVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@P.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollectionImpl::AddVisual(
        Windows::UI::Composition::VisualUnorderedCollectionImpl *this,
        struct Windows::UI::Composition::Visual *a2)
{
  struct Windows::UI::Composition::Visual **v2; // rax
  unsigned int v4; // ecx
  struct Windows::UI::Composition::Visual *v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // r8
  int v10; // edi
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // [rsp+20h] [rbp-18h]
  const char *v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Composition::Visual *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(struct Windows::UI::Composition::Visual ***)this;
  v4 = 0;
  if ( !*((_DWORD *)this + 6) )
  {
LABEL_4:
    v6 = 0LL;
    if ( a2 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)a2 + 4) == 1 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::Visual *))(*(_QWORD *)a2 + 80LL))(a2);
      v6 = a2;
    }
    v7 = *((_DWORD *)this + 6);
    v16 = v6;
    v8 = v7 + 1;
    if ( (unsigned int)v8 < v7 )
    {
      v10 = -2147024362;
      v12 = 181;
      v11 = -2147024362;
    }
    else
    {
      if ( (unsigned int)v8 <= *((_DWORD *)this + 5) )
      {
        *(_QWORD *)(*(_QWORD *)this + 8LL * v7) = v6;
        *((_DWORD *)this + 6) = v8;
LABEL_11:
        ++*((_DWORD *)this + 8);
        return 0LL;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, v8, &v16);
      v11 = v10;
      if ( v10 >= 0 )
        goto LABEL_11;
      v12 = 192;
    }
    DoStackCaptureDirect(v11, v12);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\visualunorderedcollectionimpl.cpp",
      (const char *)(unsigned int)v10,
      v13);
  }
  while ( a2 != *v2 )
  {
    ++v4;
    ++v2;
    if ( v4 >= *((_DWORD *)this + 6) )
      goto LABEL_4;
  }
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x20,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\visualunorderedcollectionimpl.cpp",
    (const char *)0x80070057LL,
    (int)"The visual is already in the collection.",
    v14);
  return 2147942487LL;
}
