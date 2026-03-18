/*
 * XREFs of ProcessMultipleCommandsInSpecificQueue @ 0x1C002517C
 * Callers:
 *     ProcessMultipleCommands @ 0x1C00250BC (ProcessMultipleCommands.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     ProcessCommandTrace @ 0x1C0002920 (ProcessCommandTrace.c)
 *     SrbAssignCommandId @ 0x1C0025D10 (SrbAssignCommandId.c)
 */

char __fastcall ProcessMultipleCommandsInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v7; // r12
  unsigned __int16 v8; // r13
  __int64 v9; // rsi
  __int64 SrbExtension; // r15
  _OWORD *v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  signed __int32 v19[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD *v20; // [rsp+20h] [rbp-50h]
  int *v21; // [rsp+28h] [rbp-48h]
  __int16 *v22; // [rsp+30h] [rbp-40h]
  _DWORD v23[2]; // [rsp+40h] [rbp-30h]
  _QWORD v24[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v25; // [rsp+58h] [rbp-18h]
  unsigned int v26; // [rsp+B8h] [rbp+48h] BYREF
  int v27; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 v28; // [rsp+C8h] [rbp+58h] BYREF

  v28 = a4;
  v24[0] = 1LL;
  v24[1] = 0LL;
  v20 = v24;
  v7 = 1;
  v25 = 0LL;
  v8 = 0;
  v9 = 0LL;
  StorPortExtendedFunction(93LL, a1, 1LL);
  while ( a2 )
  {
    SrbExtension = GetSrbExtension(a2);
    if ( !*(_WORD *)(a3 + 40) )
      _InterlockedAdd16((volatile signed __int16 *)(a1 + 912), 1u);
    if ( (unsigned __int8)SrbAssignCommandId(a1, SrbExtension, *(unsigned __int16 *)(a3 + 40)) )
    {
      if ( *(_WORD *)(a3 + 40) )
        v9 = 392LL * *(unsigned __int16 *)(a3 + 50) + *(_QWORD *)(a1 + 880) - 392LL;
      *(_WORD *)(SrbExtension + 4098) = *(_WORD *)(SrbExtension + 4246);
      ProcessCommandTrace(a1, a2);
      *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(SrbExtension + 4246)) = a2;
      *(_DWORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(SrbExtension + 4246) + 8) = 0;
      *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(SrbExtension + 4246) + 12) = *(_WORD *)(SrbExtension + 4248);
      v11 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(SrbExtension + 4248));
      *v11 = *(_OWORD *)(SrbExtension + 4096);
      v11[1] = *(_OWORD *)(SrbExtension + 4112);
      v11[2] = *(_OWORD *)(SrbExtension + 4128);
      v11[3] = *(_OWORD *)(SrbExtension + 4144);
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(SrbExtension + 4248) + 8) = *(_WORD *)(SrbExtension + 4246);
      _InterlockedAdd16((volatile signed __int16 *)(a3 + 128), 1u);
      v8 = *(_WORD *)(SrbExtension + 4248) + 1;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 5;
      v7 = 0;
    }
    a2 = *(_QWORD *)(a2 + 40);
  }
  v12 = 0;
  if ( v8 != v28 )
    v12 = v8;
  **(_DWORD **)(a3 + 16) = v12;
  _InterlockedOr(v19, 0);
  StorPortNotification(4100LL, a1, v24);
  if ( v9 && *(_BYTE *)(v9 + 248) )
  {
    v26 = 0;
    StorPortExtendedFunction(92LL, a1, &v26);
    v13 = *(_QWORD *)(v9 + 256);
    if ( v13 )
    {
      LOBYTE(v28) = 0;
      v17 = *(_QWORD *)(v13 + 8LL * v26);
      v22 = (__int16 *)&v28;
      v21 = 0LL;
      v20 = 0LL;
      StorPortExtendedFunction(89LL, a1, v17);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 4044) & 0x10) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 272);
        v15 = *(_QWORD *)(v14 + 72LL * v26 + 8);
        if ( v15 )
        {
          v23[0] = 0;
          LOWORD(v23[0]) = *(_WORD *)(v14 + 72LL * v26 + 16);
          _BitScanForward64(&v16, v15);
          *(_DWORD *)((char *)v23 + 2) = v16;
          StorPortNotification(4107LL, a1, v9 + 264);
        }
      }
      v21 = &v27;
      v20 = 0LL;
      v27 = 0;
      StorPortNotification(4098LL, a1, v9 + 264);
    }
  }
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 912));
  return v7;
}
