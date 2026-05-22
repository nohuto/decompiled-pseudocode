/*
 * XREFs of ?GetProcessId@LegacyInputSinkData@@QEBAIXZ @ 0x18005FACC
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18005EFB0 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18005F944 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 */

__int64 __fastcall LegacyInputSinkData::GetProcessId(LegacyInputSinkData *this)
{
  __int64 v1; // rax
  int v3; // edx
  unsigned int *v4; // rbx
  char *CompositionInputQueue; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0LL;
  v3 = 1;
  do
    v7[v1++] = v3++;
  while ( v1 < 4 );
  v4 = v7;
  while ( 1 )
  {
    CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue(this, *v4);
    if ( *(_DWORD *)CompositionInputQueue == 3 )
      break;
    if ( ++v4 == (unsigned int *)&v8 )
      return 0LL;
  }
  return *((unsigned int *)CompositionInputQueue + 4);
}
