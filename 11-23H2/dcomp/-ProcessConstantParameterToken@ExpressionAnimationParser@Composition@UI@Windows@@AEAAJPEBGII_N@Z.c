/*
 * XREFs of ?ProcessConstantParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGII_N@Z @ 0x18005A460
 * Callers:
 *     ?ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180057060 (-ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_map@V-.c)
 *     ?ProcessConstantParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGII_N@Z @ 0x18005A460 (-ProcessConstantParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGII_N@Z.c)
 * Callees:
 *     ?PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E85C (-PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessConstantParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGII_N@Z @ 0x18005A460 (-ProcessConstantParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGII_N@Z.c)
 *     ?ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ @ 0x180061CB4 (-ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessConstantParameterToken(
        Windows::UI::Composition::ExpressionAnimationParser *this,
        const unsigned __int16 *a2,
        UINT32 a3,
        unsigned int a4,
        bool a5)
{
  unsigned int v5; // r13d
  char v6; // r12
  __int64 v11; // rsi
  HRESULT v12; // eax
  _DWORD *v13; // rsi
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v15; // rcx
  int v16; // esi
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdi
  HANDLE ProcessHeap; // rax
  _WORD *v21; // rax
  char *v22; // rax
  __int64 v23; // rdx
  signed __int64 v24; // rbx
  __int16 v25; // cx
  void *v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned int v29; // r8d
  unsigned int v30; // [rsp+20h] [rbp-C8h]
  HSTRING string; // [rsp+38h] [rbp-B0h] BYREF
  HSTRING Buffer; // [rsp+40h] [rbp-A8h] BYREF
  int v33; // [rsp+48h] [rbp-A0h]
  Microsoft::WRL2::NestableRuntimeClass *v34[2]; // [rsp+50h] [rbp-98h]
  int v35; // [rsp+60h] [rbp-88h]
  void *v36; // [rsp+68h] [rbp-80h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-70h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v5 = a4 + a3;
  v6 = 0;
  string = 0LL;
  if ( a5 )
    v11 = *((_QWORD *)this + 12);
  else
    v11 = *((_QWORD *)this + 13);
  v12 = WindowsCreateStringReference(a2, a3, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    v16 = v12;
    v30 = 720;
LABEL_42:
    v17 = v12;
    goto LABEL_14;
  }
  v33 = 0;
  v35 = 0;
  Buffer = string;
  *(_OWORD *)v34 = 0LL;
  v13 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v11 + 192), &Buffer);
  if ( v33 == 104 )
  {
    v27 = v36;
    if ( !v36 )
      goto LABEL_6;
    v28 = 24LL;
    goto LABEL_33;
  }
  if ( v33 == 265 )
  {
    v27 = v36;
    if ( v36 )
    {
      v28 = 64LL;
LABEL_33:
      operator delete(v27, v28);
      v36 = 0LL;
    }
  }
LABEL_6:
  v14 = v34[1];
  if ( v34[1] )
  {
    v34[1] = 0LL;
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v34[0];
  if ( v34[0] )
  {
    v34[0] = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v15);
  }
  if ( v13 )
  {
    v29 = v13[2];
    if ( v29 )
    {
      v16 = Windows::UI::Composition::ExpressionAnimationBuilder::PushConstantParameter(
              *((_DWORD **)this + 11),
              string,
              v29);
      if ( v16 >= 0 )
        goto LABEL_15;
      v30 = 726;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1004LL) = a4;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1008LL) = v5;
    }
    else
    {
      v16 = -2147467259;
      v30 = 735;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) = 14;
    }
    goto LABEL_13;
  }
  if ( !a5 )
  {
    v12 = Windows::UI::Composition::ExpressionAnimationParser::ProcessConstantParameterToken(this, a2, a3, a4, 1);
    v16 = v12;
    if ( v12 >= 0 )
    {
      v6 = 1;
      goto LABEL_15;
    }
    v30 = 751;
    goto LABEL_42;
  }
  v16 = -2147467259;
  v30 = 764;
  *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) = 11;
LABEL_13:
  v17 = v16;
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(
    4u,
    &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v17,
    v30,
    0LL);
LABEL_15:
  v18 = *((_QWORD *)this + 12);
  if ( *(_DWORD *)(v18 + 1000) && !v6 )
  {
    *(_DWORD *)(v18 + 1004) = a4;
    *(_DWORD *)(*((_QWORD *)this + 12) + 1008LL) = v5;
    v19 = *((_QWORD *)this + 12);
    if ( a2 )
    {
      if ( !*(_QWORD *)(v19 + 1016) )
      {
        ProcessHeap = GetProcessHeap();
        v21 = HeapAlloc(ProcessHeap, 0, 0xF2uLL);
        if ( !v21 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        *(_QWORD *)(v19 + 1016) = v21;
        *v21 = 0;
      }
      v22 = *(char **)(v19 + 1016);
      v23 = 120LL;
      v24 = (char *)a2 - v22;
      while ( v23 != -2147483526 )
      {
        v25 = *(_WORD *)&v22[v24];
        if ( !v25 )
          break;
        *(_WORD *)v22 = v25;
        v22 += 2;
        if ( !--v23 )
        {
          v22 -= 2;
          break;
        }
      }
      *(_WORD *)v22 = 0;
    }
    else
    {
      Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)(v19 + 1000));
    }
  }
  return (unsigned int)v16;
}
