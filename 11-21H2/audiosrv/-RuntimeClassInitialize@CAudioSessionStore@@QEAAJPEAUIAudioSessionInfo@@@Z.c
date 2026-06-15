/*
 * XREFs of ?RuntimeClassInitialize@CAudioSessionStore@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180004310
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Z @ 0x18000331C (--$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Detail.c)
 * Callees:
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionStore::RuntimeClassInitialize(CAudioSessionStore *this, struct IAudioSessionInfo *a2)
{
  void *v4; // rdi
  __int64 v5; // rax
  char *v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  _WORD *v9; // rax
  _WORD *v10; // rdx
  __int64 v11; // r8
  _WORD *v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  char *v15; // rdi
  __int16 v16; // cx
  _WORD *v17; // rcx
  unsigned __int64 v18; // rsi
  bool v19; // cf
  __int64 (__fastcall *v20)(struct IAudioPolicyManager *, struct IAudioSessionInfo *, char *, _WORD *); // rdi
  __int64 v21; // rcx
  __int64 result; // rax
  unsigned int v23; // ebx
  DWORD LastError; // ebx
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v4);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 6) = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a2 + 64LL))(a2);
  v6 = (char *)v5;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(v5 + 2 * v7) );
  *((_QWORD *)this + 6) = 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 || !is_mul_ok(v8, 2uLL) )
  {
    v23 = -2147024362;
    goto LABEL_34;
  }
  v9 = CoTaskMemAlloc(2 * v8);
  v12 = v9;
  *((_QWORD *)this + 6) = v9;
  if ( !v9 )
  {
    v23 = -2147024882;
LABEL_34:
    v25 = 1970LL;
    goto LABEL_35;
  }
  if ( v8 > 0x7FFFFFFF )
  {
LABEL_26:
    *v9 = 0;
    goto LABEL_19;
  }
  if ( v7 >= 0x7FFFFFFF )
  {
    if ( v7 == -1LL )
      goto LABEL_19;
    goto LABEL_26;
  }
  if ( !v6 )
  {
    v6 = (char *)&unk_18017F160;
    v7 = 0LL;
  }
  if ( v8 )
  {
    v13 = v8;
    v10 = v12;
    v11 = 0LL;
    v14 = v7 - v8;
    v15 = (char *)(v6 - (char *)v12);
    while ( v14 + v13 )
    {
      v16 = *(_WORD *)((char *)v10 + (_QWORD)v15);
      if ( !v16 )
        break;
      *v10++ = v16;
      ++v11;
      if ( !--v13 )
      {
        *(v10 - 1) = 0;
        goto LABEL_19;
      }
    }
    *v10 = 0;
    v17 = &v12[v11 + 1];
    v19 = v8 == v11;
    v18 = v8 - v11;
    if ( !v19 && v18 != 1 )
    {
      v11 = 2 * v18;
      if ( 2 * v18 > 2 )
        memset_0(v17, 0, v11 - 2);
    }
  }
LABEL_19:
  v20 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioSessionInfo *, char *, _WORD *))(*(_QWORD *)g_PolicyManager + 408LL);
  v21 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64, _WORD *, __int64, _WORD *))(*(_QWORD *)v21 + 16LL))(v21, v10, v11, v12);
  result = v20(g_PolicyManager, a2, (char *)this + 56, v12);
  v23 = result;
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result != -2147024891 && (_DWORD)result != -2147024894 && (_DWORD)result != -2147467263 )
  {
    v25 = 1971LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v23,
      v26);
    return v23;
  }
  return result;
}
