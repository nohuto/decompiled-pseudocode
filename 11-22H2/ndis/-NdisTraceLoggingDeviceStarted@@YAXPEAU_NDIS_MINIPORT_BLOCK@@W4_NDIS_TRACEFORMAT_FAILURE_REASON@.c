/*
 * XREFs of ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C0034100
 * Callers:
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0033E0C (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00232B4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceStarted(__int64 a1, int a2, int a3)
{
  int v4; // r9d
  __int64 v5; // r10
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  ULONG v9; // r11d
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  unsigned __int8 *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  ULONG v20; // r9d
  __int64 v21; // r10
  int v22; // r11d
  ULONG v23; // [rsp+20h] [rbp-39h]
  char v24; // [rsp+30h] [rbp-29h] BYREF
  char v25; // [rsp+31h] [rbp-28h] BYREF
  int v26; // [rsp+34h] [rbp-25h] BYREF
  int v27; // [rsp+38h] [rbp-21h] BYREF
  _EVENT_DATA_DESCRIPTOR v28; // [rsp+40h] [rbp-19h] BYREF
  int *v29; // [rsp+60h] [rbp+7h]
  int v30; // [rsp+68h] [rbp+Fh]
  int v31; // [rsp+6Ch] [rbp+13h]
  int *v32; // [rsp+70h] [rbp+17h]
  int v33; // [rsp+78h] [rbp+1Fh]
  int v34; // [rsp+7Ch] [rbp+23h]
  char *v35; // [rsp+80h] [rbp+27h]
  int v36; // [rsp+88h] [rbp+2Fh]
  int v37; // [rsp+8Ch] [rbp+33h]
  __int64 v38; // [rsp+90h] [rbp+37h]
  int v39; // [rsp+98h] [rbp+3Fh]
  int v40; // [rsp+9Ch] [rbp+43h]

  if ( a3 < 0 )
  {
    if ( (unsigned int)dword_1C00F4210 > 5 && tlgKeywordOn((__int64)&dword_1C00F4210, 0x200000000000LL) )
    {
      v26 = a2;
      v33 = 4;
      v35 = (char *)(v21 + 4008);
      v32 = &v26;
      v29 = &v27;
      v30 = 4;
      v16 = (unsigned __int8 *)&unk_1C00DEB20;
      v23 = v20;
      v27 = v22;
      v36 = 16;
      goto LABEL_13;
    }
  }
  else if ( (unsigned int)dword_1C00F4210 > 5 && tlgKeywordOn((__int64)&dword_1C00F4210, 0x200000000000LL) )
  {
    v6 = v4 - 1;
    v7 = *(_DWORD *)(v5 + 4064);
    v8 = v4 - 4;
    v24 = *(_BYTE *)(v5 + 33);
    v9 = v4 + 1;
    v25 = *(_BYTE *)(v5 + 32);
    v10 = v7 - (v4 - 4);
    if ( !v10 )
    {
      v4 -= 4;
      goto LABEL_12;
    }
    v11 = v10 - v8;
    if ( v11 )
    {
      v12 = v11 - v8;
      if ( v12 )
      {
        v13 = v12 - v8;
        if ( !v13 )
          goto LABEL_23;
        v14 = v13 - v8;
        if ( !v14 )
        {
          v15 = *(_DWORD *)(v5 + 4068);
          if ( v15 )
          {
            if ( v15 == v6 )
            {
              v4 = v6 + 4;
            }
            else
            {
              v4 = 9;
              if ( v15 != 8 )
                v4 = 7;
            }
          }
          else
          {
            v4 = 7;
          }
          goto LABEL_12;
        }
        v17 = v14 - v8;
        if ( !v17 )
        {
          v4 = 10;
          goto LABEL_12;
        }
        if ( v17 != v8 )
        {
LABEL_23:
          ++v4;
          goto LABEL_12;
        }
        v4 = 11;
      }
    }
    else
    {
      v18 = *(_DWORD *)(v5 + 4068);
      if ( !v18 )
        goto LABEL_29;
      v19 = v18 - v8;
      if ( !v19 )
      {
        v4 = 3;
        goto LABEL_12;
      }
      if ( v19 != v8 )
      {
LABEL_29:
        v4 = 2;
        goto LABEL_12;
      }
      --v4;
    }
LABEL_12:
    v40 = 0;
    v35 = &v24;
    v32 = (int *)&v25;
    v29 = &v26;
    v30 = v6;
    v16 = (unsigned __int8 *)&dword_1C00DEB69;
    v23 = v9;
    v26 = v4;
    v38 = v5 + 4008;
    v39 = 16;
    v36 = v8;
    v33 = v8;
LABEL_13:
    v37 = 0;
    v34 = 0;
    v31 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00F4210, v16, 0LL, 0LL, v23, &v28);
  }
}
