/*
 * XREFs of ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C01D9058
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01D8C44 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ @ 0x1C01D918C (-IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ.c)
 */

__int64 __fastcall DXGDEVICE::ValidateDirectFlipResource(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        enum _D3DDDIFORMAT a6,
        unsigned int a7)
{
  __int64 v9; // rax
  _QWORD *v10; // r14
  int v11; // ebp
  _QWORD *v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // r8
  void *v15; // rax
  ADAPTER_RENDER *v16; // rcx
  int v17; // eax
  __int64 v18; // r15
  struct _DXGKARG_DESCRIBEALLOCATION v20; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+18h]

  v21 = a3;
  if ( (*((_DWORD *)a2 + 1) & 1) != 0 && (v9 = *((_QWORD *)a2 + 7)) != 0 && *(_DWORD *)(v9 + 132) == a7 )
  {
    v10 = *(_QWORD **)(v9 + 136);
    v11 = 0;
    if ( !a7 )
      return 0LL;
    while ( 1 )
    {
      v12 = v10 - 6;
      v13 = *((_DWORD *)v10 - 11);
      if ( (v13 & 0x2000) == 0 )
        break;
      if ( a3 != ((v13 >> 6) & 0xF) )
      {
        WdLogSingleEntry4(3LL, a2, a3, (*((_DWORD *)v10 - 11) >> 6) & 0xF, -1073741811LL);
        return 3221225485LL;
      }
      if ( !CIFlipPresentHistoryToken::IsFlipManagerIFlipFeatureEnabled() )
      {
        v15 = (void *)v12[2];
        v16 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        memset(&v20.Width, 0, 40);
        v20.hAllocation = v15;
        v17 = ADAPTER_RENDER::DdiDescribeAllocation(v16, &v20, v14);
        v18 = v17;
        if ( v17 < 0 )
        {
          WdLogSingleEntry4(2LL, v17, this, v12[2], v10 - 6);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
            v18,
            (__int64)this,
            v12[2],
            (__int64)(v10 - 6),
            0LL);
          return (unsigned int)v18;
        }
        if ( a4 != v20.Width || a5 != v20.Height || a6 != v20.Format )
        {
          WdLogSingleEntry4(3LL, a2, a6, v20.Format, -1073741811LL);
          WdLogSingleEntry4(3LL, a4, v20.Width, a5, v20.Height);
          return 3221225485LL;
        }
      }
      v10 = (_QWORD *)*v10;
      if ( ++v11 >= a7 )
        return 0LL;
      a3 = v21;
    }
    WdLogSingleEntry3(3LL, a2, v10 - 6, -1073741811LL);
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
  }
  return 3221225485LL;
}
