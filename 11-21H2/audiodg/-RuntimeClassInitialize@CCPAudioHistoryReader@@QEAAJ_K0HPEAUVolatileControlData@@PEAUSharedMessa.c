/*
 * XREFs of ?RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0HPEAUVolatileControlData@@PEAUSharedMessageQueueItem@@III0@Z @ 0x140087E88
 * Callers:
 *     ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI551@Z @ 0x140087648 (--$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44333@Z @ 0x14008777C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@@-$_tlgWriteTemplate@$.c)
 */

__int64 __fastcall CCPAudioHistoryReader::RuntimeClassInitialize(
        CCPAudioHistoryReader *this,
        struct VolatileControlData *a2,
        __int64 a3,
        __int64 a4,
        struct VolatileControlData *a5,
        struct SharedMessageQueueItem *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 a10)
{
  __int64 v10; // r11
  struct VolatileControlData *v11; // r10
  signed __int64 v12; // rsi
  struct SharedMessageQueueItem *v13; // r14
  unsigned __int64 v15; // r12
  unsigned int v16; // edi
  unsigned int v17; // r13d
  __int64 v18; // r15
  BOOL v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rdx
  unsigned __int64 v26; // rax
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rsi
  double v31; // xmm0_8
  int v32; // eax
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v34; // [rsp+B0h] [rbp+48h] BYREF
  CCPAudioHistoryReader *v35; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+58h]
  int v37; // [rsp+C8h] [rbp+60h]

  v37 = a4;
  v36 = a3;
  v10 = a3;
  v11 = a5;
  v12 = (signed __int64)a2;
  v13 = a6;
  v15 = a10;
  *((_DWORD *)this + 21) = a7;
  *((_DWORD *)this + 22) = a8;
  *((_DWORD *)this + 23) = a9;
  *((_QWORD *)this + 7) = v11;
  *((_QWORD *)this + 8) = v13;
  *((_QWORD *)this + 12) = v15;
  v16 = *((_DWORD *)v11 + 2);
  v17 = *(_DWORD *)(*((_QWORD *)this + 7) + 12LL);
  if ( (struct VolatileControlData *)a3 != a2 )
  {
    if ( (unsigned int)dword_1400C0010 <= 4 )
    {
      v18 = *((unsigned int *)v11 + 2);
    }
    else
    {
      a5 = a2;
      v18 = v16;
      a7 = v17;
      a9 = v16;
      v35 = this;
      a10 = *((_QWORD *)v13 + 8 * (unsigned __int64)v17 + 5);
      v34 = *((_QWORD *)v13 + 8 * (unsigned __int64)v16 + 5);
      LODWORD(a6) = *((_DWORD *)this + 21);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)this,
        byte_1400A70D1,
        a3,
        a4,
        (__int64)&v35,
        (__int64)&a6,
        (__int64)&a9,
        (__int64)&a7,
        (__int64)&v34,
        (__int64)&a10,
        (__int64)&a5);
      LODWORD(a4) = v37;
      v10 = v36;
    }
    v19 = !v17 || *((_QWORD *)v13 + 8 * (unsigned __int64)(v17 - 1) + 5) - *((_QWORD *)v13 + 8 * v18 + 5) >= v15;
    if ( (_DWORD)a4 || !v19 )
      v20 = 0LL;
    else
      v20 = 10000000LL;
    v21 = *((_QWORD *)v13 + 8 * v18 + 5);
    v22 = v21 + v20;
    if ( v12 < v21 + v20 )
    {
      v23 = -2005139331;
      v24 = 103LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
        (const char *)v23);
      return v23;
    }
    if ( !(_DWORD)a4 && v21 < v22 )
    {
      do
      {
        v26 = (unsigned __int64)((v16 + 1) % *((_DWORD *)this + 23)) << 6;
        v16 = (v16 + 1) % *((_DWORD *)this + 23);
      }
      while ( *(_QWORD *)((char *)v13 + v26 + 40) < v22 );
    }
    if ( v16 == v17 )
    {
LABEL_22:
      v23 = -2147023728;
      v24 = 137LL;
      goto LABEL_15;
    }
    while ( *((_QWORD *)v13 + 8 * (unsigned __int64)v16 + 5) <= v12 )
    {
      v16 = (v16 + 1) % *((_DWORD *)this + 23);
      if ( v16 == v17 )
        goto LABEL_22;
    }
    if ( v16 )
      v27 = v16 - 1;
    else
      v27 = *((_DWORD *)this + 23) - 1;
    v28 = a8;
    *((_DWORD *)this + 18) = v27;
    if ( *((_QWORD *)v13 + 8 * (unsigned __int64)v27 + 5)
       + (unsigned int)(int)((double)*((int *)v13 + 16 * (unsigned __int64)v27 + 14) * 10000000.0 / (double)v28 + 0.5) <= v12 )
    {
      v27 = v16;
      *((_DWORD *)this + 18) = v16;
      v12 = *((_QWORD *)v13 + 8 * (unsigned __int64)v16 + 5);
    }
    v29 = v27;
    v30 = v12 - *((_QWORD *)v13 + 8 * (unsigned __int64)v27 + 5);
    if ( v30 < 0 )
      v31 = (double)(int)(v30 & 1 | ((unsigned __int64)v30 >> 1))
          + (double)(int)(v30 & 1 | ((unsigned __int64)v30 >> 1));
    else
      v31 = (double)(int)v30;
    *((_DWORD *)this + 20) = *((_DWORD *)this + 21) * (int)(v31 * (double)v28 / 10000000.0 + 0.5);
    if ( v27 == v17 )
    {
LABEL_34:
      v23 = -2147023728;
      v24 = 155LL;
      goto LABEL_15;
    }
    while ( *((_QWORD *)v13 + 8 * (unsigned __int64)v29 + 5) != v10 )
    {
      v29 = (v29 + 1) % *((_DWORD *)this + 23);
      if ( v29 == v17 )
        goto LABEL_34;
    }
    if ( v29 )
      v32 = v29 - 1;
    else
      v32 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 19) = v32;
  }
  return 0LL;
}
