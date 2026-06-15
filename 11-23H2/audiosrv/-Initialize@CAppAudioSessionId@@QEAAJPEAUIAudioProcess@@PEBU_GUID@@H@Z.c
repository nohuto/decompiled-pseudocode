/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18003EFC8
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18003EEA0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001C524 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppAudioSessionId::Initialize(
        CAppAudioSessionId *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        int a4)
{
  __int64 v7; // rax
  int v8; // ebx
  _WORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  _WORD *v13; // rax

  if ( a4 )
  {
    if ( !a3 )
      goto LABEL_11;
    v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v7 )
    {
LABEL_11:
      v8 = -2147024809;
      goto LABEL_20;
    }
LABEL_6:
    *((struct _GUID *)this + 1) = *a3;
    if ( a4 )
      goto LABEL_7;
    goto LABEL_12;
  }
  if ( a3 )
    goto LABEL_6;
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
LABEL_12:
  v10 = (_WORD *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
  v11 = -1LL;
  if ( v10 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v10[v12] );
  }
  else
  {
    LODWORD(v12) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this + 1, v10, v12);
  v13 = (_WORD *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
  if ( v13 )
  {
    do
      ++v11;
    while ( v13[v11] );
  }
  else
  {
    LODWORD(v11) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this, v13, v11);
LABEL_7:
  *((_DWORD *)this + 10) = a4;
  v8 = CAppAudioSessionId::CalculateStaticId((const GUID *)this);
  if ( v8 < 0 )
LABEL_20:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 371, v8);
  return (unsigned int)v8;
}
