/*
 * XREFs of ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00D9094
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgAlloc @ 0x1C001E6F0 (HmgAlloc.c)
 *     INC_SHARE_REF_CNT @ 0x1C0020410 (INC_SHARE_REF_CNT.c)
 *     W32GetCurrentThread @ 0x1C0023364 (W32GetCurrentThread.c)
 *     HmgModifyHandleType @ 0x1C0064660 (HmgModifyHandleType.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0093754 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, HDEV a2, unsigned int a3, int a4)
{
  struct HOBJ__ *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct HOBJ__ *v12; // rdi
  struct _W32THREAD *CurrentThread; // rax
  __int64 v14; // rdx
  _OWORD *v15; // rax
  PKDPC *p_BufferChainingDpc; // rcx
  __int64 v17; // r9
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  HPALETTE *v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( a3 <= 2 )
  {
    v8 = HmgAlloc(0x860uLL, 1u, 0x11u);
    *(_QWORD *)this = v8;
    v12 = v8;
    if ( v8 )
    {
      if ( *((_WORD *)v8 + 6) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
      CurrentThread = (struct _W32THREAD *)W32GetCurrentThread();
      *(_QWORD *)(*(_QWORD *)this + 2128LL) = UMPDOBJ::GetThreadCurrentObj(CurrentThread);
      *(_DWORD *)(*(_QWORD *)this + 2136LL) = 0xFFFF;
      if ( a4 )
        HmgModifyHandleType(*(_QWORD *)v12 | 0x210000LL);
      v14 = 3LL;
      v15 = (_OWORD *)((char *)v12 + 544);
      p_BufferChainingDpc = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
      v17 = 3LL;
      do
      {
        *v15 = *(_OWORD *)p_BufferChainingDpc;
        v15[1] = *((_OWORD *)p_BufferChainingDpc + 1);
        v15[2] = *((_OWORD *)p_BufferChainingDpc + 2);
        v15[3] = *((_OWORD *)p_BufferChainingDpc + 3);
        v15[4] = *((_OWORD *)p_BufferChainingDpc + 4);
        v15[5] = *((_OWORD *)p_BufferChainingDpc + 5);
        v15[6] = *((_OWORD *)p_BufferChainingDpc + 6);
        v15 += 8;
        v18 = *((_OWORD *)p_BufferChainingDpc + 7);
        p_BufferChainingDpc += 16;
        *(v15 - 1) = v18;
        --v17;
      }
      while ( v17 );
      *v15 = *(_OWORD *)p_BufferChainingDpc;
      v15[1] = *((_OWORD *)p_BufferChainingDpc + 1);
      v19 = *((_OWORD *)p_BufferChainingDpc + 2);
      *((_QWORD *)v12 + 122) = (char *)v12 + 544;
      v20 = &dclevelDefault;
      v15[2] = v19;
      v21 = (_OWORD *)((char *)v12 + 80);
      do
      {
        *v21 = *(_OWORD *)v20;
        v21[1] = *((_OWORD *)v20 + 1);
        v21[2] = *((_OWORD *)v20 + 2);
        v21[3] = *((_OWORD *)v20 + 3);
        v21[4] = *((_OWORD *)v20 + 4);
        v21[5] = *((_OWORD *)v20 + 5);
        v21[6] = *((_OWORD *)v20 + 6);
        v21 += 8;
        v22 = *((_OWORD *)v20 + 7);
        v20 += 16;
        *(v21 - 1) = v22;
        --v14;
      }
      while ( v14 );
      *v21 = *(_OWORD *)v20;
      v21[1] = *((_OWORD *)v20 + 1);
      v21[2] = *((_OWORD *)v20 + 2);
      v21[3] = *((_OWORD *)v20 + 3);
      v21[4] = *((_OWORD *)v20 + 4);
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 136LL));
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 144LL));
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 96LL));
      *((_DWORD *)v12 + 8) = a3;
      *(_QWORD *)((char *)v12 + 36) = 0LL;
      *((_DWORD *)v12 + 11) = 0;
      *((_QWORD *)v12 + 149) = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
      v23 = *(_QWORD *)this + 176LL;
      *((_QWORD *)v12 + 220) = 0LL;
      *((_QWORD *)v12 + 157) = v23;
      *((_QWORD *)v12 + 174) = v23;
      *((_QWORD *)v12 + 191) = v23;
      *((_QWORD *)v12 + 208) = v23;
      *((_QWORD *)v12 + 218) = 0LL;
      *((_DWORD *)v12 + 438) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2092LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2088LL) = -1;
      v24 = *(_QWORD *)this;
      *(_QWORD *)(v24 + 1112) = 0LL;
      *(_QWORD *)(v24 + 1120) = 0LL;
      *((_QWORD *)v12 + 142) = 0LL;
      *((_QWORD *)v12 + 259) = 0LL;
      *((_QWORD *)v12 + 260) = 0LL;
      *((_QWORD *)v12 + 6) = a2;
    }
  }
  return this;
}
