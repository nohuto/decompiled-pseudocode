/*
 * XREFs of ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x140062454
 * Callers:
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140019370 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140059318 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CFormatConverterPipe::ConnectToRightSubmix(
        CPipeInstance **this,
        struct ISubmixInternal *a2,
        struct CPipeInstance *a3,
        char a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = CPipeInstance::ConnectToRightPipe(*this, a3);
    if ( v6 < 0 )
    {
      v7 = 296LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, CPipeInstance *))(*(_QWORD *)a2 + 40LL))(a2, *this);
    if ( v6 < 0 )
    {
      v7 = 299LL;
      goto LABEL_4;
    }
  }
  else
  {
    v9 = *(_QWORD *)a2;
    if ( a4 )
      v10 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, CPipeInstance *))(v9 + 32))(a2, *this);
    else
      v10 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, CPipeInstance *))(v9 + 24))(a2, *this);
    v6 = v10;
    if ( v10 < 0 )
    {
      v7 = 304LL;
      goto LABEL_4;
    }
  }
  *((_BYTE *)this + 24) = 1;
  return 0LL;
}
