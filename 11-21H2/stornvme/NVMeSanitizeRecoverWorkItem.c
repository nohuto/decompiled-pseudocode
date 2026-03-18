/*
 * XREFs of NVMeSanitizeRecoverWorkItem @ 0x1C00242B0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     NVMeRequestComplete @ 0x1C0019DF8 (NVMeRequestComplete.c)
 */

__int64 __fastcall NVMeSanitizeRecoverWorkItem(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // r9
  __int64 SrbExtension; // rax
  __int64 v12; // rdx

  v3 = 1;
  v4 = a2 >> 3;
  if ( (a2 & 8) == 0 )
    v3 = a2 & 7;
  *(_BYTE *)(a1 + 867) = 0;
  memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  v7 = *(_QWORD *)(a1 + 952);
  *(_QWORD *)(a1 + 920) = v7;
  *(_DWORD *)(a1 + 856) = 1;
  *(_BYTE *)(v7 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v8 = *(_QWORD *)(a1 + 952);
  v9 = *(_DWORD *)(v8 + 4136) & 0xFFFFFFF8;
  *(_BYTE *)(v8 + 4096) = -124;
  *(_DWORD *)(v8 + 4140) = 0;
  *(_DWORD *)(v8 + 4136) = (8 * (v4 & 1)) | (v3 | v9) & 0xFFFFFC07;
  ProcessCommand(a1, a1 + 864);
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
  if ( *(_BYTE *)(a1 + 867) != 1 )
  {
    if ( *(_QWORD *)(a1 + 4128) )
    {
      SrbExtension = GetSrbExtension(*(_QWORD *)(a1 + 4128));
      *(_BYTE *)(SrbExtension + 4253) |= 8u;
      *(_BYTE *)(v12 + 3) = 4;
      NVMeRequestComplete(a1, v12, 0);
      *(_QWORD *)(a1 + 4128) = 0LL;
    }
    *(_DWORD *)(a1 + 4136) &= ~1u;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  return StorPortExtendedFunction(31LL, a1, a3, v10);
}
