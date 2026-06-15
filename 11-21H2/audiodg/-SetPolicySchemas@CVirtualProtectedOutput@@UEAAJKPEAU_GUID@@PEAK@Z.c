/*
 * XREFs of ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x14005B180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicySchemas(
        CVirtualProtectedOutput *this,
        unsigned int a2,
        struct _GUID *a3,
        unsigned int *a4)
{
  struct _GUID *v5; // rdi
  __int64 v6; // rdx
  __int64 i; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  struct _GUID v12; // [rsp+20h] [rbp-28h]

  v5 = a3;
  v6 = 0LL;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    a3 = (struct _GUID *)a4[i];
    v12 = v5[(unsigned int)i];
    v8 = *(_QWORD *)&MFPROTECTION_DISABLE.Data1 - *(_QWORD *)&v12.Data1;
    if ( *(_QWORD *)&MFPROTECTION_DISABLE.Data1 == *(_QWORD *)&v12.Data1 )
      v8 = *(_QWORD *)MFPROTECTION_DISABLE.Data4 - *(_QWORD *)v12.Data4;
    if ( v8 )
    {
      v9 = *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 - *(_QWORD *)&v12.Data1;
      if ( *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 == *(_QWORD *)&v12.Data1 )
        v9 = *(_QWORD *)MFPROTECTION_CONSTRICTAUDIO.Data4 - *(_QWORD *)v12.Data4;
      if ( v9 )
      {
        v10 = -2147467263;
        goto LABEL_20;
      }
      if ( (unsigned int)a3 >= 0x100 )
      {
LABEL_17:
        v10 = -2147024809;
        goto LABEL_20;
      }
      if ( (int)v6 <= (unsigned __int8)a3 )
        v6 = (unsigned __int8)a3;
    }
    else
    {
      if ( (unsigned int)a3 >= 2 )
        goto LABEL_17;
      if ( ((unsigned __int8)a3 & 1) != 0 && (int)v6 <= 4 )
        v6 = 4LL;
    }
  }
  v10 = (*(__int64 (__fastcall **)(CVirtualProtectedOutput *, __int64, struct _GUID *, unsigned int *))(*(_QWORD *)this + 40LL))(
          this,
          v6,
          a3,
          a4);
  if ( v10 >= 0 )
    return (unsigned int)v10;
LABEL_20:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_8a78b0fe90e638a027f0a1224aa299fc_Traceguids, v10);
  }
  AudDGTraceLoggingErrorHelper("CVirtualProtectedOutput::SetPolicySchemas", 0x14Du, v10);
  return (unsigned int)v10;
}
