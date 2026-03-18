/*
 * XREFs of ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0085160
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0085608 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqDD @ 0x1C004740C (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0054548 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureFileObjectClass(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *v3; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned int v7; // edi
  int Flink; // edx
  int _a6; // edi
  __int64 v10; // r8
  _LIST_ENTRY *v11; // rcx
  FxObject *v12; // rcx
  const void *_a2; // rax
  unsigned int _a4; // edx
  unsigned int v15; // r8d
  const void *_a3; // r10
  unsigned int v17; // esi
  _LIST_ENTRY *v19; // rcx
  FxDriver *m_Driver; // rcx
  const void *ObjectHandleUnchecked; // rax
  const void *v22; // rdx
  int v23; // r8d
  const void *v24; // r10

  Blink = FileObjInfoList->Blink;
  v3 = 0LL;
  m_Globals = this->m_Globals;
  v7 = 1;
  if ( Blink == FileObjInfoList )
  {
LABEL_12:
    v17 = 0;
    LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next) = v7;
    return v17;
  }
  while ( 1 )
  {
    Flink = (int)Blink[5].Flink;
    if ( Flink == 1 || v7 == Flink )
      goto LABEL_11;
    if ( v7 != 1 )
      break;
    v3 = Blink[9].Blink;
    v7 = (unsigned int)Blink[5].Flink;
LABEL_11:
    Blink = Blink->Blink;
    if ( Blink == FileObjInfoList )
      goto LABEL_12;
  }
  _a6 = v7 >> 31;
  if ( (_BYTE)_a6 == Flink < 0 )
  {
    v7 = ((Flink >= 0) << 31) - 2147483644;
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v11 = Blink[9].Blink;
    if ( v11 )
      v12 = (FxObject *)v11[1].Flink;
    else
      v12 = *(FxObject **)(v10 + 136);
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v12);
    WPP_IFR_SF_qqDD(m_Globals, 4u, v15, 0x10u, WPP_FxPkgGeneral_cpp_Traceguids, _a2, _a3, _a4, v7);
    goto LABEL_11;
  }
  v17 = -1073741808;
  FxObject::GetObjectHandleUnchecked((FxObject *)v3[1].Flink);
  v19 = Blink[9].Blink;
  if ( v19 )
    m_Driver = (FxDriver *)v19[1].Flink;
  else
    m_Driver = this->m_DeviceBase->m_Driver;
  FxObject::GetObjectHandleUnchecked(m_Driver);
  ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qqdqdd(
    m_Globals,
    (unsigned __int8)v22,
    0x12u,
    0xFu,
    WPP_FxPkgGeneral_cpp_Traceguids,
    ObjectHandleUnchecked,
    v22,
    v23,
    v24,
    _a6,
    -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v17;
}
