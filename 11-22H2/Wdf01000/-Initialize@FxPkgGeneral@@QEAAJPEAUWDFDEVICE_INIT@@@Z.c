/*
 * XREFs of ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0085608
 * Callers:
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003DA50 (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ??0FxFileObjectInfo@@QEAA@XZ @ 0x1C0084CC4 (--0FxFileObjectInfo@@QEAA@XZ.c)
 *     ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0084F2C (-ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0085160 (-ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Initialize(FxPkgGeneral *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  ULONG Tag; // ecx
  void *v6; // rax
  FX_POOL **v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned int v11; // eax
  _LIST_ENTRY *p_CxDeviceInitListHead; // r14
  _LIST_ENTRY *i; // rbx
  int v14; // ebx
  unsigned __int16 v15; // r9
  ULONG v16; // ecx
  void *v17; // rax
  FX_POOL **v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _LIST_ENTRY *v21; // rcx
  unsigned int v22; // eax
  __m128i v24; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( DeviceInit->FileObject.Set )
  {
    Tag = m_Globals->Tag;
    v24.m128i_i64[0] = 0LL;
    v24.m128i_i64[1] = 64LL;
    v6 = retaddr;
    if ( !m_Globals->FxPoolTrackingOn )
      v6 = 0LL;
    v7 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v24, 0xA0uLL, Tag, v6);
    if ( !v7 || (FxFileObjectInfo::FxFileObjectInfo((FxFileObjectInfo *)v7), (v9 = v8) == 0) )
    {
      v14 = -1073741670;
      v15 = 10;
LABEL_11:
      WPP_IFR_SF_D(m_Globals, 2u, 0x12u, v15, WPP_FxPkgGeneral_cpp_Traceguids, 0xC000009A);
      return (unsigned int)v14;
    }
    *(_BYTE *)(v8 + 148) = 0;
    *(_DWORD *)(v8 + 80) = DeviceInit->FileObject.Class;
    *(_OWORD *)(v8 + 88) = *(_OWORD *)&DeviceInit->FileObject.Attributes.Size;
    *(_OWORD *)(v8 + 104) = *(_OWORD *)&DeviceInit->FileObject.Attributes.EvtDestroyCallback;
    *(_OWORD *)(v8 + 120) = *(_OWORD *)&DeviceInit->FileObject.Attributes.ParentObject;
    *(_QWORD *)(v8 + 136) = DeviceInit->FileObject.Attributes.ContextTypeInfo;
    *(_DWORD *)(v8 + 144) = DeviceInit->FileObject.AutoForwardCleanupClose;
    *(_QWORD *)(v8 + 24) = DeviceInit->FileObject.Callbacks.EvtDeviceFileCreate;
    *(_QWORD *)(v8 + 56) = DeviceInit->FileObject.Callbacks.EvtFileCleanup;
    *(_QWORD *)(v8 + 72) = DeviceInit->FileObject.Callbacks.EvtFileClose;
    Blink = this->m_FileObjectInfoHeadList.Blink;
    if ( Blink->Flink != &this->m_FileObjectInfoHeadList )
LABEL_24:
      __fastfail(3u);
    *(_QWORD *)v8 = &this->m_FileObjectInfoHeadList;
    *(_QWORD *)(v8 + 8) = Blink;
    Blink->Flink = (_LIST_ENTRY *)v8;
    this->m_FileObjectInfoHeadList.Blink = (_LIST_ENTRY *)v8;
    v11 = this->m_Flags | 2;
    this->m_Flags = v11;
    if ( *(_QWORD *)(v9 + 24) )
      this->m_Flags = v11 | 8;
  }
  p_CxDeviceInitListHead = &DeviceInit->CxDeviceInitListHead;
  for ( i = DeviceInit->CxDeviceInitListHead.Flink; i != p_CxDeviceInitListHead; i = i->Flink )
  {
    if ( BYTE4(i[13].Flink) )
    {
      v16 = m_Globals->Tag;
      v17 = retaddr;
      v24.m128i_i64[0] = 0LL;
      v24.m128i_i64[1] = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v17 = 0LL;
      v18 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v24, 0xA0uLL, v16, v17);
      if ( !v18 || (FxFileObjectInfo::FxFileObjectInfo((FxFileObjectInfo *)v18), (v20 = v19) == 0) )
      {
        v14 = -1073741670;
        v15 = 11;
        goto LABEL_11;
      }
      *(_BYTE *)(v19 + 148) = 1;
      *(_DWORD *)(v19 + 80) = i[6].Blink;
      *(_LIST_ENTRY *)(v19 + 88) = i[7];
      *(_LIST_ENTRY *)(v19 + 104) = i[8];
      *(_LIST_ENTRY *)(v19 + 120) = i[9];
      *(_QWORD *)(v19 + 136) = i[10].Flink;
      *(_DWORD *)(v19 + 144) = i[13].Flink;
      *(_QWORD *)(v19 + 40) = i[11].Flink;
      *(_QWORD *)(v19 + 56) = i[12].Flink;
      *(_QWORD *)(v19 + 72) = i[11].Blink;
      *(_QWORD *)(v19 + 152) = i[40].Blink;
      v21 = this->m_FileObjectInfoHeadList.Blink;
      if ( v21->Flink != &this->m_FileObjectInfoHeadList )
        goto LABEL_24;
      *(_QWORD *)v19 = &this->m_FileObjectInfoHeadList;
      *(_QWORD *)(v19 + 8) = v21;
      v21->Flink = (_LIST_ENTRY *)v19;
      this->m_FileObjectInfoHeadList.Blink = (_LIST_ENTRY *)v19;
      v22 = this->m_Flags | 1;
      this->m_Flags = v22;
      if ( *(_QWORD *)(v20 + 40) )
        this->m_Flags = v22 | 4;
    }
  }
  if ( this->m_FileObjectInfoHeadList.Flink == &this->m_FileObjectInfoHeadList )
  {
    return 0;
  }
  else
  {
    v14 = FxPkgGeneral::ConfigureConstraints(this, &this->m_FileObjectInfoHeadList);
    if ( v14 >= 0 )
    {
      v14 = FxPkgGeneral::ConfigureFileObjectClass(this, &this->m_FileObjectInfoHeadList);
      if ( v14 >= 0 )
        return 0;
    }
  }
  return (unsigned int)v14;
}
