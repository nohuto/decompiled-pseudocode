/*
 * XREFs of ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDC60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     EnterSharedCrit @ 0x1C004CD30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01ECED4 (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01ECFD4 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     FindRimDevByName @ 0x1C01EEA14 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01EEDB8 (IsRimObjectUnregistered.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x1C01FD200 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleMouseInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  unsigned int v16; // r14d
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 MouseProcessor; // rax
  __int64 v25; // rbx
  void *v26; // r14
  int v27; // ebx
  __int64 RimDevByName; // rax
  __int64 v30; // [rsp+68h] [rbp+10h] BYREF
  __int64 v31; // [rsp+78h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 16);
  v30 = a2;
  v6 = 1;
  if ( (v3 & 4) != 0 )
    *(_QWORD *)(a2 + 8) = a2 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  CIVDeserializer::Deserialize((CIVDeserializer *)&v30, (void **)(a2 + 24));
  EnterSharedCrit(v8, v7, v9, v10);
  v15 = 0;
  v16 = 0;
  if ( *(_DWORD *)(a2 + 32) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(a2 + 24) + 48LL * v16;
      v31 = *(_QWORD *)(v17 + 20);
      v30 = 0LL;
      v18 = *(_QWORD *)(v17 + 32);
      if ( !qword_1C0296E38 || (int)qword_1C0296E38() < 0 )
        break;
      if ( !(qword_1C0296E40 ? qword_1C0296E40(v18, v31, &v30) : 0) )
        break;
      ++v16;
      *(_QWORD *)(v17 + 20) = v30;
      if ( v16 >= *(_DWORD *)(a2 + 32) )
        goto LABEL_11;
    }
    UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  }
  else
  {
LABEL_11:
    UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
    if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    {
      v30 = *(_QWORD *)(a2 + 36);
      MouseProcessor = anonymous_namespace_::GetMouseProcessor(v21, v20, v22, v23);
      if ( MouseProcessor )
      {
        v25 = MouseProcessor + 3872;
        CPushLock::AcquireLockExclusive((CPushLock *)(MouseProcessor + 3872));
        *(_QWORD *)(v25 + 16) = v30;
        *(_BYTE *)(v25 + 24) = 1;
        CPushLock::ReleaseLock((CPushLock *)v25);
      }
    }
    v26 = 0LL;
    v27 = *(_DWORD *)(a2 + 16) & 2;
    if ( (*(_DWORD *)(a2 + 16) & 4) != 0 )
    {
      RIMLockExclusive(a3 + 104);
      if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
      {
        CInpPushLock::UnLockExclusive((CInpPushLock *)(a3 + 104));
        return 2;
      }
      RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
      if ( RimDevByName )
      {
        if ( v27 )
        {
          if ( *(_QWORD *)(RimDevByName + 32) == -72LL )
            v26 = 0LL;
          else
            v26 = *(void **)(*(_QWORD *)(RimDevByName + 32) + 72LL);
        }
        else
        {
          DeliverMouseInputToRIM(
            (const struct _IVMouseInputPacket *)a2,
            (struct RawInputManagerObject *)a3,
            (struct RIMDEV *)RimDevByName);
        }
      }
      else
      {
        v6 = 0;
      }
      CInpPushLock::UnLockExclusive((CInpPushLock *)(a3 + 104));
    }
    if ( v27 )
      DeliverSynthesizedMouseInput((const struct _IVMouseInputPacket *)a2, v26);
    return v6;
  }
  return v15;
}
