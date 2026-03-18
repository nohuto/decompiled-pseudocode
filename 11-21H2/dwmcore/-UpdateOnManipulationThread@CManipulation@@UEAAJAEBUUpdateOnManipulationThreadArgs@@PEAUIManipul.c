/*
 * XREFs of ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@@Z @ 0x1801F4CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::StoreIfChanged_float_ @ 0x1801F32C8 (_anonymous_namespace_--StoreIfChanged_float_.c)
 *     _anonymous_namespace_::StoreIfChanged_D2DVector3_ @ 0x1801F32E4 (_anonymous_namespace_--StoreIfChanged_D2DVector3_.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x1801F5390 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801F5400 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801F59AC (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThread(
        CManipulation *this,
        const struct UpdateOnManipulationThreadArgs *a2,
        struct InteractionLatencyTelemetry::IManipulationTelemetryData *a3)
{
  unsigned int v5; // r12d
  char v6; // si
  __int64 v7; // rcx
  char v8; // r10
  __int64 v9; // r11
  float *v10; // r14
  __int64 v11; // rcx
  float *v12; // rdi
  __int64 v13; // rcx
  char v14; // si
  __int64 v15; // r11
  __int64 v16; // r11
  char v17; // si
  __int64 v18; // r11
  char v19; // si
  __int64 v20; // r11
  char v21; // si
  char v22; // si
  unsigned __int8 v23; // r10
  __int64 v24; // r11
  unsigned __int8 v25; // dl
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx

  v5 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 72), (*((_BYTE *)a2 + 16) & 4) != 0);
  v6 = 0;
  CManipulation::_ResetManipulationThreadDataIfNecessary(v7, *(unsigned int *)a2);
  v10 = (float *)((char *)a2 + 32);
  v11 = *((_QWORD *)a2 + 4) - 0x3F8000003F800000LL;
  if ( *((_QWORD *)a2 + 4) == 0x3F8000003F800000LL )
    v11 = *((unsigned int *)a2 + 10) - 1065353216LL;
  if ( v11 )
  {
    v6 = v8;
    *(float *)(v9 + 32) = *(float *)(v9 + 32) * *v10;
    *(float *)(v9 + 36) = *((float *)a2 + 9) * *(float *)(v9 + 36);
    *(float *)(v9 + 40) = *((float *)a2 + 10) * *(float *)(v9 + 40);
  }
  v12 = (float *)((char *)a2 + 20);
  v13 = *(_QWORD *)((char *)a2 + 20);
  if ( !v13 )
    v13 = *((unsigned int *)a2 + 7);
  if ( v13 )
  {
    v6 = v8;
    *(float *)(v9 + 8) = *(float *)(v9 + 8) + *v12;
    *(float *)(v9 + 12) = *((float *)a2 + 6) + *(float *)(v9 + 12);
    *(float *)(v9 + 16) = *((float *)a2 + 7) + *(float *)(v9 + 16);
  }
  *(_QWORD *)(v9 + 44) = *(_QWORD *)v10;
  *(_DWORD *)(v9 + 52) = *((_DWORD *)a2 + 10);
  *(_QWORD *)(v9 + 20) = *(_QWORD *)v12;
  *(_DWORD *)(v9 + 28) = *((_DWORD *)a2 + 7);
  v14 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 48, v9 + 136) | v6;
  v17 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 60, v15 + 148) | v14;
  v19 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 76, v16 + 60) | v17;
  v21 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 11, (float *)(v18 + 56)) | v19;
  v22 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 18, (float *)(v20 + 160)) | v21;
  if ( *(_DWORD *)a2 != *(_DWORD *)(v24 + 164)
    || v22
    || *(_DWORD *)(v24 + 168) != *((_DWORD *)a2 + 22)
    || *(_DWORD *)(v24 + 176) != *((_DWORD *)a2 + 1)
    || *(_DWORD *)(v24 + 180) != *((_DWORD *)a2 + 2)
    || *(_DWORD *)(v24 + 184) != *((_DWORD *)a2 + 3)
    || (v25 = *(_BYTE *)(v24 + 188), ((unsigned __int8)(v25 ^ *((_BYTE *)a2 + 16)) & v23) != 0)
    || ((v25 ^ *((_BYTE *)a2 + 16)) & 2) != 0 )
  {
    *(_DWORD *)(v24 + 164) = *(_DWORD *)a2;
    *(_DWORD *)(v24 + 176) = *((_DWORD *)a2 + 1);
    *(_DWORD *)(v24 + 180) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(v24 + 184) = *((_DWORD *)a2 + 3);
    *(_DWORD *)(v24 + 168) = *((_DWORD *)a2 + 22);
    *(_BYTE *)(v24 + 188) ^= v23 & (*((_BYTE *)a2 + 16) ^ *(_BYTE *)(v24 + 188));
    *(_BYTE *)(v24 + 188) ^= (*((_BYTE *)a2 + 16) ^ *(_BYTE *)(v24 + 188)) & 2;
    *(_DWORD *)(v24 + 172) = *((_DWORD *)a2 + 23);
    v26 = CManipulation::_SendUpdateToRenderThread(
            (CManipulation *)(v24 - 72),
            v22,
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 20),
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 32));
    v5 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x68u);
    }
    else if ( a3 )
    {
      v28 = *((_QWORD *)a2 + 6);
      if ( !v28 )
        v28 = *((unsigned int *)a2 + 14);
      if ( v28 )
        goto LABEL_25;
      v29 = *(_QWORD *)((char *)a2 + 60);
      if ( !v29 )
        v29 = *((unsigned int *)a2 + 17);
      if ( v29 )
LABEL_25:
        (*(void (__fastcall **)(struct InteractionLatencyTelemetry::IManipulationTelemetryData *))(*(_QWORD *)a3 + 56LL))(a3);
    }
  }
  return v5;
}
