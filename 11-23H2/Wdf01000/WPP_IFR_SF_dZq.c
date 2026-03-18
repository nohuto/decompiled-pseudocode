/*
 * XREFs of WPP_IFR_SF_dZq @ 0x1C00452E8
 * Callers:
 *     LockVerifierSection @ 0x1C0045038 (LockVerifierSection.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dZq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        int globals_0,
        const _UNICODE_STRING *level,
        const void *flags)
{
  const _UNICODE_STRING *v8; // rbx
  __int64 v11; // rdi
  __int64 Length; // rdx
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v14; // rcx
  const wchar_t *v15; // rax

  v8 = level;
  v11 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) == 0 || BYTE1(WPP_GLOBAL_WDF_Control.Flags) < 4u )
    goto LABEL_12;
  if ( level && level->Buffer )
  {
    Length = level->Length;
    Buffer = level->Buffer;
  }
  else
  {
    Length = 10LL;
    if ( !level || (Buffer = level->Buffer) == 0LL )
    {
      Buffer = L"NULL";
      if ( !level )
        goto LABEL_10;
    }
  }
  v14 = level;
  if ( !level->Length )
LABEL_10:
    v14 = (const _UNICODE_STRING *)&unk_1C0092F2C;
  FxWmiTraceMessage(
    (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
    43LL,
    WPP_globals_cpp_Traceguids,
    _a2,
    &globals_0,
    4LL,
    v14,
    2LL,
    Buffer,
    Length,
    &flags,
    8LL,
    0LL);
LABEL_12:
  if ( !v8 )
    goto LABEL_16;
  if ( v8->Buffer )
  {
    v11 = v8->Length;
    v15 = v8->Buffer;
    goto LABEL_17;
  }
  v15 = v8->Buffer;
  if ( !v15 )
  {
LABEL_16:
    v15 = L"NULL";
    if ( !v8 )
    {
LABEL_18:
      v8 = (const _UNICODE_STRING *)&unk_1C0092F2C;
      goto LABEL_19;
    }
  }
LABEL_17:
  if ( !v8->Length )
    goto LABEL_18;
LABEL_19:
  FxIFR(globals, 4u, 0x11u, WPP_globals_cpp_Traceguids, _a2, &globals_0, 4LL, v8, 2LL, v15, v11, &flags, 8LL, 0LL);
}
