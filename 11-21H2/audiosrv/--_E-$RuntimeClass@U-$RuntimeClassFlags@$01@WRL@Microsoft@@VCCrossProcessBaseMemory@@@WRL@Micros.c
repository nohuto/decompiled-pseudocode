/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800EDC60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x18015BF1C (--1CCrossProcessBaseMemory@@IEAA@XZ.c)
 */

CCrossProcessBaseMemory *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::`vector deleting destructor'(
        CCrossProcessBaseMemory *a1,
        char a2)
{
  *((_DWORD *)a1 + 11) = -1073741823;
  CCrossProcessBaseMemory::~CCrossProcessBaseMemory(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
