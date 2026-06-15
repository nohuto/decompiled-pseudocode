/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800E64CC
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800E6F6C (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001DD20 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppAudioSessionId::Initialize(GUID *this, struct IAudioProcess *a2, const struct _GUID *a3, int a4)
{
  int v7; // ebx
  __int64 v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  char *v12; // rax

  if ( a4 )
  {
    if ( !a3 )
      goto LABEL_3;
    v8 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v8 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v8 )
    {
LABEL_3:
      v7 = -2147024809;
LABEL_21:
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 371, v7);
      return (unsigned int)v7;
    }
LABEL_9:
    this[1] = *a3;
    if ( a4 )
      goto LABEL_20;
    goto LABEL_12;
  }
  if ( a3 )
    goto LABEL_9;
  this[1] = GUID_00000000_0000_0000_0000_000000000000;
LABEL_12:
  v9 = (char *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
  v10 = -1LL;
  if ( v9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)&v9[2 * v11] );
  }
  else
  {
    LODWORD(v11) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((void **)this->Data4, v9, v11);
  v12 = (char *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
  if ( v12 )
  {
    do
      ++v10;
    while ( *(_WORD *)&v12[2 * v10] );
  }
  else
  {
    LODWORD(v10) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((void **)this, v12, v10);
LABEL_20:
  *(_DWORD *)this[2].Data4 = a4;
  v7 = CAppAudioSessionId::CalculateStaticId(this);
  if ( v7 < 0 )
    goto LABEL_21;
  return (unsigned int)v7;
}
