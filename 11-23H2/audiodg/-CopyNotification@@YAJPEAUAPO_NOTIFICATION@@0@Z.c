/*
 * XREFs of ?CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14006FAC4
 * Callers:
 *     _lambda_d3d8473ab69012044bcca3ea676e23db_::operator() @ 0x14003859C (_lambda_d3d8473ab69012044bcca3ea676e23db_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyVolume2ChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14006FC9C (-CopyVolume2ChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 *     ?CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14006FD34 (-CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 */

__int64 __fastcall CopyNotification(struct APO_NOTIFICATION *a1, struct APO_NOTIFICATION *a2)
{
  __int64 v3; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 == 1 )
  {
    v5 = CopyVolumeChangeNotification(a1, a2);
    if ( v5 >= 0 )
      return 0LL;
    v6 = 258LL;
  }
  else
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
      goto LABEL_14;
    }
    if ( *(_DWORD *)a2 == 3 )
    {
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
      *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
      v3 = *((_QWORD *)a1 + 5);
      goto LABEL_14;
    }
    if ( *(_DWORD *)a2 != 4 )
    {
      if ( *(_DWORD *)a2 == 5 )
      {
        *(_OWORD *)a1 = *(_OWORD *)a2;
        *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
        *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
        *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
        *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
      }
      else if ( *(_DWORD *)a2 == 6 )
      {
        *(_OWORD *)a1 = *(_OWORD *)a2;
        *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
        *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
        *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
        *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
        v3 = *((_QWORD *)a1 + 1);
LABEL_14:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      }
      return 0LL;
    }
    v5 = CopyVolume2ChangeNotification(a1, a2);
    if ( v5 >= 0 )
      return 0LL;
    v6 = 261LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
