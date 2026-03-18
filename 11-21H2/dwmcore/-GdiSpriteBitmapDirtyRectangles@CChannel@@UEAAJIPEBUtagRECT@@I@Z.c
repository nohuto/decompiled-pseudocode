/*
 * XREFs of ?GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x1800188C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800BD47C (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapDirtyRectangles(
        CChannel *this,
        unsigned int a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // esi
  unsigned int v13; // edi
  CDataStreamWriter *v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // r8d
  _DWORD *v25; // rcx
  int v26; // eax
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned int v30; // [rsp+20h] [rbp-48h]
  char *v31; // [rsp+30h] [rbp-38h] BYREF
  int v32; // [rsp+38h] [rbp-30h] BYREF
  size_t Size; // [rsp+3Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v35; // [rsp+70h] [rbp+8h] BYREF

  v31 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 63LL);
  v32 = 521;
  Size = a2;
  v9 = 16LL * a4;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0x8F8u, 0LL);
    goto LABEL_11;
  }
  HIDWORD(Size) = 16 * a4;
  v10 = CChannel::BeginCommand(this, &v32, 0xCu, v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x8F9u, 0LL);
    goto LABEL_11;
  }
  v13 = HIDWORD(Size);
  if ( HIDWORD(Size) )
  {
    v14 = (CDataStreamWriter *)*((_QWORD *)this + 20);
    v35 = 0LL;
    v15 = CDataStreamWriter::GetItemDataWritePointer(v14, HIDWORD(Size), &v35);
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB2u, 0LL);
    else
      memcpy_0(v35, a3, v13);
  }
  v17 = *((_QWORD *)this + 20);
  if ( !*(_QWORD *)(v17 + 48) && !*(_DWORD *)(v17 + 56) )
  {
    v28 = 2147549183LL;
    v29 = 240LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
      (const char *)v28,
      v30);
    goto LABEL_11;
  }
  v18 = *(_DWORD *)(v17 + 56);
  v19 = (v18 + 3) & 0xFFFFFFFC;
  if ( v19 < v18 )
  {
    v28 = 2147942934LL;
    v29 = 259LL;
    goto LABEL_16;
  }
  v20 = *(_QWORD *)(v17 + 32);
  *(_DWORD *)(v17 + 56) = v19;
  v21 = v19 - v18;
  v22 = *(_DWORD *)(v20 + 20);
  if ( v22 + v21 < v22 )
  {
    *(_DWORD *)(v20 + 20) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024362, 0x247u, 0LL);
    goto LABEL_19;
  }
  *(_DWORD *)(v20 + 20) = v22 + v21;
  v23 = *(_DWORD *)(v17 + 44);
  v24 = v23 + v21;
  if ( v23 + v21 < v23 )
  {
    *(_DWORD *)(v17 + 44) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024362, 0x248u, 0LL);
LABEL_19:
    v28 = 2147942934LL;
    v29 = 264LL;
    goto LABEL_16;
  }
  v25 = *(_DWORD **)(v17 + 48);
  v26 = *(_DWORD *)(v17 + 56);
  *(_DWORD *)(v17 + 44) = v24;
  *v25 = v26;
  *(_QWORD *)(v17 + 48) = 0LL;
  *(_DWORD *)(v17 + 56) = 0;
LABEL_11:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v31);
  return v12;
}
