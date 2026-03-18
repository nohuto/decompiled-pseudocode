/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C012CC5C
 * Callers:
 *     NtGdiStartDoc @ 0x1C012CFA0 (NtGdiStartDoc.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bValid@XDCOBJ@@QEBAHXZ @ 0x1C00404FC (-bValid@XDCOBJ@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C012CA30 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C012CA70 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C012CA98 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     GreExtEscape @ 0x1C013D59C (GreExtEscape.c)
 *     ?Feature_2990973245__private_IsEnabled@@YAHXZ @ 0x1C015DCF4 (-Feature_2990973245__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285520 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, LPCWSTR, _QWORD); // rdi
  struct _EPROCESS *CurrentProcess; // rax
  int v17; // edi
  DC *v18; // rcx
  __int64 v20; // [rsp+48h] [rbp-9h] BYREF
  int v21; // [rsp+50h] [rbp-1h] BYREF
  int v22; // [rsp+54h] [rbp+3h] BYREF
  XDCOBJ *v23; // [rsp+58h] [rbp+7h] BYREF
  DC *v24[7]; // [rsp+60h] [rbp+Fh] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( XDCOBJ::bValid((XDCOBJ *)v24) )
  {
    if ( *((_WORD *)v24[0] + 6) != 1 )
    {
      if ( (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
      {
        v21 = 0;
        LODWORD(v20) = 1;
        v23 = (XDCOBJ *)0x1000000;
        v22 = 74780;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C03263F8,
          (unsigned int)&unk_1C02F2504,
          v9,
          v10,
          (__int64)&v22,
          (__int64)&v23,
          (__int64)&v20,
          (__int64)&v21);
      }
      goto LABEL_13;
    }
    if ( ((unsigned int)a1 & 0x7F0000) != 0x10000 && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
    {
      v11 = *((_QWORD *)v24[0] + 6);
      v20 = v11;
      v12 = *(_DWORD *)(v11 + 40);
      if ( (v12 & 1) == 0 && *(_QWORD *)(v11 + 2536) && !*((_DWORD *)v24[0] + 8) && !*((_QWORD *)v24[0] + 62) )
      {
        if ( (v12 & 0x8000) == 0 )
        {
LABEL_13:
          v8 = -1;
          goto LABEL_40;
        }
        if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v20, 0LL) )
          goto LABEL_40;
        v13 = v20;
        *a3 = *(_DWORD *)(*(_QWORD *)(v20 + 2528) + 112LL) & 0x2000000;
        DC::pSurface(v24[0], *(struct SURFACE **)(v13 + 2528));
        if ( (unsigned int)Feature_2990973245__private_IsEnabled() )
        {
          if ( !*a3 )
          {
LABEL_20:
            DC::bSetDefaultRegion(v24[0]);
LABEL_21:
            v23 = 0LL;
            v15 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v20 + 2944);
            if ( (*(_DWORD *)(v20 + 40) & 0x8000) != 0 )
            {
              v23 = (XDCOBJ *)v24;
              if ( (*((_DWORD *)v24[0] + 11) & 2) != 0 )
              {
                XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v24);
                *((_DWORD *)v24[0] + 11) &= ~2u;
              }
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v14),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || v15 )
            {
              v17 = v15(
                      (*(_QWORD *)(v20 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v20 + 2528) != 0LL),
                      a2->lpszDocName,
                      a4);
            }
            else
            {
              if ( gfUMPDDebug )
                DbgPrint(
                  "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n",
                  1744);
              v17 = 0;
            }
            RESTORESAVEDCATTRS::vDone(&v23);
            v18 = v24[0];
            if ( *((_DWORD *)v24[0] + 523) != -1 )
            {
              v22 = *((_DWORD *)v24[0] + 523);
              GreExtEscape(a1, 0, 0LL);
              *((_DWORD *)v24[0] + 523) = -1;
              v18 = v24[0];
            }
            if ( (*((_DWORD *)v18 + 9) & 0x400) != 0 )
            {
              LOWORD(v21) = 1;
              GreExtEscape(a1, 0, 0LL);
              *((_DWORD *)v24[0] + 9) &= ~0x400u;
              v18 = v24[0];
            }
            if ( v17 )
            {
              v8 = a4;
              *((_DWORD *)v18 + 27) = *((_DWORD *)v18 + 26);
            }
            if ( v23 )
              XDCOBJ::vSaveAttributesAlways(v23);
            goto LABEL_40;
          }
        }
        else if ( !*a3 )
        {
          goto LABEL_21;
        }
        *((_QWORD *)v24[0] + 64) = *(_QWORD *)(*(_QWORD *)(v20 + 2528) + 56LL);
        goto LABEL_20;
      }
    }
  }
LABEL_40:
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return v8;
}
