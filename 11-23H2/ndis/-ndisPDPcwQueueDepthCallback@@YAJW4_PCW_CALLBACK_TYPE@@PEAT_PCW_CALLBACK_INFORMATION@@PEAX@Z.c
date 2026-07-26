/*
 * XREFs of ?ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C007BFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCountSetBits64@@YAK_K@Z @ 0x1C007B73C (-ndisCountSetBits64@@YAK_K@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C01182C8 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 */

__int64 __fastcall ndisPDPcwQueueDepthCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  NTSTATUS v3; // ebp
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 *v9; // rdi
  __int64 *i; // rbx
  ULONG InstanceId; // eax
  ULONG v12; // r8d
  struct _PCW_BUFFER *v13; // rcx
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  ULONG v16; // r8d
  struct _PCW_BUFFER *Buffer; // rcx
  struct _PCW_DATA v19; // [rsp+30h] [rbp-68h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-58h] BYREF
  KLockHolder v21; // [rsp+50h] [rbp-48h] BYREF

  v3 = 0;
  v21.m_State = Unlocked;
  v21.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
  v21.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v21);
  v6 = *(_QWORD *)&qword_1C00F5708;
  v7 = *(_QWORD *)&qword_1C00F5708 + 8LL;
  v8 = *(_QWORD **)(*(_QWORD *)&qword_1C00F5708 + 8LL);
  while ( v8 != (_QWORD *)v7 )
  {
    v9 = (__int64 *)v8[6];
    if ( v9 != v8 + 6 )
    {
      do
      {
        for ( i = (__int64 *)v9[15]; i != v9 + 15; i = (__int64 *)*i )
        {
          if ( a1 < 2 )
          {
            if ( ndisWildCardStringMatch(a2->AddCounter.InstanceMask, (const struct _UNICODE_STRING *)i + 2, v6) )
            {
              LODWORD(v6) = ndisCountSetBits64(a2->AddCounter.CounterMask);
              if ( a1 == 1 )
                LODWORD(v6) = -(int)v6;
              if ( !*((_DWORD *)v9 + 34) )
                v9[19] = 0LL;
              _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 34, v6);
              if ( !*((_DWORD *)i + 12) )
                *(__int64 *)((char *)i + 52) = 0LL;
              LOBYTE(v6) = _InterlockedExchangeAdd((volatile signed __int32 *)i + 12, v6);
            }
          }
          else if ( a1 == 2 )
          {
            v16 = *((_DWORD *)i + 6);
            Buffer = a2->EnumerateInstances.Buffer;
            v19.Data = 0LL;
            v19.Size = 8;
            v14 = PcwAddInstance(Buffer, (PCUNICODE_STRING)i + 2, v16, 1u, &v19);
            v3 = v14;
            if ( v14 < 0 )
              goto LABEL_10;
          }
          else if ( a1 == 3 )
          {
            InstanceId = a2->EnumerateInstances.InstanceId;
            if ( InstanceId == -1 || InstanceId == *((_DWORD *)i + 6) )
            {
              v12 = *((_DWORD *)i + 6);
              v13 = a2->EnumerateInstances.Buffer;
              Data.Data = (char *)i + 52;
              Data.Size = 8;
              v14 = PcwAddInstance(v13, (PCUNICODE_STRING)i + 2, v12, 1u, &Data);
LABEL_10:
              v15 = v14;
              goto LABEL_28;
            }
          }
        }
        v9 = (__int64 *)*v9;
      }
      while ( v9 != v8 + 6 );
      v6 = *(_QWORD *)&qword_1C00F5708;
    }
    v8 = (_QWORD *)*v8;
    v7 = v6 + 8;
  }
  v15 = v3;
LABEL_28:
  KLockHolder::~KLockHolder(&v21);
  return v15;
}
