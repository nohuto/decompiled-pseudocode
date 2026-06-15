/*
 * XREFs of ?CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x140067E34
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Do_call @ 0x1400687B0 (std--_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x140067F38 (-CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 */

__int64 __fastcall CopyNotification(struct APO_NOTIFICATION *a1, struct APO_NOTIFICATION *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 == 2 )
    {
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
      *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
      v3 = *((_QWORD *)a1 + 2);
    }
    else
    {
      if ( *(_DWORD *)a2 != 3 )
        return 0LL;
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
      *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
      v3 = *((_QWORD *)a1 + 5);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    return 0LL;
  }
  v5 = CopyVolumeChangeNotification(a1, a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
