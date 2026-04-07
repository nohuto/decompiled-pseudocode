/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003D0E8
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003DBEC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18003D4C8 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18003DF84 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180041028 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180054A64 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  unsigned int v2; // ebx
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
  int v17; // edi
  int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-68h]
  CDWMDisplay *v23[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  v23[0] = 0LL;
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
        v24 = 0LL;
        if ( (unsigned int)GetUniformSpaceMapping(*(_QWORD *)(v9 + 104), &v24) )
          *(_OWORD *)(v9 + 204) = v24;
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
            v19 = 60;
            goto LABEL_39;
          }
          if ( ((2 * (32 - v12)) & (unsigned __int64)-(__int64)(v12 != 0)) < 2 )
          {
            v19 = 65;
LABEL_39:
            v18 = -2147024809;
            v2 = -2147024809;
            v17 = -2147024809;
LABEL_40:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v19, 0LL);
            v22 = 267;
            goto LABEL_41;
          }
          if ( (*(_BYTE *)(v9 + 220) & 8) != 0 && !*(_QWORD *)(v9 + 104) )
          {
            v2 = -2003304442;
            v17 = -2003304442;
            v18 = -2003304442;
            v19 = 74;
            goto LABEL_40;
          }
          v13 = (CDWMDisplay *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 280LL);
          v23[1] = v13;
          if ( v13 )
            v14 = CDWMDisplay::CDWMDisplay(v13, v3, (struct CDWMDXGIAdapter *)v6, (const struct DXGIOutputInfo *)v9);
          else
            v14 = 0LL;
          v23[0] = v14;
          if ( !v14 )
          {
            v2 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x113u, 0LL);
            goto LABEL_4;
          }
          v15 = *((_DWORD *)this + 16);
          v16 = v15 + 1;
          if ( v15 + 1 < v15 )
          {
            v2 = -2147024362;
            v17 = -2147024362;
            v20 = 181;
LABEL_37:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v20, 0LL);
            v22 = 277;
LABEL_41:
            v21 = v17;
            goto LABEL_45;
          }
          v17 = 0;
          if ( v16 <= *((_DWORD *)this + 15) )
          {
            *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v14;
            *((_DWORD *)this + 16) = v16;
          }
          else
          {
            v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, v23);
            v2 = v17;
            if ( v17 < 0 )
            {
              v20 = 192;
              goto LABEL_37;
            }
          }
          v2 = v17;
          v23[0] = 0LL;
        }
      }
      if ( ++v7 >= *(_DWORD *)(v6 + 376) )
        goto LABEL_3;
    }
    v22 = 242;
    v21 = updated;
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v22, 0LL);
  }
LABEL_4:
  if ( v23[0] )
    CDWMDisplay::Release(v23[0]);
  return v2;
}
