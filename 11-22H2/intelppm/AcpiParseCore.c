/*
 * XREFs of AcpiParseCore @ 0x1C0029FD0
 * Callers:
 *     AcpiEval_CPC @ 0x1C00296AC (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0029CFC (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C002A118 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CSD @ 0x1C002A368 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C003AE0C (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x1C003B010 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSS @ 0x1C003B488 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C003B990 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C003BC94 (AcpiEval_XPSS.c)
 *     AcpiParseLpiObject @ 0x1C003C4F0 (AcpiParseLpiObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sd @ 0x1C000BCF0 (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x1C000BF7C (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x1C000C108 (WPP_RECORDER_SF_sss.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8)
{
  __int64 v8; // r14
  __int64 v9; // r12
  unsigned int v10; // r15d
  unsigned __int16 *v11; // rdi
  unsigned __int8 *v12; // rsi
  unsigned int v13; // ebp
  __int64 v14; // r8
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // r13
  int v17; // ebx
  __int64 v18; // rax
  __int64 v20; // rdx
  unsigned __int8 *v21; // rcx
  const char *v22; // rcx
  __int64 v23; // rbx
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // r9
  int v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0;
  v11 = (unsigned __int16 *)a3;
  v12 = a1;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v27 = a3 + (unsigned int)a4;
  if ( a3 >= v27 )
  {
LABEL_12:
    if ( v10 == v13 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = 75;
      goto LABEL_55;
    }
    return (unsigned int)-1072431093;
  }
  while ( 1 )
  {
    if ( v10 >= v13 )
    {
      if ( (a8 & 1) != 0 )
        return 261;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = 69;
LABEL_55:
        WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v25, v26, a7);
        return (unsigned int)-1072431093;
      }
      return (unsigned int)-1072431093;
    }
    v14 = *v11;
    if ( (unsigned int)v9 >= (unsigned int)v8 )
      goto LABEL_21;
    v15 = &v12[24 * v9];
    while ( *v15 != v10 || *((_WORD *)v15 + 1) != (_WORD)v14 )
    {
      v9 = (unsigned int)(v9 + 1);
      v15 += 24;
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_21;
    }
    v16 = &v12[24 * v9];
    if ( !v16 )
    {
LABEL_21:
      v20 = 0LL;
      if ( !(_DWORD)v8 )
        return (unsigned int)-1072431096;
      v21 = v12;
      do
      {
        if ( *v21 == v10 )
          break;
        v20 = (unsigned int)(v20 + 1);
        v21 += 24;
      }
      while ( (unsigned int)v20 < (unsigned int)v8 );
      if ( (unsigned int)v20 >= (unsigned int)v8 )
        return (unsigned int)-1072431096;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( *v11 )
        {
          if ( (_DWORD)v14 == 1 )
          {
            v22 = "STRING";
          }
          else if ( (_DWORD)v14 == 2 )
          {
            v22 = "BUFFER";
          }
          else if ( (unsigned int)(v14 - 3) < 2 )
          {
            v22 = "PACKAGE";
          }
          else
          {
            v22 = "UNKNOWN";
          }
        }
        else
        {
          v22 = "INTEGER";
        }
        WPP_RECORDER_SF_sss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v20,
          v14,
          a4,
          v26,
          a7,
          *(_QWORD *)&v12[24 * v20 + 8],
          (__int64)v22);
      }
      v23 = v8;
      while ( 2 )
      {
        if ( *v12 != v10 )
          goto LABEL_49;
        if ( *((_WORD *)v12 + 1) )
        {
          if ( *((_WORD *)v12 + 1) != 1 )
          {
            if ( *((_WORD *)v12 + 1) == 2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v24 = 73;
              break;
            }
LABEL_49:
            v12 += 24;
            if ( !--v23 )
              return (unsigned int)-1072431096;
            continue;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v24 = 72;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v24 = 71;
        }
        break;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v24,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      goto LABEL_49;
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
    if ( (unsigned __int64)v11 >= v27 )
      goto LABEL_12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ss((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v26, a7, *((const char **)v16 + 1));
  return (unsigned int)v17;
}
