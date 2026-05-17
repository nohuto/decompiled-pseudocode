/*
 * XREFs of EtwpPopulatePrivateEnableInfoFromGuidEntry @ 0x180082548
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x180032398 (EtwpCheckForPrivatePreEnable.c)
 * Callees:
 *     EtwpUpdatePrivateEnableInfo @ 0x180082594 (EtwpUpdatePrivateEnableInfo.c)
 */

__int64 __fastcall EtwpPopulatePrivateEnableInfoFromGuidEntry(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 240) )
  {
    v2 = 4LL;
    do
    {
      v3 = *(_QWORD *)(a1 + 240);
      v1 += 24LL;
      *(_OWORD *)(a1 + v1 + 96) = *(_OWORD *)(v3 + v1 + 32);
      *(_QWORD *)(a1 + v1 + 112) = *(_QWORD *)(v3 + v1 + 48);
      --v2;
    }
    while ( v2 );
    return EtwpUpdatePrivateEnableInfo(a1, v1);
  }
  return result;
}
