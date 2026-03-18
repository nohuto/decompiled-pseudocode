/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1802177CC
 * Callers:
 *     ?GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802179E4 (-GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180217B3C (-GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180203568 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$.c)
 *     ?CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x180217554 (-CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180277214 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk>::FindOrCreateResourceNoRef(
        unsigned __int64 a1,
        struct CD3DDevice *a2,
        struct CD2DInk **a3)
{
  __int64 **v3; // rsi
  __int64 *v5; // rdx
  __int64 v7; // rax
  CDeviceManager *v8; // r14
  unsigned int v9; // edi
  unsigned int v10; // r12d
  __int64 v11; // rcx
  struct CD2DInk *v12; // rax
  int DefaultDevice; // eax
  __int64 v14; // rcx
  CD3DDevice *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  CD3DDevice *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  struct CD2DInk *v21; // rbx
  char *v22; // rcx
  __int64 *v23; // rdx
  struct CD2DInk *v25; // [rsp+70h] [rbp+40h] BYREF
  CD3DDevice *v26; // [rsp+80h] [rbp+50h] BYREF

  v3 = (__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24) - (_QWORD)v5;
  *a3 = 0LL;
  v8 = (CDeviceManager *)a1;
  v9 = 0;
  v10 = 0;
  if ( !(v7 >> 3) )
    goto LABEL_8;
  while ( a2 )
  {
    v11 = v5[v10] + 16 + *(int *)(*(_QWORD *)(v5[v10] + 16) + 8LL);
    if ( a2 == (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) )
      break;
    v5 = *v3;
    a1 = ++v10;
    if ( v10 >= (unsigned __int64)(v3[1] - *v3) )
    {
      v12 = *a3;
      goto LABEL_7;
    }
  }
  v12 = (struct CD2DInk *)(*v3)[v10];
  *a3 = v12;
LABEL_7:
  if ( !v12 )
  {
LABEL_8:
    v25 = 0LL;
    if ( a2 )
    {
      v19 = CInk::CreateResource(*((CInk **)v8 + 1), a2, &v25);
      v9 = v19;
      if ( v19 >= 0 )
      {
LABEL_19:
        v21 = v25;
        v22 = (char *)v25 + *(int *)(*((_QWORD *)v25 + 2) + 8LL) + 16;
        (*(void (__fastcall **)(char *, CDeviceManager *))(*(_QWORD *)v22 + 40LL))(v22, v8);
        v23 = (__int64 *)*((_QWORD *)v8 + 3);
        if ( v23 == *((__int64 **)v8 + 4) )
        {
          std::vector<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> const &>(
            v3,
            v23,
            (__int64 *)&v25);
          v21 = v25;
        }
        else
        {
          *v23 = (__int64)v21;
          (*(void (__fastcall **)(struct CD2DInk *))(*(_QWORD *)v21 + 8LL))(v21);
          ++v3[1];
        }
        *a3 = v21;
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x52u);
    }
    else
    {
      v26 = 0LL;
      DefaultDevice = CDeviceManager::GetDefaultDevice((CDeviceManager *)a1, &v26);
      v9 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, DefaultDevice, 0x4Bu);
        v18 = v26;
        if ( !v26 )
          goto LABEL_24;
        goto LABEL_15;
      }
      v15 = v26;
      v16 = CInk::CreateResource(*((CInk **)v8 + 1), v26, &v25);
      v9 = v16;
      if ( v16 >= 0 )
      {
        if ( v15 )
          CD3DDevice::Release(v15);
        goto LABEL_19;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x4Eu);
      if ( v15 )
      {
        v18 = v15;
LABEL_15:
        CD3DDevice::Release(v18);
      }
    }
LABEL_24:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  }
  return v9;
}
