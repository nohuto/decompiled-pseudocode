/*
 * XREFs of ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x1801A720C
 * Callers:
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801A8838 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x1801A7080 (-CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckLocalComputeScribbleSupport(
        CSuperWetInkManager *this,
        const struct CSuperWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CSuperWetInkManager *v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v16 = this;
  *a3 = 0;
  v5 = CSuperWetInkManager::CheckCommonComputeScribbleSupport(this, (bool *)&v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( (_BYTE)v16 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 152LL))(*((_QWORD *)a2 + 1));
      v10 = v8;
      if ( v8 )
      {
        v17 = 0LL;
        v11 = *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v17);
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v11 + v10 + 8))(
               v11 + v10 + 8,
               &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
               &v17) >= 0 )
        {
          v12 = v10 + *(int *)(*(_QWORD *)(v10 + 8) + 12LL) + 8LL;
          v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          if ( v13 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, char *, _QWORD))(**(_QWORD **)a2 + 288LL))(
                   *(_QWORD *)a2,
                   v13,
                   (char *)a2 + 16,
                   0LL)
              && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 160LL))(*((_QWORD *)a2 + 1)) )
            {
              *a3 = 1;
            }
          }
        }
        if ( v17 )
        {
          v14 = *(int *)(*(_QWORD *)(v17 + 8) + 4LL) + v17 + 8;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      {
        McTemplateU0q_EventWriteTransfer(v9, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 10LL);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
