/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800986A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18002B57C (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x180095CB0 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180095DEC (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800987A0 (-NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x180098964 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180098A40 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        CRenderData *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERDATA *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v9; // edi
  unsigned int v10; // ecx
  int v11; // eax
  int Handles; // eax
  unsigned int v14; // ecx
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v9 = 0;
  CRenderData::DestroyRenderData(this);
  v11 = *((_DWORD *)a3 + 2);
  if ( !v11 )
    goto LABEL_2;
  if ( a5 != v11 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x57u, 0LL);
LABEL_13:
    CRenderData::DestroyRenderData(this);
    return v9;
  }
  CDataStreamWriter::Reset((struct _LIST_ENTRY *)((char *)this + 72));
  Handles = CDataStreamWriter::AddBlockData((CRenderData *)((char *)this + 72), a4, a5);
  v9 = Handles;
  if ( Handles < 0 )
  {
    v15 = 92;
    goto LABEL_12;
  }
  Handles = CRenderData::GetHandles(this, a2);
  v9 = Handles;
  if ( Handles < 0 )
  {
    v15 = 96;
    goto LABEL_12;
  }
  Handles = CRenderData::CheckPrimitives(this);
  v9 = Handles;
  if ( Handles < 0 )
  {
    v15 = 100;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, Handles, v15, 0LL);
    goto LABEL_13;
  }
LABEL_2:
  CRenderData::NotifyOnChanged(this, 0LL, 0LL);
  return v9;
}
