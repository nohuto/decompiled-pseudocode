/*
 * XREFs of ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x180092C94
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x180081340 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180087F50 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180092D84 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x180093228 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180103C6C (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v5; // ebx
  CSharedSectionBase *Resource; // rsi
  unsigned int v7; // ecx
  void *v8; // rbp
  LPVOID v9; // rsi
  gsl::details *v10; // rcx
  const struct CPathData *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA9u);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 144);
  if ( Resource )
  {
    v8 = CSharedSectionBase::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v8 )
    {
      v9 = DefaultHeap::Alloc(0x50uLL);
      if ( v9 )
      {
        gsl::details::extent_type<-1>::extent_type<-1>(v14, *((unsigned int *)a3 + 4));
        v14[1] = v8;
        if ( v14[0] == -1LL )
        {
          gsl::details::terminate(v10);
          JUMPOUT(0x180092D7CLL);
        }
        v11 = (const struct CPathData *)CPathData::CPathData(v9, g_DeviceManager, v14);
        if ( v11 )
        {
          CPathGeometry::SetPath(this, v11);
          return v5;
        }
      }
      v13 = 30;
    }
    else
    {
      v13 = 25;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, v13, 0LL);
  }
  return v5;
}
