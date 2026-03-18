/*
 * XREFs of ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C005D1EC
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C005CFC0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00E6B60 (zzzUpdateCursorImage.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U3@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@55555444555545@Z @ 0x1C01A7F80 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01A8764 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 */

char __fastcall InputTraceLogging::Cursor::SetCursorImage(
        __int64 a1,
        struct tagCURSOR *a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  _UNKNOWN **v6; // rax
  int v11; // ecx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  const char *v17; // rax
  int v19; // [rsp+C8h] [rbp-80h] BYREF
  int v20; // [rsp+CCh] [rbp-7Ch] BYREF
  int v21; // [rsp+D0h] [rbp-78h] BYREF
  int v22; // [rsp+D4h] [rbp-74h] BYREF
  int v23; // [rsp+D8h] [rbp-70h] BYREF
  int v24; // [rsp+DCh] [rbp-6Ch] BYREF
  int v25; // [rsp+E0h] [rbp-68h] BYREF
  int v26; // [rsp+E4h] [rbp-64h] BYREF
  int v27; // [rsp+E8h] [rbp-60h] BYREF
  int v28; // [rsp+ECh] [rbp-5Ch] BYREF
  int v29; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+100h] [rbp-48h] BYREF
  __int64 v32; // [rsp+108h] [rbp-40h] BYREF
  __int64 v33; // [rsp+110h] [rbp-38h] BYREF
  __int64 v34; // [rsp+118h] [rbp-30h] BYREF
  __int64 v35; // [rsp+120h] [rbp-28h] BYREF
  __int64 v36; // [rsp+128h] [rbp-20h] BYREF
  __int64 v37; // [rsp+130h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+140h] [rbp-8h] BYREF

  v6 = &retaddr;
  if ( (unsigned int)dword_1C0359080 > 4 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_1C0359080, 8LL);
    if ( (_BYTE)v6 )
    {
      v19 = *(_DWORD *)UPDWORDPointer(8232LL);
      v20 = a6;
      v21 = a5;
      v30 = gpqCursor;
      v22 = a3;
      v11 = *(_DWORD *)UPDWORDPointer(8232LL);
      v31 = *(_QWORD *)(a1 + 104);
      v32 = *(_QWORD *)(a1 + 96);
      v33 = *(_QWORD *)(a1 + 88);
      v24 = *(__int16 *)(a1 + 86);
      v25 = *(__int16 *)(a1 + 84);
      v26 = *(_DWORD *)(a1 + 144) >> 1;
      v27 = *(_DWORD *)(a1 + 140);
      v28 = *(_DWORD *)(a1 + 80);
      v29 = *(_DWORD *)(a1 + 76);
      v34 = *(_QWORD *)(a1 + 48);
      v23 = v11;
      v35 = a1 & -(__int64)(v34 != 0);
      if ( a4 )
      {
        v12 = a4 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 == 1 )
                    v17 = "ExplicitSetPointer";
                  else
                    v17 = "UNKNOWN";
                }
                else
                {
                  v17 = "SizeChange";
                }
              }
              else
              {
                v17 = "HiddenByQueue";
              }
            }
            else
            {
              v17 = "SetFromQueue";
            }
          }
          else
          {
            v17 = "ForceAppStarting";
          }
        }
        else
        {
          v17 = "ForceAutoRun";
        }
      }
      else
      {
        v17 = "HiddenByForeground";
      }
      v36 = (__int64)v17;
      v37 = (__int64)InputTraceLogging::CursorToString(a2);
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     (int)&dword_1C0359080,
                     (int)&dword_1C0319F8F,
                     (__int64)&v37,
                     (__int64)&v36,
                     (__int64)&v35,
                     (__int64)&v34,
                     (__int64)&v29,
                     (__int64)&v28,
                     (__int64)&v27,
                     (__int64)&v26,
                     (__int64)&v25,
                     (__int64)&v24,
                     (__int64)&v33,
                     (__int64)&v32,
                     (__int64)&v31,
                     (__int64)&v23,
                     (__int64)&v22,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v30,
                     (__int64)&v19);
    }
  }
  return (char)v6;
}
