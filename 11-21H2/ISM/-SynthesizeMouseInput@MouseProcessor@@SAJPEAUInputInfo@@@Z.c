/*
 * XREFs of ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x180194470
 * Callers:
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x18009E1B8 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180193F00 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::SynthesizeMouseInput(struct InputInfo *a1)
{
  unsigned int v1; // ebx
  bool v3; // cf
  int v4; // eax
  unsigned int v5; // r9d
  int v6; // eax
  int v7; // ecx
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h]
  int v11; // [rsp+2Ch] [rbp-24h]
  __int64 v12; // [rsp+30h] [rbp-20h]
  __int16 v13; // [rsp+38h] [rbp-18h]
  __int16 v14; // [rsp+3Ah] [rbp-16h]
  __int16 v15; // [rsp+3Ch] [rbp-14h]
  __int16 v16; // [rsp+3Eh] [rbp-12h]
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+44h] [rbp-Ch]
  __int64 v19; // [rsp+60h] [rbp+10h] BYREF

  v1 = 0;
  v9 = *((unsigned int *)a1 + 1);
  v10 = *((_DWORD *)a1 + 2);
  v12 = *((_QWORD *)a1 + 2);
  v13 = *((_WORD *)a1 + 45);
  v14 = *((_WORD *)a1 + 46);
  v15 = *((_WORD *)a1 + 47);
  v17 = *((_DWORD *)a1 + 25);
  v18 = *((_DWORD *)a1 + 26);
  v3 = *((_BYTE *)a1 + 122) != 0;
  v11 = 0;
  v16 = 0;
  v19 = 0LL;
  v4 = (v3 ? 27 : 11) | 0x20;
  if ( !*((_BYTE *)a1 + 120) )
    v4 = v3 ? 27 : 11;
  v5 = v4 | 0x80;
  if ( !*((_BYTE *)a1 + 124) )
    v5 = v4;
  v6 = *((_DWORD *)a1 + 10);
  if ( v6 )
  {
    LODWORD(v19) = 2;
    HIDWORD(v19) = v6;
  }
  else
  {
    v7 = v19;
    if ( *((_DWORD *)a1 + 19) )
      v7 = 1;
    LODWORD(v19) = v7;
  }
  if ( !(unsigned int)NtMITSynthesizeMouseInput(&v9, v5, &v19) )
    return (unsigned int)-2147024809;
  return v1;
}
