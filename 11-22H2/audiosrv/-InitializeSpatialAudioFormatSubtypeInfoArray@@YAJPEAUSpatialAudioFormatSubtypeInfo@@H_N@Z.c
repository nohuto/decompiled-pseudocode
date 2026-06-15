/*
 * XREFs of ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x180037170
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180036E40 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x1800706C4 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall InitializeSpatialAudioFormatSubtypeInfoArray(struct SpatialAudioFormatSubtypeInfo *a1)
{
  int ActivationFactory; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  int v6; // ebx
  const unsigned __int16 *StringRawBuffer; // rax
  struct SpatialAudioFormatSubtypeInfo *cotaskmem_string_nothrow; // rax
  struct SpatialAudioFormatSubtypeInfo *v9; // r14
  void **v10; // rsi
  void *v11; // r15
  void *v12; // r12
  HSTRING v13; // rsi
  DWORD v14; // ebx
  __int64 v15; // rax
  const unsigned __int16 *v16; // rax
  struct SpatialAudioFormatSubtypeInfo *v17; // rax
  struct SpatialAudioFormatSubtypeInfo *v18; // r14
  void **v19; // rsi
  void *v20; // r15
  void *v21; // r12
  HSTRING v22; // rsi
  DWORD v23; // ebx
  __int64 v24; // rax
  const unsigned __int16 *v25; // rax
  struct SpatialAudioFormatSubtypeInfo *v26; // rax
  struct SpatialAudioFormatSubtypeInfo *v27; // r14
  void **v28; // rsi
  void *v29; // r15
  void *v30; // r12
  HSTRING v31; // rsi
  DWORD v32; // ebx
  struct SpatialAudioFormatSubtypeInfo *v33; // rax
  struct SpatialAudioFormatSubtypeInfo *v34; // r14
  void **v35; // rsi
  void *v36; // r15
  void *v37; // r12
  __int64 v38; // rbx
  __int64 (__fastcall *v39)(__int64, HSTRING *); // r15
  HSTRING v40; // r14
  const unsigned __int16 *v41; // rax
  struct SpatialAudioFormatSubtypeInfo *v42; // rax
  struct SpatialAudioFormatSubtypeInfo *v43; // r14
  void **v44; // rsi
  void *v45; // r15
  void *v46; // r12
  HSTRING v47; // rsi
  DWORD v48; // ebx
  __int64 v49; // rax
  const unsigned __int16 *v50; // rax
  struct SpatialAudioFormatSubtypeInfo *v51; // rax
  struct SpatialAudioFormatSubtypeInfo *v52; // r14
  void **v53; // rsi
  void *v54; // r15
  void *v55; // r12
  HSTRING v56; // rsi
  DWORD v57; // ebx
  int v58; // eax
  __int64 v59; // rbx
  __int64 (__fastcall *v60)(__int64, HSTRING *); // r15
  HSTRING v61; // r14
  int v62; // eax
  const unsigned __int16 *v63; // rax
  struct SpatialAudioFormatSubtypeInfo *v64; // rax
  struct SpatialAudioFormatSubtypeInfo *v65; // r14
  void **v66; // rsi
  void *v67; // r15
  void *v68; // r12
  HSTRING v70; // rcx
  DWORD LastError; // ebx
  __int64 v72; // rdx
  HSTRING v73; // rcx
  __int64 v74; // rdx
  DWORD v75; // ebx
  DWORD v76; // ebx
  DWORD v77; // ebx
  DWORD v78; // esi
  DWORD v79; // ebx
  DWORD v80; // ebx
  DWORD v81; // esi
  DWORD v82; // ebx
  HSTRING v83; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v84; // [rsp+28h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-40h] BYREF
  __int64 v86; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v84 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Media.Audio.SpatialAudioFormatSubtype", 0x2Du, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_b3de8a47_83ee_4266_a945_bedf507afeed, &v84);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)ActivationFactory);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v84);
    return v3;
  }
  v83 = 0LL;
  v4 = *v84;
  v83 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v4 + 64))(v84, &v83);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v5);
    v70 = v83;
    if ( !v83 )
    {
LABEL_84:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v84);
      return (unsigned int)v6;
    }
LABEL_83:
    WindowsDeleteString(v70);
    goto LABEL_84;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(v83, 0LL);
  cotaskmem_string_nothrow = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                                       (wil *)&pv,
                                                                       StringRawBuffer,
                                                                       0xFFFFFFFFFFFFFFFFuLL);
  v9 = cotaskmem_string_nothrow;
  v10 = (void **)((char *)a1 + 40);
  if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 40) != cotaskmem_string_nothrow )
  {
    v11 = *(void **)cotaskmem_string_nothrow;
    v12 = *v10;
    if ( *v10 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v12);
      SetLastError(LastError);
    }
    *v10 = v11;
    *(_QWORD *)v9 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*v10 )
  {
    v72 = 88LL;
    goto LABEL_87;
  }
  *((_BYTE *)a1 + 33) = 1;
  v13 = v83;
  if ( v83 )
  {
    v14 = GetLastError();
    WindowsDeleteString(v13);
    SetLastError(v14);
  }
  v83 = 0LL;
  v15 = *v84;
  v83 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v15 + 72))(v84, &v83);
  if ( v6 < 0 )
  {
    v74 = 93LL;
LABEL_91:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v74,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v6);
    goto LABEL_93;
  }
  v16 = WindowsGetStringRawBuffer(v83, 0LL);
  v17 = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                  (wil *)&pv,
                                                  v16,
                                                  0xFFFFFFFFFFFFFFFFuLL);
  v18 = v17;
  v19 = (void **)((char *)a1 + 104);
  if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 104) != v17 )
  {
    v20 = *(void **)v17;
    v21 = *v19;
    if ( *v19 )
    {
      v75 = GetLastError();
      CoTaskMemFree(v21);
      SetLastError(v75);
    }
    *v19 = v20;
    *(_QWORD *)v18 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*v19 )
  {
    v72 = 95LL;
    goto LABEL_87;
  }
  *((_BYTE *)a1 + 97) = 1;
  v22 = v83;
  if ( v83 )
  {
    v23 = GetLastError();
    WindowsDeleteString(v22);
    SetLastError(v23);
  }
  v83 = 0LL;
  v24 = *v84;
  v83 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v24 + 56))(v84, &v83);
  if ( v6 < 0 )
  {
    v74 = 100LL;
    goto LABEL_91;
  }
  v25 = WindowsGetStringRawBuffer(v83, 0LL);
  v26 = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                  (wil *)&pv,
                                                  v25,
                                                  0xFFFFFFFFFFFFFFFFuLL);
  v27 = v26;
  v28 = (void **)((char *)a1 + 72);
  if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 72) != v26 )
  {
    v29 = *(void **)v26;
    v30 = *v28;
    if ( *v28 )
    {
      v76 = GetLastError();
      CoTaskMemFree(v30);
      SetLastError(v76);
    }
    *v28 = v29;
    *(_QWORD *)v27 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*v28 )
  {
    v72 = 102LL;
    goto LABEL_87;
  }
  *((_BYTE *)a1 + 65) = 1;
  v31 = v83;
  if ( v83 )
  {
    v32 = GetLastError();
    WindowsDeleteString(v31);
    SetLastError(v32);
  }
  v83 = 0LL;
  v33 = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                  (wil *)&pv,
                                                  L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}",
                                                  0xFFFFFFFFFFFFFFFFuLL);
  v34 = v33;
  v35 = (void **)((char *)a1 + 8);
  if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 8) != v33 )
  {
    v36 = *(void **)v33;
    v37 = *v35;
    if ( *v35 )
    {
      v77 = GetLastError();
      CoTaskMemFree(v37);
      SetLastError(v77);
    }
    *v35 = v36;
    *(_QWORD *)v34 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*v35 )
  {
    v72 = 109LL;
    goto LABEL_87;
  }
  *((_BYTE *)a1 + 1) = 1;
  v38 = (__int64)v84;
  v39 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*v84 + 80);
  v40 = v83;
  if ( v83 )
  {
    v78 = GetLastError();
    WindowsDeleteString(v40);
    SetLastError(v78);
  }
  v83 = 0LL;
  v6 = v39(v38, &v83);
  if ( v6 < 0 )
  {
    v74 = 113LL;
    goto LABEL_91;
  }
  v41 = WindowsGetStringRawBuffer(v83, 0LL);
  v42 = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                  (wil *)&pv,
                                                  v41,
                                                  0xFFFFFFFFFFFFFFFFuLL);
  v43 = v42;
  v44 = (void **)((char *)a1 + 136);
  if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 136) != v42 )
  {
    v45 = *(void **)v42;
    v46 = *v44;
    if ( *v44 )
    {
      v79 = GetLastError();
      CoTaskMemFree(v46);
      SetLastError(v79);
    }
    *v44 = v45;
    *(_QWORD *)v43 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*v44 )
  {
    v72 = 115LL;
LABEL_87:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v72,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)0x8007000ELL);
    v73 = v83;
    if ( !v83 )
      goto LABEL_104;
    goto LABEL_103;
  }
  *((_BYTE *)a1 + 129) = 1;
  v47 = v83;
  if ( v83 )
  {
    v48 = GetLastError();
    WindowsDeleteString(v47);
    SetLastError(v48);
  }
  v83 = 0LL;
  v49 = *v84;
  v83 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v49 + 88))(v84, &v83);
  if ( v6 < 0 )
  {
    v74 = 120LL;
    goto LABEL_91;
  }
  v50 = WindowsGetStringRawBuffer(v83, 0LL);
  v51 = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                  (wil *)&pv,
                                                  v50,
                                                  0xFFFFFFFFFFFFFFFFuLL);
  v52 = v51;
  v53 = (void **)((char *)a1 + 168);
  if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 168) != v51 )
  {
    v54 = *(void **)v51;
    v55 = *v53;
    if ( *v53 )
    {
      v80 = GetLastError();
      CoTaskMemFree(v55);
      SetLastError(v80);
    }
    *v53 = v54;
    *(_QWORD *)v52 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*v53 )
  {
    v72 = 122LL;
    goto LABEL_87;
  }
  *((_BYTE *)a1 + 161) = 1;
  v56 = v83;
  if ( v83 )
  {
    v57 = GetLastError();
    WindowsDeleteString(v56);
    SetLastError(v57);
  }
  v83 = 0LL;
  v86 = 0LL;
  v58 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*v84)(
          v84,
          &GUID_4565e6cb_d95b_5621_b6af_0e8849c57c80,
          &v86);
  v6 = v58;
  if ( v58 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v58);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v86);
LABEL_93:
    v70 = v83;
    if ( !v83 )
      goto LABEL_84;
    goto LABEL_83;
  }
  v59 = v86;
  v60 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v86 + 48LL);
  v61 = v83;
  if ( v83 )
  {
    v81 = GetLastError();
    WindowsDeleteString(v61);
    SetLastError(v81);
  }
  v83 = 0LL;
  v62 = v60(v59, &v83);
  v6 = v62;
  if ( v62 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v62);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v86);
    goto LABEL_93;
  }
  v63 = WindowsGetStringRawBuffer(v83, 0LL);
  v64 = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                  (wil *)&pv,
                                                  v63,
                                                  0xFFFFFFFFFFFFFFFFuLL);
  v65 = v64;
  v66 = (void **)((char *)a1 + 200);
  if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 200) != v64 )
  {
    v67 = *(void **)v64;
    v68 = *v66;
    if ( *v66 )
    {
      v82 = GetLastError();
      CoTaskMemFree(v68);
      SetLastError(v82);
    }
    *v66 = v67;
    *(_QWORD *)v65 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*v66 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)0x8007000ELL);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v86);
    v73 = v83;
    if ( !v83 )
    {
LABEL_104:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v84);
      return 2147942414LL;
    }
LABEL_103:
    WindowsDeleteString(v73);
    goto LABEL_104;
  }
  *((_BYTE *)a1 + 193) = 1;
  if ( v86 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
  if ( v83 )
    WindowsDeleteString(v83);
  if ( v84 )
    (*(void (__fastcall **)(__int64 *))(*v84 + 16))(v84);
  return 0LL;
}
