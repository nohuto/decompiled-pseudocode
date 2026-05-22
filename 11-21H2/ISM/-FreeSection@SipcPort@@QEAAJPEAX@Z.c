/*
 * XREFs of ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1800FE3EC
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180042E40 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800FF8B0 (-UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z @ 0x1800FE3B4 (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z.c)
 */

__int64 __fastcall SipcPort::FreeSection(SipcPort *this, void *a2)
{
  struct SipcPort::SectionListEntry *SectionListEntry; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct SipcPort::SectionListEntry *v7; // rbx
  __int64 result; // rax
  struct SipcPort::SectionListEntry **v9; // rcx
  struct SipcPort::SectionListEntry **v10; // rdx

  SectionListEntry = SipcPort::FindSectionListEntry(this, a2);
  v7 = SectionListEntry;
  if ( SectionListEntry )
  {
    result = (*(__int64 (__fastcall **)(struct SipcPort::SectionListEntry *))(*(_QWORD *)SectionListEntry + 8LL))(SectionListEntry);
    if ( (int)result >= 0 )
    {
      v9 = (struct SipcPort::SectionListEntry **)*((_QWORD *)v7 + 1);
      if ( v9[1] != (struct SipcPort::SectionListEntry *)((char *)v7 + 8)
        || (v10 = (struct SipcPort::SectionListEntry **)*((_QWORD *)v7 + 2),
            *v10 != (struct SipcPort::SectionListEntry *)((char *)v7 + 8)) )
      {
        __fastfail(3u);
      }
      *v10 = (struct SipcPort::SectionListEntry *)v9;
      v9[1] = (struct SipcPort::SectionListEntry *)v10;
      --*((_QWORD *)this + 4);
      (*(void (__fastcall **)(struct SipcPort::SectionListEntry *))(*(_QWORD *)v7 + 16LL))(v7);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL, v4, v5, v6);
    return 2147942487LL;
  }
  return result;
}
