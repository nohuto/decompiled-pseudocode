/*
 * XREFs of ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0076900
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x1C0126B10 (-NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z.c)
 */

__int64 __fastcall ndisPDPcwCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  int v3; // r13d
  NTSTATUS v4; // r12d
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // r15
  _QWORD *v10; // rdi
  union _PCW_CALLBACK_INFORMATION *v11; // rsi
  struct NDIS_PD_COUNTER_HANDLE__ *i; // rbx
  ULONG InstanceId; // eax
  struct _PCW_DATA Data; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-19h]
  _QWORD *v16; // [rsp+50h] [rbp-11h]
  union _PCW_CALLBACK_INFORMATION *v17; // [rsp+58h] [rbp-9h]
  KLockHolder v18; // [rsp+60h] [rbp-1h] BYREF
  union _NDIS_PD_COUNTER_VALUE v19; // [rsp+78h] [rbp+17h] BYREF

  v17 = a2;
  v3 = (int)a3;
  v15 = a1;
  Data.Data = 0LL;
  v4 = 0;
  *(_QWORD *)&Data.Size = 0LL;
  if ( a1 <= 1 )
    return 0LL;
  v18.m_Lock = (KPushLockBase *)qword_1C00EC710;
  v18.m_State = Unlocked;
  v18.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v18);
  v6 = qword_1C00EC710;
  v7 = qword_1C00EC710 + 8;
  v8 = *(_QWORD **)(qword_1C00EC710 + 8);
  while ( 1 )
  {
    v16 = v8;
    if ( v8 == (_QWORD *)v7 )
      break;
    v9 = v8 + 2;
    v10 = (_QWORD *)v8[2];
    if ( v10 != v8 + 2 )
    {
      v11 = v17;
      do
      {
        for ( i = (struct NDIS_PD_COUNTER_HANDLE__ *)v10[12];
              i != (struct NDIS_PD_COUNTER_HANDLE__ *)(v10 + 12);
              i = *(struct NDIS_PD_COUNTER_HANDLE__ **)i )
        {
          if ( *((_DWORD *)i + 14) == v3 )
          {
            if ( v15 == 2 )
            {
              v4 = PcwAddInstance(
                     v11->EnumerateInstances.Buffer,
                     (PCUNICODE_STRING)i + 6,
                     *((_DWORD *)i + 17),
                     1u,
                     &Data);
              if ( v4 < 0 )
                break;
            }
            else
            {
              InstanceId = v11->EnumerateInstances.InstanceId;
              if ( InstanceId == -1 || InstanceId == *((_DWORD *)i + 17) )
              {
                memset(&v19, 0, sizeof(v19));
                NdisPDPIQueryCounter(i, &v19);
                Data.Data = &v19;
                if ( v3 == 1 )
                {
                  Data.Size = 24;
                }
                else if ( (unsigned int)(v3 - 2) < 2 )
                {
                  Data.Size = 16;
                }
                else
                {
                  Data.Size = 0;
                }
                v4 = PcwAddInstance(
                       v11->EnumerateInstances.Buffer,
                       (PCUNICODE_STRING)i + 6,
                       *((_DWORD *)i + 17),
                       1u,
                       &Data);
                break;
              }
            }
          }
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v9 );
      v6 = qword_1C00EC710;
      v8 = v16;
    }
    v8 = (_QWORD *)*v8;
    v7 = v6 + 8;
  }
  KLockHolder::~KLockHolder(&v18);
  return (unsigned int)v4;
}
