/*
 * XREFs of NdisPDStartup @ 0x1C007CBD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0017254 (WPP_RECORDER_SF_qqd_ea_1C0017254.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C01345F4 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x1C0134B90 (-ndisPDReferenceClientDriver@@YAEPEAX@Z.c)
 */

__int64 __fastcall NdisPDStartup(_BYTE *a1, __int64 a2, __int64 a3, __int64 **a4, _QWORD *a5)
{
  char v6; // r15
  unsigned int v10; // edi
  __int64 *PoolWithTag; // rax
  __int64 *v12; // rbx
  _QWORD *v13; // rax
  __int64 *i; // rax
  ULONG ClearBitsAndSet; // eax
  __int64 v16; // rax
  __int64 **v17; // rdx
  __int64 v19; // [rsp+38h] [rbp-40h]
  KLockHolder v20; // [rsp+40h] [rbp-38h] BYREF

  v6 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x13u,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      (char)a1,
      a2,
      a3);
  *a4 = 0LL;
  if ( (unsigned __int8)(*a1 - 3) <= 1u )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x6341444Eu);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[10] = 0LL;
      PoolWithTag[11] = 0LL;
      PoolWithTag[12] = 0LL;
      *((_WORD *)PoolWithTag + 52) = 0;
      PoolWithTag[1] = 0LL;
      *PoolWithTag = 0LL;
      v13 = PoolWithTag + 2;
      v13[1] = v13;
      *v13 = v13;
      v12[5] = (__int64)(v12 + 4);
      v12[4] = (__int64)(v12 + 4);
      v12[7] = (__int64)(v12 + 6);
      v12[6] = (__int64)(v12 + 6);
      v12[9] = (__int64)(v12 + 8);
      v12[8] = (__int64)(v12 + 8);
      if ( ndisPDReferenceClientDriver(a1) )
      {
        v12[10] = (__int64)a1;
        v6 = 1;
        v12[11] = a2;
        v12[12] = a3;
        *a4 = v12;
        *a5 = &unk_1C00D7590;
        v20.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
        v20.m_State = Unlocked;
        v20.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v20);
        for ( i = *(__int64 **)(*(_QWORD *)&qword_1C00F5708 + 8LL);
              i != (__int64 *)(*(_QWORD *)&qword_1C00F5708 + 8LL);
              i = (__int64 *)*i )
        {
          if ( (_BYTE *)i[10] == a1 )
          {
            v10 = -1073740008;
            goto LABEL_14;
          }
        }
        ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(*(_QWORD *)&qword_1C00F5708 + 24LL), 1u, 0);
        if ( ClearBitsAndSet == -1 )
        {
          v10 = -1073741618;
LABEL_14:
          KLockHolder::~KLockHolder(&v20);
          goto LABEL_15;
        }
        *((_WORD *)v12 + 52) = ClearBitsAndSet;
        v16 = *(_QWORD *)&qword_1C00F5708 + 8LL;
        v17 = *(__int64 ***)(*(_QWORD *)&qword_1C00F5708 + 16LL);
        if ( *v17 != (__int64 *)(*(_QWORD *)&qword_1C00F5708 + 8LL) )
          __fastfail(3u);
        *v12 = v16;
        v12[1] = (__int64)v17;
        *v17 = v12;
        *(_QWORD *)(v16 + 8) = v12;
        KLockHolder::~KLockHolder(&v20);
        v10 = 0;
      }
      else
      {
        v10 = -1073741436;
LABEL_15:
        ExFreePoolWithTag(v12, 0x6341444Eu);
        if ( v6 )
          ndisPDDereferenceClientDriver(a1);
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1073741788;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v10;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x14u,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      (char)a1,
      (char)*a4,
      v19);
  }
  return v10;
}
