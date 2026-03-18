/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0024328
 * Callers:
 *     ClientEventCallback @ 0x1C000F4B8 (ClientEventCallback.c)
 *     xxxClientLoadMenu @ 0x1C001F60C (xxxClientLoadMenu.c)
 *     xxxClientExpandStringW @ 0x1C0020288 (xxxClientExpandStringW.c)
 *     SfnPOWERBROADCAST @ 0x1C00206D0 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C0022330 (xxxClientLoadImage.c)
 *     SfnCOPYDATA @ 0x1C0022620 (SfnCOPYDATA.c)
 *     xxxClientAddFontResourceW @ 0x1C0022B88 (xxxClientAddFontResourceW.c)
 *     ClientLoadLibrary @ 0x1C0023120 (ClientLoadLibrary.c)
 *     SfnINSTRINGNULL @ 0x1C0023340 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0023990 (SfnINLPCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0097D70 (SfnINDEVICECHANGE.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0205F60 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0206A40 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0208B90 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0208F60 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0209330 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C02097E0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C020C930 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSTRING @ 0x1C020D030 (SfnINSTRING.c)
 *     SfnPOPTINLPUINT @ 0x1C020E680 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C020EAB0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C020FF10 (SfnTOUCHHITTESTING.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C02103E8 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C021212C (xxxClientExtTextOutW.c)
 *     xxxClientFindMnemChar @ 0x1C0212504 (xxxClientFindMnemChar.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0212AAC (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0212EB8 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02132C0 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, char *a2, unsigned int a3, void **a4)
{
  char *v7; // rdi
  char *v9; // rdx
  char *v10; // rcx

  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v7 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v9 = (char *)*((_QWORD *)a1 + 2);
  if ( a2 > v7 )
    v9 = a2;
  v10 = &v7[a3];
  if ( &a2[a3] < v10 )
    v10 = &a2[a3];
  if ( v9 >= v10 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v7[(a3 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v7, a2, a3);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v7;
    }
    else
    {
      *a4 = (void *)(v7 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
