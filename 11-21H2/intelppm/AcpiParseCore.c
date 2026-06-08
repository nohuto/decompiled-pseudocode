/*
 * XREFs of AcpiParseCore @ 0x1C0026814
 * Callers:
 *     AcpiEval_PSD_TSD @ 0x1C0025B3C (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CSD @ 0x1C0025D8C (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0025EF8 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0026548 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C0039B1C (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x1C0039D20 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSS @ 0x1C003A198 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C003A6A0 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C003A9A4 (AcpiEval_XPSS.c)
 *     AcpiParseLpiObject @ 0x1C003B200 (AcpiParseLpiObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sd @ 0x1C000A468 (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x1C000A6F4 (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x1C000A880 (WPP_RECORDER_SF_sss.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8)
{
  __int64 v8; // r12
  unsigned __int16 *v9; // rdi
  unsigned __int8 *v10; // rsi
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  __int64 v14; // rdx
  unsigned __int8 *v15; // r8
  unsigned __int8 *v16; // r13
  int v17; // ebx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v21; // r8
  unsigned __int8 *i; // rcx
  const char *v23; // rcx
  __int64 v24; // rbx
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // r9
  int v27; // [rsp+20h] [rbp-48h]
  unsigned __int64 v28; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = (unsigned __int16 *)a3;
  v10 = a1;
  v11 = 0;
  v12 = 0;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v28 = a3 + a4;
  if ( a3 < v28 )
  {
    while ( v12 < v13 )
    {
      v14 = *v9;
      if ( v11 >= (unsigned int)v8 )
        goto LABEL_21;
      v15 = &v10[24 * v11];
      while ( *v15 != v12 || *((_WORD *)v15 + 1) != (_WORD)v14 )
      {
        ++v11;
        v15 += 24;
        if ( v11 >= (unsigned int)v8 )
          goto LABEL_21;
      }
      v16 = &v10[24 * v11];
      if ( !v16 )
      {
LABEL_21:
        v21 = 0LL;
        if ( (_DWORD)v8 )
        {
          for ( i = v10; *i != v12; i += 24 )
          {
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= (unsigned int)v8 )
              return (unsigned int)-1072431096;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( (_WORD)v14 )
            {
              if ( (_WORD)v14 == 1 )
              {
                v23 = "STRING";
              }
              else if ( (_WORD)v14 == 2 )
              {
                v23 = "BUFFER";
              }
              else if ( (unsigned __int16)v14 > 4u )
              {
                v23 = "UNKNOWN";
              }
              else
              {
                v23 = "PACKAGE";
              }
            }
            else
            {
              v23 = "INTEGER";
            }
            WPP_RECORDER_SF_sss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v14,
              v21,
              4LL,
              v27,
              a7,
              *(const char **)&v10[24 * (unsigned int)v21 + 8],
              v23);
          }
          v24 = v8;
          while ( 2 )
          {
            if ( *v10 != v12 )
              goto LABEL_49;
            if ( *((_WORD *)v10 + 1) )
            {
              if ( *((_WORD *)v10 + 1) != 1 )
              {
                if ( *((_WORD *)v10 + 1) == 2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v25 = 67;
                  break;
                }
LABEL_49:
                v10 += 24;
                if ( !--v24 )
                  return (unsigned int)-1072431096;
                continue;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_49;
              v25 = 66;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_49;
              v25 = 65;
            }
            break;
          }
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v25,
            (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
          goto LABEL_49;
        }
        return (unsigned int)-1072431096;
      }
      v17 = (*((__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD, __int64))v16 + 2))(
              v9,
              a5 + *((unsigned __int16 *)v16 + 2),
              a6 - (unsigned int)*((unsigned __int16 *)v16 + 2),
              4LL);
      if ( v17 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            a2,
            a3,
            v18,
            v27,
            a7,
            *((const char **)v16 + 1));
        return (unsigned int)v17;
      }
      v19 = v9[1];
      ++v12;
      if ( (unsigned __int16)v19 < 4u )
        v19 = 4LL;
      v9 = (unsigned __int16 *)((char *)v9 + v19 + 4);
      if ( (unsigned __int64)v9 >= v28 )
        goto LABEL_12;
    }
    if ( (a8 & 1) != 0 )
      return 261;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 63;
      goto LABEL_55;
    }
    return (unsigned int)-1072431093;
  }
LABEL_12:
  if ( v12 != v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 69;
LABEL_55:
      WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v26, v27, a7);
    }
    return (unsigned int)-1072431093;
  }
  return 0;
}
