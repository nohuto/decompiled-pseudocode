/*
 * XREFs of ?ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C007C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCountSetBits64@@YAK_K@Z @ 0x1C007B73C (-ndisCountSetBits64@@YAK_K@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C01182C8 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 */

__int64 __fastcall ndisPDPcwUtilizationCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  NTSTATUS v3; // esi
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 *v9; // rbx
  ULONG InstanceId; // eax
  ULONG v11; // r8d
  struct _PCW_BUFFER *v12; // rcx
  NTSTATUS v13; // eax
  unsigned int v14; // ebx
  ULONG v15; // r8d
  struct _PCW_BUFFER *Buffer; // rcx
  unsigned int v17; // eax
  struct _PCW_DATA v19; // [rsp+30h] [rbp-58h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-48h] BYREF
  KLockHolder v21; // [rsp+50h] [rbp-38h] BYREF

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
        if ( a1 < 2 )
        {
          if ( ndisWildCardStringMatch(a2->AddCounter.InstanceMask, (const struct _UNICODE_STRING *)(v9 + 5), v6) )
          {
            v17 = ndisCountSetBits64(a2->AddCounter.CounterMask);
            if ( a1 == 1 )
              v17 = -v17;
            _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 9, v17);
          }
        }
        else if ( a1 == 2 )
        {
          v15 = *((_DWORD *)v9 + 8);
          Buffer = a2->EnumerateInstances.Buffer;
          v19.Data = 0LL;
          v19.Size = 64;
          v13 = PcwAddInstance(Buffer, (PCUNICODE_STRING)(v9 + 5), v15, 1u, &v19);
          v3 = v13;
          if ( v13 < 0 )
            goto LABEL_9;
        }
        else if ( a1 == 3 )
        {
          InstanceId = a2->EnumerateInstances.InstanceId;
          if ( InstanceId == -1 || InstanceId == *((_DWORD *)v9 + 8) )
          {
            v11 = *((_DWORD *)v9 + 8);
            v12 = a2->EnumerateInstances.Buffer;
            Data.Data = v9 + 7;
            Data.Size = 64;
            v13 = PcwAddInstance(v12, (PCUNICODE_STRING)(v9 + 5), v11, 1u, &Data);
LABEL_9:
            v14 = v13;
            goto LABEL_21;
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
  v14 = v3;
LABEL_21:
  KLockHolder::~KLockHolder(&v21);
  return v14;
}
