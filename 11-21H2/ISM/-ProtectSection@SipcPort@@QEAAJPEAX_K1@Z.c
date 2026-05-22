/*
 * XREFs of ?ProtectSection@SipcPort@@QEAAJPEAX_K1@Z @ 0x1800FF1F0
 * Callers:
 *     ?ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z @ 0x1800FF1B0 (-ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z @ 0x1800FE3B4 (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z.c)
 */

__int64 __fastcall SipcPort::ProtectSection(SipcPort *this, void *a2, __int64 a3, unsigned __int64 a4)
{
  struct SipcPort::SectionListEntry *SectionListEntry; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax

  SectionListEntry = SipcPort::FindSectionListEntry(this, a2);
  if ( SectionListEntry )
  {
    v11 = *((_QWORD *)SectionListEntry + 5);
    if ( v9 < v11 && a4 <= v11 - v9 )
      return SipcPort::ProtectSectionMemory((void *)(v6 + v9), a4, 2u);
    v10 = -2147483637;
  }
  else
  {
    v10 = -2147024809;
  }
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v10, v6, v7, v8);
  return v10;
}
