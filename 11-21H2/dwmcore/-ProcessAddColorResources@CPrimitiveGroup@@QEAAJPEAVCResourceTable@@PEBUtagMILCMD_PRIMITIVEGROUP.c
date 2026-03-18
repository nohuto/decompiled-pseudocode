/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1802323D0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800DF578 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800DF5F0 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  int v5; // ebp
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edi
  __int64 v20; // rcx
  struct CResource *v21; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v21 = ResourceWithoutType;
      v11 = (__int64)ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              126LL) )
      {
        break;
      }
      v12 = CResource::RegisterNotifier(this, v21);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x130u);
        goto LABEL_17;
      }
      v14 = *((_DWORD *)this + 56);
      v15 = v14 + 1;
      if ( v14 + 1 < v14 )
      {
        v4 = -2147024362;
        v18 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024362, 0xB5u);
        goto LABEL_14;
      }
      if ( v15 > *((_DWORD *)this + 55) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 200, 8u, 1, &v21);
        v18 = v16;
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0xC0u);
LABEL_14:
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v18, 0x132u);
          CResource::UnRegisterNotifierInternal(this, v21);
          goto LABEL_17;
        }
      }
      else
      {
        v4 = 0;
        *(_QWORD *)(*((_QWORD *)this + 25) + 8LL * v14) = v21;
        *((_DWORD *)this + 56) = v15;
      }
      ++a4;
      if ( (unsigned int)++v5 >= *((_DWORD *)a3 + 2) )
        goto LABEL_10;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2003303421, 0x128u);
LABEL_17:
    CPrimitiveGroup::ReleaseColorResources(this);
  }
  else
  {
LABEL_10:
    CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  }
  return v4;
}
