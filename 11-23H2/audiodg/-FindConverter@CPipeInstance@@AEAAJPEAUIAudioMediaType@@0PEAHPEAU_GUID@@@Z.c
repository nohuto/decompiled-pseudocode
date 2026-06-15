/*
 * XREFs of ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140024720
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPipeInstance::FindConverter(
        CPipeInstance *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        int *a4,
        struct _GUID *a5)
{
  int v8; // edi
  int v9; // ecx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13[10]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-60h] BYREF
  int v15; // [rsp+58h] [rbp-50h]
  float v16; // [rsp+64h] [rbp-44h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a4 = 1;
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))a3->lpVtbl->GetUncompressedAudioFormat)(a3, v14);
  if ( v8 < 0 )
  {
    v11 = 2274LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v8,
      v13[0]);
    return (unsigned int)v8;
  }
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, int *))a2->lpVtbl->GetUncompressedAudioFormat)(a2, v13);
  if ( v8 < 0 )
  {
    v11 = 2276LL;
    goto LABEL_11;
  }
  if ( v16 != *(float *)&v13[7] || (v9 = *((_DWORD *)this + 34), (v9 & 8) != 0) )
  {
    if ( (*((_BYTE *)this + 136) & 2) != 0 )
    {
      *a5 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
      if ( (*((_BYTE *)this + 136) & 8) != 0 )
        *a4 = 0;
      *((_DWORD *)this + 34) &= 0xFFFFFFF5;
      return 0LL;
    }
    v12 = 2281LL;
  }
  else if ( v15 == v13[4] )
  {
    if ( (v9 & 1) != 0 )
    {
      *a5 = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
      return 0LL;
    }
    v12 = 2310LL;
  }
  else
  {
    if ( (v9 & 4) != 0 )
    {
      *a5 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      *((_DWORD *)this + 34) &= ~4u;
      return 0LL;
    }
    v12 = 2302LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)0x887C0030LL,
    v13[0]);
  return 2289827888LL;
}
