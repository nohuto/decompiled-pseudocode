/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x18005036C
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18004FBF0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSourceProxy@@@Z @ 0x18000DA48 (--4-$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSour.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHorizontalStripHelper(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  void *v8; // rax
  unsigned int v9; // esi
  int v10; // edi
  int v11; // r13d
  __int64 v12; // r15
  int v13; // eax
  LONG top; // r8d
  int v15; // edi
  int v16; // r14d
  int v17; // r12d
  __int64 v18; // rax
  int v19; // eax
  int *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  unsigned int v27; // [rsp+30h] [rbp-B9h]
  int i; // [rsp+3Ch] [rbp-ADh]
  _OWORD *v31; // [rsp+40h] [rbp-A9h]
  CBaseObject *v32; // [rsp+58h] [rbp-91h]
  __int64 v33; // [rsp+60h] [rbp-89h]
  __int64 v34; // [rsp+68h] [rbp-81h]
  struct tagRECT rc; // [rsp+80h] [rbp-69h] BYREF
  struct tagRECT pRect; // [rsp+90h] [rbp-59h] BYREF
  _DWORD v38[4]; // [rsp+A0h] [rbp-49h] BYREF
  _DWORD v39[12]; // [rsp+B0h] [rbp-39h] BYREF

  v8 = a1;
  v9 = 0;
  v10 = a4;
  v11 = a3;
  v12 = 0LL;
  for ( i = a2; ; a2 = i )
  {
    if ( (unsigned __int16)GetThemeRect(v8, a2, 0, 8002, &pRect) != 1168 )
    {
      v13 = 0;
      top = pRect.top;
      v38[0] = v10;
      if ( pRect.bottom - pRect.top >= 0 )
        v13 = pRect.bottom - pRect.top;
      v15 = 0;
      v16 = 0;
      v17 = v13 / 2;
      v38[1] = a5;
      v38[2] = a6;
      while ( 2 )
      {
        v18 = a7;
        if ( v15 )
          v18 = a8;
        v33 = v18;
        rc.left = pRect.left;
        rc.right = pRect.right;
        rc.top = v16 + top;
        rc.bottom = v17 + v16 + top;
        InflateRect(&rc, -1, -1);
        v39[0] = rc.left;
        v39[1] = rc.top;
        v39[2] = rc.left + v11;
        v39[4] = rc.left + v11;
        v19 = rc.right - v11;
        v39[3] = rc.bottom;
        v27 = 0;
        v20 = v38;
        v39[6] = v19;
        v39[8] = v19;
        v31 = v39;
        v39[5] = rc.top;
        v39[7] = rc.bottom;
        v39[9] = rc.top;
        v39[10] = rc.right;
        v39[11] = rc.bottom;
        do
        {
          v34 = v12 + 2LL * *v20;
          v32 = CTopLevelWindow::s_pbsNonClientAtlas;
          v21 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  104LL);
          v22 = v21;
          if ( !v21 )
          {
            v25 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xABu);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A4A8, 1LL, -2147024882, 0x53Fu);
            return v25;
          }
          *(_DWORD *)(v21 + 8) = 1;
          *(_QWORD *)v21 = &CBitmapSource::`vftable';
          *(_QWORD *)(v21 + 16) = 0LL;
          *(_DWORD *)(v21 + 80) = 0x80000000;
          *(_DWORD *)(v21 + 88) = 0x80000000;
          *(_DWORD *)(v21 + 84) = 0x80000000;
          *(_DWORD *)(v21 + 92) = 0x80000000;
          *(_QWORD *)(v21 + 96) = 0LL;
          wil::com_ptr_t<CBitmapSourceProxy,wil::err_returncode_policy>::operator=(
            (CBaseObject **)(v21 + 16),
            *((volatile signed __int32 **)v32 + 2));
          v23 = 0;
          *(_OWORD *)(v22 + 80) = *v31;
          if ( *(_DWORD *)(v22 + 88) - *(_DWORD *)(v22 + 80) >= 0 )
            v23 = *(_DWORD *)(v22 + 88) - *(_DWORD *)(v22 + 80);
          *(_DWORD *)(v22 + 24) = v23;
          v24 = 0;
          if ( *(_DWORD *)(v22 + 92) - *(_DWORD *)(v22 + 84) >= 0 )
            v24 = *(_DWORD *)(v22 + 92) - *(_DWORD *)(v22 + 84);
          *(_DWORD *)(v22 + 28) = v24;
          *(_QWORD *)(v33 + 8 * v34 + 1480) = v22;
          ++v31;
          ++v20;
          ++v27;
        }
        while ( v27 < 3 );
        v11 = a3;
        ++v15;
        v16 += v17;
        if ( v15 < 2 )
        {
          top = pRect.top;
          continue;
        }
        break;
      }
      v10 = a4;
    }
    ++v9;
    ++v12;
    if ( v9 >= 2 )
      break;
    v8 = a1;
  }
  return 0;
}
