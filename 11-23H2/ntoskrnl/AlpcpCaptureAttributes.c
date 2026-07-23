/*
 * XREFs of AlpcpCaptureAttributes @ 0x140738DB0
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140716458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140716B7C (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x140739290 (AlpcpSendMessage.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpCaptureViewAttribute @ 0x14071A8A8 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14071C978 (AlpcpCaptureSecurityAttribute.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1407380DC (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpReleaseAttributes @ 0x140738A24 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureContextAttribute @ 0x140738D4C (AlpcpCaptureContextAttribute.c)
 *     AlpcpCaptureHandleAttribute @ 0x1407BD164 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x1407BFB90 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x1407CD190 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x1407CD5B4 (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureContextAttribute32 @ 0x1407D0E64 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureViewAttribute32 @ 0x140979690 (AlpcpCaptureViewAttribute32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x14097AE08 (AlpcpCaptureHandleAttribute32.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(void *a1, int a2, _DWORD *a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rax
  int v9; // r14d
  ULONG v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edx
  SIZE_T v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  ULONG v21; // eax
  ULONG v22; // ecx
  ULONG v23; // eax
  ULONG v24; // ecx
  int v25; // edi
  int v26; // esi
  __int64 v27; // rdx
  signed int v29; // r14d
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  signed int v38; // r14d
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rax

  memset(a5, 0, 0x48uLL);
  *a5 = *(_QWORD *)(a4 + 104);
  a5[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v8 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(_DWORD *)v8;
    v10 = 8;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( v9 < 0 )
        v10 = 20;
      v21 = v10 + 16;
      if ( (v9 & 0x40000000) == 0 )
        v21 = v10;
      v22 = v21 + 20;
      if ( (v9 & 0x20000000) == 0 )
        v22 = v21;
      v23 = v22 + 16;
      if ( (v9 & 0x10000000) == 0 )
        v23 = v22;
      v24 = v23 + 24;
      if ( (v9 & 0x8000000) == 0 )
        v24 = v23;
      v17 = v24 + 8;
      if ( (v9 & 0x2000000) == 0 )
        v17 = v24;
      v10 = 4;
    }
    else
    {
      v11 = 8;
      if ( v9 < 0 )
        v11 = 32;
      v12 = v11 + 32;
      if ( (v9 & 0x40000000) == 0 )
        v12 = v11;
      v13 = v12 + 32;
      if ( (v9 & 0x20000000) == 0 )
        v13 = v12;
      v14 = v13 + 24;
      if ( (v9 & 0x10000000) == 0 )
        v14 = v13;
      v15 = v14 + 24;
      if ( (v9 & 0x8000000) == 0 )
        v15 = v14;
      v16 = v15 + 8;
      if ( (v9 & 0x4000000) == 0 )
        v16 = v15;
      v17 = v16 + 8;
      if ( (v9 & 0x2000000) == 0 )
        v17 = v16;
    }
    v18 = v17;
    v19 = (__int64)a3;
    v20 = v18 - 1;
    if ( (v9 & 0xA0000000) != 0 )
    {
      if ( v20 <= 0xFFE )
      {
        if ( ((v10 - 1) & (unsigned int)a3) == 0 )
        {
          if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
            v19 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v19 = *(_BYTE *)v19;
          *(_BYTE *)(v19 + v18 - 1) = *(_BYTE *)(v19 + v18 - 1);
          goto LABEL_49;
        }
LABEL_48:
        ExRaiseDatatypeMisalignment();
      }
      ProbeForWrite(a3, v18, v10);
    }
    else if ( v20 > 0xFFFE )
    {
      if ( v18 )
      {
        if ( ((v10 - 1) & (unsigned int)a3) == 0 )
        {
          if ( (unsigned __int64)a3 + v18 > 0x7FFFFFFF0000LL || (_DWORD *)((char *)a3 + v18) < a3 )
            MEMORY[0x7FFFFFFF0000] = 0;
          goto LABEL_49;
        }
        goto LABEL_48;
      }
    }
    else if ( ((v10 - 1) & (unsigned int)a3) != 0 )
    {
      goto LABEL_48;
    }
LABEL_49:
    v25 = a3[1];
    goto LABEL_50;
  }
  v9 = *a3;
  v25 = a3[1];
LABEL_50:
  if ( (~v9 & v25) != 0 )
    return 3221225485LL;
  v26 = 0;
  if ( a2 < 0 )
  {
    if ( v25 < 0 )
    {
      v26 = AlpcpCaptureSecurityAttribute32(a1, a3 + 2, a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x40000000) != 0 )
    {
      v26 = AlpcpCaptureViewAttribute32(
              a1,
              (char *)a3 + (((__int64)(v9 & 0xFFFFFFFF80000000uLL) >> 63) & 0xC) + 8,
              a4,
              a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x20000000) != 0 )
    {
      v37 = (((int)(v9 & 0xC0000000) >> 31) & 0xC) + 24LL;
      if ( (v9 & 0x40000000) == 0 )
        v37 = (((int)(v9 & 0xC0000000) >> 31) & 0xC) + 8LL;
      v26 = AlpcpCaptureContextAttribute32(a1, (char *)a3 + v37, a4, a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x10000000) != 0 )
    {
      v43 = (((int)(v9 & 0xE0000000) >> 31) & 0xC) + 24LL;
      if ( (v9 & 0x40000000) == 0 )
        v43 = (((int)(v9 & 0xE0000000) >> 31) & 0xC) + 8LL;
      v44 = v43 + 20;
      if ( (v9 & 0x20000000) == 0 )
        v44 = v43;
      v26 = AlpcpCaptureHandleAttribute32((char *)a3 + v44, a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x4000000) == 0 )
      goto LABEL_60;
    v38 = v9 & 0xF8000000;
    v39 = ((v38 >> 31) & 0xC) + 24;
    if ( (v38 & 0x40000000) == 0 )
      v39 = ((v38 >> 31) & 0xC) + 8;
    v40 = v39 + 20;
    if ( (v38 & 0x20000000) == 0 )
      v40 = v39;
    v41 = v40 + 16;
    if ( (v38 & 0x10000000) == 0 )
      v41 = v40;
    v42 = v41 + 24;
    if ( (v38 & 0x8000000) == 0 )
      v42 = v41;
    v34 = AlpcpCaptureDirectAttribute32((int)a3 + v42, v41, (_DWORD)a5, a2, v25);
  }
  else
  {
    if ( v25 < 0 )
    {
      v26 = AlpcpCaptureSecurityAttribute(a1, (__int64)(a3 + 2), (__int64)a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x40000000) != 0 )
    {
      v26 = AlpcpCaptureViewAttribute(
              (__int64)a1,
              (__int128 *)((char *)a3 + (((__int64)(v9 & 0xFFFFFFFF80000000uLL) >> 63) & 0x18) + 8),
              a4,
              (__int64)a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x20000000) != 0 )
    {
      v27 = (((int)(v9 & 0xC0000000) >> 31) & 0x18) + 40LL;
      if ( (v9 & 0x40000000) == 0 )
        v27 = (((int)(v9 & 0xC0000000) >> 31) & 0x18) + 8LL;
      v26 = AlpcpCaptureContextAttribute((__int64)a1, (__int64)a3 + v27, a4, a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x10000000) != 0 )
    {
      v35 = (((int)(v9 & 0xE0000000) >> 31) & 0x18) + 40LL;
      if ( (v9 & 0x40000000) == 0 )
        v35 = (((int)(v9 & 0xE0000000) >> 31) & 0x18) + 8LL;
      v36 = v35 + 32;
      if ( (v9 & 0x20000000) == 0 )
        v36 = v35;
      v26 = AlpcpCaptureHandleAttribute((char *)a3 + v36, a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x4000000) == 0 )
      goto LABEL_60;
    v29 = v9 & 0xF8000000;
    v30 = ((v29 >> 31) & 0x18) + 40;
    if ( (v29 & 0x40000000) == 0 )
      v30 = ((v29 >> 31) & 0x18) + 8;
    v31 = v30 + 32;
    if ( (v29 & 0x20000000) == 0 )
      v31 = v30;
    v32 = v31 + 24;
    if ( (v29 & 0x10000000) == 0 )
      v32 = v31;
    v33 = v32 + 24;
    if ( (v29 & 0x8000000) == 0 )
      v33 = v32;
    v34 = AlpcpCaptureDirectAttribute((int)a3 + v33, v32, (_DWORD)a5, a2, v25);
  }
  v26 = v34;
  if ( v34 >= 0 )
  {
LABEL_60:
    if ( (v25 & 0x2000000) != 0 )
      v26 = AlpcpCaptureWorkOnBehalfAttribute((__int64)a5);
  }
LABEL_62:
  if ( v26 < 0 )
    AlpcpReleaseAttributes(a5);
  return (unsigned int)v26;
}
