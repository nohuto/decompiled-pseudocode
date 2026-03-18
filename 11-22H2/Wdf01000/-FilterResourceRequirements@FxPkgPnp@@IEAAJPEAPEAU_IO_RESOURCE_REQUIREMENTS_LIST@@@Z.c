/*
 * XREFs of ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C0078D68
 * Callers:
 *     ?_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0080D80 (-_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0082968 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0080088 (-FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::FilterResourceRequirements(FxPkgPnp *this, _IO_RESOURCE_REQUIREMENTS_LIST **IoList)
{
  __int64 v2; // rdi
  _LIST_ENTRY *p_m_InterruptListHead; // rbx
  __int64 v5; // rsi
  char v6; // r15
  unsigned int v7; // ebp
  _LIST_ENTRY *v8; // r12
  _LIST_ENTRY *Flink; // r14
  __int64 v10; // rdx
  char v11; // cl
  const void *_a1; // rax
  unsigned __int16 v13; // r9
  FxInterrupt *p_Blink; // rcx
  unsigned int v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+80h] [rbp+18h]

  v2 = (__int64)*IoList;
  v17 = (__int64)*IoList;
  if ( !*IoList )
    return 0LL;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  if ( p_m_InterruptListHead->Flink == p_m_InterruptListHead )
    return 0LL;
  v16 = 0;
  v5 = v2 + 32;
  if ( !*(_DWORD *)(v2 + 28) )
    return 0LL;
  do
  {
    v6 = 0;
    v7 = 0;
    v8 = p_m_InterruptListHead;
    Flink = p_m_InterruptListHead;
    if ( !*(_DWORD *)(v5 + 4) )
      goto LABEL_23;
    do
    {
      v10 = 32LL * v7 + v5 + 8;
      if ( *(_BYTE *)(v10 + 1) != 2 )
        goto LABEL_21;
      v11 = *(_BYTE *)v10 & 8;
      if ( (*(_BYTE *)(v10 + 4) & 2) != 0 )
      {
        v6 = 1;
        if ( !v11 )
          v8 = v8->Flink;
        if ( v8 == p_m_InterruptListHead )
        {
          _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          v13 = 10;
LABEL_11:
          WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, v13, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
          goto LABEL_21;
        }
        p_Blink = (FxInterrupt *)&v8[-28].Blink;
      }
      else
      {
        if ( !v11 )
          Flink = Flink->Flink;
        if ( v6 )
          Flink = p_m_InterruptListHead->Flink;
        v6 = 0;
        if ( Flink == p_m_InterruptListHead )
        {
          _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          v13 = 11;
          goto LABEL_11;
        }
        p_Blink = (FxInterrupt *)&Flink[-28].Blink;
      }
      FxInterrupt::FilterResourceRequirements(p_Blink, (_IO_RESOURCE_DESCRIPTOR *)v10);
LABEL_21:
      ++v7;
    }
    while ( v7 < *(_DWORD *)(v5 + 4) );
    v2 = v17;
LABEL_23:
    v5 += 32LL * v7 + 8;
    ++v16;
  }
  while ( v16 < *(_DWORD *)(v2 + 28) );
  return 0LL;
}
