/*
 * XREFs of ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015A5CC
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01EDA7C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01EE0D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     PtiCurrentShared @ 0x1C00418E4 (PtiCurrentShared.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     DrawFrame @ 0x1C00C35F4 (DrawFrame.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00E7390 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00E74B4 (TextCopy.c)
 *     GreSelectFont @ 0x1C00E8510 (GreSelectFont.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E89FC (RtlInitLargeUnicodeString.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     DrawTextExWorker @ 0x1C025B810 (DrawTextExWorker.c)
 */

void __fastcall xxxDrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v9; // r14d
  int v10; // r8d
  int v11; // ecx
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 *v21; // rbx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  RECT v23; // xmm6
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _BYTE v28[24]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+7Ch] [rbp-8Ch]
  __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  RECT v33; // [rsp+88h] [rbp-80h] BYREF
  __int128 v34; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 v35[256]; // [rsp+A8h] [rbp-60h] BYREF

  DCEx = a2;
  if ( a2 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
  }
  v10 = *((_DWORD *)a1 + 29);
  v11 = v10 * a4 + *((_DWORD *)a1 + 22);
  LODWORD(v29) = v10 * a3 + *((_DWORD *)a1 + 21);
  HIDWORD(v29) = v11;
  v30 = v29 + v10;
  v31 = v11 + v10;
  DrawFrame(DCEx, (int *)&v29, 2, a5 != 0 ? 104 : 120);
  v12 = 0;
  if ( a5 )
  {
    v32 = 0LL;
    v13 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 4640LL));
    v14 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 4628LL));
    DPIServerInfo = GetDPIServerInfo(v16, v15);
    v18 = GreSelectFont(DCEx, *(_QWORD *)(DPIServerInfo + 8));
    v19 = (_QWORD *)*((_QWORD *)a1 + 4);
    v29 = v18;
    v20 = HMValidateHandleNoSecure(*v19, 1);
    v21 = (unsigned __int64 *)v20;
    if ( v20 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v20 + 40) + 184LL) )
      {
        *(_OWORD *)v28 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v20 + 184),
                    (struct _LARGE_UNICODE_STRING *)v28);
        v12 = TextCopy((__int64)StrName, (char *)v35, 0x100u);
      }
      else
      {
        v35[0] = 0;
      }
      v23 = *(RECT *)((char *)a1 + 92);
      v33 = v23;
      FillRect(DCEx, &v33, *(HBRUSH *)(gpsi + 4816LL));
      v24 = PtiCurrentShared();
      if ( (*(_DWORD *)(*(_QWORD *)(v24 + 424) + 760LL) & 0xF) == 0 || (*(_DWORD *)(v24 + 488) & 1) != 0 )
      {
        *(_QWORD *)v28 = 20LL;
        *(_QWORD *)&v28[12] = 0LL;
        *(_DWORD *)&v28[8] = 0;
        DrawTextExWorker(DCEx, v35, v12, &v33, 0x8820u, (struct tagDRAWTEXTPARAMS *)v28);
      }
      else
      {
        memset(v28, 0, sizeof(v28));
        v33 = 0LL;
        v34 = 0LL;
        RtlInitLargeUnicodeString((__int64)&v34, (__int64)v35);
        v33 = v23;
        ThreadLock((__int64)v21, (__int64 *)v28);
        xxxSendTransformableMessageTimeout(
          v21,
          0x8Cu,
          (unsigned __int64)DCEx,
          (__int64)&v33,
          2u,
          0x64u,
          (unsigned __int64 *)&v32,
          1,
          0);
        ThreadUnlock1(v26, v25, v27);
      }
    }
    GreSelectFont(DCEx, v29);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor(DCEx, v13);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
