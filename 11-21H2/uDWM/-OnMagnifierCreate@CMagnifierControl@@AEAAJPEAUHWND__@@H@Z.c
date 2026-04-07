/*
 * XREFs of ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800C72CC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800C6CF0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x180069992 (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x1800699BC (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800C5B28 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800C69E8 (-FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x180100774 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMagnifierControl::OnMagnifierCreate(struct CVisual **this, HWND a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v6; // r14
  int IsMagnifier; // eax
  unsigned int v8; // edi
  int v9; // r9d
  HWND Ancestor; // rax
  struct CWindowData *WindowByHandle; // rax
  bool v12; // dl
  CVisual *v13; // rcx
  volatile signed __int32 *v14; // rbx
  unsigned int v16; // [rsp+20h] [rbp-20h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v18; // [rsp+60h] [rbp+20h] BYREF

  v18 = 0LL;
  v6 = (struct _RTL_GENERIC_TABLE *)(this + 7);
  if ( CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
         (struct _RTL_GENERIC_TABLE *)(this + 7),
         (__int64)a2) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, -2147024809, 0x265u);
    return v8;
  }
  IsMagnifier = CMagnifier::Create(a2, a3, this[5], &v18);
  v8 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v16 = 584;
LABEL_4:
    v9 = IsMagnifier;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v9, v16);
    goto LABEL_17;
  }
  Ancestor = GetAncestor(a2, 2u);
  WindowByHandle = CMagnifierControl::FindWindowByHandle(Ancestor);
  if ( !WindowByHandle )
  {
    v8 = -2147023728;
    v16 = 602;
    v9 = -2147023728;
    goto LABEL_16;
  }
  v13 = (CVisual *)*((_QWORD *)WindowByHandle + 55);
  if ( v13 )
  {
    IsMagnifier = CVisual::SetIsMagnifier(v13, v12);
    v8 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v16 = 595;
      goto LABEL_4;
    }
  }
  else
  {
    *((_BYTE *)WindowByHandle + 667) |= 2u;
  }
  Buffer[0] = a2;
  v14 = (volatile signed __int32 *)v18;
  Buffer[1] = v18;
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
    v14 = (volatile signed __int32 *)v18;
  }
  if ( !RtlInsertElementGenericTable(v6, Buffer, 0x10u, 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, -2147024882, 0x25Fu);
    CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
    goto LABEL_18;
  }
  _InterlockedIncrement(v14 + 2);
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
LABEL_17:
  v14 = (volatile signed __int32 *)v18;
LABEL_18:
  if ( v14 )
    CBaseObject::Release((CBaseObject *)v14);
  return v8;
}
