/*
 * XREFs of ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801DD920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x18014E860 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801DDC54 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 */

__int64 __fastcall InputRedirectionTarget::DeliverInput(InputRedirectionTarget *this, struct InputInfo *a2)
{
  const char *v5; // r9
  int v6; // [rsp+30h] [rbp-18h] BYREF
  void *v7; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 )
  {
    if ( InputRedirectionTarget::IsValid(this) )
    {
      if ( (*(_DWORD *)a2 & 0x100003B) != 0 )
      {
        *((_QWORD *)a2 + 8) = *((_QWORD *)this + 7);
      }
      else if ( *(_DWORD *)a2 == 0x4000 )
      {
        *((_QWORD *)a2 + 4) = *((_QWORD *)this + 7);
      }
      InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v6, 5, (int *)a2, v5);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, void *, int))(**((_QWORD **)this + 4) + 176LL))(
             *((_QWORD *)this + 4),
             *((_QWORD *)this + 5),
             4LL,
             v7,
             v6) < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 168LL))(
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5));
        *((_QWORD *)this + 5) = 0LL;
      }
      if ( v7 )
        operator delete[](v7);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectiontarget.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
