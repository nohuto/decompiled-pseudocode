/*
 * XREFs of ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18006F450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180070B20 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800BD47C (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CChannel::AtlasedRectsGroupUpdate(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5)
{
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int v14; // edi
  CDataStreamWriter *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r8d
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v29; // r9
  __int64 v30; // rdx
  char *v31; // [rsp+30h] [rbp-38h] BYREF
  __m128i Size; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v34; // [rsp+70h] [rbp+8h] BYREF

  v31 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 6LL);
  CChannel::CheckOptionalHandle(this, a3, 11LL);
  Size = _mm_load_si128((const __m128i *)&_xmm);
  v10 = 4LL * a5;
  Size.m128i_i32[1] = a2;
  Size.m128i_i32[2] = a3;
  if ( v10 > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xA6Du, 0LL);
    goto LABEL_11;
  }
  Size.m128i_i32[3] = 4 * a5;
  v11 = CChannel::BeginCommand(this, &Size, 0x10u, v10);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA6Eu, 0LL);
    goto LABEL_11;
  }
  v14 = Size.m128i_u32[3];
  if ( Size.m128i_i32[3] )
  {
    v15 = (CDataStreamWriter *)*((_QWORD *)this + 20);
    v34 = 0LL;
    v16 = CDataStreamWriter::GetItemDataWritePointer(v15, Size.m128i_u32[3], &v34);
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xB2u, 0LL);
    else
      memcpy_0(v34, a4, v14);
  }
  v18 = *((_QWORD *)this + 20);
  if ( !*(_QWORD *)(v18 + 48) && !*(_DWORD *)(v18 + 56) )
  {
    v29 = 2147549183LL;
    v30 = 240LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
      (const char *)v29);
    goto LABEL_11;
  }
  v19 = *(_DWORD *)(v18 + 56);
  v20 = (v19 + 3) & 0xFFFFFFFC;
  if ( v20 < v19 )
  {
    v29 = 2147942934LL;
    v30 = 259LL;
    goto LABEL_16;
  }
  v21 = *(_QWORD *)(v18 + 32);
  *(_DWORD *)(v18 + 56) = v20;
  v22 = v20 - v19;
  v23 = *(_DWORD *)(v21 + 20);
  if ( v23 + v22 < v23 )
  {
    *(_DWORD *)(v21 + 20) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024362, 0x247u, 0LL);
    goto LABEL_19;
  }
  *(_DWORD *)(v21 + 20) = v23 + v22;
  v24 = *(_DWORD *)(v18 + 44);
  v25 = v24 + v22;
  if ( v24 + v22 < v24 )
  {
    *(_DWORD *)(v18 + 44) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024362, 0x248u, 0LL);
LABEL_19:
    v29 = 2147942934LL;
    v30 = 264LL;
    goto LABEL_16;
  }
  v26 = *(_DWORD **)(v18 + 48);
  v27 = *(_DWORD *)(v18 + 56);
  *(_DWORD *)(v18 + 44) = v25;
  *v26 = v27;
  *(_QWORD *)(v18 + 48) = 0LL;
  *(_DWORD *)(v18 + 56) = 0;
LABEL_11:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v31);
  return v13;
}
