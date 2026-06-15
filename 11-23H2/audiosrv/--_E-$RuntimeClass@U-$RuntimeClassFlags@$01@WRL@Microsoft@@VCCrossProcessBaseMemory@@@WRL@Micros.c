/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18011C920
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x180042BFC (--1CCrossProcessBaseMemory@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
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
