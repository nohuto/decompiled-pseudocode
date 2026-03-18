/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18003A12C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800388E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18003B0B8 (-CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800D5CA8 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800EAD84 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800EC208 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180277214 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::FindOrCreateResourceNoRef(
        CD3DDevice *a1,
        struct CD3DDevice *a2,
        struct CD3DConstantBuffer **a3)
{
  __int64 v3; // r11
  unsigned int v4; // edi
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  CD3DDevice *v9; // rsi
  struct CD3DConstantBuffer *v10; // rax
  CRenderingTechnique *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  struct CD3DConstantBuffer *v15; // rbx
  char *v16; // rcx
  CD3DDevice **v17; // rdx
  struct CD3DConstantBuffer **v18; // rdx
  struct CD3DConstantBuffer *v19; // rcx
  int DefaultDevice; // eax
  unsigned int v21; // ecx
  CD3DDevice *v22; // rbx
  CRenderingTechnique *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  struct CD3DConstantBuffer *v26; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v27; // [rsp+70h] [rbp+40h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (v5 - v3) >> 3;
  v9 = a1;
  if ( !v7 )
    goto LABEL_6;
  while ( a2 )
  {
    a1 = *(CD3DDevice **)(*(_QWORD *)(v3 + 8 * v6) + 24LL);
    if ( a2 == *((struct CD3DDevice **)a1 + 10) )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= v7 )
      goto LABEL_7;
  }
  v10 = *(struct CD3DConstantBuffer **)(v3 + 8 * v6);
  *a3 = v10;
  if ( !v10 )
  {
LABEL_6:
    if ( a2 )
    {
LABEL_7:
      v12 = (CRenderingTechnique *)*((_QWORD *)v9 + 1);
      v26 = 0LL;
      v13 = CRenderingTechnique::CreateResource(v12, a2, &v26);
      v4 = v13;
      if ( v13 >= 0 )
      {
LABEL_8:
        v15 = v26;
        v27 = v9;
        v16 = (char *)v26 + 72;
        v17 = (CD3DDevice **)*((_QWORD *)v26 + 10);
        if ( v17 == *((CD3DDevice ***)v26 + 11) )
        {
          std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(v16, v17, &v27);
        }
        else
        {
          *v17 = v9;
          *((_QWORD *)v16 + 1) += 8LL;
        }
        v18 = (struct CD3DConstantBuffer **)*((_QWORD *)v9 + 3);
        if ( v18 == *((struct CD3DConstantBuffer ***)v9 + 4) )
        {
          std::vector<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> const &>(
            (char *)v9 + 16,
            v18,
            &v26);
          v15 = v26;
        }
        else
        {
          *v18 = v15;
          if ( v15 )
            CMILRefCountImpl::AddReference((struct CD3DConstantBuffer *)((char *)v15 + 16));
          *((_QWORD *)v9 + 3) += 8LL;
        }
        *a3 = v15;
        if ( !v15 )
          return v4;
        v19 = v15;
LABEL_14:
        CMILRefCountBaseT<IDeviceResource>::InternalRelease(v19);
        return v4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x52u, 0LL);
    }
    else
    {
      v27 = 0LL;
      DefaultDevice = CDeviceManager::GetDefaultDevice(a1, &v27);
      v4 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
        if ( v27 )
          CD3DDevice::Release(v27);
        return v4;
      }
      v22 = v27;
      v23 = (CRenderingTechnique *)*((_QWORD *)v9 + 1);
      v26 = 0LL;
      v24 = CRenderingTechnique::CreateResource(v23, v27, &v26);
      v4 = v24;
      if ( v24 >= 0 )
      {
        if ( v22 )
          CD3DDevice::Release(v22);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x4Eu, 0LL);
      if ( v22 )
        CD3DDevice::Release(v22);
    }
    v19 = v26;
    if ( !v26 )
      return v4;
    goto LABEL_14;
  }
  return v4;
}
