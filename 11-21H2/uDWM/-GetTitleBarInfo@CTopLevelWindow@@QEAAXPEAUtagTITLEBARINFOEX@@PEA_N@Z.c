/*
 * XREFs of ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x18000315C
 * Callers:
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x1800030C4 (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 * Callees:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x18000339C (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180003768 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     floor @ 0x180060EC8 (floor.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

void __fastcall CTopLevelWindow::GetTitleBarInfo(CTopLevelWindow *this, struct tagTITLEBARINFOEX *a2, bool *a3)
{
  DWORD v6; // ecx
  int SystemMetrics; // eax
  LONG v8; // ecx
  int v9; // edx
  RECT *v10; // r14
  DWORD *v11; // rbx
  int i; // ebp
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-48h] BYREF
  RECT v18; // [rsp+24h] [rbp-44h]

  if ( CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 152)) )
  {
    *a3 = 1;
    *(_OWORD *)a2->rgstate = 0LL;
    *(_QWORD *)&a2->rgstate[4] = 0LL;
    memset_0(a2->rgrect, 0, sizeof(a2->rgrect));
    v6 = a2->rgstate[0] | 0x100000;
    a2->rgstate[0] = v6;
    if ( (*(_DWORD *)(*((_QWORD *)this + 94) + 116LL) & 0xC00000) != 0 )
    {
      a2->rcTitleBar.left = *((_DWORD *)this + 153);
      SystemMetrics = GetSystemMetrics(8);
      a2->rcTitleBar.top = (int)floor((float)((float)SystemMetrics * *(float *)(*((_QWORD *)this + 94) + 332LL)) + 0.5);
      v8 = *((_DWORD *)this + 32) - *((_DWORD *)this + 154);
      a2->rcTitleBar.right = v8;
      a2->rcTitleBar.bottom = *((_DWORD *)this + 155);
      v9 = *((_DWORD *)this + 152);
      if ( (v9 & 0x10000) != 0 )
      {
        v15 = *((_QWORD *)this + 68);
        if ( (v9 & 0x20000) != 0 )
          a2->rcTitleBar.right = v8 - *(_DWORD *)(v15 + 128);
        else
          a2->rcTitleBar.left += *(_DWORD *)(v15 + 128);
      }
      OffsetRect(
        &a2->rcTitleBar,
        *(_DWORD *)(*((_QWORD *)this + 94) + 48LL),
        *(_DWORD *)(*((_QWORD *)this + 94) + 52LL));
      v10 = &a2->rgrect[2];
      a2->rgstate[1] = 0x8000;
      v11 = &a2->rgstate[2];
      for ( i = 2; i <= 5; ++i )
      {
        v13 = 1LL;
        switch ( i )
        {
          case 2:
            v17 = 1;
            break;
          case 3:
            v17 = 2;
            v13 = 2LL;
            break;
          case 4:
            v17 = 0;
            v13 = 0LL;
            break;
          case 5:
            v17 = 3;
            v13 = 3LL;
            break;
        }
        v14 = *((_DWORD *)this + 152);
        if ( (v14 & dword_18011AEF0[2 * v13]) != 0 )
        {
          if ( (v14 & dword_18011AEF0[2 * v13 + 1]) != 0 )
          {
            if ( *(_DWORD *)(*((_QWORD *)this + v13 + 63) + 376LL) == 2 )
              *v11 |= 8u;
          }
          else
          {
            *v11 |= 1u;
          }
        }
        else
        {
          *v11 |= 0x8000u;
        }
        if ( (*v11 & 0x8000) == 0 )
        {
          CTopLevelWindow::NcAdornmentInfoQuery(this, (struct NCADORNMENT_INFO *)&v17);
          if ( (*((_BYTE *)this + 608) & 0x20) != 0 )
          {
            v16 = *((_QWORD *)this + 94);
            v18.top = *((_DWORD *)this + 167) + *(_DWORD *)(v16 + 52);
            if ( i == 5 )
              v18.right = *((_DWORD *)this + 32) + *(_DWORD *)(v16 + 48) - *((_DWORD *)this + 166);
          }
          *v10 = v18;
        }
        ++v11;
        ++v10;
      }
    }
    else
    {
      a2->rgstate[0] = v6 | 0x8000;
    }
  }
  else
  {
    *a3 = 0;
  }
}
