/*
 * XREFs of ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1800A427C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1800971C0 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1800A4344 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180103C6C (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetShapes(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAPEVISUAL_SETSHAPES *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v9; // eax
  unsigned int v10; // ebx
  char v11; // bl
  gsl::details *v12; // rcx
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-38h]
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  CResource *v17; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v10 = -2003303421;
    v14 = -2003303421;
    v15 = 41;
    goto LABEL_15;
  }
  v9 = CShapeVisual::EnsureShapeTree(this, &v17);
  v10 = v9;
  if ( v9 < 0 )
  {
    v15 = 45;
    goto LABEL_13;
  }
  v11 = *((_BYTE *)a3 + 8) != 0;
  gsl::details::extent_type<-1>::extent_type<-1>(v16, (unsigned __int64)v5 >> 2);
  v16[1] = a4;
  if ( v16[0] == -1 || !a4 && v16[0] )
  {
    gsl::details::terminate(v12);
    JUMPOUT(0x1800A433BLL);
  }
  v9 = CContainerVectorShape::SetShapes((struct CResource ***)v17, a2, v16, v11);
  v10 = v9;
  if ( v9 < 0 )
  {
    v15 = 51;
LABEL_13:
    v14 = v9;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v14, v15, 0LL);
  }
  return v10;
}
