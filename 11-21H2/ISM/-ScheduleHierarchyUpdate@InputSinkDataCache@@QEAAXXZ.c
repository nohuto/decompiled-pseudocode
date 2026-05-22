/*
 * XREFs of ?ScheduleHierarchyUpdate@InputSinkDataCache@@QEAAXXZ @ 0x180003B9C
 * Callers:
 *     NotifyInputSinkTransformChanged @ 0x180003A70 (NotifyInputSinkTransformChanged.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall InputSinkDataCache::ScheduleHierarchyUpdate(InputSinkDataCache *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 12);
  if ( v2 && !*((_BYTE *)this + 104) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, 1000000LL, 0LL);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x92,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\lib\\i"
                      "nputsinkdatacache.cpp",
        (const char *)(unsigned int)v3,
        v4);
    *((_BYTE *)this + 104) = 1;
  }
}
