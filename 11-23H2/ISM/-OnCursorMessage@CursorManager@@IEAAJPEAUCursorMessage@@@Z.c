/*
 * XREFs of ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x180175768
 * Callers:
 *     ?OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z @ 0x180175750 (-OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x18017597C (-OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall CursorManager::OnCursorMessage(CursorManager *this, struct CursorMessage *a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, int *); // rcx
  __int64 (__fastcall **v7)(_QWORD, _QWORD, int *); // rax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)a2 )
  {
    if ( *(_BYTE *)a2 == 1 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 8LL))(
             *((_QWORD *)this + 7),
             *(_QWORD *)((char *)a2 + 4),
             *((unsigned int *)a2 + 4));
      if ( v4 < 0 )
      {
        v5 = 183LL;
        goto LABEL_26;
      }
    }
    else if ( *(_BYTE *)a2 == 2 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
             *((_QWORD *)this + 7),
             *(_QWORD *)((char *)a2 + 4),
             *((_QWORD *)a2 + 2));
      if ( v4 < 0 )
      {
        v5 = 187LL;
        goto LABEL_26;
      }
    }
    else
    {
      v2 = (unsigned int)*(unsigned __int8 *)a2 - 3;
      switch ( *(_BYTE *)a2 )
      {
        case 3:
          LODWORD(v2) = *((unsigned __int8 *)a2 + 16);
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 7) + 16LL))(
                 *((_QWORD *)this + 7),
                 *(_QWORD *)((char *)a2 + 4),
                 v2);
          if ( v4 < 0 )
          {
            v5 = 191LL;
            goto LABEL_26;
          }
          break;
        case 6:
          v4 = CursorManager::OnCursorTargetChanged(this, a2);
          if ( v4 < 0 )
          {
            v5 = 195LL;
            goto LABEL_26;
          }
          break;
        case 8:
          LOBYTE(a2) = *((_BYTE *)a2 + 16);
          v4 = (*(__int64 (__fastcall **)(_QWORD, struct CursorMessage *))(**((_QWORD **)this + 7) + 40LL))(
                 *((_QWORD *)this + 7),
                 a2);
          if ( v4 < 0 )
          {
            v5 = 199LL;
            goto LABEL_26;
          }
          break;
        default:
          v3 = (unsigned int)*(unsigned __int8 *)a2 - 9;
          if ( *(_BYTE *)a2 == 9 )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 48LL))(
                   *((_QWORD *)this + 7),
                   *(_QWORD *)((char *)a2 + 4),
                   *((unsigned int *)a2 + 4));
            if ( v4 < 0 )
            {
              v5 = 203LL;
              goto LABEL_26;
            }
          }
          else
          {
            if ( *(_BYTE *)a2 != 10 )
            {
              v4 = -2147418113;
              v5 = 211LL;
LABEL_26:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v5,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
                (const char *)(unsigned int)v4);
              return (unsigned int)v4;
            }
            LODWORD(v3) = *((unsigned __int8 *)a2 + 16);
            v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 7) + 56LL))(
                   *((_QWORD *)this + 7),
                   *(_QWORD *)((char *)a2 + 4),
                   v3);
            if ( v4 < 0 )
            {
              v5 = 207LL;
              goto LABEL_26;
            }
          }
          break;
      }
    }
  }
  else
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, int *))*((_QWORD *)this + 7);
    v7 = *v6;
    *(_OWORD *)v9 = *((_OWORD *)a2 + 1);
    v4 = (*v7)(v6, *(_QWORD *)((char *)a2 + 4), v9);
    if ( v4 < 0 )
    {
      v5 = 179LL;
      goto LABEL_26;
    }
  }
  return 0LL;
}
