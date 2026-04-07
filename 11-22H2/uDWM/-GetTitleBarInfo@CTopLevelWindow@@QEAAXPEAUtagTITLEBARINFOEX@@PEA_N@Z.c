/*
 * XREFs of ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180011734
 * Callers:
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x18001169C (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 * Callees:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180011978 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18001C860 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     floor @ 0x18005D2C8 (floor.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 */

void __fastcall CTopLevelWindow::GetTitleBarInfo(CTopLevelWindow *this, struct tagTITLEBARINFOEX *a2, bool *a3)
{
  DWORD v6; // ecx
  int SystemMetrics; // eax
  LONG v8; // ecx
  __int64 v9; // rax
  RECT *v10; // r14
  DWORD *v11; // rdi
  int i; // esi
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  int v16; // edx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // [rsp+20h] [rbp-48h] BYREF
  RECT v20; // [rsp+24h] [rbp-44h]

  if ( CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 156)) )
  {
    *a3 = 1;
    *(_OWORD *)a2->rgstate = 0LL;
    *(_QWORD *)&a2->rgstate[4] = 0LL;
    memset_0(a2->rgrect, 0, sizeof(a2->rgrect));
    v6 = a2->rgstate[0] | 0x100000;
    a2->rgstate[0] = v6;
    if ( (*(_DWORD *)(*((_QWORD *)this + 94) + 116LL) & 0xC00000) != 0 )
    {
      a2->rcTitleBar.left = *((_DWORD *)this + 157);
      SystemMetrics = GetSystemMetrics(8);
      a2->rcTitleBar.top = (int)floor((float)((float)SystemMetrics * *(float *)(*((_QWORD *)this + 94) + 332LL)) + 0.5);
      v8 = *((_DWORD *)this + 32) - *((_DWORD *)this + 158);
      a2->rcTitleBar.right = v8;
      a2->rcTitleBar.bottom = *((_DWORD *)this + 159);
      v9 = *((_QWORD *)this + 72);
      if ( v9 )
      {
        v16 = *((_DWORD *)this + 156);
        if ( (v16 & 0x10000) != 0 )
        {
          v17 = *(_DWORD *)(v9 + 128);
          if ( (v16 & 0x20000) != 0 )
            a2->rcTitleBar.right = v8 - v17;
          else
            a2->rcTitleBar.left += v17;
        }
      }
      OffsetRect(
        &a2->rcTitleBar,
        *(_DWORD *)(*((_QWORD *)this + 94) + 48LL),
        *(_DWORD *)(*((_QWORD *)this + 94) + 52LL));
      a2->rgstate[1] = 0x8000;
      v10 = &a2->rgrect[2];
      v11 = &a2->rgstate[2];
      for ( i = 2; i <= 5; ++i )
      {
        v13 = 1LL;
        switch ( i )
        {
          case 2:
            v19 = 1;
            break;
          case 3:
            v19 = 2;
            v13 = 2LL;
            break;
          case 4:
            v19 = 0;
            v13 = 0LL;
            break;
          case 5:
            v19 = 3;
            v13 = 3LL;
            break;
        }
        v14 = *((_DWORD *)this + 156);
        if ( (v14 & dword_180120AB8[2 * v13]) != 0 )
        {
          if ( (v14 & dword_180120AB8[2 * v13 + 1]) != 0 )
          {
            v15 = *((_QWORD *)this + v13 + 66);
            if ( v15 && *(_DWORD *)(v15 + 376) == 2 )
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
          CTopLevelWindow::NcAdornmentInfoQuery(this, (struct NCADORNMENT_INFO *)&v19);
          if ( (*((_BYTE *)this + 624) & 0x20) != 0 )
          {
            v18 = *((_QWORD *)this + 94);
            v20.top = *((_DWORD *)this + 171) + *(_DWORD *)(v18 + 52);
            if ( i == 5 )
              v20.right = *((_DWORD *)this + 32) + *(_DWORD *)(v18 + 48) - *((_DWORD *)this + 170);
          }
          *v10 = v20;
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
