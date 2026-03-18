/*
 * XREFs of ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z @ 0x1C0336680
 * Callers:
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0168A40 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v3; // rbx
  __int64 i; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r14

  v3 = 0LL;
  if ( !a2 )
    return 0LL;
  for ( i = 0LL; ; i += 344LL )
  {
    v8 = *((_QWORD *)a3 + 335);
    if ( (*(_DWORD *)(i + v8 + 16) & 1) != 0 )
    {
      v9 = ExShareAddressSpaceWithDevice(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + v8 + 8) + 64LL) + 152LL),
             *((_QWORD *)this + 1) + 4 * v3);
      v10 = v9;
      if ( v9 < 0 )
        break;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a2 )
      return 0LL;
  }
  WdLogSingleEntry2(2LL, a3, v9);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get PASID for the adapter 0x%I64x. Status: 0x%I64x",
    (__int64)a3,
    v10,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v10;
}
