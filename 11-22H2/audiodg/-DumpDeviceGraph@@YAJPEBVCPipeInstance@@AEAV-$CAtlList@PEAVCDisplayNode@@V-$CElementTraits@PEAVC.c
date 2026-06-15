/*
 * XREFs of ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400621D8
 * Callers:
 *     ?DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140061E3C (-DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@P.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140061F34 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140011684 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??A?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@1@_K@Z @ 0x140061CA0 (--A-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x140061D28 (-AddHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x140062948 (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DumpDeviceGraph(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int DisplayNode; // ebx
  __int64 *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // r8
  ATL::CAtlException *v15; // rbx
  ATL::CAtlException *v16; // rbx
  __int64 *v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v20; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v21; // [rsp+68h] [rbp-30h] BYREF
  ATL::CAtlException *v22; // [rsp+70h] [rbp-28h] BYREF
  int v23; // [rsp+A0h] [rbp+8h]
  int v24; // [rsp+A0h] [rbp+8h]

  DisplayNode = 0;
  v17 = *(__int64 **)(a1 + 64);
  while ( 1 )
  {
    v5 = v17;
    if ( !v17 )
      break;
    v18 = 0LL;
    v19 = 0LL;
    v6 = *v17;
    v17 = (__int64 *)*v17;
    DisplayNode = 0;
    v20 = *(_QWORD **)v5[2];
    while ( v20 )
    {
      DisplayNode = 0;
      v7 = (_QWORD *)*ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(v6, &v20);
      v8 = v7[3];
      if ( v8 )
      {
        DisplayNode = GetDisplayNode(a2, v8, &v18);
        if ( (DisplayNode & 0x80000000) != 0 )
          return DisplayNode;
      }
      v9 = v7[4];
      if ( v9 )
      {
        DisplayNode = GetDisplayNode(a2, v9, &v19);
        if ( (DisplayNode & 0x80000000) != 0 )
          return DisplayNode;
      }
      if ( v18 )
      {
        DisplayNode = 0;
        try
        {
          v10 = (__int64 *)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                             a3,
                             v7[1]);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(v10, (__int64)&v18, v11);
        }
        catch ( ATL::CAtlException *v21 )
        {
          v15 = v21;
          if ( *(_DWORD *)v21 == -1073741571 )
            _o__resetstkoflw();
          v23 = *(_DWORD *)v15;
          DisplayNode = *(_DWORD *)v15;
          if ( v23 < 0 )
            return DisplayNode;
        }
      }
      if ( v19 )
      {
        DisplayNode = 0;
        try
        {
          v12 = (__int64 *)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                             a4,
                             v7[1]);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(v12, (__int64)&v19, v13);
        }
        catch ( ATL::CAtlException *v22 )
        {
          v16 = v22;
          if ( *(_DWORD *)v22 == -1073741571 )
            _o__resetstkoflw();
          v24 = *(_DWORD *)v16;
          DisplayNode = *(_DWORD *)v16;
          if ( v24 < 0 )
            return DisplayNode;
        }
      }
    }
  }
  return DisplayNode;
}
