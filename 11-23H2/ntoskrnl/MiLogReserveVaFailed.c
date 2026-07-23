/*
 * XREFs of MiLogReserveVaFailed @ 0x140A2EB54
 * Callers:
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     PsGetProcessSessionId @ 0x1402978B0 (PsGetProcessSessionId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall MiLogReserveVaFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY *v4; // rax
  _KPROCESS *Process; // rbx
  int v10; // ett
  __int64 v11; // r8
  __int64 v12; // r10
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D8h]
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  int Flink; // [rsp+80h] [rbp-88h] BYREF
  __int16 ProcessSessionId; // [rsp+84h] [rbp-84h]
  __int16 v25; // [rsp+86h] [rbp-82h]
  struct _LIST_ENTRY *v26; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+98h] [rbp-70h] BYREF
  int *p_Flink; // [rsp+B8h] [rbp-50h]
  int v29; // [rsp+C0h] [rbp-48h]
  int v30; // [rsp+C4h] [rbp-44h]
  __int64 *v31; // [rsp+C8h] [rbp-40h]
  int v32; // [rsp+D0h] [rbp-38h]
  int v33; // [rsp+D4h] [rbp-34h]
  unsigned __int64 *v34; // [rsp+D8h] [rbp-30h]
  int v35; // [rsp+E0h] [rbp-28h]
  int v36; // [rsp+E4h] [rbp-24h]
  unsigned __int64 *v37; // [rsp+E8h] [rbp-20h]
  int v38; // [rsp+F0h] [rbp-18h]
  int v39; // [rsp+F4h] [rbp-14h]
  unsigned __int64 *v40; // [rsp+F8h] [rbp-10h]
  int v41; // [rsp+100h] [rbp-8h]
  int v42; // [rsp+104h] [rbp-4h]
  __int64 *v43; // [rsp+108h] [rbp+0h]
  int v44; // [rsp+110h] [rbp+8h]
  int v45; // [rsp+114h] [rbp+Ch]
  __int64 *v46; // [rsp+118h] [rbp+10h]
  int v47; // [rsp+120h] [rbp+18h]
  int v48; // [rsp+124h] [rbp+1Ch]
  __int64 *v49; // [rsp+128h] [rbp+20h]
  int v50; // [rsp+130h] [rbp+28h]
  int v51; // [rsp+134h] [rbp+2Ch]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v4 = (struct _LIST_ENTRY *)&retaddr;
  if ( *(_QWORD *)&qword_140C698E8 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw((char *)&Process[2].Header.WaitListHead.Flink + 4);
    LODWORD(v4) = HIDWORD(Process[2].Header.WaitListHead.Flink);
    do
    {
      v10 = (int)v4;
      LODWORD(v4) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&Process[2].Header.WaitListHead.Flink + 1,
                      (unsigned int)v4 | 0x800,
                      (signed __int32)v4);
    }
    while ( v10 != (_DWORD)v4 );
    if ( ((unsigned __int16)v4 & 0x800) == 0 )
    {
      Flink = (int)Process[1].Header.WaitListHead.Flink;
      ProcessSessionId = PsGetProcessSessionId((__int64)Process);
      v25 = MEMORY[0xFFFFF780000002C4];
      v4 = Process[1].ThreadListHead.Flink;
      v26 = v4;
      if ( **(_DWORD **)&qword_140C698E8 > 5u )
      {
        LOBYTE(v4) = tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000000LL);
        if ( (_BYTE)v4 )
        {
          v30 = 0;
          v33 = 0;
          v36 = 0;
          v39 = 0;
          v42 = 0;
          v45 = 0;
          v48 = 0;
          v51 = 0;
          p_Flink = &Flink;
          v31 = &v16;
          v17 = Process[1].Affinity.StaticBitmap[1];
          v34 = &v17;
          v18 = Process[1].Affinity.Bitmap[0];
          v37 = &v18;
          v19 = Process[1].ActiveProcessors.StaticBitmap[5];
          v40 = &v19;
          v43 = &v20;
          v46 = &v21;
          v49 = &v22;
          v32 = 8;
          v35 = 8;
          v38 = 8;
          v41 = 8;
          v44 = 8;
          v47 = 8;
          v50 = 8;
          v29 = 16;
          v16 = a1;
          v20 = a2;
          v21 = a3;
          v22 = a4;
          LOBYTE(v4) = tlgWriteEx_EtwWriteEx(v12, (unsigned __int8 *)&word_14003858A, v11, 1u, v14, v15, 0xAu, &v27);
        }
      }
    }
  }
  return (char)v4;
}
