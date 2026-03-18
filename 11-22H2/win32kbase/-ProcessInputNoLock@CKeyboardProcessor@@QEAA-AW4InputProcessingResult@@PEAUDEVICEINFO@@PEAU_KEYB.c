/*
 * XREFs of ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C000242C
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0002364 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C00024FC (ProcessKeyboardInjectedInputViaRim.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     GetActiveHKL @ 0x1C006B1A0 (GetActiveHKL.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01B5B8C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DB464 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?TypeSubtypeUpdated@Keyboard@InputTraceLogging@@SAXPEAUHKL__@@KKKK@Z @ 0x1C01DB678 (-TypeSubtypeUpdated@Keyboard@InputTraceLogging@@SAXPEAUHKL__@@KKKK@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01E46E8 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01EA900 (ProcessKeyboardInputWorker.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInputNoLock(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // r12
  __int64 v8; // r8
  int v9; // ebx
  unsigned __int64 v10; // rdi
  unsigned int v12; // ebp
  __int64 v13; // rax
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // ebx
  HKL ActiveHKL; // rax
  int v18; // ebx
  int v19; // ebx
  int v20; // r9d
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  BOOL v22; // [rsp+68h] [rbp+10h] BYREF

  v21 = a1;
  v5 = a4;
  if ( a2 )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState() + 13896)
      && *(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState() + 13896) + 88LL)
      && !*(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState() + 13896) + 116LL)
      && (*(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState() + 13896) + 104LL) != *(_DWORD *)(a2 + 484)
       || *(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState() + 13896) + 108LL) != *(_DWORD *)(a2 + 488)) )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState() + 13896) + 108LL);
      v13 = SGDGetUserSessionState();
      v14 = *(_DWORD *)(a2 + 488);
      v15 = *(_DWORD *)(a2 + 484);
      v16 = *(_DWORD *)(*(_QWORD *)(v13 + 13896) + 104LL);
      ActiveHKL = (HKL)GetActiveHKL();
      InputTraceLogging::Keyboard::TypeSubtypeUpdated(ActiveHKL, v15, v14, v16, v12);
      SearchAndSetKbdTbl((struct DEVICEINFO *)a2, *(_DWORD *)(a2 + 484), *(_DWORD *)(a2 + 488));
      v18 = *(_DWORD *)(a2 + 484);
      *(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState() + 13896) + 104LL) = v18;
      v19 = *(_DWORD *)(a2 + 488);
      *(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState() + 13896) + 108LL) = v19;
    }
    if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
    {
      InputTraceLogging::Keyboard::DropInput(1LL);
    }
    else if ( a3 )
    {
      v9 = a5;
      v10 = a3 + v5;
      do
      {
        if ( a3 >= v10 )
          break;
        if ( (unsigned int)dword_1C0289810 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 0x4000LL) )
        {
          LODWORD(v21) = v9;
          v22 = (*(_WORD *)(a3 + 4) & 1) == 0;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C0289810,
            (unsigned int)&unk_1C025CE1B,
            v8,
            v20,
            (__int64)&v22,
            (__int64)&v21);
        }
        if ( (_BYTE)v9 )
        {
          ProcessKeyboardInjectedInputViaRim(a3, a2);
        }
        else
        {
          LOBYTE(v8) = 1;
          ProcessKeyboardInputWorker(a3, a2, v8);
        }
        a3 += 12LL;
      }
      while ( a3 );
    }
  }
  return 0LL;
}
