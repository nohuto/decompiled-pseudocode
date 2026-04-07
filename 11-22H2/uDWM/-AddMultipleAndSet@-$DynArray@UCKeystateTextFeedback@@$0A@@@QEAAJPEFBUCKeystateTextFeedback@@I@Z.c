/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCKeystateTextFeedback@@$0A@@@QEAAJPEFBUCKeystateTextFeedback@@I@Z @ 0x1800AF590
 * Callers:
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18006C342 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CKeystateTextFeedback,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 40, 1, a2);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC0u);
    }
    else
    {
      v6 = 5 * v2;
      v7 = *(_QWORD *)a1;
      *(_OWORD *)(v7 + 8 * v6) = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 8 * v6 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(v7 + 8 * v6 + 32) = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v5;
}
