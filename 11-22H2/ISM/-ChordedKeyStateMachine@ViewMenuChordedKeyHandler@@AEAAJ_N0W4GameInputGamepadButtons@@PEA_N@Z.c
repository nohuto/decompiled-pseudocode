/*
 * XREFs of ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x1801A83A0
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x1801A42A8 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800B2C08 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@QEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x1801A80F8 (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x1801A8A44 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x1801A8D64 (-get@-$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelem.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::ChordedKeyStateMachine(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        char *a5)
{
  char *v6; // rdi
  int v7; // ebp
  unsigned int v8; // edx
  int v9; // esi
  const void **v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  char v13; // al
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _BYTE *v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  _BYTE *v25; // rdx
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v31; // [rsp+20h] [rbp-38h]
  int v32[6]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v34; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)(a1 + 72) = 0;
  v6 = a5;
  v7 = a2;
  v8 = *(_DWORD *)(a1 + 16);
  v9 = a3;
  *a5 = 0;
  v10 = (const void **)(v8 - 1);
  if ( v8 == 1 )
  {
    if ( (_BYTE)v7 )
    {
      if ( a3 )
      {
        v23 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 4;
        *v6 = 1;
        v24 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 80LL))(v23, 5000000LL, 0LL);
        if ( v24 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x117,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v24,
            v31);
      }
      else
      {
        *(_DWORD *)(a1 + 16) = 3;
      }
    }
    else if ( a3 )
    {
      *(_DWORD *)(a1 + 16) = 2;
      v10 = (const void **)(a1 + 48);
      v25 = *(_BYTE **)(a1 + 56);
      *v6 = 1;
      LODWORD(a5) = a4;
      if ( v25 == *(_BYTE **)(a1 + 64) )
      {
        std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
          v10,
          v25,
          &a5);
      }
      else
      {
        *(_DWORD *)v25 = a4;
        *(_QWORD *)(a1 + 56) += 4LL;
      }
    }
  }
  else if ( v8 == 2 )
  {
    if ( (_BYTE)v7 )
    {
      v20 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 5;
      *v6 = 1;
      v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 80LL))(v20, 5000000LL, 0LL);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x140,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v21,
          v31);
    }
    else if ( a3 )
    {
      ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(v8);
      *v6 = 0;
      *(_DWORD *)(a1 + 16) = 1;
      *(_WORD *)(a1 + 72) = 1;
    }
    else
    {
      v22 = *(_BYTE **)(a1 + 56);
      v10 = (const void **)(a1 + 48);
      *v6 = 1;
      LODWORD(a5) = a4;
      if ( v22 == *(_BYTE **)(a1 + 64) )
      {
        std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
          v10,
          v22,
          &a5);
      }
      else
      {
        *(_DWORD *)v22 = a4;
        *(_QWORD *)(a1 + 56) += 4LL;
      }
      *(_DWORD *)(a1 + 16) = 1;
      *(_WORD *)(a1 + 72) = 257;
    }
  }
  else
  {
    v10 = (const void **)(v8 - 3);
    switch ( v8 )
    {
      case 3u:
        if ( !(_BYTE)v7 )
          goto LABEL_35;
        if ( !a3 )
        {
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(v8);
          *v6 = 0;
          goto LABEL_35;
        }
        v18 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 4;
        *v6 = 1;
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v18 + 80LL))(v18, 5000000LL, 0LL);
        if ( v19 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x130,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v19,
            v31);
        break;
      case 4u:
        if ( a3 )
        {
          if ( (_BYTE)v7 )
          {
            ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(v8);
            *v6 = 0;
          }
        }
        else
        {
          *v6 = 1;
        }
        v16 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 1;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x164,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v17,
            v31);
        break;
      case 5u:
        if ( a3 && (_BYTE)v7 )
        {
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(5u);
          v13 = 0;
        }
        else
        {
          v13 = 1;
        }
        *v6 = v13;
        v14 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 1;
        *(_WORD *)(a1 + 72) = 1;
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 96LL))(v14);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x178,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v15,
            v31);
        break;
      default:
        v10 = (const void **)(v8 - 6);
        if ( v8 == 6 )
        {
          *v6 = 1;
          if ( (_BYTE)v7 )
          {
            if ( a3 )
              break;
          }
          else if ( !a3 )
          {
            goto LABEL_35;
          }
          *(_DWORD *)(a1 + 16) = 7;
          break;
        }
        if ( v8 != 7 )
        {
          v11 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 16) = 1;
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
          if ( v12 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x190,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
              (const char *)(unsigned int)v12,
              v31);
          break;
        }
        *v6 = 1;
        if ( (_BYTE)v7 || a3 )
          break;
LABEL_35:
        *(_DWORD *)(a1 + 16) = 1;
        break;
    }
  }
  v26 = *(_DWORD *)(a1 + 16);
  v27 = *(_QWORD *)(wil::details::static_lazy<ControllerProcessorTelemetry>::get(
                      v10,
                      _lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v27 > 5u
    && (*(_QWORD *)(v27 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v27 + 24) & 0x400000000000LL) == *(_QWORD *)(v27 + 24) )
  {
    LODWORD(a5) = v9;
    v34 = v7;
    v32[0] = v26;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v27,
      byte_180237295,
      v28,
      v29,
      (__int64)v32,
      (__int64)&v34,
      (__int64)&a5);
  }
  return 0LL;
}
