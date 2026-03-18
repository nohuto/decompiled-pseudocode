/*
 * XREFs of ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1801B948C
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180081B1C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddIntervalOneDxBltEventId(CLegacySurfaceManager *this, __int64 a2)
{
  char *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v2 = (char *)this + 176;
  v3 = 0;
  v4 = *((unsigned int *)this + 50);
  v5 = 0;
  v6 = *((_QWORD *)this + 22);
  if ( (_DWORD)v4 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 22);
    do
    {
      if ( a2 == *v8 )
        break;
      ++v5;
      ++v8;
    }
    while ( v5 < (unsigned int)v4 );
  }
  if ( v5 == *((_DWORD *)this + 50) )
  {
    v9 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v9 < (unsigned int)v4 )
    {
      v3 = -2147024362;
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x1C3u);
      return v3;
    }
    if ( (unsigned int)v9 > *((_DWORD *)v2 + 5) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v2, 8u, 1, &v15);
      v10 = v12;
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xC0u);
        goto LABEL_12;
      }
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = a2;
      *((_DWORD *)v2 + 6) = v9;
    }
  }
  return v3;
}
