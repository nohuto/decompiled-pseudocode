/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003D34C
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003C3BC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180016C2C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18003D728 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18003D84C (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003DE08 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  int v2; // ebx
  bool v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int v7; // esi
  __int64 v9; // rdi
  int updated; // eax
  _WORD *v11; // rcx
  __int64 v12; // rax
  CDWMDisplay *v13; // rax
  CDWMDisplay *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-68h]
  CDWMDisplay *v21[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  v21[0] = 0LL;
  v3 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 48LL)) != 0;
  v4 = 0;
  v5 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v5 + 80) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL * v4);
      v7 = 0;
      if ( *(_DWORD *)(v6 + 376) )
        break;
LABEL_3:
      ++v4;
      v5 = *((_QWORD *)this + 1);
      if ( v4 >= *(_DWORD *)(v5 + 80) )
        goto LABEL_4;
    }
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 352) + 304LL * v7;
      updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v9);
      v2 = updated;
      if ( updated < 0 )
        break;
      if ( *(_DWORD *)(v9 + 204) || *(_DWORD *)(v9 + 208) || *(_DWORD *)(v9 + 212) || *(_DWORD *)(v9 + 216) )
      {
        v22 = 0LL;
        if ( (unsigned int)GetUniformSpaceMapping(*(_QWORD *)(v9 + 104), &v22) )
          *(_OWORD *)(v9 + 204) = v22;
        if ( *(char *)(v9 + 220) >= 0 )
        {
          CAnalogCompositorManager::GetInstance();
          v11 = (_WORD *)(v9 + 224);
          if ( v9 == -224 )
            goto LABEL_38;
          v12 = 32LL;
          do
          {
            if ( !*v11 )
              break;
            ++v11;
            --v12;
          }
          while ( v12 );
          if ( !v12 )
          {
LABEL_38:
            v17 = 60;
            goto LABEL_39;
          }
          if ( ((2 * (32 - v12)) & (unsigned __int64)-(__int64)(v12 != 0)) < 2 )
          {
            v17 = 65;
LABEL_39:
            v2 = -2147024809;
LABEL_40:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v17);
            v20 = 267;
            goto LABEL_41;
          }
          if ( (*(_BYTE *)(v9 + 220) & 8) != 0 && !*(_QWORD *)(v9 + 104) )
          {
            v2 = -2003304442;
            v17 = 74;
            goto LABEL_40;
          }
          v13 = (CDWMDisplay *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 264LL);
          v21[1] = v13;
          if ( v13 )
            v14 = CDWMDisplay::CDWMDisplay(v13, v3, (struct CDWMDXGIAdapter *)v6, (const struct DXGIOutputInfo *)v9);
          else
            v14 = 0LL;
          v21[0] = v14;
          if ( !v14 )
          {
            v2 = -2147024882;
            v20 = 275;
            goto LABEL_41;
          }
          v15 = *((_DWORD *)this + 16);
          v16 = v15 + 1;
          if ( v15 + 1 < v15 )
          {
            v2 = -2147024362;
            v18 = 181;
LABEL_37:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v18);
            v20 = 277;
LABEL_41:
            v19 = v2;
            goto LABEL_45;
          }
          if ( v16 <= *((_DWORD *)this + 15) )
          {
            *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v14;
            *((_DWORD *)this + 16) = v16;
            v2 = 0;
          }
          else
          {
            v2 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, v21);
            if ( v2 < 0 )
            {
              v18 = 192;
              goto LABEL_37;
            }
          }
          v21[0] = 0LL;
        }
      }
      if ( ++v7 >= *(_DWORD *)(v6 + 376) )
        goto LABEL_3;
    }
    v20 = 242;
    v19 = updated;
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20);
  }
LABEL_4:
  if ( v21[0] )
    CDWMDisplay::Release(v21[0]);
  return (unsigned int)v2;
}
