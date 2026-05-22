/*
 * XREFs of ?PopulatePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z @ 0x1800828A0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionObject@Composition@UI@Windows@@@Z @ 0x1800442F4 (--4-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVComposit.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::PopulatePropertyInfo(
        Windows::UI::Composition::CompositionObject *this,
        HSTRING a2,
        struct Windows::UI::Composition::AnimationPropertyInfo *a3)
{
  int v3; // ebx
  __int64 v4; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  const char *StringRawBuffer; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // [rsp+30h] [rbp-20h] BYREF
  HSTRING v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+48h] [rbp-8h]
  int v18; // [rsp+4Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v20; // [rsp+70h] [rbp+20h] BYREF
  int v21; // [rsp+88h] [rbp+38h] BYREF

  v17 = -1;
  v3 = 0;
  v4 = *(_QWORD *)this;
  v16 = 0LL;
  v14 = 0LL;
  v18 = 2;
  if ( (*(unsigned __int8 (__fastcall **)(Windows::UI::Composition::CompositionObject *, HSTRING, int *, __int64 *, int *))(v4 + 200))(
         this,
         a2,
         &v21,
         &v16,
         &v20) )
  {
    v15 = a2;
    Microsoft::WRL::Wrappers::HString::Set((HSTRING *)a3 + 19, &v15);
    *((_DWORD *)a3 + 40) = HIDWORD(v16);
    *((_DWORD *)a3 + 41) = v16;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::operator=(
      (Microsoft::WRL2::NestableRuntimeClass **)a3 + 21,
      (volatile signed __int32 *)this);
    switch ( v20 )
    {
      case 17:
        v3 = 2;
        break;
      case 18:
        v3 = 1;
        break;
      case 35:
        v3 = 3;
        break;
      case 52:
        v3 = 4;
        break;
      case 69:
        v3 = 5;
        break;
      case 70:
        v3 = 7;
        break;
      case 71:
        v3 = 6;
        break;
      case 104:
        v3 = 8;
        break;
      case 265:
        v3 = 9;
        break;
    }
    v8 = v21;
    *((_DWORD *)a3 + 44) = v3;
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          Microsoft::WRL2::FailFast::Unexpected(0LL);
        *((_DWORD *)a3 + 46) = 3;
        *((_DWORD *)a3 + 45) = 3;
      }
      else
      {
        *((_DWORD *)a3 + 46) = 2;
        *((_DWORD *)a3 + 45) = 2;
      }
    }
    else
    {
      *((_DWORD *)a3 + 46) = 1;
      *((_DWORD *)a3 + 45) = 1;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v14, 1LL);
    return 0LL;
  }
  else
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(a2, 0LL);
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x333,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
      (const char *)0x80070057LL,
      (int)"%ls is not a targetable property for animation.",
      StringRawBuffer);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v14, v13);
    return 2147942487LL;
  }
}
