/*
 * XREFs of ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180004EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_RequestDisposeProxy_5(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  _DWORD *v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 *i; // rbx
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = **a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
  v5 = *(_DWORD **)(v4 + 192);
  v6 = *(_DWORD **)(v4 + 200);
  if ( v5 == v6 )
  {
LABEL_2:
    v7 = *(unsigned int *)(v4 + 28);
    v15 = 0LL;
    if ( (_DWORD)v3 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(v4 + 64) + 56LL))(
             *(_QWORD *)(v4 + 64),
             v7,
             v3,
             &v15);
      if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x47E,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)v8,
          v13);
      if ( v15 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
        if ( v9 )
        {
          for ( i = *(__int64 **)(v9 + 32); i; i = (__int64 *)i[6] )
          {
            if ( *(_DWORD *)(i[5] + 36) == *(_DWORD *)(a1 + 36) )
              break;
          }
          if ( *((int *)i + 4) <= 0 )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(unsigned int *)(v9 + 24));
            v12 = *i;
            *((_BYTE *)i + 32) = 0;
            (*(void (__fastcall **)(__int64 *))(v12 + 56))(i);
          }
        }
      }
    }
  }
  else
  {
    while ( *v5 != (_DWORD)v3 )
    {
      if ( ++v5 == v6 )
        goto LABEL_2;
    }
  }
  return 0LL;
}
