/*
 * XREFs of Interrupter_InterruptEnable @ 0x1C0013C78
 * Callers:
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C0014920 (Interrupter_WdfEvtInterruptEnable.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003BD84 (Interrupter_ControllerResetPostReset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Interrupter_InterruptEnable(__int64 a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rdi
  unsigned int *v4; // rdx
  unsigned int Ulong; // eax
  _DWORD *v6; // rdx
  __int64 result; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      9,
      39,
      (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
      *(_DWORD *)(a1 + 32));
  v2 = (_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 96) & 0xFFFFFFF9 | 4;
  if ( *(_BYTE *)(v3 + 129) )
  {
    *v2 = 200;
    _InterlockedOr(v8, 0);
  }
  else
  {
    XilRegister_WriteUlong(v3, v2, 200);
  }
  v4 = *(unsigned int **)(a1 + 24);
  if ( *(_BYTE *)(v3 + 129) )
    Ulong = *v4;
  else
    Ulong = XilRegister_ReadUlong(v3, v4);
  v6 = *(_DWORD **)(a1 + 24);
  result = Ulong | 2;
  if ( !*(_BYTE *)(v3 + 129) )
    return XilRegister_WriteUlong(v3, v6, result);
  *v6 = result;
  _InterlockedOr(v8, 0);
  return result;
}
