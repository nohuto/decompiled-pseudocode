/*
 * XREFs of TelIsOsInProcessorMode @ 0x180002830
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHeapPointer@@YAXPEAX@Z @ 0x1800012C8 (-CloseHeapPointer@@YAXPEAX@Z.c)
 *     ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x180001578 (-TelpGetTelemetryClientRegPath@@YAPEAGXZ.c)
 *     TelIsProcessorModeAllowed @ 0x1800027E0 (TelIsProcessorModeAllowed.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180002C84 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180004360 (__security_check_cookie.c)
 *     memset_0 @ 0x180004E0A (memset_0.c)
 */

__int64 __fastcall TelIsOsInProcessorMode(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 result; // rax
  int AadJoinInformation; // eax
  __int64 v8; // rcx
  char v9; // di
  __int64 v10; // rcx
  unsigned __int16 *TelemetryClientRegPath; // rbx
  signed __int64 v12; // r8
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r9
  WCHAR *v16; // rcx
  unsigned __int64 v17; // rdx
  WCHAR v18; // ax
  WCHAR *v19; // rax
  int v20; // eax
  LSTATUS ValueW; // eax
  unsigned int v22; // r8d
  int pdwType; // [rsp+20h] [rbp-E0h]
  int pdwTypea; // [rsp+20h] [rbp-E0h]
  DWORD pcbData[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 pvData; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SubKey[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  if ( a1 )
  {
    result = TelIsProcessorModeAllowed();
    if ( !(_DWORD)result )
    {
      *a1 = 0;
      return result;
    }
    *(_QWORD *)pcbData = 0LL;
    AadJoinInformation = NetGetAadJoinInformation(0LL, pcbData);
    v4 = AadJoinInformation;
    if ( AadJoinInformation == 1 || AadJoinInformation == -2147024769 )
    {
      if ( *(_QWORD *)pcbData )
        NetFreeAadJoinInformation();
      v4 = 0;
    }
    else
    {
      v8 = *(_QWORD *)pcbData;
      if ( AadJoinInformation >= 0 && *(_QWORD *)pcbData && **(_DWORD **)pcbData == 1 )
      {
        v9 = 1;
      }
      else
      {
        v9 = 0;
        if ( AadJoinInformation < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC0,
            a3,
            (const char *)(unsigned int)AadJoinInformation,
            pdwType);
          v8 = *(_QWORD *)pcbData;
        }
      }
      if ( v8 )
        NetFreeAadJoinInformation();
      if ( (v4 & 0x80000000) != 0 )
      {
        v5 = 1713LL;
        goto LABEL_3;
      }
      if ( v9 )
      {
        *a1 = 1;
        pvData = 1LL;
        memset_0(SubKey, 0, 0x208uLL);
        TelemetryClientRegPath = TelpGetTelemetryClientRegPath(v10);
        if ( TelemetryClientRegPath )
        {
          v12 = (char *)TelemetryClientRegPath - (char *)SubKey;
          v16 = SubKey;
          v17 = 260LL;
          do
          {
            if ( v17 == -2147483386LL )
              break;
            v18 = *(WCHAR *)((char *)v16 + v12);
            if ( !v18 )
              break;
            *v16++ = v18;
            --v17;
          }
          while ( v17 );
          v19 = v16 - 1;
          if ( v17 )
            v19 = v16;
          *v19 = 0;
          v13 = v17 == 0 ? 0x8007007A : 0;
          if ( v17 )
          {
            v20 = StringCchCatW(SubKey, v17, L"\\RegionalSettings");
            v13 = v20;
            if ( v20 >= 0 )
            {
              pcbData[0] = 8;
              ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"IsProcessorMode", 0x10040u, 0LL, &pvData, pcbData);
              v13 = (unsigned __int16)ValueW | 0x80070000;
              if ( ValueW <= 0 )
                v13 = ValueW;
              if ( (v13 & 0x80000000) == 0 && pvData == 1 )
              {
                *a1 = 1;
              }
              else
              {
                *a1 = 0;
                if ( (v13 & 0x80000000) != 0 )
                  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6D1, v22, (const char *)v13, pdwTypea);
              }
              goto LABEL_40;
            }
            v15 = (unsigned int)v20;
            v14 = 1736LL;
          }
          else
          {
            v15 = v13;
            v14 = 1735LL;
          }
        }
        else
        {
          v13 = -2147467259;
          v14 = 1732LL;
          v15 = 2147500037LL;
        }
        wil::details::in1diag3::Return_Hr(retaddr, (void *)v14, v12, (const char *)v15, pdwType);
        if ( !TelemetryClientRegPath )
          return v13;
LABEL_40:
        CloseHeapPointer(TelemetryClientRegPath);
        return v13;
      }
    }
    *a1 = 0;
    return v4;
  }
  v4 = -2147024809;
  v5 = 1700LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v5, a3, (const char *)v4, pdwType);
  return v4;
}
