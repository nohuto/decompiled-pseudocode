/*
 * XREFs of ndisHandleUModePnPOp @ 0x1C0027330
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00745A0 (ndisHandleProtocolUnloadNotification.c)
 *     McTemplateK0qzz_EtwWriteTransfer @ 0x1C0074898 (McTemplateK0qzz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_sZZ @ 0x1C007498C (WPP_RECORDER_SF_sZZ.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B9778 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisHandleBindNotification @ 0x1C012EAE0 (ndisHandleBindNotification.c)
 *     ndisHandleLegacyBindIoctl @ 0x1C012EC4C (ndisHandleLegacyBindIoctl.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C0156158 (ndisHandleProtocolReconfigNotification.c)
 */

__int64 __fastcall ndisHandleUModePnPOp(__int64 a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  const char *v8; // rcx
  void *v9; // rdx
  const char *v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // r8d
  __int64 v13; // r10
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+38h] [rbp-10h]

  ndisWaitForKernelObject(&ndisPnPMutex);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 == 1 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = a1 + 24;
      v8 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v8 = "TDI ";
      v18 = a1 + 40;
      HIDWORD(v17) = HIDWORD(v8);
      WPP_RECORDER_SF_sZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)"TDI ", v3, 23);
    }
    if ( (byte_1C00F7644 & 1) != 0 )
    {
      v9 = &ProtocolBind;
LABEL_23:
      McTemplateK0qzz_EtwWriteTransfer(v2, (_DWORD)v9, v3, *(_DWORD *)a1, *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 32));
    }
  }
  else if ( v4 == 2 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = a1 + 24;
      v10 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v10 = "TDI ";
      v18 = a1 + 40;
      HIDWORD(v17) = HIDWORD(v10);
      WPP_RECORDER_SF_sZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)"TDI ", v3, 24);
    }
    if ( (byte_1C00F7644 & 1) != 0 )
    {
      v9 = &ProtocolUnbind;
      goto LABEL_23;
    }
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v11 = *(_DWORD *)(a1 + 4);
    if ( v11 > 9 )
    {
      v14 = v11 - 10;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 3;
          if ( !v16 )
          {
            v5 = ndisIfAliasChange((const struct _UNICODE_STRING *)(a1 + 24), (const struct _UNICODE_STRING *)(a1 + 40));
            goto LABEL_7;
          }
          if ( v16 != 1 )
            goto LABEL_10;
        }
      }
    }
    else
    {
      if ( v11 == 9 )
      {
        v12 = *(_DWORD *)(a1 + 16) >> 1;
        if ( v12 >= 2 )
        {
          v13 = *(_QWORD *)(a1 + 8);
          if ( *(_WORD *)(v13 + 2LL * (v12 - 1)) || *(_WORD *)(v13 + 2LL * (v12 - 2)) )
            goto LABEL_10;
        }
        goto LABEL_38;
      }
      if ( v11 != 1 && v11 != 2 )
      {
        if ( v11 != 3 )
        {
          if ( v11 == 5 )
          {
            v5 = ndisHandleProtocolUnloadNotification((PCUNICODE_STRING)(a1 + 40));
            goto LABEL_7;
          }
          if ( v11 == 6 )
          {
            v6 = -1073741637;
            goto LABEL_8;
          }
LABEL_10:
          v6 = -1073741811;
          goto LABEL_8;
        }
LABEL_38:
        v5 = ndisHandleProtocolReconfigNotification((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(a1 + 40), v11);
        goto LABEL_7;
      }
      ndisHandleLegacyBindIoctl((struct _UNICODE_STRING *)(a1 + 24));
    }
    v5 = ndisHandleBindNotification((struct _UNICODE_STRING *)(a1 + 24));
    goto LABEL_7;
  }
  if ( *(_DWORD *)a1 != 2 )
    goto LABEL_10;
  if ( !ndisTdiPnPHandler )
  {
    v6 = -1073741823;
    goto LABEL_8;
  }
  LODWORD(v17) = *(_DWORD *)(a1 + 4);
  v5 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _DWORD, __int64, __int64, __int64))ndisTdiPnPHandler)(
         a1 + 40,
         a1 + 24,
         a1 + 56,
         *(_QWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 16),
         v17,
         v18,
         v19);
LABEL_7:
  v6 = v5;
LABEL_8:
  KeReleaseMutex(&ndisPnPMutex, 0);
  return v6;
}
