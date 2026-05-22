/*
 * XREFs of ?WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPEAUExpressionParameter@234@PEAVCompositionAnimation@234@PEAI@Z @ 0x1800599B0
 * Callers:
 *     ?ResolveAndCopyNodesToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAEIPEAV1234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAI44@Z @ 0x1800578B0 (-ResolveAndCopyNodesToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAEIPEAV12.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUMatrix4x4@Numerics@Foundation@4@@Z @ 0x18003FCB8 (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4CompositionGetValu.c)
 *     ?TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVParameterEntry@@@Z @ 0x18003FD50 (-TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA-AW4CompositionGetValueSt.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z @ 0x180069158 (-SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUMatrix3x2@Numerics@Foundation@4@@Z @ 0x1800B7362 (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_1800B7362.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAU_D3DCOLORVALUE@@@Z @ 0x1800B73A6 (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_1800B73A6.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUQuaternion@Numerics@Foundation@4@@Z @ 0x18014FF0C (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_18014FF0C.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUVector2@Numerics@Foundation@4@@Z @ 0x18014FF44 (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_18014FF44.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUVector4@Numerics@Foundation@4@@Z @ 0x18014FF7C (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_18014FF7C.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::WriteConstantParameterToBuffer(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        struct Windows::UI::Composition::ExpressionParameter *a4,
        struct Windows::UI::Composition::CompositionAnimation *a5,
        unsigned int *a6)
{
  unsigned int v10; // r14d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  HSTRING *v15; // rdi
  _DWORD *v16; // r15
  Microsoft::WRL2::NestableRuntimeClass *v17; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v18; // rcx
  int ParameterEntry; // edx
  int v20; // eax
  __int64 v21; // rbx
  void *v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rsi
  int v26; // r9d
  int v27; // r9d
  int v28; // r9d
  int v29; // r9d
  unsigned __int64 v30; // rcx
  __int128 v31; // xmm1
  int v32; // eax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // xmm1_8
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  int v42; // eax
  void *v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  int v46; // eax
  unsigned __int64 v47; // rcx
  int v48; // edx
  const unsigned __int16 *StringRawBuffer; // rax
  unsigned int v50; // [rsp+20h] [rbp-89h]
  __int64 v51; // [rsp+30h] [rbp-79h]
  __int128 v52; // [rsp+38h] [rbp-71h] BYREF
  __int64 v53; // [rsp+48h] [rbp-61h]
  int v54; // [rsp+50h] [rbp-59h]
  __int128 Buffer; // [rsp+60h] [rbp-49h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v56[2]; // [rsp+70h] [rbp-39h]
  void *v57[2]; // [rsp+80h] [rbp-29h]
  __int128 v58; // [rsp+90h] [rbp-19h]
  int v59; // [rsp+A0h] [rbp-9h]

  v10 = 0;
  v11 = *((_DWORD *)a4 + 6) - 17;
  if ( !v11 )
  {
    v15 = (HSTRING *)((char *)a4 + 8);
    LODWORD(v51) = 0;
    ParameterEntry = Windows::UI::Composition::CompositionAnimation::TryGetParameterEntry(a5, *v15, 17, &v52);
    if ( ParameterEntry )
      goto LABEL_15;
    v10 = 8;
    BYTE4(v51) = *(_BYTE *)(v52 + 40);
    if ( a3 < 8 )
    {
      LOBYTE(v47) = *(_BYTE *)(v52 + 40);
      Microsoft::WRL2::FailFast::OutOfMemory(v47);
    }
LABEL_32:
    *(_QWORD *)a2 = v51;
    goto LABEL_15;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v15 = (HSTRING *)((char *)a4 + 8);
    LODWORD(v51) = 1;
    ParameterEntry = Windows::UI::Composition::CompositionAnimation::TryGetParameterEntry(a5, *v15, 18, &v52);
    if ( ParameterEntry )
      goto LABEL_15;
    v10 = 8;
    HIDWORD(v51) = *(_DWORD *)(v52 + 40);
    if ( a3 < 8 )
      Microsoft::WRL2::FailFast::OutOfMemory(v35);
    goto LABEL_32;
  }
  v13 = v12 - 17;
  if ( !v13 )
  {
    LODWORD(v52) = 2;
    v15 = (HSTRING *)((char *)a4 + 8);
    ParameterEntry = Windows::UI::Composition::CompositionAnimation::TryGetConstantParameter(a5, *v15, (char *)&v52 + 4);
    if ( !ParameterEntry )
    {
      v10 = 12;
      if ( a3 < 0xC )
        Microsoft::WRL2::FailFast::OutOfMemory(v45);
      v46 = DWORD2(v52);
      *(_QWORD *)a2 = v52;
      *((_DWORD *)a2 + 2) = v46;
    }
    goto LABEL_15;
  }
  v14 = v13 - 17;
  if ( !v14 )
  {
    LODWORD(v52) = 3;
    v15 = (HSTRING *)((char *)a4 + 8);
    DWORD2(Buffer) = 0;
    LODWORD(v57[0]) = 0;
    *(_OWORD *)v56 = 0LL;
    *(_QWORD *)&Buffer = *v15;
    v16 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)a5 + 192), &Buffer);
    if ( DWORD2(Buffer) == 104 )
    {
      v43 = v57[1];
      if ( !v57[1] )
      {
LABEL_7:
        v17 = v56[1];
        if ( v56[1] )
        {
          v56[1] = 0LL;
          (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v18 = v56[0];
        if ( v56[0] )
        {
          v56[0] = 0LL;
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v18);
        }
        if ( v16 )
        {
          if ( v16[2] == 52 )
          {
            ParameterEntry = 0;
            v20 = v16[12];
            *(_QWORD *)((char *)&v52 + 4) = *((_QWORD *)v16 + 5);
            HIDWORD(v52) = v20;
            v10 = 16;
            if ( a3 < 0x10 )
              Microsoft::WRL2::FailFast::OutOfMemory((unsigned __int64)v18);
            *(_OWORD *)a2 = v52;
          }
          else
          {
            ParameterEntry = 1;
          }
        }
        else
        {
          ParameterEntry = 2;
        }
        goto LABEL_15;
      }
      v44 = 24LL;
    }
    else
    {
      if ( DWORD2(Buffer) != 265 )
        goto LABEL_7;
      v43 = v57[1];
      if ( !v57[1] )
        goto LABEL_7;
      v44 = 64LL;
    }
    operator delete(v43, v44);
    v57[1] = 0LL;
    goto LABEL_7;
  }
  v26 = v14 - 17;
  if ( !v26 )
  {
    v15 = (HSTRING *)((char *)a4 + 8);
    LODWORD(v52) = 4;
    ParameterEntry = Windows::UI::Composition::CompositionAnimation::TryGetConstantParameter(a5, *v15, (char *)&v52 + 4);
    if ( ParameterEntry )
      goto LABEL_15;
    v10 = 20;
    if ( a3 < 0x14 )
      Microsoft::WRL2::FailFast::OutOfMemory(v41);
    goto LABEL_49;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    v15 = (HSTRING *)((char *)a4 + 8);
    LODWORD(v52) = 5;
    ParameterEntry = Windows::UI::Composition::CompositionAnimation::TryGetConstantParameter(a5, *v15, (char *)&v52 + 4);
    if ( ParameterEntry )
      goto LABEL_15;
    v10 = 20;
    if ( a3 < 0x14 )
      Microsoft::WRL2::FailFast::OutOfMemory(v40);
    goto LABEL_49;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
    v15 = (HSTRING *)((char *)a4 + 8);
    LODWORD(v52) = 6;
    ParameterEntry = Windows::UI::Composition::CompositionAnimation::TryGetConstantParameter(a5, *v15, (char *)&v52 + 4);
    if ( ParameterEntry )
      goto LABEL_15;
    v10 = 20;
    if ( a3 < 0x14 )
      Microsoft::WRL2::FailFast::OutOfMemory(v39);
LABEL_49:
    v42 = v53;
    *(_OWORD *)a2 = v52;
    *((_DWORD *)a2 + 4) = v42;
    goto LABEL_15;
  }
  v29 = v28 - 33;
  if ( v29 )
  {
    if ( v29 != 161 )
      goto LABEL_67;
    v15 = (HSTRING *)((char *)a4 + 8);
    LODWORD(Buffer) = 8;
    ParameterEntry = Windows::UI::Composition::CompositionAnimation::TryGetConstantParameter(
                       (__int64)a5,
                       (__int64)*v15,
                       (__int128 *)((char *)&Buffer + 4));
    if ( !ParameterEntry )
    {
      v10 = 68;
      if ( a3 < 0x44 )
        Microsoft::WRL2::FailFast::OutOfMemory(v30);
      v31 = *(_OWORD *)v56;
      v32 = v59;
      *(_OWORD *)a2 = Buffer;
      v33 = *(_OWORD *)v57;
      *((_OWORD *)a2 + 1) = v31;
      v34 = v58;
      *((_OWORD *)a2 + 2) = v33;
      *((_OWORD *)a2 + 3) = v34;
      *((_DWORD *)a2 + 16) = v32;
    }
  }
  else
  {
    v15 = (HSTRING *)((char *)a4 + 8);
    LODWORD(v52) = 7;
    ParameterEntry = Windows::UI::Composition::CompositionAnimation::TryGetConstantParameter(a5, *v15, (char *)&v52 + 4);
    if ( !ParameterEntry )
    {
      v10 = 28;
      if ( a3 < 0x1C )
        Microsoft::WRL2::FailFast::OutOfMemory(v36);
      v37 = v54;
      v38 = v53;
      *(_OWORD *)a2 = v52;
      *((_QWORD *)a2 + 2) = v38;
      *((_DWORD *)a2 + 6) = v37;
    }
  }
LABEL_15:
  *a6 = v10;
  if ( ParameterEntry )
  {
    v48 = ParameterEntry - 1;
    if ( !v48 )
    {
      v50 = 1060;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 12;
      goto LABEL_69;
    }
    if ( v48 == 1 )
    {
      v50 = 1055;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 11;
LABEL_69:
      v23 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v50, 0LL);
      goto LABEL_19;
    }
LABEL_67:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  v21 = *((_QWORD *)this + 1);
  *(_QWORD *)(v21 + 1000) = 0LL;
  v22 = *(void **)(v21 + 1016);
  *(_DWORD *)(v21 + 1008) = 0;
  if ( v22 )
  {
    operator delete(v22);
    *(_QWORD *)(v21 + 1016) = 0LL;
  }
  v23 = 0;
LABEL_19:
  v24 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v24 + 1000) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*v15, 0LL);
    Windows::UI::Composition::ExpressionErrorInfo::SetErrorContext(
      (Windows::UI::Composition::ExpressionErrorInfo *)(v24 + 1000),
      StringRawBuffer);
  }
  return v23;
}
