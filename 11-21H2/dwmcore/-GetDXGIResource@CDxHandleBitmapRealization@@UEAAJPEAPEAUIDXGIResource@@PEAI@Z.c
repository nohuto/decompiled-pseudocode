/*
 * XREFs of ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18001A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1800D568C (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDXGIResource(
        CDxHandleBitmapRealization *this,
        struct IDXGIResource **a2,
        unsigned int *a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  CD2DBitmap *v9; // rbp
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edi
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v16; // ecx

  *a2 = 0LL;
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 45) + 64LL))((char *)this - 360);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x110u, 0LL);
    return v8;
  }
  v9 = (CD2DBitmap *)*((_QWORD *)this + 2);
  *a2 = 0LL;
  v10 = CD2DBitmap::EnsureBitmap(v9);
  v12 = v10;
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x164u, 0LL);
    goto LABEL_9;
  }
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))v9 + 15))(
          *((_QWORD *)v9 + 15),
          &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
          a2);
  v12 = v13;
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x166u, 0LL);
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v12, 0x112u, 0LL);
    return v8;
  }
  if ( a3 )
    *a3 = *(_DWORD *)(*((_QWORD *)this + 2) + 240LL);
  return v8;
}
