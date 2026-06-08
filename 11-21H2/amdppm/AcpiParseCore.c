/*
 * XREFs of AcpiParseCore @ 0x1C0028560
 * Callers:
 *     AcpiEval_CPC @ 0x1C00258DC (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0025FD0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C00262D8 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C0026958 (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x1C0026B5C (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C0026FD4 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C002731C (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0027824 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0027B30 (AcpiEval_XPSS.c)
 *     AcpiParseLpiObject @ 0x1C002885C (AcpiParseLpiObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sd @ 0x1C00067B0 (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x1C0006A3C (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x1C0006BC8 (WPP_RECORDER_SF_sss.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8)
{
  __int64 v8; // r13
  unsigned __int16 *v9; // rdi
  unsigned __int8 *v10; // r14
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int8 *v16; // rbp
  int v17; // ebx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int8 *j; // rcx
  const char *v22; // rcx
  __int64 v23; // rbx
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // r9
  int v27; // [rsp+20h] [rbp-48h]
  unsigned __int64 i; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = (unsigned __int16 *)a3;
  v10 = a1;
  v11 = 0;
  v12 = 0;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v14 = a3 + a4;
  for ( i = v14; ; v14 = i )
  {
    if ( (unsigned __int64)v9 >= v14 )
    {
      if ( v12 == v13 )
        return 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v25 = 69;
LABEL_53:
      WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v25, v27, a7);
      return (unsigned int)-1072431093;
    }
    if ( v12 >= v13 )
    {
      if ( (a8 & 1) != 0 )
        return 261;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v25 = 63;
      goto LABEL_53;
    }
    v15 = *v9;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v8 )
        goto LABEL_16;
      v16 = &v10[24 * v11];
      if ( *v16 == v12 && *((_WORD *)v16 + 1) == (_WORD)v15 )
        break;
      ++v11;
    }
    if ( !v16 )
      break;
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
  }
LABEL_16:
  v20 = 0LL;
  if ( (_DWORD)v8 )
  {
    for ( j = v10; *j != v12; j += 24 )
    {
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= (unsigned int)v8 )
        return (unsigned int)-1072431096;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( (_WORD)v15 )
      {
        if ( (_WORD)v15 == 1 )
        {
          v22 = "STRING";
        }
        else if ( (_WORD)v15 == 2 )
        {
          v22 = "BUFFER";
        }
        else if ( (unsigned __int16)v15 > 4u )
        {
          v22 = "UNKNOWN";
        }
        else
        {
          v22 = "PACKAGE";
        }
      }
      else
      {
        v22 = "INTEGER";
      }
      WPP_RECORDER_SF_sss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v20,
        4LL,
        v27,
        a7,
        *(const char **)&v10[24 * (unsigned int)v20 + 8],
        v22);
    }
    v23 = v8;
    while ( 2 )
    {
      if ( *v10 != v12 )
        goto LABEL_44;
      if ( *((_WORD *)v10 + 1) )
      {
        if ( *((_WORD *)v10 + 1) != 1 )
        {
          if ( *((_WORD *)v10 + 1) == 2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v24 = 67;
            break;
          }
LABEL_44:
          v10 += 24;
          if ( !--v23 )
            return (unsigned int)-1072431096;
          continue;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_44;
        v24 = 66;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_44;
        v24 = 65;
      }
      break;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v24,
      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
    goto LABEL_44;
  }
  return (unsigned int)-1072431096;
}
