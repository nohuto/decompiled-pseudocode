/*
 * XREFs of AcpiParseCore @ 0x1C0029A00
 * Callers:
 *     AcpiEval_CPC @ 0x1C0026D7C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0027470 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0027778 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C0027DFC (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x1C0028000 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C0028478 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C00287C0 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0028CC8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0028FD4 (AcpiEval_XPSS.c)
 *     AcpiParseLpiObject @ 0x1C0029CE0 (AcpiParseLpiObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sd @ 0x1C00072D8 (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x1C0007564 (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x1C00076F0 (WPP_RECORDER_SF_sss.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8)
{
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned int v10; // r15d
  unsigned __int16 *v11; // rdi
  unsigned __int8 *v12; // r14
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int8 *v16; // rbp
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int8 *v20; // rcx
  const char *v21; // rcx
  __int64 v22; // rbx
  unsigned __int16 v23; // r9
  unsigned __int16 v24; // r9
  int v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 i; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0;
  v11 = (unsigned __int16 *)a3;
  v12 = a1;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v14 = a3 + (unsigned int)a4;
  for ( i = v14; ; v14 = i )
  {
    if ( (unsigned __int64)v11 >= v14 )
    {
      if ( v10 == v13 )
        return 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v24 = 75;
      goto LABEL_53;
    }
    if ( v10 >= v13 )
    {
      if ( (a8 & 1) != 0 )
        return 261;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v24 = 69;
LABEL_53:
      WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v24, v26, a7);
      return (unsigned int)-1072431093;
    }
    v15 = *v11;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_16;
      v16 = &v12[24 * v9];
      if ( *v16 == v10 && *((_WORD *)v16 + 1) == (_WORD)v15 )
        break;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( !v16 )
    {
LABEL_16:
      v19 = 0LL;
      if ( !(_DWORD)v8 )
        return (unsigned int)-1072431096;
      v20 = v12;
      do
      {
        if ( *v20 == v10 )
          break;
        v19 = (unsigned int)(v19 + 1);
        v20 += 24;
      }
      while ( (unsigned int)v19 < (unsigned int)v8 );
      if ( (unsigned int)v19 >= (unsigned int)v8 )
        return (unsigned int)-1072431096;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( *v11 )
        {
          if ( (_DWORD)v15 == 1 )
          {
            v21 = "STRING";
          }
          else if ( (_DWORD)v15 == 2 )
          {
            v21 = "BUFFER";
          }
          else if ( (unsigned int)(v15 - 3) < 2 )
          {
            v21 = "PACKAGE";
          }
          else
          {
            v21 = "UNKNOWN";
          }
        }
        else
        {
          v21 = "INTEGER";
        }
        WPP_RECORDER_SF_sss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v19,
          v15,
          a4,
          v26,
          a7,
          *(_QWORD *)&v12[24 * v19 + 8],
          (__int64)v21);
      }
      v22 = v8;
      while ( 2 )
      {
        if ( *v12 != v10 )
          goto LABEL_44;
        if ( *((_WORD *)v12 + 1) )
        {
          if ( *((_WORD *)v12 + 1) != 1 )
          {
            if ( *((_WORD *)v12 + 1) == 2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v23 = 73;
              break;
            }
LABEL_44:
            v12 += 24;
            if ( !--v22 )
              return (unsigned int)-1072431096;
            continue;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_44;
          v23 = 72;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_44;
          v23 = 71;
        }
        break;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v23,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      goto LABEL_44;
    }
    v17 = (*((__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD))v16 + 2))(
            v11,
            a5 + *((unsigned __int16 *)v16 + 2),
            a6 - (unsigned int)*((unsigned __int16 *)v16 + 2));
    if ( v17 < 0 )
      break;
    v18 = v11[1];
    ++v10;
    if ( (unsigned __int16)v18 < 4u )
      v18 = 4LL;
    v11 = (unsigned __int16 *)((char *)v11 + v18 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ss((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v26, a7, *((const char **)v16 + 1));
  return (unsigned int)v17;
}
