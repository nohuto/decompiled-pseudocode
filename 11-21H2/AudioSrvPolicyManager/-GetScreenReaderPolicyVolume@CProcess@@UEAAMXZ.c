/*
 * XREFs of ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180017820
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18002F164 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 */

float __fastcall CProcess::GetScreenReaderPolicyVolume(CProcess *this)
{
  float v2; // [rsp+30h] [rbp+8h] BYREF

  if ( TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 41), *((_DWORD *)this + 40), &v2) )
    return FLOAT_1_0;
  else
    return v2;
}
