/*
 * XREFs of ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C007BDE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x1C01326B0 (-NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z.c)
 */

__int64 __fastcall ndisPDPcwCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  NTSTATUS v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // r12
  _QWORD *v9; // rdi
  union _PCW_CALLBACK_INFORMATION *v10; // rsi
  struct NDIS_PD_COUNTER_HANDLE__ *v11; // rbx
  int v12; // eax
  ULONG InstanceId; // eax
  int v15; // [rsp+38h] [rbp-29h]
  struct _PCW_DATA Data; // [rsp+40h] [rbp-21h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp-11h]
  union _PCW_CALLBACK_INFORMATION *v18; // [rsp+58h] [rbp-9h]
  KLockHolder v19; // [rsp+60h] [rbp-1h] BYREF
  union _NDIS_PD_COUNTER_VALUE v20; // [rsp+78h] [rbp+17h] BYREF

  v15 = (int)a3;
  v18 = a2;
  Data.Data = 0LL;
  v4 = 0;
  *(_QWORD *)&Data.Size = 0LL;
  if ( a1 >= 2 )
  {
    v19.m_State = Unlocked;
    v19.m_Region.m_Entered = 0;
    v19.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
    KLockHolder::AcquireExclusive(&v19);
    v5 = *(_QWORD *)&qword_1C00F5708;
    v6 = *(_QWORD *)&qword_1C00F5708 + 8LL;
    v7 = *(_QWORD **)(*(_QWORD *)&qword_1C00F5708 + 8LL);
    while ( 1 )
    {
      v17 = v7;
      if ( v7 == (_QWORD *)v6 )
      {
        KLockHolder::~KLockHolder(&v19);
        return (unsigned int)v4;
      }
      v8 = v7 + 2;
      v9 = (_QWORD *)v7[2];
      if ( v9 == v7 + 2 )
        goto LABEL_24;
      v10 = v18;
      do
      {
        v11 = (struct NDIS_PD_COUNTER_HANDLE__ *)v9[12];
        if ( v11 == (struct NDIS_PD_COUNTER_HANDLE__ *)(v9 + 12) )
          goto LABEL_22;
        v12 = v15;
        while ( *((_DWORD *)v11 + 14) != v12 )
        {
LABEL_14:
          v11 = *(struct NDIS_PD_COUNTER_HANDLE__ **)v11;
          if ( v11 == (struct NDIS_PD_COUNTER_HANDLE__ *)(v9 + 12) )
            goto LABEL_22;
        }
        if ( a1 == 2 )
        {
          v4 = PcwAddInstance(
                 v10->EnumerateInstances.Buffer,
                 (PCUNICODE_STRING)v11 + 6,
                 *((_DWORD *)v11 + 17),
                 1u,
                 &Data);
          if ( v4 < 0 )
            goto LABEL_22;
LABEL_13:
          v12 = v15;
          goto LABEL_14;
        }
        InstanceId = v10->EnumerateInstances.InstanceId;
        if ( InstanceId != -1 && InstanceId != *((_DWORD *)v11 + 17) )
          goto LABEL_13;
        memset(&v20, 0, sizeof(v20));
        NdisPDPIQueryCounter(v11, &v20);
        Data.Data = &v20;
        if ( v15 == 1 )
        {
          Data.Size = 24;
        }
        else if ( (unsigned int)(v15 - 2) < 2 )
        {
          Data.Size = 16;
        }
        else
        {
          Data.Size = 0;
        }
        v4 = PcwAddInstance(v10->EnumerateInstances.Buffer, (PCUNICODE_STRING)v11 + 6, *((_DWORD *)v11 + 17), 1u, &Data);
LABEL_22:
        v9 = (_QWORD *)*v9;
      }
      while ( v9 != v8 );
      v5 = *(_QWORD *)&qword_1C00F5708;
      v7 = v17;
LABEL_24:
      v7 = (_QWORD *)*v7;
      v6 = v5 + 8;
    }
  }
  return 0LL;
}
