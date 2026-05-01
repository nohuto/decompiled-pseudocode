/*
 * XREFs of DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1804D6AA4
 * Callers:
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x1804D89D4 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1804D7114 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___--ExternalD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  void *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
  {
    v8 = 0LL;
    goto LABEL_6;
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
                                                             v6,
                                                             a1,
                                                             a3);
  v8 = v7;
  if ( !v7 )
  {
LABEL_6:
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 66LL;
    goto LABEL_7;
  }
  v9 = (**v7)(v7, &GUID_8253a5da_57e3_4257_bbe4_a0d563ae8ff1, a2);
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_8;
  v11 = (unsigned int)v9;
  v12 = 67LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\DragCallback.h",
    (const char *)v11);
LABEL_8:
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  return v10;
}
