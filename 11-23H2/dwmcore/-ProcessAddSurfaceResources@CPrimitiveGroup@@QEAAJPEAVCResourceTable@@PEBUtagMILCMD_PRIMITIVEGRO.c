/*
 * XREFs of ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x180095010
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180029174 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18002A9EC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800979D4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C543C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddSurfaceResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  int v5; // ebp
  struct CResource *ResourceWithoutType; // rax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // edi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  struct CResource *v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v19 = ResourceWithoutType;
      v11 = (unsigned int)ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              42LL) )
      {
        break;
      }
      v12 = *((_DWORD *)this + 40);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v4 = -2147024362;
        v14 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_13;
      }
      v14 = 0;
      if ( v13 > *((_DWORD *)this + 39) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 136, 8LL, 1LL, &v19);
        v14 = v16;
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC0u, 0LL);
LABEL_13:
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v14, 0xE9u, 0LL);
          goto LABEL_15;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v12) = v19;
        *((_DWORD *)this + 40) = v13;
      }
      v4 = v14;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v19 + 8LL))(v19);
      ++a4;
      if ( (unsigned int)++v5 >= *((_DWORD *)a3 + 2) )
        goto LABEL_8;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0xE1u, 0LL);
LABEL_15:
    CPrimitiveGroup::ReleaseSurfaceResources(this);
  }
  else
  {
LABEL_8:
    CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  }
  return v4;
}
