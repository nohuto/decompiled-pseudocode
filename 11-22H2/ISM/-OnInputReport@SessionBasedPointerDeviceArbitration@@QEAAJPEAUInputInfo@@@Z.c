/*
 * XREFs of ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1801F9798
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801D8D8C (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x1801F970C (-EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z.c)
 *     ?SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z @ 0x1801F99C8 (-SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z.c)
 */

__int64 __fastcall SessionBasedPointerDeviceArbitration::OnInputReport(
        SessionBasedPointerDeviceArbitration *this,
        struct InputInfo *a2)
{
  unsigned int v4; // eax
  char v5; // bp
  char v6; // r14
  int *v7; // r10
  __int64 v8; // r11
  int v9; // r8d
  char v10; // r9
  char v11; // cl
  unsigned int v12; // edx
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  char v15; // al
  int IsNonPrimaryDeviceInActiveSession; // esi
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)a2 & 0x100003B) != 0 )
  {
    v4 = *((_DWORD *)a2 + 79);
    v5 = 0;
    v6 = 0;
    if ( v4 )
    {
      v7 = (int *)((char *)a2 + 332);
      v8 = v4;
      do
      {
        v9 = *v7;
        v10 = v6;
        v7 += 36;
        v11 = v5 + 1;
        if ( (v9 & 4) == 0 )
          v11 = v5;
        v5 = v11;
        ++v6;
        if ( (v9 & 2) == 0 )
          v6 = v10;
        --v8;
      }
      while ( v8 );
    }
    v12 = *((_DWORD *)a2 + 1);
    if ( v12 == *((_DWORD *)this + 26) )
      goto LABEL_18;
    v13 = 0;
    v14 = (_DWORD *)((char *)this + 24);
    while ( *v14 != v12 )
    {
      ++v13;
      ++v14;
      if ( v13 >= 0x14 )
      {
        v15 = 0;
        goto LABEL_15;
      }
    }
    v15 = 1;
LABEL_15:
    if ( !*((_BYTE *)this + 108) && !v15 )
    {
      *((_DWORD *)this + 26) = v12;
      goto LABEL_18;
    }
    if ( v5 )
    {
      if ( !v15 )
      {
        if ( *((_BYTE *)this + 109) )
        {
          IsNonPrimaryDeviceInActiveSession = SessionBasedPointerDeviceArbitration::EndCurrentSession(this, 0);
          if ( IsNonPrimaryDeviceInActiveSession < 0 )
          {
            v17 = 174LL;
LABEL_26:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\arbitration\\sessionbased\\lib\\sessionbasedp"
                       "ointerdevicearbitration.cpp",
              (const char *)(unsigned int)IsNonPrimaryDeviceInActiveSession);
            return (unsigned int)IsNonPrimaryDeviceInActiveSession;
          }
          *((_DWORD *)this + 26) = *((_DWORD *)a2 + 1);
        }
        else
        {
          IsNonPrimaryDeviceInActiveSession = SessionBasedPointerDeviceArbitration::SetIsNonPrimaryDeviceInActiveSession(
                                                this,
                                                v12,
                                                1);
          if ( IsNonPrimaryDeviceInActiveSession < 0 )
          {
            v17 = 185LL;
            goto LABEL_26;
          }
        }
      }
    }
    else if ( v15 )
    {
      IsNonPrimaryDeviceInActiveSession = SessionBasedPointerDeviceArbitration::SetIsNonPrimaryDeviceInActiveSession(
                                            this,
                                            v12,
                                            0);
      if ( IsNonPrimaryDeviceInActiveSession < 0 )
      {
        v17 = 196LL;
        goto LABEL_26;
      }
    }
LABEL_18:
    if ( *((_DWORD *)a2 + 1) == *((_DWORD *)this + 26) )
    {
      if ( v5 )
      {
        *((_WORD *)this + 54) = 1;
      }
      else if ( v6 )
      {
        *((_WORD *)this + 54) = 257;
      }
      else
      {
        *((_WORD *)this + 54) = 0;
      }
      (*(void (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), a2);
    }
  }
  return 0LL;
}
