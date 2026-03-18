/*
 * XREFs of ?ProcessLegacyTransformGroupUpdateCommand@@YAJPEAVCTransformGroup@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180205EE0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800E15E4 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x1801A3EA4 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 */

__int64 __fastcall ProcessLegacyTransformGroupUpdateCommand(
        struct CResource ***this,
        struct CChannelContext *a2,
        const struct tagMILCMD_TRANSFORMGROUP *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v7; // r8d
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  gsl::details *v12; // rcx
  void *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  int appended; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  void *v21; // [rsp+48h] [rbp-8h]
  unsigned int v22; // [rsp+78h] [rbp+28h] BYREF
  void *v23; // [rsp+80h] [rbp+30h] BYREF

  v5 = *((_QWORD *)a2 + 4);
  v7 = *((_DWORD *)a3 + 2);
  v22 = 0;
  v9 = CResource::UnmarshalResourceArray(a4, a5, v7, 0xB9u, &v22, &v23, v5, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x64Bu);
    return (unsigned int)v11;
  }
  if ( !*((_DWORD *)a3 + 3) )
  {
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v20, v22);
    v13 = v23;
    v21 = v23;
    if ( v20 != -1 && (v23 || !v20) )
    {
      appended = CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetOrAppendChildren(this, (__int64)&v20, 0);
      v11 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, appended, 0x653u);
      goto LABEL_13;
    }
LABEL_15:
    gsl::details::terminate(v12);
    __debugbreak();
  }
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v20, v22);
  v13 = v23;
  v21 = v23;
  if ( v20 == -1 || !v23 && v20 )
    goto LABEL_15;
  v14 = CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetOrAppendChildren(this, (__int64)&v20, 1);
  v11 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x64Fu);
LABEL_13:
  DefaultHeap::Free(v13);
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v11, 0x657u);
  return (unsigned int)v11;
}
