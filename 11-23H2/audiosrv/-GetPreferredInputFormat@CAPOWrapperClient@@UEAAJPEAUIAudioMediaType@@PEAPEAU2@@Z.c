/*
 * XREFs of ?GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800CF970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateAudioMediaType_Unsafe @ 0x1800699D4 (CreateAudioMediaType_Unsafe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::GetPreferredInputFormat(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int AudioMediaType_Unsafe; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 3) )
  {
    v5 = 321LL;
LABEL_15:
    v7 = -2147024809;
    goto LABEL_16;
  }
  if ( !a3 || !a2 )
  {
    v5 = 322LL;
    goto LABEL_15;
  }
  v6 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
  if ( !v6 )
  {
    v7 = -2004287480;
    v5 = 325LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)v7);
    return v7;
  }
  v8 = *((_QWORD *)this + 3);
  pv = 0LL;
  AudioMediaType_Unsafe = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v8 + 72LL))(v8, v6, &pv);
  v7 = AudioMediaType_Unsafe;
  if ( AudioMediaType_Unsafe >= 0 )
  {
    AudioMediaType_Unsafe = CreateAudioMediaType_Unsafe(
                              (const struct tWAVEFORMATEX *)pv,
                              (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                              a3);
    v7 = AudioMediaType_Unsafe;
    if ( AudioMediaType_Unsafe >= 0 )
    {
      v7 = 0;
      goto LABEL_13;
    }
    v10 = 331LL;
  }
  else
  {
    v10 = 328LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)(unsigned int)AudioMediaType_Unsafe);
LABEL_13:
  CoTaskMemFree(pv);
  return v7;
}
