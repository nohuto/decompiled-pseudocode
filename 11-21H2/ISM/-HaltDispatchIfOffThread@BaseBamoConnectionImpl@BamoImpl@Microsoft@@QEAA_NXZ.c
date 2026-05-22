/*
 * XREFs of ?HaltDispatchIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAA_NXZ @ 0x18008DA88
 * Callers:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::HaltDispatchIfOffThread(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  char v1; // bl
  int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  if ( !*((_DWORD *)this + 6) )
  {
    if ( *((_QWORD *)this + 8) )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
      if ( v2 != -2018375678 )
      {
        if ( v2 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x941,
            (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            (const char *)(unsigned int)v2,
            v4);
        return 1;
      }
    }
  }
  return v1;
}
