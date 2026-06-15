/*
 * XREFs of ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x18011A69C
 * Callers:
 *     ??_GCCaptureReference@@QEAAPEAXI@Z @ 0x180119F64 (--_GCCaptureReference@@QEAAPEAXI@Z.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x18011A1E0 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 * Callees:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180056D68 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180119568 (--$_Try_emplace@AEBK$$V@-$map@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU.c)
 */

void __fastcall CCaptureNotifier::UpdateAudioCaptureStatus(CCaptureNotifier *a1, int a2, int a3, __int64 a4, char a5)
{
  char v5; // r14
  bool v8; // di
  bool v9; // si
  __int64 *v10; // rcx
  _DWORD *v11; // rcx
  const char *v12; // r9
  bool v13; // al
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = a3;
  v5 = a4;
  v8 = 0;
  v9 = 0;
  v10 = (__int64 *)((char *)a1 + 80);
  try
  {
    v11 = *(_DWORD **)std::map<unsigned long,APPLICATION_REF_DATA>::_Try_emplace<unsigned long const &,>(
                        v10,
                        (__int64)&v17,
                        &v19,
                        a4);
    if ( a2 )
    {
      if ( a2 != 1 )
        return;
      v15 = v11[8];
      if ( !v15 )
        return;
      v16 = v15 - 1;
      v11[8] = v16;
      v13 = v16 == 0;
      if ( v5 )
      {
        v14 = v11[9]-- == 1;
        v8 = v14;
      }
      if ( !a5 )
        goto LABEL_14;
      v14 = v11[10]-- == 1;
    }
    else
    {
      v13 = ++v11[8] == 1;
      if ( v5 )
        v8 = ++v11[9] == 1;
      if ( !a5 )
        goto LABEL_14;
      v14 = ++v11[10] == 1;
    }
    v9 = v14;
LABEL_14:
    if ( v13 || v8 || v9 )
      CCaptureNotifier::PublishCaptureAudioStatus(a1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x36D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v12);
  }
}
