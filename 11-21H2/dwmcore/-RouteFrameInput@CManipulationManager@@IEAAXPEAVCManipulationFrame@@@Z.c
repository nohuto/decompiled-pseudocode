/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017F2CC
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017F234 (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18017AEB4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18017C198 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x18017C890 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x18017F674 (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017FBC0 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  CManipulationManager *v3; // r13
  int v4; // r15d
  __int64 v5; // rax
  char v6; // si
  bool v7; // si
  unsigned int v8; // eax
  unsigned int v9; // edi
  bool v10; // cf
  __int64 v11; // r12
  __int64 v12; // r14
  void *v13; // r15
  unsigned int v14; // r13d
  int v15; // edi
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  __int64 v21; // [rsp+28h] [rbp-100h]
  int v22; // [rsp+40h] [rbp-E8h] BYREF
  int v23; // [rsp+44h] [rbp-E4h]
  int v24; // [rsp+48h] [rbp-E0h] BYREF
  void *v25; // [rsp+50h] [rbp-D8h] BYREF
  void *v26; // [rsp+58h] [rbp-D0h]
  __int128 v27; // [rsp+60h] [rbp-C8h]
  __int128 v28; // [rsp+70h] [rbp-B8h]
  __int128 v29; // [rsp+80h] [rbp-A8h]
  __int128 v30; // [rsp+90h] [rbp-98h]
  __int128 v31; // [rsp+A0h] [rbp-88h]
  __int128 v32; // [rsp+B0h] [rbp-78h]
  __int128 v33; // [rsp+C0h] [rbp-68h]
  __int128 v34; // [rsp+D0h] [rbp-58h]
  __int128 v35; // [rsp+E0h] [rbp-48h]
  bool v37; // [rsp+140h] [rbp+18h]
  unsigned int v38; // [rsp+148h] [rbp+20h]

  v3 = this;
  v4 = 0;
  v23 = 0;
  v5 = 280LL;
  if ( *((_DWORD *)a2 + 92) != 5 )
    v5 = 272LL;
  if ( *(_QWORD *)((char *)this + v5) - *((_QWORD *)a2 + 56) > *((_QWORD *)this + 37) )
  {
    *((_BYTE *)a2 + 176) |= 2u;
    CManipulationManager::TargetFrameInput(this, a2);
  }
  v6 = *((_BYTE *)a2 + 176);
  if ( (v6 & 1) != 0 && !CManipulationFrame::IsMousewheelFrame(a2) )
  {
    v7 = (v6 & 4) != 0;
    v8 = *((_DWORD *)a2 + 4);
LABEL_8:
    v9 = 0;
    v38 = 0;
    v37 = v7;
LABEL_9:
    v10 = v9 < v8;
    while ( v10 )
    {
      v11 = 248LL * v9;
      v24 = v7;
      if ( (*((_BYTE *)a2 + v11 + 608) & 1) == v24
        && *(_DWORD *)((char *)a2 + v11 + 376)
        && !*(_DWORD *)((char *)a2 + v11 + 600) )
      {
        if ( *(_QWORD *)((char *)a2 + v11 + 392) == -1LL || CManipulationManager::CheckForBufferedDescendant(v3, a2, v9) )
        {
          v23 = ++v4;
        }
        else
        {
          AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
          dword_1803D73E8 = GetCurrentThreadId();
          v12 = 0LL;
          v13 = *(void **)((char *)a2 + v11 + 392);
          v26 = v13;
          v14 = v9;
          v15 = v24;
          while ( v14 < *((_DWORD *)a2 + 4) )
          {
            v16 = 248LL * v14;
            if ( *(void **)((char *)a2 + v16 + 392) == v13
              && (*((_BYTE *)a2 + v16 + 608) & 1) == v15
              && *(_DWORD *)((char *)a2 + v16 + 376) )
            {
              CManipulationManager::s_rgPointerIds[v12] = *(_DWORD *)((char *)a2 + v16 + 372);
              v12 = (unsigned int)(v12 + 1);
              *(_DWORD *)((char *)a2 + v16 + 376) = 0;
              if ( (unsigned int)dword_1803D0EF0 > 4 )
              {
                if ( tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
                {
                  v25 = v13;
                  v24 = *(_DWORD *)((char *)a2 + v16 + 372);
                  v22 = *((_DWORD *)a2 + 6);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    v17,
                    byte_180368A28,
                    v18,
                    v19,
                    (__int64)&v22,
                    (__int64)&v24,
                    (__int64)&v25);
                }
              }
              v27 = *((_OWORD *)a2 + 2);
              v28 = *((_OWORD *)a2 + 3);
              v29 = *((_OWORD *)a2 + 4);
              v30 = *((_OWORD *)a2 + 5);
              v31 = *((_OWORD *)a2 + 6);
              v32 = *((_OWORD *)a2 + 7);
              v33 = *((_OWORD *)a2 + 8);
              v34 = *((_OWORD *)a2 + 9);
              v35 = *((_OWORD *)a2 + 10);
              InputTraceLogging::GestureTargeting::RoutePointer(
                *((_QWORD *)a2 + 56),
                v27,
                *((_DWORD *)a2 + 6),
                *(_DWORD *)((char *)a2 + v16 + 372),
                v13);
            }
            ++v14;
          }
          v22 = v12;
          v9 = v38;
          v7 = v37;
          v4 = v23;
          v3 = this;
          SetManipulationInputTarget(
            *((unsigned int *)a2 + 6),
            v26,
            (unsigned int)v12,
            CManipulationManager::s_rgPointerIds,
            (char *)a2 + 32,
            v21);
          *((_DWORD *)a2 + 5) += v12;
          dword_1803D73E8 = 0;
          ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
        }
      }
      v38 = ++v9;
      v8 = *((_DWORD *)a2 + 4);
      v10 = v9 < v8;
      if ( v9 == v8 )
      {
        if ( !v7 )
          goto LABEL_9;
        v7 = 0;
        goto LABEL_8;
      }
    }
    v20 = *((_BYTE *)a2 + 176) & 0xFE;
    *((_BYTE *)a2 + 176) = v20;
    if ( !v4 )
      *((_BYTE *)a2 + 176) = v20 & 0xFB;
  }
}
