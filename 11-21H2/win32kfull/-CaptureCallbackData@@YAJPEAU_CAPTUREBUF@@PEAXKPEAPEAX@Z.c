/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568
 * Callers:
 *     ClientEventCallback @ 0x1C00032D8 (ClientEventCallback.c)
 *     ClientLoadLibrary @ 0x1C006A724 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C006ACD0 (SfnINLPCREATESTRUCT.c)
 *     xxxClientLoadImage @ 0x1C00A2F18 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C00A3310 (xxxClientLoadMenu.c)
 *     xxxClientExtTextOutW @ 0x1C00B9C04 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     xxxClientExpandStringW @ 0x1C00D4970 (xxxClientExpandStringW.c)
 *     SfnINDEVICECHANGE @ 0x1C00EBC90 (SfnINDEVICECHANGE.c)
 *     SfnINSTRINGNULL @ 0x1C00EC7F0 (SfnINSTRINGNULL.c)
 *     xxxClientAddFontResourceW @ 0x1C00EF018 (xxxClientAddFontResourceW.c)
 *     SfnPOWERBROADCAST @ 0x1C0104F40 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C0106080 (SfnCOPYDATA.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C013F9B0 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0222C70 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0223470 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0225330 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0225710 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0225AF0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0225FB0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C0227E20 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSTRING @ 0x1C0228520 (SfnINSTRING.c)
 *     SfnPOPTINLPUINT @ 0x1C02296F0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0229B30 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C022A6A0 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C022C224 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C022C7DC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C022CBE4 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, unsigned __int64 a2, unsigned int a3, void **a4)
{
  __int64 v5; // rax
  const void *v6; // r10
  char *v8; // rdi
  unsigned __int64 v10; // r8

  v5 = a3;
  v6 = (const void *)a2;
  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v8 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v10 = *((_QWORD *)a1 + 2);
  if ( a2 > (unsigned __int64)v8 )
    v10 = a2;
  if ( a2 + v5 >= (unsigned __int64)&v8[v5] )
    a2 = *((_QWORD *)a1 + 2);
  if ( v10 >= (unsigned int)v5 + a2 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v8[((unsigned int)v5 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v8, v6, (unsigned int)v5);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v8;
    }
    else
    {
      *a4 = (void *)(v8 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
