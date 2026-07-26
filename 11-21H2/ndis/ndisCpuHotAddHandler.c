/*
 * XREFs of ndisCpuHotAddHandler @ 0x1C006ED80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C00A4E4C (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 *     ?ndisStackExpansionAddProcessor@@YAXK@Z @ 0x1C00ABCA4 (-ndisStackExpansionAddProcessor@@YAXK@Z.c)
 *     ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1C00C79FC (-ndisDmaAddCpuNotify@@YAJEKJ@Z.c)
 */

void __fastcall ndisCpuHotAddHandler(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  KE_PROCESSOR_CHANGE_NOTIFY_STATE State; // ecx
  __int32 v6; // ecx
  unsigned int v7; // edx
  unsigned __int8 v8; // cl
  int v9; // r8d
  int v10; // eax
  NTSTATUS v11; // edi
  __int64 v12; // [rsp+28h] [rbp-20h]

  State = ChangeContext->State;
  if ( ChangeContext->State )
  {
    v6 = State - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            1u,
            0xEu,
            (struct _GUID *)&WPP_4b855e46533b35be5b26cddd546981b7_Traceguids,
            *OperationStatus);
        ndisDmaAddCpuNotify(v6, (unsigned int)ChangeContext, (int)OperationStatus);
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xDu,
          (struct _GUID *)&WPP_4b855e46533b35be5b26cddd546981b7_Traceguids,
          *OperationStatus);
      ndisPeriodicReceivesAddCpu(ChangeContext->NtNumber);
      ndisDmaAddCpuNotify(v8, v7, v9);
      ndisStackExpansionAddProcessor((PVOID)ChangeContext->NtNumber);
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_4b855e46533b35be5b26cddd546981b7_Traceguids,
        *OperationStatus,
        ChangeContext->NtNumber);
    v10 = ndisDmaAddCpuNotify(State, (unsigned int)ChangeContext, (int)OperationStatus);
    v11 = v10;
    if ( v10 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v12) = v10;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_4b855e46533b35be5b26cddd546981b7_Traceguids,
          v12);
      }
      *OperationStatus = v11;
    }
  }
}
