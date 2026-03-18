/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800107F0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x180010A94 (-GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV-$DynArrayIANoCtor@PE.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x180010C04 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18001730C (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x180017398 (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180046E5C (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008EBAC (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  unsigned int v4; // r12d
  unsigned int v7; // ebx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r9d
  int DestLightsArray; // eax
  unsigned int v12; // ecx
  int v13; // r15d
  struct CHwLightCollectionBuffer *v14; // rax
  unsigned int v16; // edx
  const struct LightInfo *v17; // rcx
  struct CDrawingContext *v18; // r15
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  void *v25; // rcx
  int v26; // eax
  unsigned int v27; // ecx
  bool v28[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct CDrawingContext *v29; // [rsp+48h] [rbp-B8h]
  struct CHwLightCollectionBuffer **v30; // [rsp+50h] [rbp-B0h]
  void *Buf2[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+6Ch] [rbp-94h]
  _BYTE v34[24]; // [rsp+78h] [rbp-88h] BYREF
  struct LightInfo *v35[2]; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A4h] [rbp-5Ch]
  unsigned int v38; // [rsp+A8h] [rbp-58h]
  _BYTE v39[720]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v40[168]; // [rsp+380h] [rbp+280h] BYREF
  int v41; // [rsp+428h] [rbp+328h]
  int v42; // [rsp+46Ch] [rbp+36Ch]

  v4 = 0;
  v30 = a4;
  *a4 = 0LL;
  v29 = a2;
  v7 = 0;
  if ( !*((_DWORD *)this + 24) && *((_DWORD *)this + 6) )
  {
    v8 = *((_QWORD *)a2 + 991);
    Buf2[0] = v34;
    v28[0] = 1;
    Buf2[1] = v34;
    v32 = 3;
    v33 = 3LL;
    v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
    DestLightsArray = CLightStack::GetDestLightsArray((_DWORD)this, v9, v8, v10, 1, (__int64)Buf2, (__int64)v28);
    v7 = DestLightsArray;
    if ( DestLightsArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, DestLightsArray, 0x8Bu, 0LL);
      goto LABEL_9;
    }
    if ( !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 112, a3)
      || (v13 = HIDWORD(v33), *((_DWORD *)this + 52) != HIDWORD(v33))
      || memcmp_0(*((const void **)this + 23), Buf2[0], 8LL * HIDWORD(v33)) )
    {
      ReleaseInterface<CHwLightCollectionBuffer>((char *)this + 104);
      v13 = HIDWORD(v33);
    }
    v14 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
    if ( v14 )
      goto LABEL_8;
    v16 = 0;
    v35[1] = (struct LightInfo *)v39;
    v36 = 3;
    v17 = (const struct LightInfo *)v39;
    v37 = 3;
    v35[0] = (struct LightInfo *)v39;
    v38 = 0;
    if ( v13 )
    {
      v18 = v29;
      while ( 1 )
      {
        v41 = 0;
        v42 = 0;
        v19 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct CMILMatrix *, _BYTE *))(**((_QWORD **)Buf2[0] + v4) + 208LL))(
                *((_QWORD *)Buf2[0] + v4),
                v18,
                a3,
                v40);
        v7 = v19;
        if ( v19 < 0 )
          break;
        v21 = DynArray<LightInfo,0>::AddMultipleAndSet(v35, v40);
        v7 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xA2u, 0LL);
          goto LABEL_25;
        }
        if ( ++v4 >= HIDWORD(v33) )
        {
          v16 = v38;
          v17 = v35[0];
          goto LABEL_18;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xA0u, 0LL);
    }
    else
    {
LABEL_18:
      v23 = CHwLightCollectionBuffer::Create(v17, v16, v28[0], (struct CHwLightCollectionBuffer **)this + 13);
      v7 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xAAu, 0LL);
      }
      else
      {
        *((_OWORD *)this + 7) = *(_OWORD *)a3;
        *((_OWORD *)this + 8) = *((_OWORD *)a3 + 1);
        *((_OWORD *)this + 9) = *((_OWORD *)a3 + 2);
        *((_OWORD *)this + 10) = *((_OWORD *)a3 + 3);
        *((_DWORD *)this + 44) = *((_DWORD *)a3 + 16);
        v25 = (void *)*((_QWORD *)this + 23);
        if ( v25 != *((void **)this + 24) )
        {
          DefaultHeap::Free(v25);
          *((_QWORD *)this + 23) = 0LL;
        }
        *(_QWORD *)((char *)this + 204) = v33;
        v26 = DynArrayImpl<0>::DetachData(Buf2, 8LL, (char *)this + 184);
        v7 = v26;
        if ( v26 >= 0 )
        {
          DynArrayImpl<1>::~DynArrayImpl<1>(v35);
          v14 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
LABEL_8:
          *v30 = v14;
LABEL_9:
          DynArrayImpl<1>::~DynArrayImpl<1>(Buf2);
          return v7;
        }
        *(_QWORD *)((char *)this + 204) = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xADu, 0LL);
      }
    }
LABEL_25:
    DynArrayImpl<1>::~DynArrayImpl<1>(v35);
    goto LABEL_9;
  }
  return v7;
}
