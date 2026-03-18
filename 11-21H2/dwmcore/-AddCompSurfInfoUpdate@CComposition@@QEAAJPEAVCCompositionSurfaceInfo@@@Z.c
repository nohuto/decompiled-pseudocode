/*
 * XREFs of ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180014EEC
 * Callers:
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@@Z @ 0x18008FD20 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@@Z.c)
 *     ?RecordStats@CGlobalCompositionSurfaceInfo@@UEAAX_NAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800CC110 (-RecordStats@CGlobalCompositionSurfaceInfo@@UEAAX_NAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  struct CComposition *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned int v6; // ecx
  struct CCompositionSurfaceInfo **v8; // rcx
  int v9; // edi
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  struct CCompositionSurfaceInfo *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = g_pComposition;
  v3 = 0;
  v4 = 0LL;
  v5 = *((unsigned int *)g_pComposition + 196);
  if ( !(_DWORD)v5 )
  {
LABEL_2:
    v6 = v5 + 1;
    if ( (int)v5 + 1 < (unsigned int)v5 )
    {
      v3 = -2147024362;
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v6 <= *((_DWORD *)g_pComposition + 195) )
      {
        *(_QWORD *)(*((_QWORD *)g_pComposition + 95) + 8 * v5) = a2;
        *((_DWORD *)v2 + 196) = v6;
LABEL_5:
        (*(void (__fastcall **)(struct CCompositionSurfaceInfo *, _QWORD, __int64))(*(_QWORD *)v13 + 8LL))(
          v13,
          *(_QWORD *)v13,
          v4);
        return v3;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)g_pComposition + 760, 8LL, 1LL, &v13);
      v9 = v11;
      v3 = v11;
      if ( v11 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2E2u, 0LL);
    return v3;
  }
  v8 = (struct CCompositionSurfaceInfo **)*((_QWORD *)g_pComposition + 95);
  while ( a2 != *v8 )
  {
    v4 = (unsigned int)(v4 + 1);
    ++v8;
    if ( (unsigned int)v4 >= (unsigned int)v5 )
      goto LABEL_2;
  }
  return v3;
}
