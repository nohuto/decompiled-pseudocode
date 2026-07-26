/*
 * XREFs of ?NdisPDAddProviderToBMGroup@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@PEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C0124B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall NdisPDAddProviderToBMGroup(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        struct NDIS_PD_PROVIDER_HANDLE__ *a2)
{
  unsigned int v2; // ebx
  char v3; // si
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rdi
  char *v6; // r9
  char *v7; // r8
  __int64 v8; // rax
  char **v9; // rax
  char **v10; // rax
  char v12[4]; // [rsp+38h] [rbp-40h]
  KLockHolder v13; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v3 = (char)a2;
  for ( i = a2; *((_BYTE *)i + 88); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 9) )
    ;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x48u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      a2);
  v13.m_Lock = (KPushLockBase *)qword_1C00EC710;
  v13.m_State = Unlocked;
  v13.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v13);
  v6 = (char *)(i + 4);
  if ( *((_QWORD *)i + 2) )
  {
    v2 = -1073741768;
    goto LABEL_16;
  }
  v7 = (char *)a1 + 24;
  v8 = *((_QWORD *)a1 + 3);
  if ( (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v8 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 6) + 5480LL) + 72LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32)
                                                                                               + 5480LL)
                                                                                   + 72LL) )
    {
      v2 = -1073740007;
      goto LABEL_16;
    }
    v10 = (char **)*((_QWORD *)a1 + 4);
    if ( *v10 == v7 )
    {
      *(_QWORD *)v6 = v7;
      *((_QWORD *)i + 3) = v10;
      *v10 = v6;
      *((_QWORD *)a1 + 4) = v6;
      goto LABEL_16;
    }
LABEL_13:
    __fastfail(3u);
  }
  v9 = (char **)*((_QWORD *)a1 + 4);
  if ( *v9 != v7 )
    goto LABEL_13;
  *(_QWORD *)v6 = v7;
  *((_QWORD *)i + 3) = v9;
  *v9 = v6;
  *((_QWORD *)a1 + 4) = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_18;
  WPP_RECORDER_SF_qq(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    4u,
    0x1Du,
    0x49u,
    (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
    (char)a1,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 6) + 5480LL) + 72LL));
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = v2;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x4Au,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      v3,
      *(_DWORD *)v12);
  }
LABEL_18:
  KLockHolder::~KLockHolder(&v13);
  return v2;
}
