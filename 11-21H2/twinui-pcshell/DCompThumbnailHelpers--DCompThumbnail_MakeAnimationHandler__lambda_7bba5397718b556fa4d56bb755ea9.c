/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x18054E120
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x18054E544 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_7b.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___::CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x18054ECA4 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lamb.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v10; // esi
  __int64 v11; // rcx

  *a4 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___::CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___(
                                                               v6,
                                                               v7,
                                                               a2,
                                                               0LL);
    v9 = v8;
    if ( v8 )
    {
      v10 = (**v8)(v8, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
      goto LABEL_6;
    }
  }
  else
  {
    v9 = 0LL;
  }
  v10 = -2147024882;
LABEL_6:
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  v11 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
