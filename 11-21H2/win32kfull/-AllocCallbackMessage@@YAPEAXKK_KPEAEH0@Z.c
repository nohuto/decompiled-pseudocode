/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940
 * Callers:
 *     ClientEventCallback @ 0x1C00032D8 (ClientEventCallback.c)
 *     ClientLoadLibrary @ 0x1C006A724 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C006ACD0 (SfnINLPCREATESTRUCT.c)
 *     SfnOUTSTRING @ 0x1C007FE90 (SfnOUTSTRING.c)
 *     xxxClientLoadImage @ 0x1C00A2F18 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C00A3310 (xxxClientLoadMenu.c)
 *     xxxClientExtTextOutW @ 0x1C00B9C04 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     xxxClientExpandStringW @ 0x1C00D4970 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00D4D24 (xxxClientLoadStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00D5120 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnINDEVICECHANGE @ 0x1C00EBC90 (SfnINDEVICECHANGE.c)
 *     SfnINSTRINGNULL @ 0x1C00EC7F0 (SfnINSTRINGNULL.c)
 *     xxxClientAddFontResourceW @ 0x1C00EF018 (xxxClientAddFontResourceW.c)
 *     SfnPOWERBROADCAST @ 0x1C0104F40 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C0106080 (SfnCOPYDATA.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C013F9B0 (fnHkINLPCBTCREATESTRUCT.c)
 *     ClientGetListboxString @ 0x1C02224D0 (ClientGetListboxString.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0222C70 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0223470 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C0223EE0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C0224480 (SfnINCNTOUTSTRINGNULL.c)
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
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall AllocCallbackMessage(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        size_t Size)
{
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  ULONG_PTR v9; // rdx
  bool v10; // zf
  int v11; // eax
  unsigned __int8 *result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v7 = (a1 + 7) & 0xFFFFFFF8;
    v8 = v7 + 8 * a2;
    v9 = (a3 + 7LL * a2) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v13 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1667461973LL);
      v6 = (unsigned __int8 *)v13;
      if ( v13 )
      {
        v14 = (_QWORD *)(v13 + 32);
        *(_QWORD *)(v13 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v13 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v6 + 2) = *v14;
          goto LABEL_8;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v8 + v9 <= Size )
      {
        memset(a4, 0, Size);
        goto LABEL_5;
      }
      v6 = (unsigned __int8 *)Win32AllocPoolWithQuotaZInit((unsigned int)(v9 + v8), 1667461973LL);
      if ( v6 )
      {
LABEL_5:
        *((_QWORD *)v6 + 4) = 0LL;
        v10 = a5 == 0;
        *((_QWORD *)v6 + 2) = &v6[v8];
        if ( !v10 )
        {
          *(_DWORD *)v6 = v8 + RegionSize;
LABEL_7:
          v11 = RegionSize;
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 1) = v11;
          result = v6;
          *((_DWORD *)v6 + 6) = v7;
          return result;
        }
LABEL_8:
        *(_DWORD *)v6 = v8;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
