/*
 * XREFs of ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18011936C
 * Callers:
 *     ?EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ @ 0x18011A434 (-EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004AC60 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(HSTRING_HEADER *a1)
{
  unsigned __int64 v2; // rax

  v2 = -1LL;
  a1[1].Reserved.Reserved1 = 0LL;
  do
    ++v2;
  while ( aMicrophone[v2] );
  if ( v2 > 0xFFFFFFFF )
  {
LABEL_7:
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x1801193EFLL);
  }
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
    goto LABEL_7;
  }
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(a1, L"microphone", v2 + 1, v2);
  return a1;
}
