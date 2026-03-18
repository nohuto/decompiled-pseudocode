/*
 * XREFs of ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800DF2F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800DF578 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800DF644 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rcx
  struct CResource *v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v19 = ResourceWithoutType;
      v11 = (__int64)ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              40LL) )
      {
        break;
      }
      v12 = *((_DWORD *)this + 40);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v4 = -2147024362;
        v17 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2147024362, 0xB5u);
        goto LABEL_13;
      }
      if ( v13 > *((_DWORD *)this + 39) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 136, 8u, 1, &v19);
        v17 = v15;
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0xC0u);
LABEL_13:
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0xF9u);
          goto LABEL_15;
        }
      }
      else
      {
        v4 = 0;
        *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v12) = v19;
        *((_DWORD *)this + 40) = v13;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v19 + 8LL))(v19);
      ++a4;
      if ( (unsigned int)++v5 >= *((_DWORD *)a3 + 2) )
        goto LABEL_8;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2003303421, 0xF1u);
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
