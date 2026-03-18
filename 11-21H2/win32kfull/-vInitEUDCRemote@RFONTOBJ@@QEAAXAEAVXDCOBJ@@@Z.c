/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A5B8C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C000A82C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C000B1C8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C001713C (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C001EC98 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0124BD4 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C015DA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C016FEF6 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?bActive@RFONTOBJ@@QEBAHXZ @ 0x1C0270718 (-bActive@RFONTOBJ@@QEBAHXZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0288E0C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C02A51B0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A5A6C (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C02A6348 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, HDC **a2)
{
  RFONTOBJ *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v6; // rax
  char v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rax
  HDC v11; // rax
  __int64 v12; // rbx
  struct HLFONT__ *v13; // rdx
  HDC *v14; // rdx
  __int64 *v15; // r15
  __int64 v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // eax
  HDC *v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // r12
  struct PFE *v22; // rax
  struct PFE *v23; // r14
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  int v27; // r14d
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  HDC v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // rdi
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  HDC v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  struct LFONT *v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  int v42; // [rsp+98h] [rbp-68h]
  _OWORD v43[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[48]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v45; // [rsp+110h] [rbp+10h] BYREF
  __int128 v46; // [rsp+120h] [rbp+20h]
  _BYTE v47[80]; // [rsp+130h] [rbp+30h] BYREF

  v2 = this;
  v38 = (__int64)this;
  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v6 = *(_QWORD **)(v3 + 744);
  if ( v6 )
  {
    if ( *v6 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 24LL, 0LL, 0LL, 0LL, 0LL, 0LL, 1);
    v3 = *(_QWORD *)v2;
  }
  v7 = 0;
  if ( !*(_QWORD *)(v3 + 744) )
  {
    v8 = *((_DWORD *)*a2 + 76);
    if ( v8 <= 0xA )
    {
      *(_QWORD *)(v3 + 744) = v3 + 752;
    }
    else
    {
      v9 = 8 * v8;
      if ( v9 )
      {
        v10 = Win32AllocPoolZInit(v9, 1718382187LL);
        v3 = *(_QWORD *)v2;
      }
      else
      {
        v10 = 0LL;
      }
      *(_QWORD *)(v3 + 744) = v10;
      if ( !v10 )
        return;
      v7 = 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)v2 + 840LL) = 0;
  v11 = (*a2)[6];
  v13 = (struct HLFONT__ *)(*a2)[218];
  v39 = *(_QWORD *)(*(_QWORD *)v2 + 120LL);
  v12 = v39;
  v36 = v11;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v40, v13, (struct PDEVOBJ *)&v36);
  v14 = *a2;
  v36 = *(HDC *)v2;
  DCOBJ::DCOBJ((DCOBJ *)v44, *v14);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v43,
    *(const struct _IFIMETRICS **)(v12 + 32),
    (struct RFONTOBJ *)&v36,
    (struct DCOBJ *)v44);
  v45 = 0LL;
  v46 = 0LL;
  RFONTOBJ::ComputeEUDCLogfont(v2, (struct _EUDCLOGFONT *)&v45, (struct XDCOBJ *)a2);
  memset(v47, 0, sizeof(v47));
  v15 = (__int64 *)v47;
  v16 = 0LL;
  v17 = *((_DWORD *)*a2 + 76);
  if ( v17 <= 0xA || (v18 = 8 * v17) != 0 && (v15 = (__int64 *)Win32AllocPoolZInit(v18, 1718382187LL)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) |= 0x200u;
    v19 = *a2;
    if ( ((_DWORD)(*a2)[6][10] & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)v2 + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      v19 = *a2;
    }
    if ( *((_DWORD *)v19 + 76) )
    {
      v20 = 0;
      do
      {
        v21 = 0LL;
        v34 = 0LL;
        v41 = 0LL;
        v37 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v22 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[37] + 2 * v20));
        v23 = v22;
        if ( v22 )
        {
          v21 = *(_QWORD *)v22;
          v41 = v21;
          v42 = 0;
          ++*(_DWORD *)(v21 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v37);
        if ( v23 )
        {
          v43[0] = v45;
          v43[1] = v46;
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v39);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v23 || (struct PFE *)i[2].Blink == v23 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  HIDWORD(v43[0]) = HIDWORD(v45) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v34, (struct XDCOBJ *)a2, v23, (struct _EUDCLOGFONT *)v43);
          if ( v34 )
          {
            v15[v16] = v34;
            v16 = (unsigned int)(v16 + 1);
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
        if ( v21 && !v42 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v41);
        v19 = *a2;
        ++v20;
      }
      while ( v20 < *((_DWORD *)*a2 + 76) );
      v2 = (RFONTOBJ *)v38;
    }
    if ( ((_DWORD)v19[6][10] & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
    }
    v27 = *(_DWORD *)(*(_QWORD *)v2 + 712LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) &= ~0x200u;
    if ( !RFONTOBJ::bActive(v2)
      && v27
      && (unsigned int)dword_1C03263F8 > 5
      && tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
    {
      v35 = 0;
      LODWORD(v37) = 1;
      v38 = 0x1000000LL;
      LODWORD(v34) = 68651;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C03263F8,
        byte_1C02F2504,
        v28,
        v29,
        (__int64)&v34,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v35);
    }
    if ( (unsigned __int8)-(v27 != 0) & RFONTOBJ::bActive(v2) )
    {
      if ( (_DWORD)v16 )
      {
        v30 = (unsigned int)v16;
        do
        {
          *(_QWORD *)(v4 * 8 + *(_QWORD *)(*(_QWORD *)v2 + 744LL)) = v15[v4];
          ++v4;
          --v30;
        }
        while ( v30 );
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = v16;
      }
      else
      {
        v31 = *(HDC *)v2;
        v32 = *(_QWORD *)(*(_QWORD *)v2 + 744LL);
        if ( v32 != *(_QWORD *)v2 + 752LL )
        {
          Win32FreePool(v32);
          v31 = *(HDC *)v2;
        }
        *((_QWORD *)v31 + 93) = 0LL;
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = 0;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(v2);
    }
    else if ( (_DWORD)v16 )
    {
      v33 = v15;
      do
      {
        v34 = *v33;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v34);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
        ++v33;
        --v16;
      }
      while ( v16 );
    }
    if ( v15 != (__int64 *)v47 )
      Win32FreePool(v15);
  }
  else if ( v7 )
  {
    Win32FreePool(*(_QWORD *)(*(_QWORD *)v2 + 744LL));
    *(_QWORD *)(*(_QWORD *)v2 + 744LL) = 0LL;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v44);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
  LFONTOBJ::~LFONTOBJ(&v40);
}
