/*
 * XREFs of ?ComputeAtlasSize@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@W4DXGI_FORMAT@@_NPEAVSizeU@2@@Z @ 0x180083E28
 * Callers:
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     ?GetLastPoolAccessed@CDynamicPoolSet@DirectComposition@@QEBAPEAVCDynamicPool@2@W4DXGI_FORMAT@@_N1@Z @ 0x180083FDC (-GetLastPoolAccessed@CDynamicPoolSet@DirectComposition@@QEBAPEAVCDynamicPool@2@W4DXGI_FORMAT@@_N.c)
 *     McTemplateU0qqqqqqqqqqqqqq_EventWriteTransfer @ 0x1800FBDC4 (McTemplateU0qqqqqqqqqqqqqq_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CSurfaceManager::ComputeAtlasSize(
        DirectComposition::CSurfaceManager *this,
        const struct DirectComposition::SurfaceRequestStruct *a2,
        enum DXGI_FORMAT a3,
        bool a4,
        struct DirectComposition::SizeU *a5)
{
  unsigned int v5; // r13d
  __int64 v7; // r11
  unsigned int v9; // esi
  unsigned int v10; // edi
  DirectComposition::CDynamicPoolSet *v11; // rcx
  struct DirectComposition::CDynamicPool *LastPoolAccessed; // rax
  unsigned int v13; // r11d
  unsigned __int64 v14; // rax
  unsigned int v15; // ebp
  unsigned __int64 v16; // rdx
  unsigned int v17; // r10d
  unsigned int v18; // r10d
  unsigned int v19; // ebp
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r13d
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned int v30; // edx
  int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // [rsp+C4h] [rbp+Ch]

  v5 = *((_DWORD *)a2 + 2);
  v7 = *((_QWORD *)this + 13);
  v9 = v5;
  if ( v5 <= *((_DWORD *)this + 29) )
    v9 = *((_DWORD *)this + 29);
  v10 = *((_DWORD *)a2 + 1);
  v11 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 2);
  if ( v10 <= *((_DWORD *)this + 28) )
    v10 = *((_DWORD *)this + 28);
  v34 = HIDWORD(v7);
  LastPoolAccessed = DirectComposition::CDynamicPoolSet::GetLastPoolAccessed(v11, a3, a4, *((_BYTE *)a2 + 13));
  if ( LastPoolAccessed )
  {
    v14 = *((_QWORD *)LastPoolAccessed + 7);
    v15 = v14;
    v16 = HIDWORD(v14);
    v17 = HIDWORD(v14);
    if ( v9 > HIDWORD(v14) )
      v17 = v9;
    v18 = (v17 + 31) & 0xFFFFFFE0;
    if ( v10 > (unsigned int)v14 )
      v15 = v10;
    v19 = (v15 + 31) & 0xFFFFFFE0;
    if ( v19 >= v13 )
      v19 = v13;
    if ( v18 >= v34 )
      v18 = v34;
    v20 = (*((_DWORD *)a2 + 1) + 31 + v14) & 0xFFFFFFE0;
    v21 = (v16 + v5 + 31) & 0xFFFFFFE0;
    if ( v20 > v13 )
      v20 = v19;
    v22 = v20;
    if ( v21 > v34 )
      v21 = v18;
    v23 = abs32(v21 - *((_DWORD *)this + 25));
    v24 = abs32(v18 - *((_DWORD *)this + 25));
    v25 = v20;
    v26 = v21;
    v27 = v18;
    if ( abs32(v22 - *((_DWORD *)this + 24)) >= abs32(v19 - *((_DWORD *)this + 24)) )
      v25 = v19;
    *(_DWORD *)a5 = v25;
    if ( v23 < v24 )
      v27 = v26;
    *((_DWORD *)a5 + 1) = v27;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
      McTemplateU0qqqqqqqqqqqqqq_EventWriteTransfer(
        v27,
        v25,
        *((_DWORD *)this + 24),
        *((_DWORD *)this + 25),
        v10,
        v9,
        v13,
        v34,
        *((_DWORD *)a2 + 1),
        *((_DWORD *)a2 + 2),
        v19,
        v18,
        v22,
        v26,
        v25,
        v27);
  }
  else
  {
    v28 = *((_QWORD *)this + 12);
    v29 = HIDWORD(v28);
    if ( v9 > HIDWORD(v28) )
      LODWORD(v29) = v9;
    v30 = (v29 + 31) & 0xFFFFFFE0;
    if ( v10 > (unsigned int)v28 )
      LODWORD(v28) = v10;
    v31 = v28 + 31;
    v32 = v34;
    v33 = v31 & 0xFFFFFFE0;
    if ( v33 < v13 )
      v13 = v33;
    *(_DWORD *)a5 = v13;
    if ( v30 < v34 )
      v32 = v30;
    *((_DWORD *)a5 + 1) = v32;
  }
}
