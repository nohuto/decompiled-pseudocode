/*
 * XREFs of sub_140299E04 @ 0x140299E04
 * Callers:
 *     sub_140299A2C @ 0x140299A2C (sub_140299A2C.c)
 * Callees:
 *     KdEnableDebugger @ 0x140565580 (KdEnableDebugger.c)
 *     sub_140A6F1FC @ 0x140A6F1FC (sub_140A6F1FC.c)
 */

char __fastcall sub_140299E04(int a1, int a2, __int64 a3, __int64 a4, char a5, char a6)
{
  int v6; // ebx
  int v7; // edi
  __int64 v11; // r8
  int v12; // ecx

  v6 = a4;
  v7 = a3;
  if ( *(_DWORD *)a3 == -2147483645
    && *(_DWORD *)(a3 + 24)
    && ((v11 = *(_QWORD *)(a3 + 32), (unsigned __int64)(v11 - 3) <= 2) || v11 == 1) )
  {
    v12 = *(_DWORD *)(a4 + 48);
    ++*(_QWORD *)(a4 + 248);
    if ( (v12 & 0x100080) == 0x100080 )
      ++*(_QWORD *)(*(int *)(a4 + 1256) + a4 + 1240);
    return 1;
  }
  else if ( !byte_140C09804
         && byte_140C40502
         && byte_140D01944
         && !(_BYTE)KdDebuggerEnabled
         && KdEnableDebugger() >= 0
         && (_BYTE)KdDebuggerEnabled )
  {
    return sub_140A6F1FC(a1, a2, v7, v6, a5, a6);
  }
  else
  {
    return 0;
  }
}
