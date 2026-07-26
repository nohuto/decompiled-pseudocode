/*
 * XREFs of KLoaderReferenceModule @ 0x1C00CB240
 * Callers:
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1C0134B84 (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0135C24 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFER.c)
 */

__int64 __fastcall KLoaderReferenceModule(
        struct _KLOADER_REFERENCE_MODULE_CONFIG *a1,
        struct KLOADER_MODULE_REFERENCE__ **a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  char v7[4]; // [rsp+30h] [rbp-18h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_cd4e9b2dabae38dbd591d3804b6301c7_Traceguids,
      (__int64)a1 + 8);
  v4 = KLoader::ReferenceModule(a1, a1, a2);
  v5 = v4;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_cd4e9b2dabae38dbd591d3804b6301c7_Traceguids,
      (char)*a2,
      *(_DWORD *)v7);
  }
  return v5;
}
