/*
 * XREFs of NtUserCreateWindowEx @ 0x1C00657B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CB4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C015A8BC (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
        __m128i *a3,
        __m128i *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  int v18; // r14d
  struct tagWND *v19; // rsi
  __int64 v20; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // r13d
  wchar_t *v28; // r15
  __m128i **v29; // rcx
  __m128i v30; // xmm0
  unsigned __int64 v31; // xmm0_8
  __int64 v32; // rax
  ULONG64 v33; // rdx
  __int64 v34; // rax
  __m128i *v35; // r14
  unsigned __int64 v36; // xmm0_8
  unsigned __int64 v37; // r8
  __m128i *v38; // rdi
  unsigned __int64 v39; // xmm0_8
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r8
  ULONG64 v42; // rdx
  unsigned __int64 v43; // r8
  __int64 *Window; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // [rsp+90h] [rbp-F8h]
  size_t Size[2]; // [rsp+98h] [rbp-F0h] BYREF
  int v57; // [rsp+A8h] [rbp-E0h]
  __m128i v58; // [rsp+B8h] [rbp-D0h] BYREF
  __m128i v59; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v60[2]; // [rsp+D8h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-A0h]
  __int128 v62; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v63; // [rsp+108h] [rbp-80h]
  __int128 v64; // [rsp+110h] [rbp-78h] BYREF
  __int64 v65; // [rsp+120h] [rbp-68h]
  __int128 v66; // [rsp+128h] [rbp-60h] BYREF
  __int64 v67; // [rsp+138h] [rbp-50h]
  _BYTE v68[64]; // [rsp+148h] [rbp-40h] BYREF

  *(_OWORD *)Size = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v18 = 0;
  v55 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v57 = 0;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v60);
  if ( a10 == -3 )
  {
    v19 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v22 = *(_QWORD *)(ThreadWin32Thread + 456);
      if ( v22 )
        v19 = *(struct tagWND **)(v22 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_88;
  }
  else if ( a10 )
  {
    v19 = (struct tagWND *)ValidateHwnd(a10);
    if ( !v19 )
    {
LABEL_4:
      v20 = 0LL;
      goto LABEL_82;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) != 0 )
  {
LABEL_88:
    v20 = 0LL;
    UserSetLastError(87LL);
    goto LABEL_78;
  }
  if ( (a5 & 0xC0000000) != 0x40000000 && a11 )
  {
    v53 = ValidateHmenu(a11);
    v61 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v60, v53);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v60) )
      goto LABEL_4;
    v54 = v61;
    if ( !v61 )
      v54 = *(_QWORD *)v60[0];
    *(_QWORD *)&v62 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v62;
    *((_QWORD *)&v62 + 1) = v54;
    HMLockObject(v54);
    v55 = 1;
  }
  else
  {
    v23 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v68, a11);
    v61 = *(_QWORD *)(v23 + 16);
    SmartObjStackRefBase<tagMENU>::operator=(v60, **(_QWORD **)v23);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v68);
  }
  v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  LOWORD(v25) = 0;
  if ( *(_DWORD *)(v24 + 632) <= 0x400u )
    v25 = *(_DWORD *)(v24 + 648);
  v26 = a1 & 0x800777FF;
  if ( (v25 & 0x800) == 0 )
    v26 = a1;
  v27 = v26 & 0x8A7F77FF;
  if ( (v26 & 0x8A7F77FF) == v26 )
    v27 = v26;
  v28 = (wchar_t *)a2;
  v29 = (__m128i **)MmUserProbeAddress;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a2 >= MmUserProbeAddress )
      v28 = (wchar_t *)MmUserProbeAddress;
    v30 = *(__m128i *)v28;
    Size[0] = *(_QWORD *)v28;
    v31 = _mm_srli_si128(v30, 8).m128i_u64[0];
    Size[1] = v31;
    if ( v31 )
    {
      if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
      {
        v32 = LODWORD(Size[0]);
        v42 = v31 + LODWORD(Size[0]) + 1LL;
        if ( v42 < v31 || v42 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v31 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v32 = LODWORD(Size[0]);
        v33 = v31 + LODWORD(Size[0]) + 2LL;
        if ( v33 < v31 || v33 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      v34 = Win32AllocPoolWithQuotaZInit(v32 + 2, 2020897621LL);
      Size[1] = v34;
      if ( !v34 )
        ExRaiseStatus(-1073741801);
      v57 = 1;
      PushW32ThreadLock(v34, &v66, Win32FreePool);
      memmove((void *)Size[1], (const void *)v31, LODWORD(Size[0]));
      *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
      HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
      v29 = (__m128i **)MmUserProbeAddress;
    }
    else
    {
      LODWORD(Size[0]) = 0;
    }
    v28 = (wchar_t *)Size;
  }
  v35 = a3;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a3 >= *v29 )
      v35 = *v29;
    v58 = *v35;
    v36 = _mm_srli_si128(v58, 8).m128i_u64[0];
    if ( v36 )
    {
      if ( v58.m128i_i32[0] > (v58.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v58.m128i_i32[1] < 0 )
      {
        v43 = v36 + v58.m128i_u32[0] + 1LL;
        if ( v43 < v36 || v43 > (unsigned __int64)*v29 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v58.m128i_i8[8] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v37 = v36 + v58.m128i_u32[0] + 2LL;
        if ( v37 < v36 || v37 > (unsigned __int64)*v29 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v58.m128i_i32[0] = 0;
    }
    v35 = &v58;
  }
  v38 = a4;
  if ( a4 )
  {
    if ( a4 >= *v29 )
      v38 = *v29;
    v59 = *v38;
    v39 = _mm_srli_si128(v59, 8).m128i_u64[0];
    if ( v39 )
    {
      if ( v59.m128i_i32[0] > (v59.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v59.m128i_i32[1] < 0 )
      {
        v41 = v39 + v59.m128i_u32[0] + 1LL;
        if ( v41 < v39 || v41 > (unsigned __int64)*v29 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v59.m128i_i8[8] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v40 = v39 + v59.m128i_u32[0] + 2LL;
        if ( v40 < v39 || v40 > (unsigned __int64)*v29 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v59.m128i_i32[0] = 0;
    }
    v38 = &v59;
  }
  *(_QWORD *)&v64 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v64;
  *((_QWORD *)&v64 + 1) = v19;
  if ( v19 )
    HMLockObject(v19);
  Window = (__int64 *)xxxCreateWindowEx(
                        v27,
                        v28,
                        (__int64)v35,
                        (__int64)v38,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        v19,
                        (__int64)v60,
                        a12,
                        a13,
                        a14,
                        a15,
                        a16,
                        a17);
  v20 = 0LL;
  if ( Window )
    v20 = *Window;
  ThreadUnlock1(v46, v45, v47);
  v18 = v55;
LABEL_78:
  if ( v57 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v66);
  if ( v18 )
    ThreadUnlock1(v49, v48, v50);
LABEL_82:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v60);
  UserSessionSwitchLeaveCrit(v51);
  return v20;
}
