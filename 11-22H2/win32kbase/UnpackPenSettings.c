/*
 * XREFs of UnpackPenSettings @ 0x1C01E9A30
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EE480 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMIsDefaultUILanguageRTL @ 0x1C00C44A0 (RIMIsDefaultUILanguageRTL.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C0232F9C (EditionxxxBroadcastSPIChange.c)
 *     GetUserHandedness @ 0x1C0233098 (GetUserHandedness.c)
 */

__int64 __fastcall UnpackPenSettings(_DWORD *a1)
{
  int v1; // edi
  __int64 v3; // rdx
  BOOL v4; // eax
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = a1[3];
  if ( v1 != (unsigned int)GetUserHandedness() )
  {
    v4 = RIMIsDefaultUILanguageRTL();
    v5 = 0LL;
    if ( v4 )
      LOBYTE(v5) = v1 == 0;
    else
      LOBYTE(v5) = v1 != 0;
    *((_DWORD *)gpsi + 514) = v5;
    EditionxxxBroadcastSPIChange(8229LL, v5, 0LL);
  }
  if ( a1[4] != dword_1C0289AB0 )
  {
    dword_1C0289AB0 = a1[4];
    EditionxxxBroadcastSPIChange(8223LL, v3, 0LL);
  }
  result = (unsigned int)a1[5];
  if ( (_DWORD)result != dword_1C0289AF0 )
    dword_1C0289AF0 = a1[5];
  return result;
}
