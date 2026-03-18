/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x1800441F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x180044330 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x180044510 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessUpdate(
        void **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ATLASEDRECTSMESH *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // eax
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-28h]

  v8 = 0;
  CAtlasedRectsMesh::UnRegisterNotifiers((CAtlasedRectsMesh *)this);
  v10 = a5;
  *((_BYTE *)this + 64) = *((_BYTE *)a3 + 8);
  *((_DWORD *)this + 17) = *((_DWORD *)a3 + 3);
  v11 = *((_DWORD *)a3 + 4);
  if ( v11 )
  {
    if ( v11 > a5 || (v11 & 0xF) != 0 )
    {
      v18 = 149;
      goto LABEL_24;
    }
    v12 = HrAlloc(v11, this + 10);
    v8 = v12;
    if ( v12 < 0 )
    {
      v18 = 154;
LABEL_19:
      v17 = v12;
LABEL_25:
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v17, v18, 0LL);
      CAtlasedRectsMesh::UnRegisterNotifiers((CAtlasedRectsMesh *)this);
      goto LABEL_16;
    }
    memcpy_0(this[10], a4, *((unsigned int *)a3 + 4));
    *((_DWORD *)this + 18) = *((_DWORD *)a3 + 4);
    v9 = *((unsigned int *)a3 + 4);
    v10 = a5 - v9;
    a4 += v9;
  }
  v13 = *((_DWORD *)a3 + 5);
  if ( !v13 )
    goto LABEL_11;
  if ( v13 > v10 || (v13 & 0xF) != 0 )
  {
    v18 = 174;
    goto LABEL_24;
  }
  v12 = HrAlloc(v13, this + 12);
  v8 = v12;
  if ( v12 < 0 )
  {
    v18 = 179;
    goto LABEL_19;
  }
  memcpy_0(this[12], a4, *((unsigned int *)a3 + 5));
  *((_DWORD *)this + 22) = *((_DWORD *)a3 + 5);
  v14 = *((unsigned int *)a3 + 5);
  v10 -= v14;
  a4 += v14;
LABEL_11:
  v15 = *((_DWORD *)a3 + 6);
  if ( v15 )
  {
    if ( v15 <= v10 && (v15 & 3) == 0 )
    {
      v12 = HrAlloc(v15, this + 14);
      v8 = v12;
      if ( v12 >= 0 )
      {
        memcpy_0(this[14], a4, *((unsigned int *)a3 + 6));
        *((_DWORD *)this + 26) = *((_DWORD *)a3 + 6);
        goto LABEL_16;
      }
      v18 = 204;
      goto LABEL_19;
    }
    v18 = 199;
LABEL_24:
    v17 = -2003303421;
    v8 = -2003303421;
    goto LABEL_25;
  }
LABEL_16:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v8;
}
