/*
 * XREFs of ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0072F4C
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00B2D30 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?UpdateStateWorker@CursorApiRouter@@AEAAXXZ @ 0x1C0072EF0 (-UpdateStateWorker@CursorApiRouter@@AEAAXXZ.c)
 *     GreSetPointer @ 0x1C0073040 (GreSetPointer.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1C00732EC (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     GreMovePointer @ 0x1C0086EF0 (GreMovePointer.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0239F70 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ?CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z @ 0x1C023A0AC (-CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z.c)
 *     ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A0E4 (-DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 */

void __fastcall CursorApiRouter::SetPointerShape(CursorApiRouter *this, struct _CURSINFO *a2, unsigned int a3, int a4)
{
  CursorApiRouter *v7; // rcx
  unsigned int v8; // esi
  int v9; // ebx
  unsigned int v10; // r14d
  int v11; // r9d
  int v12; // r10d
  int v13; // r11d
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+50h] BYREF

  v18 = (__int64)this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&qword_1C03374D8, 0LL);
  v8 = dword_1C03374D0;
  v9 = 0;
  gCursorApiRouter = a3;
  byte_1C03374BF = a2 == 0LL;
  if ( a2 )
  {
    byte_1C03374BC = FCursorShadowed(a2);
    byte_1C03374BD = a4 != 0;
  }
  CursorApiRouter::UpdateStateWorker(v7);
  v10 = dword_1C03374D0;
  ExReleasePushLockExclusiveEx(&qword_1C03374D8, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 == 1 )
  {
    if ( v8 == 2 )
      GreSetPointer(0LL, gCursorApiRouter);
    if ( !byte_1C03374BE )
      CursorApiRouter::DwmSetPointer(a2, a3);
  }
  else if ( v10 == 2 )
  {
    if ( v8 == 1 )
    {
      CursorApiRouter::DwmSetPointer(0LL, 0);
      GreMovePointer((HDEV)qword_1C03374C0);
    }
    GreSetPointer(a2, a3);
  }
  if ( v10 != v8 && (unsigned int)dword_1C032BE20 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 8LL) )
    {
      LODWORD(v20) = v12;
      LODWORD(v18) = v13;
      LODWORD(v19) = v11;
      LOBYTE(v9) = gDWMCapable != 0;
      v15 = (__int64)"ShapeChange";
      LODWORD(v14) = v9;
      v16 = InputTraceLogging::Cursor::CursorApiToString(v10);
      v17 = InputTraceLogging::Cursor::CursorApiToString(v8);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C032BE20,
        (int)&dword_1C02F124C,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v20);
    }
  }
}
