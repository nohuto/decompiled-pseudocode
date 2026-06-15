/*
 * XREFs of ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x180042BFC
 * Callers:
 *     ??1CCrossProcessClientMemory@@UEAA@XZ @ 0x180042B5C (--1CCrossProcessClientMemory@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18011C970 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Micros.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseMemory::~CCrossProcessBaseMemory(CCrossProcessBaseMemory *this)
{
  const void *v2; // rcx
  char *v3; // rcx

  *(_QWORD *)this = &CCrossProcessBaseMemory::`vftable';
  v2 = (const void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    UnmapViewOfFile(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
}
