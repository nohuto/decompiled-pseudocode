/*
 * XREFs of ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x1800BFEC4
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x1800BFD98 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1800636D7 (wcscmp_0.c)
 */

char __fastcall CImmersiveState::UpdateInfoIfTaskbar(CImmersiveState *this, HWND *a2)
{
  char v4; // di
  HMONITOR v5; // rbx
  bool v6; // al
  __int64 v7; // rdx
  __m128i v8; // xmm0
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // xmm0_8
  LONG left; // eax
  unsigned __int64 v12; // rcx
  LONG right; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int128 v21; // [rsp+30h] [rbp-D0h] BYREF
  HMONITOR v22; // [rsp+40h] [rbp-C0h]
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR ClassName[264]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  if ( GetClassNameW(a2[5], ClassName, 260)
    && (!wcscmp_0(ClassName, L"Shell_SecondaryTrayWnd") || !wcscmp_0(ClassName, L"Shell_TrayWnd")) )
  {
    v4 = 1;
    v5 = MonitorFromWindow(a2[5], 0);
    if ( v5 )
    {
      if ( !wcscmp_0(ClassName, L"Shell_TrayWnd") )
        *((_QWORD *)this + 8) = v5;
      v6 = 0;
      v7 = 0LL;
      if ( *((_DWORD *)this + 10) )
      {
        while ( !v6 )
        {
          v6 = v5 == *(HMONITOR *)(*((_QWORD *)this + 2) + 24 * v7 + 16);
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *((_DWORD *)this + 10) )
          {
            if ( v6 )
              return v4;
            goto LABEL_11;
          }
        }
      }
      else
      {
LABEL_11:
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 36);
        if ( GetMonitorInfoW(v5, &mi) )
        {
          v8 = *((__m128i *)a2 + 3);
          v22 = v5;
          v9 = v8.m128i_i64[0];
          v10 = _mm_srli_si128(v8, 8).m128i_u64[0];
          left = v9;
          if ( mi.rcWork.left < (int)v9 )
            left = mi.rcWork.left;
          v12 = HIDWORD(v9);
          LODWORD(v21) = left;
          if ( mi.rcWork.top < (int)v12 )
            LODWORD(v12) = mi.rcWork.top;
          DWORD1(v21) = v12;
          right = v10;
          if ( mi.rcWork.right > (int)v10 )
            right = mi.rcWork.right;
          DWORD2(v21) = right;
          v14 = HIDWORD(v10);
          if ( mi.rcWork.bottom > SHIDWORD(v10) )
            LODWORD(v14) = mi.rcWork.bottom;
          v15 = *((unsigned int *)this + 10);
          HIDWORD(v21) = v14;
          v16 = v15 + 1;
          if ( (int)v15 + 1 >= (unsigned int)v15 )
          {
            if ( v16 > *((_DWORD *)this + 9) )
            {
              v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 0x18u, 1, &v21);
              if ( v19 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xC0u);
            }
            else
            {
              v17 = 3 * v15;
              v18 = *((_QWORD *)this + 2);
              *(_OWORD *)(v18 + 8 * v17) = v21;
              *(_QWORD *)(v18 + 8 * v17 + 16) = v22;
              *((_DWORD *)this + 10) = v16;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
        }
      }
    }
  }
  return v4;
}
